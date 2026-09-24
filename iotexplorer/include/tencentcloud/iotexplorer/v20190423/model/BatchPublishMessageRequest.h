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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHPUBLISHMESSAGEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHPUBLISHMESSAGEREQUEST_H_

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
                * BatchPublishMessage请求参数结构体
                */
                class BatchPublishMessageRequest : public AbstractModel
                {
                public:
                    BatchPublishMessageRequest();
                    ~BatchPublishMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品名称</p>
                     * @return ProductId <p>产品名称</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品名称</p>
                     * @param _productId <p>产品名称</p>
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
                     * 获取<p>设备名称</p>
                     * @return DeviceNames <p>设备名称</p>
                     * 
                     */
                    std::vector<std::string> GetDeviceNames() const;

                    /**
                     * 设置<p>设备名称</p>
                     * @param _deviceNames <p>设备名称</p>
                     * 
                     */
                    void SetDeviceNames(const std::vector<std::string>& _deviceNames);

                    /**
                     * 判断参数 DeviceNames 是否已赋值
                     * @return DeviceNames 是否已赋值
                     * 
                     */
                    bool DeviceNamesHasBeenSet() const;

                    /**
                     * 获取<p>主题</p>
                     * @return Topic <p>主题</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>主题</p>
                     * @param _topic <p>主题</p>
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
                     * 获取<p>消息体</p>
                     * @return Payload <p>消息体</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>消息体</p>
                     * @param _payload <p>消息体</p>
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
                     * 获取<p>服务质量</p>
                     * @return Qos <p>服务质量</p>
                     * 
                     */
                    int64_t GetQos() const;

                    /**
                     * 设置<p>服务质量</p>
                     * @param _qos <p>服务质量</p>
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
                     * 获取<p>消息体编码</p>
                     * @return PayloadEncoding <p>消息体编码</p>
                     * 
                     */
                    std::string GetPayloadEncoding() const;

                    /**
                     * 设置<p>消息体编码</p>
                     * @param _payloadEncoding <p>消息体编码</p>
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
                     * <p>产品名称</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::vector<std::string> m_deviceNames;
                    bool m_deviceNamesHasBeenSet;

                    /**
                     * <p>主题</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>消息体</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * <p>服务质量</p>
                     */
                    int64_t m_qos;
                    bool m_qosHasBeenSet;

                    /**
                     * <p>消息体编码</p>
                     */
                    std::string m_payloadEncoding;
                    bool m_payloadEncodingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHPUBLISHMESSAGEREQUEST_H_
