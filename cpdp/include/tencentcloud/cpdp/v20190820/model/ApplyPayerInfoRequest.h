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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYPAYERINFOREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYPAYERINFOREQUEST_H_

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
                * ApplyPayerInfo请求参数结构体
                */
                class ApplyPayerInfoRequest : public AbstractModel
                {
                public:
                    ApplyPayerInfoRequest();
                    ~ApplyPayerInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取付款人ID
                     * @return PayerId 付款人ID
                     * 
                     */
                    std::string GetPayerId() const;

                    /**
                     * 设置付款人ID
                     * @param _payerId 付款人ID
                     * 
                     */
                    void SetPayerId(const std::string& _payerId);

                    /**
                     * 判断参数 PayerId 是否已赋值
                     * @return PayerId 是否已赋值
                     * 
                     */
                    bool PayerIdHasBeenSet() const;

                    /**
                     * 获取付款人类型 (个人: INDIVIDUAL, 企业: CORPORATE)
                     * @return PayerType 付款人类型 (个人: INDIVIDUAL, 企业: CORPORATE)
                     * 
                     */
                    std::string GetPayerType() const;

                    /**
                     * 设置付款人类型 (个人: INDIVIDUAL, 企业: CORPORATE)
                     * @param _payerType 付款人类型 (个人: INDIVIDUAL, 企业: CORPORATE)
                     * 
                     */
                    void SetPayerType(const std::string& _payerType);

                    /**
                     * 判断参数 PayerType 是否已赋值
                     * @return PayerType 是否已赋值
                     * 
                     */
                    bool PayerTypeHasBeenSet() const;

                    /**
                     * 获取付款人姓名
                     * @return PayerName 付款人姓名
                     * 
                     */
                    std::string GetPayerName() const;

                    /**
                     * 设置付款人姓名
                     * @param _payerName 付款人姓名
                     * 
                     */
                    void SetPayerName(const std::string& _payerName);

                    /**
                     * 判断参数 PayerName 是否已赋值
                     * @return PayerName 是否已赋值
                     * 
                     */
                    bool PayerNameHasBeenSet() const;

                    /**
                     * 获取付款人证件类型 (身份证: ID_CARD, 统一社会信用代码: UNIFIED_CREDIT_CODE)
                     * @return PayerIdType 付款人证件类型 (身份证: ID_CARD, 统一社会信用代码: UNIFIED_CREDIT_CODE)
                     * 
                     */
                    std::string GetPayerIdType() const;

                    /**
                     * 设置付款人证件类型 (身份证: ID_CARD, 统一社会信用代码: UNIFIED_CREDIT_CODE)
                     * @param _payerIdType 付款人证件类型 (身份证: ID_CARD, 统一社会信用代码: UNIFIED_CREDIT_CODE)
                     * 
                     */
                    void SetPayerIdType(const std::string& _payerIdType);

                    /**
                     * 判断参数 PayerIdType 是否已赋值
                     * @return PayerIdType 是否已赋值
                     * 
                     */
                    bool PayerIdTypeHasBeenSet() const;

                    /**
                     * 获取付款人证件号
                     * @return PayerIdNo 付款人证件号
                     * 
                     */
                    std::string GetPayerIdNo() const;

                    /**
                     * 设置付款人证件号
                     * @param _payerIdNo 付款人证件号
                     * 
                     */
                    void SetPayerIdNo(const std::string& _payerIdNo);

                    /**
                     * 判断参数 PayerIdNo 是否已赋值
                     * @return PayerIdNo 是否已赋值
                     * 
                     */
                    bool PayerIdNoHasBeenSet() const;

                    /**
                     * 获取付款人常驻国家或地区编码 (见常见问题-国家/地区编码)
                     * @return PayerCountryCode 付款人常驻国家或地区编码 (见常见问题-国家/地区编码)
                     * 
                     */
                    std::string GetPayerCountryCode() const;

                    /**
                     * 设置付款人常驻国家或地区编码 (见常见问题-国家/地区编码)
                     * @param _payerCountryCode 付款人常驻国家或地区编码 (见常见问题-国家/地区编码)
                     * 
                     */
                    void SetPayerCountryCode(const std::string& _payerCountryCode);

                    /**
                     * 判断参数 PayerCountryCode 是否已赋值
                     * @return PayerCountryCode 是否已赋值
                     * 
                     */
                    bool PayerCountryCodeHasBeenSet() const;

                    /**
                     * 获取付款人联系人名称
                     * @return PayerContactName 付款人联系人名称
                     * 
                     */
                    std::string GetPayerContactName() const;

                    /**
                     * 设置付款人联系人名称
                     * @param _payerContactName 付款人联系人名称
                     * 
                     */
                    void SetPayerContactName(const std::string& _payerContactName);

                    /**
                     * 判断参数 PayerContactName 是否已赋值
                     * @return PayerContactName 是否已赋值
                     * 
                     */
                    bool PayerContactNameHasBeenSet() const;

                    /**
                     * 获取付款人联系电话
                     * @return PayerContactNumber 付款人联系电话
                     * 
                     */
                    std::string GetPayerContactNumber() const;

                    /**
                     * 设置付款人联系电话
                     * @param _payerContactNumber 付款人联系电话
                     * 
                     */
                    void SetPayerContactNumber(const std::string& _payerContactNumber);

                    /**
                     * 判断参数 PayerContactNumber 是否已赋值
                     * @return PayerContactNumber 是否已赋值
                     * 
                     */
                    bool PayerContactNumberHasBeenSet() const;

                    /**
                     * 获取付款人联系邮箱
                     * @return PayerEmailAddress 付款人联系邮箱
                     * 
                     */
                    std::string GetPayerEmailAddress() const;

                    /**
                     * 设置付款人联系邮箱
                     * @param _payerEmailAddress 付款人联系邮箱
                     * 
                     */
                    void SetPayerEmailAddress(const std::string& _payerEmailAddress);

                    /**
                     * 判断参数 PayerEmailAddress 是否已赋值
                     * @return PayerEmailAddress 是否已赋值
                     * 
                     */
                    bool PayerEmailAddressHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填sandbox
                     * @return Profile 接入环境。沙箱环境填sandbox
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填sandbox
                     * @param _profile 接入环境。沙箱环境填sandbox
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 付款人ID
                     */
                    std::string m_payerId;
                    bool m_payerIdHasBeenSet;

                    /**
                     * 付款人类型 (个人: INDIVIDUAL, 企业: CORPORATE)
                     */
                    std::string m_payerType;
                    bool m_payerTypeHasBeenSet;

                    /**
                     * 付款人姓名
                     */
                    std::string m_payerName;
                    bool m_payerNameHasBeenSet;

                    /**
                     * 付款人证件类型 (身份证: ID_CARD, 统一社会信用代码: UNIFIED_CREDIT_CODE)
                     */
                    std::string m_payerIdType;
                    bool m_payerIdTypeHasBeenSet;

                    /**
                     * 付款人证件号
                     */
                    std::string m_payerIdNo;
                    bool m_payerIdNoHasBeenSet;

                    /**
                     * 付款人常驻国家或地区编码 (见常见问题-国家/地区编码)
                     */
                    std::string m_payerCountryCode;
                    bool m_payerCountryCodeHasBeenSet;

                    /**
                     * 付款人联系人名称
                     */
                    std::string m_payerContactName;
                    bool m_payerContactNameHasBeenSet;

                    /**
                     * 付款人联系电话
                     */
                    std::string m_payerContactNumber;
                    bool m_payerContactNumberHasBeenSet;

                    /**
                     * 付款人联系邮箱
                     */
                    std::string m_payerEmailAddress;
                    bool m_payerEmailAddressHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填sandbox
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYPAYERINFOREQUEST_H_
