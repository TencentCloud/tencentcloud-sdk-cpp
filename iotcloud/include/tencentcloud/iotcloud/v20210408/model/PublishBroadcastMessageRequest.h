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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PUBLISHBROADCASTMESSAGEREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PUBLISHBROADCASTMESSAGEREQUEST_H_

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
                * PublishBroadcastMessage请求参数结构体
                */
                class PublishBroadcastMessageRequest : public AbstractModel
                {
                public:
                    PublishBroadcastMessageRequest();
                    ~PublishBroadcastMessageRequest() = default;
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
                     * 获取消息内容
                     * @return Payload 消息内容
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置消息内容
                     * @param _payload 消息内容
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
                     * 获取消息质量等级
                     * @return Qos 消息质量等级
                     * 
                     */
                    int64_t GetQos() const;

                    /**
                     * 设置消息质量等级
                     * @param _qos 消息质量等级
                     * 
                     */
                    void SetQos(const int64_t& _qos);

                    /**
                     * 判断参数 Qos 是否已赋值
                     * @return Qos 是否已赋值
                     * 
                     */
                    bool QosHasBeenSet() const;

                    /**
                     * 获取Payload内容的编码格式，取值为base64或空。base64表示云端将收到的请求数据进行base64解码后下发到设备，空则直接将原始内容下发到设备
                     * @return PayloadEncoding Payload内容的编码格式，取值为base64或空。base64表示云端将收到的请求数据进行base64解码后下发到设备，空则直接将原始内容下发到设备
                     * 
                     */
                    std::string GetPayloadEncoding() const;

                    /**
                     * 设置Payload内容的编码格式，取值为base64或空。base64表示云端将收到的请求数据进行base64解码后下发到设备，空则直接将原始内容下发到设备
                     * @param _payloadEncoding Payload内容的编码格式，取值为base64或空。base64表示云端将收到的请求数据进行base64解码后下发到设备，空则直接将原始内容下发到设备
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
                     * 消息内容
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * 消息质量等级
                     */
                    int64_t m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * Payload内容的编码格式，取值为base64或空。base64表示云端将收到的请求数据进行base64解码后下发到设备，空则直接将原始内容下发到设备
                     */
                    std::string m_payloadEncoding;
                    bool m_payloadEncodingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PUBLISHBROADCASTMESSAGEREQUEST_H_
