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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DISABLEAISCHEDULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DISABLEAISCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DisableAISchedule请求参数结构体
                */
                class DisableAIScheduleRequest : public AbstractModel
                {
                public:
                    DisableAIScheduleRequest();
                    ~DisableAIScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>AI 定时任务 ID。可通过 DescribeAIScheduleList 接口获取。</p>
                     * @return ScheduleId <p>AI 定时任务 ID。可通过 DescribeAIScheduleList 接口获取。</p>
                     * 
                     */
                    std::string GetScheduleId() const;

                    /**
                     * 设置<p>AI 定时任务 ID。可通过 DescribeAIScheduleList 接口获取。</p>
                     * @param _scheduleId <p>AI 定时任务 ID。可通过 DescribeAIScheduleList 接口获取。</p>
                     * 
                     */
                    void SetScheduleId(const std::string& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                private:

                    /**
                     * <p>AI 定时任务 ID。可通过 DescribeAIScheduleList 接口获取。</p>
                     */
                    std::string m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DISABLEAISCHEDULEREQUEST_H_
