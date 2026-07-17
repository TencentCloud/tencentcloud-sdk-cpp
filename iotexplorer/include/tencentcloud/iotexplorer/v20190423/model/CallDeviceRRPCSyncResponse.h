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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CALLDEVICERRPCSYNCRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CALLDEVICERRPCSYNCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CallDeviceRRPCSync返回参数结构体
                */
                class CallDeviceRRPCSyncResponse : public AbstractModel
                {
                public:
                    CallDeviceRRPCSyncResponse();
                    ~CallDeviceRRPCSyncResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>平台为本次调用分配的关联 token（v2{instanceId}::{reqId} 形式）</p>
                     * @return ClientToken <p>平台为本次调用分配的关联 token（v2{instanceId}::{reqId} 形式）</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>调用状态</p>
                     * @return Status <p>调用状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>平台分配的 messageID</p>
                     * @return MessageId <p>平台分配的 messageID</p>
                     * 
                     */
                    uint64_t GetMessageId() const;

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取<p>设备回包原始字节的 base64 编码（仅 Status=Replied 有值）</p>
                     * @return PayloadBase64 <p>设备回包原始字节的 base64 编码（仅 Status=Replied 有值）</p>
                     * 
                     */
                    std::string GetPayloadBase64() const;

                    /**
                     * 判断参数 PayloadBase64 是否已赋值
                     * @return PayloadBase64 是否已赋值
                     * 
                     */
                    bool PayloadBase64HasBeenSet() const;

                    /**
                     * 获取<p>实际生效的 reply topic 模板（默认模式由平台生成，自定义模式为入参原值）</p>
                     * @return ReplyTopic <p>实际生效的 reply topic 模板（默认模式由平台生成，自定义模式为入参原值）</p>
                     * 
                     */
                    std::string GetReplyTopic() const;

                    /**
                     * 判断参数 ReplyTopic 是否已赋值
                     * @return ReplyTopic 是否已赋值
                     * 
                     */
                    bool ReplyTopicHasBeenSet() const;

                private:

                    /**
                     * <p>平台为本次调用分配的关联 token（v2{instanceId}::{reqId} 形式）</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>调用状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>平台分配的 messageID</p>
                     */
                    uint64_t m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * <p>设备回包原始字节的 base64 编码（仅 Status=Replied 有值）</p>
                     */
                    std::string m_payloadBase64;
                    bool m_payloadBase64HasBeenSet;

                    /**
                     * <p>实际生效的 reply topic 模板（默认模式由平台生成，自定义模式为入参原值）</p>
                     */
                    std::string m_replyTopic;
                    bool m_replyTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CALLDEVICERRPCSYNCRESPONSE_H_
