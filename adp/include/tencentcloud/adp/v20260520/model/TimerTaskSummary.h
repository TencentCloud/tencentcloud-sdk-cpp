/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TIMERTASKSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TIMERTASKSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/TimerStatus.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * TimerTaskSummary
                */
                class TimerTaskSummary : public AbstractModel
                {
                public:
                    TimerTaskSummary();
                    ~TimerTaskSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取OwnerUserId
                     * @return OwnerUserId OwnerUserId
                     * 
                     */
                    std::string GetOwnerUserId() const;

                    /**
                     * 设置OwnerUserId
                     * @param _ownerUserId OwnerUserId
                     * 
                     */
                    void SetOwnerUserId(const std::string& _ownerUserId);

                    /**
                     * 判断参数 OwnerUserId 是否已赋值
                     * @return OwnerUserId 是否已赋值
                     * 
                     */
                    bool OwnerUserIdHasBeenSet() const;

                    /**
                     * 获取定时配置概要
                     * @return PolicySummary 定时配置概要
                     * 
                     */
                    std::string GetPolicySummary() const;

                    /**
                     * 设置定时配置概要
                     * @param _policySummary 定时配置概要
                     * 
                     */
                    void SetPolicySummary(const std::string& _policySummary);

                    /**
                     * 判断参数 PolicySummary 是否已赋值
                     * @return PolicySummary 是否已赋值
                     * 
                     */
                    bool PolicySummaryHasBeenSet() const;

                    /**
                     * 获取空间ID
                     * @return SpaceId 空间ID
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置空间ID
                     * @param _spaceId 空间ID
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取任务相关状态
                     * @return Status 任务相关状态
                     * 
                     */
                    TimerStatus GetStatus() const;

                    /**
                     * 设置任务相关状态
                     * @param _status 任务相关状态
                     * 
                     */
                    void SetStatus(const TimerStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TimerId 任务ID
                     * 
                     */
                    std::string GetTimerId() const;

                    /**
                     * 设置任务ID
                     * @param _timerId 任务ID
                     * 
                     */
                    void SetTimerId(const std::string& _timerId);

                    /**
                     * 判断参数 TimerId 是否已赋值
                     * @return TimerId 是否已赋值
                     * 
                     */
                    bool TimerIdHasBeenSet() const;

                private:

                    /**
                     * OwnerUserId
                     */
                    std::string m_ownerUserId;
                    bool m_ownerUserIdHasBeenSet;

                    /**
                     * 定时配置概要
                     */
                    std::string m_policySummary;
                    bool m_policySummaryHasBeenSet;

                    /**
                     * 空间ID
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 任务相关状态
                     */
                    TimerStatus m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_timerId;
                    bool m_timerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TIMERTASKSUMMARY_H_
