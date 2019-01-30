//
// Created by kiwi on 19-1-19.
//

#ifndef KIWI_EVENTLOOPPOOL_H
#define KIWI_EVENTLOOPPOOL_H

#include <thread>
#include <vector>
#include <mutex>
#include <condition_variable>
#include "../Base/Types.h"

namespace Kiwi
{
	class EventLoop;

	class EventLoopPool
	{
	public:

		EventLoopPool(Type::EventLoopPtr base_loop, size_t size);

		Type::EventLoopPtr get_loop();

		void add_loop(size_t size);

		~EventLoopPool();

		EventLoopPool(const EventLoopPool &) = delete;

		EventLoopPool &operator=(const EventLoopPool &) = delete;

	private:

		std::mutex _mutex_;
		std::condition_variable _cv_;
		Type::EventLoopPtr _base_loop_;
		size_t _loop_num_;
		size_t _next_;
		std::vector<Type::EventLoopPtr> _loops_;
		std::vector<std::thread> _threads_;
	};
}

#endif //KIWI_EVENTLOOPPOOL_H
