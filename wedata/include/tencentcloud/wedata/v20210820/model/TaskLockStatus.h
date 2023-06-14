/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOCKSTATUS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOCKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务锁的状态
                */
                class TaskLockStatus : public AbstractModel
                {
                public:
                    TaskLockStatus();
                    ~TaskLockStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取持锁者
                     * @return Locker 持锁者
                     * 
                     */
                    std::string GetLocker() const;

                    /**
                     * 设置持锁者
                     * @param _locker 持锁者
                     * 
                     */
                    void SetLocker(const std::string& _locker);

                    /**
                     * 判断参数 Locker 是否已赋值
                     * @return Locker 是否已赋值
                     * 
                     */
                    bool LockerHasBeenSet() const;

                    /**
                     * 获取当前操作用户是否为持锁者，1表示为持锁者，0表示为不为持锁者
                     * @return IsLocker 当前操作用户是否为持锁者，1表示为持锁者，0表示为不为持锁者
                     * 
                     */
                    int64_t GetIsLocker() const;

                    /**
                     * 设置当前操作用户是否为持锁者，1表示为持锁者，0表示为不为持锁者
                     * @param _isLocker 当前操作用户是否为持锁者，1表示为持锁者，0表示为不为持锁者
                     * 
                     */
                    void SetIsLocker(const int64_t& _isLocker);

                    /**
                     * 判断参数 IsLocker 是否已赋值
                     * @return IsLocker 是否已赋值
                     * 
                     */
                    bool IsLockerHasBeenSet() const;

                    /**
                     * 获取是否可以抢锁，1表示可以抢锁，0表示不可以抢锁
                     * @return IsRob 是否可以抢锁，1表示可以抢锁，0表示不可以抢锁
                     * 
                     */
                    int64_t GetIsRob() const;

                    /**
                     * 设置是否可以抢锁，1表示可以抢锁，0表示不可以抢锁
                     * @param _isRob 是否可以抢锁，1表示可以抢锁，0表示不可以抢锁
                     * 
                     */
                    void SetIsRob(const int64_t& _isRob);

                    /**
                     * 判断参数 IsRob 是否已赋值
                     * @return IsRob 是否已赋值
                     * 
                     */
                    bool IsRobHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 持锁者
                     */
                    std::string m_locker;
                    bool m_lockerHasBeenSet;

                    /**
                     * 当前操作用户是否为持锁者，1表示为持锁者，0表示为不为持锁者
                     */
                    int64_t m_isLocker;
                    bool m_isLockerHasBeenSet;

                    /**
                     * 是否可以抢锁，1表示可以抢锁，0表示不可以抢锁
                     */
                    int64_t m_isRob;
                    bool m_isRobHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOCKSTATUS_H_
