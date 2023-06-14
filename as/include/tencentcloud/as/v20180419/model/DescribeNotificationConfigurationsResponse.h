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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/AutoScalingNotification.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeNotificationConfigurations返回参数结构体
                */
                class DescribeNotificationConfigurationsResponse : public AbstractModel
                {
                public:
                    DescribeNotificationConfigurationsResponse();
                    ~DescribeNotificationConfigurationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的通知数量。
                     * @return TotalCount 符合条件的通知数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取弹性伸缩事件通知详细信息列表。
                     * @return AutoScalingNotificationSet 弹性伸缩事件通知详细信息列表。
                     * 
                     */
                    std::vector<AutoScalingNotification> GetAutoScalingNotificationSet() const;

                    /**
                     * 判断参数 AutoScalingNotificationSet 是否已赋值
                     * @return AutoScalingNotificationSet 是否已赋值
                     * 
                     */
                    bool AutoScalingNotificationSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的通知数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 弹性伸缩事件通知详细信息列表。
                     */
                    std::vector<AutoScalingNotification> m_autoScalingNotificationSet;
                    bool m_autoScalingNotificationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBENOTIFICATIONCONFIGURATIONSRESPONSE_H_
