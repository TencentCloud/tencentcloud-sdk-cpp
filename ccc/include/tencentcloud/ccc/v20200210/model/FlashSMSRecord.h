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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_FLASHSMSRECORD_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_FLASHSMSRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 闪信记录
                */
                class FlashSMSRecord : public AbstractModel
                {
                public:
                    FlashSMSRecord();
                    ~FlashSMSRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话 ID
                     * @return SessionId 会话 ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话 ID
                     * @param _sessionId 会话 ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取闪信投递号码（被叫）
                     * @return DeliveryNumber 闪信投递号码（被叫）
                     * 
                     */
                    std::string GetDeliveryNumber() const;

                    /**
                     * 设置闪信投递号码（被叫）
                     * @param _deliveryNumber 闪信投递号码（被叫）
                     * 
                     */
                    void SetDeliveryNumber(const std::string& _deliveryNumber);

                    /**
                     * 判断参数 DeliveryNumber 是否已赋值
                     * @return DeliveryNumber 是否已赋值
                     * 
                     */
                    bool DeliveryNumberHasBeenSet() const;

                    /**
                     * 获取呼叫关联的系统号码
                     * @return ServingNumber 呼叫关联的系统号码
                     * 
                     */
                    std::string GetServingNumber() const;

                    /**
                     * 设置呼叫关联的系统号码
                     * @param _servingNumber 呼叫关联的系统号码
                     * 
                     */
                    void SetServingNumber(const std::string& _servingNumber);

                    /**
                     * 判断参数 ServingNumber 是否已赋值
                     * @return ServingNumber 是否已赋值
                     * 
                     */
                    bool ServingNumberHasBeenSet() const;

                    /**
                     * 获取投递状态，1 表示成功，其他表示失败
                     * @return DeliveryStatus 投递状态，1 表示成功，其他表示失败
                     * 
                     */
                    int64_t GetDeliveryStatus() const;

                    /**
                     * 设置投递状态，1 表示成功，其他表示失败
                     * @param _deliveryStatus 投递状态，1 表示成功，其他表示失败
                     * 
                     */
                    void SetDeliveryStatus(const int64_t& _deliveryStatus);

                    /**
                     * 判断参数 DeliveryStatus 是否已赋值
                     * @return DeliveryStatus 是否已赋值
                     * 
                     */
                    bool DeliveryStatusHasBeenSet() const;

                    /**
                     * 获取投递失败原因
                     * @return DeliveryMessage 投递失败原因
                     * 
                     */
                    std::string GetDeliveryMessage() const;

                    /**
                     * 设置投递失败原因
                     * @param _deliveryMessage 投递失败原因
                     * 
                     */
                    void SetDeliveryMessage(const std::string& _deliveryMessage);

                    /**
                     * 判断参数 DeliveryMessage 是否已赋值
                     * @return DeliveryMessage 是否已赋值
                     * 
                     */
                    bool DeliveryMessageHasBeenSet() const;

                    /**
                     * 获取投递时间戳，Unix 秒级时间戳
                     * @return DeliveryTimestamp 投递时间戳，Unix 秒级时间戳
                     * 
                     */
                    int64_t GetDeliveryTimestamp() const;

                    /**
                     * 设置投递时间戳，Unix 秒级时间戳
                     * @param _deliveryTimestamp 投递时间戳，Unix 秒级时间戳
                     * 
                     */
                    void SetDeliveryTimestamp(const int64_t& _deliveryTimestamp);

                    /**
                     * 判断参数 DeliveryTimestamp 是否已赋值
                     * @return DeliveryTimestamp 是否已赋值
                     * 
                     */
                    bool DeliveryTimestampHasBeenSet() const;

                    /**
                     * 获取送达时间（送达成功），Unix 秒级时间戳
                     * @return ArriveTimestamp 送达时间（送达成功），Unix 秒级时间戳
                     * 
                     */
                    int64_t GetArriveTimestamp() const;

                    /**
                     * 设置送达时间（送达成功），Unix 秒级时间戳
                     * @param _arriveTimestamp 送达时间（送达成功），Unix 秒级时间戳
                     * 
                     */
                    void SetArriveTimestamp(const int64_t& _arriveTimestamp);

                    /**
                     * 判断参数 ArriveTimestamp 是否已赋值
                     * @return ArriveTimestamp 是否已赋值
                     * 
                     */
                    bool ArriveTimestampHasBeenSet() const;

                private:

                    /**
                     * 会话 ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 闪信投递号码（被叫）
                     */
                    std::string m_deliveryNumber;
                    bool m_deliveryNumberHasBeenSet;

                    /**
                     * 呼叫关联的系统号码
                     */
                    std::string m_servingNumber;
                    bool m_servingNumberHasBeenSet;

                    /**
                     * 投递状态，1 表示成功，其他表示失败
                     */
                    int64_t m_deliveryStatus;
                    bool m_deliveryStatusHasBeenSet;

                    /**
                     * 投递失败原因
                     */
                    std::string m_deliveryMessage;
                    bool m_deliveryMessageHasBeenSet;

                    /**
                     * 投递时间戳，Unix 秒级时间戳
                     */
                    int64_t m_deliveryTimestamp;
                    bool m_deliveryTimestampHasBeenSet;

                    /**
                     * 送达时间（送达成功），Unix 秒级时间戳
                     */
                    int64_t m_arriveTimestamp;
                    bool m_arriveTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_FLASHSMSRECORD_H_
