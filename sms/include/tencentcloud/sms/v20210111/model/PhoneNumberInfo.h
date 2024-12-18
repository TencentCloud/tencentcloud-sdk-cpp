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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_PHONENUMBERINFO_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_PHONENUMBERINFO_H_

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
        namespace V20210111
        {
            namespace Model
            {
                /**
                * 号码信息。
                */
                class PhoneNumberInfo : public AbstractModel
                {
                public:
                    PhoneNumberInfo();
                    ~PhoneNumberInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取号码信息查询错误码，查询成功返回 "Ok"。
                     * @return Code 号码信息查询错误码，查询成功返回 "Ok"。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置号码信息查询错误码，查询成功返回 "Ok"。
                     * @param _code 号码信息查询错误码，查询成功返回 "Ok"。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取号码信息查询错误码描述。
                     * @return Message 号码信息查询错误码描述。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置号码信息查询错误码描述。
                     * @param _message 号码信息查询错误码描述。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取国家（或地区）码。
                     * @return NationCode 国家（或地区）码。
                     * 
                     */
                    std::string GetNationCode() const;

                    /**
                     * 设置国家（或地区）码。
                     * @param _nationCode 国家（或地区）码。
                     * 
                     */
                    void SetNationCode(const std::string& _nationCode);

                    /**
                     * 判断参数 NationCode 是否已赋值
                     * @return NationCode 是否已赋值
                     * 
                     */
                    bool NationCodeHasBeenSet() const;

                    /**
                     * 获取用户号码，去除国家或地区码前缀的普通格式，示例如：18501234444。
                     * @return SubscriberNumber 用户号码，去除国家或地区码前缀的普通格式，示例如：18501234444。
                     * 
                     */
                    std::string GetSubscriberNumber() const;

                    /**
                     * 设置用户号码，去除国家或地区码前缀的普通格式，示例如：18501234444。
                     * @param _subscriberNumber 用户号码，去除国家或地区码前缀的普通格式，示例如：18501234444。
                     * 
                     */
                    void SetSubscriberNumber(const std::string& _subscriberNumber);

                    /**
                     * 判断参数 SubscriberNumber 是否已赋值
                     * @return SubscriberNumber 是否已赋值
                     * 
                     */
                    bool SubscriberNumberHasBeenSet() const;

                    /**
                     * 获取解析后的规范的 E.164 号码，与下发短信的号码解析结果一致。解析失败时会原样返回。
                     * @return PhoneNumber 解析后的规范的 E.164 号码，与下发短信的号码解析结果一致。解析失败时会原样返回。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置解析后的规范的 E.164 号码，与下发短信的号码解析结果一致。解析失败时会原样返回。
                     * @param _phoneNumber 解析后的规范的 E.164 号码，与下发短信的号码解析结果一致。解析失败时会原样返回。
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取国家码或地区码，例如 CN、US 等，对于未识别出国家码或者地区码，默认返回 DEF。
                     * @return IsoCode 国家码或地区码，例如 CN、US 等，对于未识别出国家码或者地区码，默认返回 DEF。
                     * 
                     */
                    std::string GetIsoCode() const;

                    /**
                     * 设置国家码或地区码，例如 CN、US 等，对于未识别出国家码或者地区码，默认返回 DEF。
                     * @param _isoCode 国家码或地区码，例如 CN、US 等，对于未识别出国家码或者地区码，默认返回 DEF。
                     * 
                     */
                    void SetIsoCode(const std::string& _isoCode);

                    /**
                     * 判断参数 IsoCode 是否已赋值
                     * @return IsoCode 是否已赋值
                     * 
                     */
                    bool IsoCodeHasBeenSet() const;

                    /**
                     * 获取国家码或地区名，例如 China，可参考 [国际/港澳台短信价格总览](https://cloud.tencent.com/document/product/382/18051)
                     * @return IsoName 国家码或地区名，例如 China，可参考 [国际/港澳台短信价格总览](https://cloud.tencent.com/document/product/382/18051)
                     * 
                     */
                    std::string GetIsoName() const;

                    /**
                     * 设置国家码或地区名，例如 China，可参考 [国际/港澳台短信价格总览](https://cloud.tencent.com/document/product/382/18051)
                     * @param _isoName 国家码或地区名，例如 China，可参考 [国际/港澳台短信价格总览](https://cloud.tencent.com/document/product/382/18051)
                     * 
                     */
                    void SetIsoName(const std::string& _isoName);

                    /**
                     * 判断参数 IsoName 是否已赋值
                     * @return IsoName 是否已赋值
                     * 
                     */
                    bool IsoNameHasBeenSet() const;

                private:

                    /**
                     * 号码信息查询错误码，查询成功返回 "Ok"。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 号码信息查询错误码描述。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 国家（或地区）码。
                     */
                    std::string m_nationCode;
                    bool m_nationCodeHasBeenSet;

                    /**
                     * 用户号码，去除国家或地区码前缀的普通格式，示例如：18501234444。
                     */
                    std::string m_subscriberNumber;
                    bool m_subscriberNumberHasBeenSet;

                    /**
                     * 解析后的规范的 E.164 号码，与下发短信的号码解析结果一致。解析失败时会原样返回。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 国家码或地区码，例如 CN、US 等，对于未识别出国家码或者地区码，默认返回 DEF。
                     */
                    std::string m_isoCode;
                    bool m_isoCodeHasBeenSet;

                    /**
                     * 国家码或地区名，例如 China，可参考 [国际/港澳台短信价格总览](https://cloud.tencent.com/document/product/382/18051)
                     */
                    std::string m_isoName;
                    bool m_isoNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_PHONENUMBERINFO_H_
