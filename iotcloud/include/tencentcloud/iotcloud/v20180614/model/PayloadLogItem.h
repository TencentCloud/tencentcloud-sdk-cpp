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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_PAYLOADLOGITEM_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_PAYLOADLOGITEM_H_

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
        namespace V20180614
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
                     * @return ProductID 产品id
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置产品id
                     * @param _productID 产品id
                     * 
                     */
                    void SetProductID(const std::string& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

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
                     * @return PayloadFmtType 内容格式类型
                     * 
                     */
                    std::string GetPayloadFmtType() const;

                    /**
                     * 设置内容格式类型
                     * @param _payloadFmtType 内容格式类型
                     * 
                     */
                    void SetPayloadFmtType(const std::string& _payloadFmtType);

                    /**
                     * 判断参数 PayloadFmtType 是否已赋值
                     * @return PayloadFmtType 是否已赋值
                     * 
                     */
                    bool PayloadFmtTypeHasBeenSet() const;

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
                     * @return RequestID 请求ID
                     * 
                     */
                    std::string GetRequestID() const;

                    /**
                     * 设置请求ID
                     * @param _requestID 请求ID
                     * 
                     */
                    void SetRequestID(const std::string& _requestID);

                    /**
                     * 判断参数 RequestID 是否已赋值
                     * @return RequestID 是否已赋值
                     * 
                     */
                    bool RequestIDHasBeenSet() const;

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
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

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
                    std::string m_payloadFmtType;
                    bool m_payloadFmtTypeHasBeenSet;

                    /**
                     * 内容信息
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * 请求ID
                     */
                    std::string m_requestID;
                    bool m_requestIDHasBeenSet;

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

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_PAYLOADLOGITEM_H_
