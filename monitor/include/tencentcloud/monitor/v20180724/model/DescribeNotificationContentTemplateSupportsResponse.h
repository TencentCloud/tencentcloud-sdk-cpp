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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBENOTIFICATIONCONTENTTEMPLATESUPPORTSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBENOTIFICATIONCONTENTTEMPLATESUPPORTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/NotificationContentTemplateSupport.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeNotificationContentTemplateSupports返回参数结构体
                */
                class DescribeNotificationContentTemplateSupportsResponse : public AbstractModel
                {
                public:
                    DescribeNotificationContentTemplateSupportsResponse();
                    ~DescribeNotificationContentTemplateSupportsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取配置详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Support 配置详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NotificationContentTemplateSupport GetSupport() const;

                    /**
                     * 判断参数 Support 是否已赋值
                     * @return Support 是否已赋值
                     * 
                     */
                    bool SupportHasBeenSet() const;

                private:

                    /**
                     * 配置详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NotificationContentTemplateSupport m_support;
                    bool m_supportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBENOTIFICATIONCONTENTTEMPLATESUPPORTSRESPONSE_H_
