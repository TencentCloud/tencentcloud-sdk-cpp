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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_SENDSTATUS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_SENDSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * 发送短信状态
                */
                class SendStatus : public AbstractModel
                {
                public:
                    SendStatus();
                    ~SendStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发送流水号。
                     * @return SerialNo 发送流水号。
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置发送流水号。
                     * @param SerialNo 发送流水号。
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取手机号码,e.164标准，+[国家或地区码][手机号] ，示例如：+8613711112222， 其中前面有一个+号 ，86为国家码，13711112222为手机号。
                     * @return PhoneNumber 手机号码,e.164标准，+[国家或地区码][手机号] ，示例如：+8613711112222， 其中前面有一个+号 ，86为国家码，13711112222为手机号。
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号码,e.164标准，+[国家或地区码][手机号] ，示例如：+8613711112222， 其中前面有一个+号 ，86为国家码，13711112222为手机号。
                     * @param PhoneNumber 手机号码,e.164标准，+[国家或地区码][手机号] ，示例如：+8613711112222， 其中前面有一个+号 ，86为国家码，13711112222为手机号。
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取计费条数，计费规则请查询 [计费策略](https://cloud.tencent.com/document/product/382/36135)。
                     * @return Fee 计费条数，计费规则请查询 [计费策略](https://cloud.tencent.com/document/product/382/36135)。
                     */
                    uint64_t GetFee() const;

                    /**
                     * 设置计费条数，计费规则请查询 [计费策略](https://cloud.tencent.com/document/product/382/36135)。
                     * @param Fee 计费条数，计费规则请查询 [计费策略](https://cloud.tencent.com/document/product/382/36135)。
                     */
                    void SetFee(const uint64_t& _fee);

                    /**
                     * 判断参数 Fee 是否已赋值
                     * @return Fee 是否已赋值
                     */
                    bool FeeHasBeenSet() const;

                    /**
                     * 获取用户Session内容。
                     * @return SessionContext 用户Session内容。
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置用户Session内容。
                     * @param SessionContext 用户Session内容。
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取短信请求错误码，具体含义请参考错误码。
                     * @return Code 短信请求错误码，具体含义请参考错误码。
                     */
                    std::string GetCode() const;

                    /**
                     * 设置短信请求错误码，具体含义请参考错误码。
                     * @param Code 短信请求错误码，具体含义请参考错误码。
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取短信请求错误码描述。
                     * @return Message 短信请求错误码描述。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置短信请求错误码描述。
                     * @param Message 短信请求错误码描述。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 发送流水号。
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * 手机号码,e.164标准，+[国家或地区码][手机号] ，示例如：+8613711112222， 其中前面有一个+号 ，86为国家码，13711112222为手机号。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 计费条数，计费规则请查询 [计费策略](https://cloud.tencent.com/document/product/382/36135)。
                     */
                    uint64_t m_fee;
                    bool m_feeHasBeenSet;

                    /**
                     * 用户Session内容。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 短信请求错误码，具体含义请参考错误码。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 短信请求错误码描述。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_SENDSTATUS_H_
