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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_SENDSMSREQUEST_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_SENDSMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SendSms请求参数结构体
                */
                class SendSmsRequest : public AbstractModel
                {
                public:
                    SendSmsRequest();
                    ~SendSmsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取下发手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为境内手机号或全为境外手机号。
例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * @return PhoneNumberSet 下发手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为境内手机号或全为境外手机号。
例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * 
                     */
                    std::vector<std::string> GetPhoneNumberSet() const;

                    /**
                     * 设置下发手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为境内手机号或全为境外手机号。
例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * @param _phoneNumberSet 下发手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为境内手机号或全为境外手机号。
例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * 
                     */
                    void SetPhoneNumberSet(const std::vector<std::string>& _phoneNumberSet);

                    /**
                     * 判断参数 PhoneNumberSet 是否已赋值
                     * @return PhoneNumberSet 是否已赋值
                     * 
                     */
                    bool PhoneNumberSetHasBeenSet() const;

                    /**
                     * 获取模板 ID，必须填写已审核通过的模板 ID。模板ID可登录 [短信控制台](https://console.cloud.tencent.com/smsv2) 查看，若向境外手机号发送短信，仅支持使用国际/港澳台短信模板。
                     * @return TemplateID 模板 ID，必须填写已审核通过的模板 ID。模板ID可登录 [短信控制台](https://console.cloud.tencent.com/smsv2) 查看，若向境外手机号发送短信，仅支持使用国际/港澳台短信模板。
                     * 
                     */
                    std::string GetTemplateID() const;

                    /**
                     * 设置模板 ID，必须填写已审核通过的模板 ID。模板ID可登录 [短信控制台](https://console.cloud.tencent.com/smsv2) 查看，若向境外手机号发送短信，仅支持使用国际/港澳台短信模板。
                     * @param _templateID 模板 ID，必须填写已审核通过的模板 ID。模板ID可登录 [短信控制台](https://console.cloud.tencent.com/smsv2) 查看，若向境外手机号发送短信，仅支持使用国际/港澳台短信模板。
                     * 
                     */
                    void SetTemplateID(const std::string& _templateID);

                    /**
                     * 判断参数 TemplateID 是否已赋值
                     * @return TemplateID 是否已赋值
                     * 
                     */
                    bool TemplateIDHasBeenSet() const;

                    /**
                     * 获取短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2)  添加应用后生成的实际SdkAppid，示例如1400006666。
                     * @return SmsSdkAppid 短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2)  添加应用后生成的实际SdkAppid，示例如1400006666。
                     * 
                     */
                    std::string GetSmsSdkAppid() const;

                    /**
                     * 设置短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2)  添加应用后生成的实际SdkAppid，示例如1400006666。
                     * @param _smsSdkAppid 短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2)  添加应用后生成的实际SdkAppid，示例如1400006666。
                     * 
                     */
                    void SetSmsSdkAppid(const std::string& _smsSdkAppid);

                    /**
                     * 判断参数 SmsSdkAppid 是否已赋值
                     * @return SmsSdkAppid 是否已赋值
                     * 
                     */
                    bool SmsSdkAppidHasBeenSet() const;

                    /**
                     * 获取短信签名内容，使用 UTF-8 编码，必须填写已审核通过的签名，签名信息可登录 [短信控制台](https://console.cloud.tencent.com/smsv2)  查看。注：国内短信为必填参数。
                     * @return Sign 短信签名内容，使用 UTF-8 编码，必须填写已审核通过的签名，签名信息可登录 [短信控制台](https://console.cloud.tencent.com/smsv2)  查看。注：国内短信为必填参数。
                     * 
                     */
                    std::string GetSign() const;

                    /**
                     * 设置短信签名内容，使用 UTF-8 编码，必须填写已审核通过的签名，签名信息可登录 [短信控制台](https://console.cloud.tencent.com/smsv2)  查看。注：国内短信为必填参数。
                     * @param _sign 短信签名内容，使用 UTF-8 编码，必须填写已审核通过的签名，签名信息可登录 [短信控制台](https://console.cloud.tencent.com/smsv2)  查看。注：国内短信为必填参数。
                     * 
                     */
                    void SetSign(const std::string& _sign);

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     * 
                     */
                    bool SignHasBeenSet() const;

                    /**
                     * 获取模板参数，若无模板参数，则设置为空。
                     * @return TemplateParamSet 模板参数，若无模板参数，则设置为空。
                     * 
                     */
                    std::vector<std::string> GetTemplateParamSet() const;

                    /**
                     * 设置模板参数，若无模板参数，则设置为空。
                     * @param _templateParamSet 模板参数，若无模板参数，则设置为空。
                     * 
                     */
                    void SetTemplateParamSet(const std::vector<std::string>& _templateParamSet);

                    /**
                     * 判断参数 TemplateParamSet 是否已赋值
                     * @return TemplateParamSet 是否已赋值
                     * 
                     */
                    bool TemplateParamSetHasBeenSet() const;

                    /**
                     * 获取短信码号扩展号，默认未开通，如需开通请联系 [sms helper](https://cloud.tencent.com/document/product/382/3773)。
                     * @return ExtendCode 短信码号扩展号，默认未开通，如需开通请联系 [sms helper](https://cloud.tencent.com/document/product/382/3773)。
                     * 
                     */
                    std::string GetExtendCode() const;

                    /**
                     * 设置短信码号扩展号，默认未开通，如需开通请联系 [sms helper](https://cloud.tencent.com/document/product/382/3773)。
                     * @param _extendCode 短信码号扩展号，默认未开通，如需开通请联系 [sms helper](https://cloud.tencent.com/document/product/382/3773)。
                     * 
                     */
                    void SetExtendCode(const std::string& _extendCode);

                    /**
                     * 判断参数 ExtendCode 是否已赋值
                     * @return ExtendCode 是否已赋值
                     * 
                     */
                    bool ExtendCodeHasBeenSet() const;

                    /**
                     * 获取用户的 session 内容，可以携带用户侧 ID 等上下文信息，server 会原样返回。注意长度需小于512字节。
                     * @return SessionContext 用户的 session 内容，可以携带用户侧 ID 等上下文信息，server 会原样返回。注意长度需小于512字节。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置用户的 session 内容，可以携带用户侧 ID 等上下文信息，server 会原样返回。注意长度需小于512字节。
                     * @param _sessionContext 用户的 session 内容，可以携带用户侧 ID 等上下文信息，server 会原样返回。注意长度需小于512字节。
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取国内短信无senderid，无需填写该项；若需开通国际/港澳台短信senderid，请联系smshelper。
                     * @return SenderId 国内短信无senderid，无需填写该项；若需开通国际/港澳台短信senderid，请联系smshelper。
                     * 
                     */
                    std::string GetSenderId() const;

                    /**
                     * 设置国内短信无senderid，无需填写该项；若需开通国际/港澳台短信senderid，请联系smshelper。
                     * @param _senderId 国内短信无senderid，无需填写该项；若需开通国际/港澳台短信senderid，请联系smshelper。
                     * 
                     */
                    void SetSenderId(const std::string& _senderId);

                    /**
                     * 判断参数 SenderId 是否已赋值
                     * @return SenderId 是否已赋值
                     * 
                     */
                    bool SenderIdHasBeenSet() const;

                private:

                    /**
                     * 下发手机号码，采用 E.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为境内手机号或全为境外手机号。
例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     */
                    std::vector<std::string> m_phoneNumberSet;
                    bool m_phoneNumberSetHasBeenSet;

                    /**
                     * 模板 ID，必须填写已审核通过的模板 ID。模板ID可登录 [短信控制台](https://console.cloud.tencent.com/smsv2) 查看，若向境外手机号发送短信，仅支持使用国际/港澳台短信模板。
                     */
                    std::string m_templateID;
                    bool m_templateIDHasBeenSet;

                    /**
                     * 短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2)  添加应用后生成的实际SdkAppid，示例如1400006666。
                     */
                    std::string m_smsSdkAppid;
                    bool m_smsSdkAppidHasBeenSet;

                    /**
                     * 短信签名内容，使用 UTF-8 编码，必须填写已审核通过的签名，签名信息可登录 [短信控制台](https://console.cloud.tencent.com/smsv2)  查看。注：国内短信为必填参数。
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                    /**
                     * 模板参数，若无模板参数，则设置为空。
                     */
                    std::vector<std::string> m_templateParamSet;
                    bool m_templateParamSetHasBeenSet;

                    /**
                     * 短信码号扩展号，默认未开通，如需开通请联系 [sms helper](https://cloud.tencent.com/document/product/382/3773)。
                     */
                    std::string m_extendCode;
                    bool m_extendCodeHasBeenSet;

                    /**
                     * 用户的 session 内容，可以携带用户侧 ID 等上下文信息，server 会原样返回。注意长度需小于512字节。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 国内短信无senderid，无需填写该项；若需开通国际/港澳台短信senderid，请联系smshelper。
                     */
                    std::string m_senderId;
                    bool m_senderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_SENDSMSREQUEST_H_
