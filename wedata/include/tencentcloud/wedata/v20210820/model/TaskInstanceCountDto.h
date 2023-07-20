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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINSTANCECOUNTDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINSTANCECOUNTDTO_H_

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
                * 任务实例状态统计
                */
                class TaskInstanceCountDto : public AbstractModel
                {
                public:
                    TaskInstanceCountDto();
                    ~TaskInstanceCountDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取成功的实例数
                     * @return Success 成功的实例数
                     * 
                     */
                    uint64_t GetSuccess() const;

                    /**
                     * 设置成功的实例数
                     * @param _success 成功的实例数
                     * 
                     */
                    void SetSuccess(const uint64_t& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取执行中实例数
                     * @return Running 执行中实例数
                     * 
                     */
                    uint64_t GetRunning() const;

                    /**
                     * 设置执行中实例数
                     * @param _running 执行中实例数
                     * 
                     */
                    void SetRunning(const uint64_t& _running);

                    /**
                     * 判断参数 Running 是否已赋值
                     * @return Running 是否已赋值
                     * 
                     */
                    bool RunningHasBeenSet() const;

                    /**
                     * 获取等待中的实例数
                     * @return Waiting 等待中的实例数
                     * 
                     */
                    uint64_t GetWaiting() const;

                    /**
                     * 设置等待中的实例数
                     * @param _waiting 等待中的实例数
                     * 
                     */
                    void SetWaiting(const uint64_t& _waiting);

                    /**
                     * 判断参数 Waiting 是否已赋值
                     * @return Waiting 是否已赋值
                     * 
                     */
                    bool WaitingHasBeenSet() const;

                    /**
                     * 获取等待上游实例数
                     * @return Depend 等待上游实例数
                     * 
                     */
                    uint64_t GetDepend() const;

                    /**
                     * 设置等待上游实例数
                     * @param _depend 等待上游实例数
                     * 
                     */
                    void SetDepend(const uint64_t& _depend);

                    /**
                     * 判断参数 Depend 是否已赋值
                     * @return Depend 是否已赋值
                     * 
                     */
                    bool DependHasBeenSet() const;

                    /**
                     * 获取失败实例数
                     * @return Failed 失败实例数
                     * 
                     */
                    uint64_t GetFailed() const;

                    /**
                     * 设置失败实例数
                     * @param _failed 失败实例数
                     * 
                     */
                    void SetFailed(const uint64_t& _failed);

                    /**
                     * 判断参数 Failed 是否已赋值
                     * @return Failed 是否已赋值
                     * 
                     */
                    bool FailedHasBeenSet() const;

                    /**
                     * 获取永久终止实例数
                     * @return Stopped 永久终止实例数
                     * 
                     */
                    uint64_t GetStopped() const;

                    /**
                     * 设置永久终止实例数
                     * @param _stopped 永久终止实例数
                     * 
                     */
                    void SetStopped(const uint64_t& _stopped);

                    /**
                     * 判断参数 Stopped 是否已赋值
                     * @return Stopped 是否已赋值
                     * 
                     */
                    bool StoppedHasBeenSet() const;

                private:

                    /**
                     * 成功的实例数
                     */
                    uint64_t m_success;
                    bool m_successHasBeenSet;

                    /**
                     * 执行中实例数
                     */
                    uint64_t m_running;
                    bool m_runningHasBeenSet;

                    /**
                     * 等待中的实例数
                     */
                    uint64_t m_waiting;
                    bool m_waitingHasBeenSet;

                    /**
                     * 等待上游实例数
                     */
                    uint64_t m_depend;
                    bool m_dependHasBeenSet;

                    /**
                     * 失败实例数
                     */
                    uint64_t m_failed;
                    bool m_failedHasBeenSet;

                    /**
                     * 永久终止实例数
                     */
                    uint64_t m_stopped;
                    bool m_stoppedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINSTANCECOUNTDTO_H_
