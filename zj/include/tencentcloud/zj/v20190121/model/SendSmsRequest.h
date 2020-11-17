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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_SENDSMSREQUEST_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_SENDSMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
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
                     * 获取商户证书
                     * @return License 商户证书
                     */
                    std::string GetLicense() const;

                    /**
                     * 设置商户证书
                     * @param License 商户证书
                     */
                    void SetLicense(const std::string& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取手机号码,采用 e.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为境内手机号,如:+8613800138000
                     * @return Phone 手机号码,采用 e.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为境内手机号,如:+8613800138000
                     */
                    std::vector<std::string> GetPhone() const;

                    /**
                     * 设置手机号码,采用 e.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为境内手机号,如:+8613800138000
                     * @param Phone 手机号码,采用 e.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为境内手机号,如:+8613800138000
                     */
                    void SetPhone(const std::vector<std::string>& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取短信模板id(推荐使用模板id发送,使用内容发送时模板id留空)
                     * @return TemplateId 短信模板id(推荐使用模板id发送,使用内容发送时模板id留空)
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置短信模板id(推荐使用模板id发送,使用内容发送时模板id留空)
                     * @param TemplateId 短信模板id(推荐使用模板id发送,使用内容发送时模板id留空)
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板参数，若无模板参数，则设置为空。
                     * @return Params 模板参数，若无模板参数，则设置为空。
                     */
                    std::vector<std::string> GetParams() const;

                    /**
                     * 设置模板参数，若无模板参数，则设置为空。
                     * @param Params 模板参数，若无模板参数，则设置为空。
                     */
                    void SetParams(const std::vector<std::string>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取短信签名内容，使用 UTF-8 编码，必须填写已审核通过的签名。注：国内短信为必填参数。
                     * @return Sign 短信签名内容，使用 UTF-8 编码，必须填写已审核通过的签名。注：国内短信为必填参数。
                     */
                    std::string GetSign() const;

                    /**
                     * 设置短信签名内容，使用 UTF-8 编码，必须填写已审核通过的签名。注：国内短信为必填参数。
                     * @param Sign 短信签名内容，使用 UTF-8 编码，必须填写已审核通过的签名。注：国内短信为必填参数。
                     */
                    void SetSign(const std::string& _sign);

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     */
                    bool SignHasBeenSet() const;

                    /**
                     * 获取国际/港澳台短信 senderid，国内短信填空
                     * @return SenderId 国际/港澳台短信 senderid，国内短信填空
                     */
                    std::string GetSenderId() const;

                    /**
                     * 设置国际/港澳台短信 senderid，国内短信填空
                     * @param SenderId 国际/港澳台短信 senderid，国内短信填空
                     */
                    void SetSenderId(const std::string& _senderId);

                    /**
                     * 判断参数 SenderId 是否已赋值
                     * @return SenderId 是否已赋值
                     */
                    bool SenderIdHasBeenSet() const;

                    /**
                     * 获取短信类型：{0:普通短信，1:营销短信}，使用内容发送时必填
                     * @return SmsType 短信类型：{0:普通短信，1:营销短信}，使用内容发送时必填
                     */
                    uint64_t GetSmsType() const;

                    /**
                     * 设置短信类型：{0:普通短信，1:营销短信}，使用内容发送时必填
                     * @param SmsType 短信类型：{0:普通短信，1:营销短信}，使用内容发送时必填
                     */
                    void SetSmsType(const uint64_t& _smsType);

                    /**
                     * 判断参数 SmsType 是否已赋值
                     * @return SmsType 是否已赋值
                     */
                    bool SmsTypeHasBeenSet() const;

                    /**
                     * 获取是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。使用内容发送时必填
                     * @return International 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。使用内容发送时必填
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。使用内容发送时必填
                     * @param International 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。使用内容发送时必填
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取发送使用的模板内容,如果有占位符,此处也包括占位符,占位符的实际内容通过Params参数传递,使用模板id发送时此字段为空
                     * @return Content 发送使用的模板内容,如果有占位符,此处也包括占位符,占位符的实际内容通过Params参数传递,使用模板id发送时此字段为空
                     */
                    std::string GetContent() const;

                    /**
                     * 设置发送使用的模板内容,如果有占位符,此处也包括占位符,占位符的实际内容通过Params参数传递,使用模板id发送时此字段为空
                     * @param Content 发送使用的模板内容,如果有占位符,此处也包括占位符,占位符的实际内容通过Params参数传递,使用模板id发送时此字段为空
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 商户证书
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 手机号码,采用 e.164 标准，格式为+[国家或地区码][手机号]，单次请求最多支持200个手机号且要求全为境内手机号,如:+8613800138000
                     */
                    std::vector<std::string> m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 短信模板id(推荐使用模板id发送,使用内容发送时模板id留空)
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板参数，若无模板参数，则设置为空。
                     */
                    std::vector<std::string> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 短信签名内容，使用 UTF-8 编码，必须填写已审核通过的签名。注：国内短信为必填参数。
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                    /**
                     * 国际/港澳台短信 senderid，国内短信填空
                     */
                    std::string m_senderId;
                    bool m_senderIdHasBeenSet;

                    /**
                     * 短信类型：{0:普通短信，1:营销短信}，使用内容发送时必填
                     */
                    uint64_t m_smsType;
                    bool m_smsTypeHasBeenSet;

                    /**
                     * 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。使用内容发送时必填
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * 发送使用的模板内容,如果有占位符,此处也包括占位符,占位符的实际内容通过Params参数传递,使用模板id发送时此字段为空
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_SENDSMSREQUEST_H_
