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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DELETESCHEDULEDACTIONREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DELETESCHEDULEDACTIONREQUEST_H_

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
                * DeleteScheduledAction请求参数结构体
                */
                class DeleteScheduledActionRequest : public AbstractModel
                {
                public:
                    DeleteScheduledActionRequest();
                    ~DeleteScheduledActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>定时伸缩任务 ID 列表，最多 20 个。</p>
                     * @return ScheduledActionIds <p>定时伸缩任务 ID 列表，最多 20 个。</p>
                     * 
                     */
                    std::vector<std::string> GetScheduledActionIds() const;

                    /**
                     * 设置<p>定时伸缩任务 ID 列表，最多 20 个。</p>
                     * @param _scheduledActionIds <p>定时伸缩任务 ID 列表，最多 20 个。</p>
                     * 
                     */
                    void SetScheduledActionIds(const std::vector<std::string>& _scheduledActionIds);

                    /**
                     * 判断参数 ScheduledActionIds 是否已赋值
                     * @return ScheduledActionIds 是否已赋值
                     * 
                     */
                    bool ScheduledActionIdsHasBeenSet() const;

                private:

                    /**
                     * <p>定时伸缩任务 ID 列表，最多 20 个。</p>
                     */
                    std::vector<std::string> m_scheduledActionIds;
                    bool m_scheduledActionIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DELETESCHEDULEDACTIONREQUEST_H_
