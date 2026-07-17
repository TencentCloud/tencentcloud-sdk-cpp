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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CALLDEVICERRPCSYNCREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CALLDEVICERRPCSYNCREQUEST_H_

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
                * CallDeviceRRPCSync请求参数结构体
                */
                class CallDeviceRRPCSyncRequest : public AbstractModel
                {
                public:
                    CallDeviceRRPCSyncRequest();
                    ~CallDeviceRRPCSyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品 ID</p>
                     * @return ProductId <p>产品 ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品 ID</p>
                     * @param _productId <p>产品 ID</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>设备名</p>
                     * @return DeviceName <p>设备名</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名</p>
                     * @param _deviceName <p>设备名</p>
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取<p>业务原始 payload，透传给设备</p>
                     * @return Payload <p>业务原始 payload，透传给设备</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>业务原始 payload，透传给设备</p>
                     * @param _payload <p>业务原始 payload，透传给设备</p>
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取<p>下行传输层编码标识；base64 时下发到 broker 的 payload 会做一次 base64 编码</p>
                     * @return Encoding <p>下行传输层编码标识；base64 时下发到 broker 的 payload 会做一次 base64 编码</p>
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 设置<p>下行传输层编码标识；base64 时下发到 broker 的 payload 会做一次 base64 编码</p>
                     * @param _encoding <p>下行传输层编码标识；base64 时下发到 broker 的 payload 会做一次 base64 编码</p>
                     * 
                     */
                    void SetEncoding(const std::string& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取<p>自定义下行 topic；为空则用 <code>$iotrrpc/down/{ProductId}/{DeviceName}/{mid}</code></p>
                     * @return Topic <p>自定义下行 topic；为空则用 <code>$iotrrpc/down/{ProductId}/{DeviceName}/{mid}</code></p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>自定义下行 topic；为空则用 <code>$iotrrpc/down/{ProductId}/{DeviceName}/{mid}</code></p>
                     * @param _topic <p>自定义下行 topic；为空则用 <code>$iotrrpc/down/{ProductId}/{DeviceName}/{mid}</code></p>
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>自定义上行 topic 模板（支持通配符）；可留空，留空时仅依赖 clientToken 关联 ack</p>
                     * @return ReplyTopic <p>自定义上行 topic 模板（支持通配符）；可留空，留空时仅依赖 clientToken 关联 ack</p>
                     * 
                     */
                    std::string GetReplyTopic() const;

                    /**
                     * 设置<p>自定义上行 topic 模板（支持通配符）；可留空，留空时仅依赖 clientToken 关联 ack</p>
                     * @param _replyTopic <p>自定义上行 topic 模板（支持通配符）；可留空，留空时仅依赖 clientToken 关联 ack</p>
                     * 
                     */
                    void SetReplyTopic(const std::string& _replyTopic);

                    /**
                     * 判断参数 ReplyTopic 是否已赋值
                     * @return ReplyTopic 是否已赋值
                     * 
                     */
                    bool ReplyTopicHasBeenSet() const;

                private:

                    /**
                     * <p>产品 ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>业务原始 payload，透传给设备</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * <p>下行传输层编码标识；base64 时下发到 broker 的 payload 会做一次 base64 编码</p>
                     */
                    std::string m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * <p>自定义下行 topic；为空则用 <code>$iotrrpc/down/{ProductId}/{DeviceName}/{mid}</code></p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>自定义上行 topic 模板（支持通配符）；可留空，留空时仅依赖 clientToken 关联 ack</p>
                     */
                    std::string m_replyTopic;
                    bool m_replyTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CALLDEVICERRPCSYNCREQUEST_H_
