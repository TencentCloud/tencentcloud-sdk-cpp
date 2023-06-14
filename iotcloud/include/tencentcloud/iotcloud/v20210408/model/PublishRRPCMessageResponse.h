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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PUBLISHRRPCMESSAGERESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PUBLISHRRPCMESSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * PublishRRPCMessage返回参数结构体
                */
                class PublishRRPCMessageResponse : public AbstractModel
                {
                public:
                    PublishRRPCMessageResponse();
                    ~PublishRRPCMessageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取RRPC消息ID
                     * @return MessageId RRPC消息ID
                     * 
                     */
                    int64_t GetMessageId() const;

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取设备回复的消息内容，采用base64编码
                     * @return PayloadBase64 设备回复的消息内容，采用base64编码
                     * 
                     */
                    std::string GetPayloadBase64() const;

                    /**
                     * 判断参数 PayloadBase64 是否已赋值
                     * @return PayloadBase64 是否已赋值
                     * 
                     */
                    bool PayloadBase64HasBeenSet() const;

                private:

                    /**
                     * RRPC消息ID
                     */
                    int64_t m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * 设备回复的消息内容，采用base64编码
                     */
                    std::string m_payloadBase64;
                    bool m_payloadBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PUBLISHRRPCMESSAGERESPONSE_H_
