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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYSCHEDULEDACTIONREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYSCHEDULEDACTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * ModifyScheduledAction请求参数结构体
                */
                class ModifyScheduledActionRequest : public AbstractModel
                {
                public:
                    ModifyScheduledActionRequest();
                    ~ModifyScheduledActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>定时伸缩任务 ID。</p>
                     * @return ScheduledActionId <p>定时伸缩任务 ID。</p>
                     * 
                     */
                    std::string GetScheduledActionId() const;

                    /**
                     * 设置<p>定时伸缩任务 ID。</p>
                     * @param _scheduledActionId <p>定时伸缩任务 ID。</p>
                     * 
                     */
                    void SetScheduledActionId(const std::string& _scheduledActionId);

                    /**
                     * 判断参数 ScheduledActionId 是否已赋值
                     * @return ScheduledActionId 是否已赋值
                     * 
                     */
                    bool ScheduledActionIdHasBeenSet() const;

                    /**
                     * 获取<p>定时伸缩任务名称。</p>
                     * @return ScheduledActionName <p>定时伸缩任务名称。</p>
                     * 
                     */
                    std::string GetScheduledActionName() const;

                    /**
                     * 设置<p>定时伸缩任务名称。</p>
                     * @param _scheduledActionName <p>定时伸缩任务名称。</p>
                     * 
                     */
                    void SetScheduledActionName(const std::string& _scheduledActionName);

                    /**
                     * 判断参数 ScheduledActionName 是否已赋值
                     * @return ScheduledActionName 是否已赋值
                     * 
                     */
                    bool ScheduledActionNameHasBeenSet() const;

                    /**
                     * 获取<p>定时触发后队列期望节点数。</p>
                     * @return DesiredCapacity <p>定时触发后队列期望节点数。</p>
                     * 
                     */
                    int64_t GetDesiredCapacity() const;

                    /**
                     * 设置<p>定时触发后队列期望节点数。</p>
                     * @param _desiredCapacity <p>定时触发后队列期望节点数。</p>
                     * 
                     */
                    void SetDesiredCapacity(const int64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     * 
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取<p>任务状态。</p>
                     * @return Status <p>任务状态。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态。</p>
                     * @param _status <p>任务状态。</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>定时伸缩任务 ID。</p>
                     */
                    std::string m_scheduledActionId;
                    bool m_scheduledActionIdHasBeenSet;

                    /**
                     * <p>定时伸缩任务名称。</p>
                     */
                    std::string m_scheduledActionName;
                    bool m_scheduledActionNameHasBeenSet;

                    /**
                     * <p>定时触发后队列期望节点数。</p>
                     */
                    int64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * <p>任务状态。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_MODIFYSCHEDULEDACTIONREQUEST_H_
