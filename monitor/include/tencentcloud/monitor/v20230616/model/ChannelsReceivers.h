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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_CHANNELSRECEIVERS_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_CHANNELSRECEIVERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 接受人详情信息
                */
                class ChannelsReceivers : public AbstractModel
                {
                public:
                    ChannelsReceivers();
                    ~ChannelsReceivers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelName 通知渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置通知渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelName 通知渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取接收者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Receivers 接收者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置接收者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receivers 接收者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceivers(const std::vector<std::string>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取发送结果,0-无效,1-成功,2-失败,3-无需发送
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendStatus 发送结果,0-无效,1-成功,2-失败,3-无需发送
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSendStatus() const;

                    /**
                     * 设置发送结果,0-无效,1-成功,2-失败,3-无需发送
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sendStatus 发送结果,0-无效,1-成功,2-失败,3-无需发送
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSendStatus(const std::string& _sendStatus);

                    /**
                     * 判断参数 SendStatus 是否已赋值
                     * @return SendStatus 是否已赋值
                     * 
                     */
                    bool SendStatusHasBeenSet() const;

                private:

                    /**
                     * 通知渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 接收者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 发送结果,0-无效,1-成功,2-失败,3-无需发送
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sendStatus;
                    bool m_sendStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_CHANNELSRECEIVERS_H_
