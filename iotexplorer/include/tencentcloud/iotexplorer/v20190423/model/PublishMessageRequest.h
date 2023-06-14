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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PUBLISHMESSAGEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PUBLISHMESSAGEREQUEST_H_

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
                * PublishMessage请求参数结构体
                */
                class PublishMessageRequest : public AbstractModel
                {
                public:
                    PublishMessageRequest();
                    ~PublishMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
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
                     * 获取消息发往的主题
                     * @return Topic 消息发往的主题
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置消息发往的主题
                     * @param _topic 消息发往的主题
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
                     * 获取云端下发到设备的控制报文
                     * @return Payload 云端下发到设备的控制报文
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置云端下发到设备的控制报文
                     * @param _payload 云端下发到设备的控制报文
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
                     * 获取消息服务质量等级，取值为0或1
                     * @return Qos 消息服务质量等级，取值为0或1
                     * 
                     */
                    uint64_t GetQos() const;

                    /**
                     * 设置消息服务质量等级，取值为0或1
                     * @param _qos 消息服务质量等级，取值为0或1
                     * 
                     */
                    void SetQos(const uint64_t& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取Payload的内容编码格式，取值为base64或空。base64表示云端将接收到的base64编码后的报文再转换成二进制报文下发至设备，为空表示不作转换，透传下发至设备
                     * @return PayloadEncoding Payload的内容编码格式，取值为base64或空。base64表示云端将接收到的base64编码后的报文再转换成二进制报文下发至设备，为空表示不作转换，透传下发至设备
                     * 
                     */
                    std::string GetPayloadEncoding() const;

                    /**
                     * 设置Payload的内容编码格式，取值为base64或空。base64表示云端将接收到的base64编码后的报文再转换成二进制报文下发至设备，为空表示不作转换，透传下发至设备
                     * @param _payloadEncoding Payload的内容编码格式，取值为base64或空。base64表示云端将接收到的base64编码后的报文再转换成二进制报文下发至设备，为空表示不作转换，透传下发至设备
                     * 
                     */
                    void SetPayloadEncoding(const std::string& _payloadEncoding);

                    /**
                     * 判断参数 PayloadEncoding 是否已赋值
                     * @return PayloadEncoding 是否已赋值
                     * 
                     */
                    bool PayloadEncodingHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 消息发往的主题
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 云端下发到设备的控制报文
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * 消息服务质量等级，取值为0或1
                     */
                    uint64_t m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * Payload的内容编码格式，取值为base64或空。base64表示云端将接收到的base64编码后的报文再转换成二进制报文下发至设备，为空表示不作转换，透传下发至设备
                     */
                    std::string m_payloadEncoding;
                    bool m_payloadEncodingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PUBLISHMESSAGEREQUEST_H_
