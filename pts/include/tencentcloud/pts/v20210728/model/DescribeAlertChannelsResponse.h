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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTCHANNELSRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTCHANNELSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/AlertChannelRecord.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeAlertChannels返回参数结构体
                */
                class DescribeAlertChannelsResponse : public AbstractModel
                {
                public:
                    DescribeAlertChannelsResponse();
                    ~DescribeAlertChannelsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警通知接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertChannelSet 告警通知接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlertChannelRecord> GetAlertChannelSet() const;

                    /**
                     * 判断参数 AlertChannelSet 是否已赋值
                     * @return AlertChannelSet 是否已赋值
                     * 
                     */
                    bool AlertChannelSetHasBeenSet() const;

                    /**
                     * 获取告警通知接收组数目
                     * @return Total 告警通知接收组数目
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 告警通知接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlertChannelRecord> m_alertChannelSet;
                    bool m_alertChannelSetHasBeenSet;

                    /**
                     * 告警通知接收组数目
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTCHANNELSRESPONSE_H_
