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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMALICIOUSREGISTRATIONREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMALICIOUSREGISTRATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryMaliciousRegistration请求参数结构体
                */
                class QueryMaliciousRegistrationRequest : public AbstractModel
                {
                public:
                    QueryMaliciousRegistrationRequest();
                    ~QueryMaliciousRegistrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户ID，调用方使用的商户号信息，与商户主体一一对应
                     * @return MerchantId 商户ID，调用方使用的商户号信息，与商户主体一一对应
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户ID，调用方使用的商户号信息，与商户主体一一对应
                     * @param _merchantId 商户ID，调用方使用的商户号信息，与商户主体一一对应
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取商户名称
                     * @return MerchantName 商户名称
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置商户名称
                     * @param _merchantName 商户名称
                     * 
                     */
                    void SetMerchantName(const std::string& _merchantName);

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     * 
                     */
                    bool MerchantNameHasBeenSet() const;

                    /**
                     * 获取企业工商注册标准名称
                     * @return CompanyName 企业工商注册标准名称
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置企业工商注册标准名称
                     * @param _companyName 企业工商注册标准名称
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取注册地址
                     * @return RegAddress 注册地址
                     * 
                     */
                    std::string GetRegAddress() const;

                    /**
                     * 设置注册地址
                     * @param _regAddress 注册地址
                     * 
                     */
                    void SetRegAddress(const std::string& _regAddress);

                    /**
                     * 判断参数 RegAddress 是否已赋值
                     * @return RegAddress 是否已赋值
                     * 
                     */
                    bool RegAddressHasBeenSet() const;

                    /**
                     * 获取商户进件Unix时间，单位秒（非企业注册工商时间)
                     * @return RegTime 商户进件Unix时间，单位秒（非企业注册工商时间)
                     * 
                     */
                    uint64_t GetRegTime() const;

                    /**
                     * 设置商户进件Unix时间，单位秒（非企业注册工商时间)
                     * @param _regTime 商户进件Unix时间，单位秒（非企业注册工商时间)
                     * 
                     */
                    void SetRegTime(const uint64_t& _regTime);

                    /**
                     * 判断参数 RegTime 是否已赋值
                     * @return RegTime 是否已赋值
                     * 
                     */
                    bool RegTimeHasBeenSet() const;

                    /**
                     * 获取统一社会信用代码
                     * @return USCI 统一社会信用代码
                     * 
                     */
                    std::string GetUSCI() const;

                    /**
                     * 设置统一社会信用代码
                     * @param _uSCI 统一社会信用代码
                     * 
                     */
                    void SetUSCI(const std::string& _uSCI);

                    /**
                     * 判断参数 USCI 是否已赋值
                     * @return USCI 是否已赋值
                     * 
                     */
                    bool USCIHasBeenSet() const;

                    /**
                     * 获取工商注册码，匹配优先级为Usci>RegNumber>CompanyName
                     * @return RegNumber 工商注册码，匹配优先级为Usci>RegNumber>CompanyName
                     * 
                     */
                    std::string GetRegNumber() const;

                    /**
                     * 设置工商注册码，匹配优先级为Usci>RegNumber>CompanyName
                     * @param _regNumber 工商注册码，匹配优先级为Usci>RegNumber>CompanyName
                     * 
                     */
                    void SetRegNumber(const std::string& _regNumber);

                    /**
                     * 判断参数 RegNumber 是否已赋值
                     * @return RegNumber 是否已赋值
                     * 
                     */
                    bool RegNumberHasBeenSet() const;

                    /**
                     * 获取手机号码32位MD5加密结果，全大写，格式为0086-13812345678
                     * @return EncryptedPhoneNumber 手机号码32位MD5加密结果，全大写，格式为0086-13812345678
                     * 
                     */
                    std::string GetEncryptedPhoneNumber() const;

                    /**
                     * 设置手机号码32位MD5加密结果，全大写，格式为0086-13812345678
                     * @param _encryptedPhoneNumber 手机号码32位MD5加密结果，全大写，格式为0086-13812345678
                     * 
                     */
                    void SetEncryptedPhoneNumber(const std::string& _encryptedPhoneNumber);

                    /**
                     * 判断参数 EncryptedPhoneNumber 是否已赋值
                     * @return EncryptedPhoneNumber 是否已赋值
                     * 
                     */
                    bool EncryptedPhoneNumberHasBeenSet() const;

                    /**
                     * 获取邮箱32位MD5加密结果，全大写
                     * @return EncryptedEmailAddress 邮箱32位MD5加密结果，全大写
                     * 
                     */
                    std::string GetEncryptedEmailAddress() const;

                    /**
                     * 设置邮箱32位MD5加密结果，全大写
                     * @param _encryptedEmailAddress 邮箱32位MD5加密结果，全大写
                     * 
                     */
                    void SetEncryptedEmailAddress(const std::string& _encryptedEmailAddress);

                    /**
                     * 判断参数 EncryptedEmailAddress 是否已赋值
                     * @return EncryptedEmailAddress 是否已赋值
                     * 
                     */
                    bool EncryptedEmailAddressHasBeenSet() const;

                    /**
                     * 获取身份证MD5加密结果，最后一位x大写
                     * @return EncryptedPersonId 身份证MD5加密结果，最后一位x大写
                     * 
                     */
                    std::string GetEncryptedPersonId() const;

                    /**
                     * 设置身份证MD5加密结果，最后一位x大写
                     * @param _encryptedPersonId 身份证MD5加密结果，最后一位x大写
                     * 
                     */
                    void SetEncryptedPersonId(const std::string& _encryptedPersonId);

                    /**
                     * 判断参数 EncryptedPersonId 是否已赋值
                     * @return EncryptedPersonId 是否已赋值
                     * 
                     */
                    bool EncryptedPersonIdHasBeenSet() const;

                    /**
                     * 获取填写信息设备的IP地址
                     * @return Ip 填写信息设备的IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置填写信息设备的IP地址
                     * @param _ip 填写信息设备的IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取进件渠道号，客户自行编码即可
                     * @return Channel 进件渠道号，客户自行编码即可
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置进件渠道号，客户自行编码即可
                     * @param _channel 进件渠道号，客户自行编码即可
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * 商户ID，调用方使用的商户号信息，与商户主体一一对应
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 商户名称
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * 企业工商注册标准名称
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 注册地址
                     */
                    std::string m_regAddress;
                    bool m_regAddressHasBeenSet;

                    /**
                     * 商户进件Unix时间，单位秒（非企业注册工商时间)
                     */
                    uint64_t m_regTime;
                    bool m_regTimeHasBeenSet;

                    /**
                     * 统一社会信用代码
                     */
                    std::string m_uSCI;
                    bool m_uSCIHasBeenSet;

                    /**
                     * 工商注册码，匹配优先级为Usci>RegNumber>CompanyName
                     */
                    std::string m_regNumber;
                    bool m_regNumberHasBeenSet;

                    /**
                     * 手机号码32位MD5加密结果，全大写，格式为0086-13812345678
                     */
                    std::string m_encryptedPhoneNumber;
                    bool m_encryptedPhoneNumberHasBeenSet;

                    /**
                     * 邮箱32位MD5加密结果，全大写
                     */
                    std::string m_encryptedEmailAddress;
                    bool m_encryptedEmailAddressHasBeenSet;

                    /**
                     * 身份证MD5加密结果，最后一位x大写
                     */
                    std::string m_encryptedPersonId;
                    bool m_encryptedPersonIdHasBeenSet;

                    /**
                     * 填写信息设备的IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 进件渠道号，客户自行编码即可
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMALICIOUSREGISTRATIONREQUEST_H_
