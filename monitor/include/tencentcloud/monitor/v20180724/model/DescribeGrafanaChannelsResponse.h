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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANACHANNELSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANACHANNELSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/GrafanaChannel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeGrafanaChannels返回参数结构体
                */
                class DescribeGrafanaChannelsResponse : public AbstractModel
                {
                public:
                    DescribeGrafanaChannelsResponse();
                    ~DescribeGrafanaChannelsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警通道数组
                     * @return NotificationChannelSet 告警通道数组
                     * 
                     */
                    std::vector<GrafanaChannel> GetNotificationChannelSet() const;

                    /**
                     * 判断参数 NotificationChannelSet 是否已赋值
                     * @return NotificationChannelSet 是否已赋值
                     * 
                     */
                    bool NotificationChannelSetHasBeenSet() const;

                private:

                    /**
                     * 告警通道数组
                     */
                    std::vector<GrafanaChannel> m_notificationChannelSet;
                    bool m_notificationChannelSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANACHANNELSRESPONSE_H_
