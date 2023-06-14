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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PAYLOADLOGITEM_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PAYLOADLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 内容日志项
                */
                class PayloadLogItem : public AbstractModel
                {
                public:
                    PayloadLogItem();
                    ~PayloadLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号id
                     * @return Uin 账号id
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置账号id
                     * @param _uin 账号id
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取产品id
                     * @return ProductId 产品id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品id
                     * @param _productId 产品id
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
                     * 获取来源类型
                     * @return SrcType 来源类型
                     * 
                     */
                    std::string GetSrcType() const;

                    /**
                     * 设置来源类型
                     * @param _srcType 来源类型
                     * 
                     */
                    void SetSrcType(const std::string& _srcType);

                    /**
                     * 判断参数 SrcType 是否已赋值
                     * @return SrcType 是否已赋值
                     * 
                     */
                    bool SrcTypeHasBeenSet() const;

                    /**
                     * 获取来源名称
                     * @return SrcName 来源名称
                     * 
                     */
                    std::string GetSrcName() const;

                    /**
                     * 设置来源名称
                     * @param _srcName 来源名称
                     * 
                     */
                    void SetSrcName(const std::string& _srcName);

                    /**
                     * 判断参数 SrcName 是否已赋值
                     * @return SrcName 是否已赋值
                     * 
                     */
                    bool SrcNameHasBeenSet() const;

                    /**
                     * 获取消息topic
                     * @return Topic 消息topic
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置消息topic
                     * @param _topic 消息topic
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
                     * 获取内容格式类型
                     * @return PayloadFormatType 内容格式类型
                     * 
                     */
                    std::string GetPayloadFormatType() const;

                    /**
                     * 设置内容格式类型
                     * @param _payloadFormatType 内容格式类型
                     * 
                     */
                    void SetPayloadFormatType(const std::string& _payloadFormatType);

                    /**
                     * 判断参数 PayloadFormatType 是否已赋值
                     * @return PayloadFormatType 是否已赋值
                     * 
                     */
                    bool PayloadFormatTypeHasBeenSet() const;

                    /**
                     * 获取内容信息
                     * @return Payload 内容信息
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置内容信息
                     * @param _payload 内容信息
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
                     * 获取请求ID
                     * @return RequestId 请求ID
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置请求ID
                     * @param _requestId 请求ID
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取日期时间
                     * @return DateTime 日期时间
                     * 
                     */
                    std::string GetDateTime() const;

                    /**
                     * 设置日期时间
                     * @param _dateTime 日期时间
                     * 
                     */
                    void SetDateTime(const std::string& _dateTime);

                    /**
                     * 判断参数 DateTime 是否已赋值
                     * @return DateTime 是否已赋值
                     * 
                     */
                    bool DateTimeHasBeenSet() const;

                private:

                    /**
                     * 账号id
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 产品id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 来源类型
                     */
                    std::string m_srcType;
                    bool m_srcTypeHasBeenSet;

                    /**
                     * 来源名称
                     */
                    std::string m_srcName;
                    bool m_srcNameHasBeenSet;

                    /**
                     * 消息topic
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 内容格式类型
                     */
                    std::string m_payloadFormatType;
                    bool m_payloadFormatTypeHasBeenSet;

                    /**
                     * 内容信息
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * 请求ID
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 日期时间
                     */
                    std::string m_dateTime;
                    bool m_dateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PAYLOADLOGITEM_H_
