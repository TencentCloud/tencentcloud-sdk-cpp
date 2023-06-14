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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOUTWARDORDERREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOUTWARDORDERREQUEST_H_

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
                * ApplyOutwardOrder请求参数结构体
                */
                class ApplyOutwardOrderRequest : public AbstractModel
                {
                public:
                    ApplyOutwardOrderRequest();
                    ~ApplyOutwardOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取对接方汇出指令编号
                     * @return TransactionId 对接方汇出指令编号
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置对接方汇出指令编号
                     * @param _transactionId 对接方汇出指令编号
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取定价币种
                     * @return PricingCurrency 定价币种
                     * 
                     */
                    std::string GetPricingCurrency() const;

                    /**
                     * 设置定价币种
                     * @param _pricingCurrency 定价币种
                     * 
                     */
                    void SetPricingCurrency(const std::string& _pricingCurrency);

                    /**
                     * 判断参数 PricingCurrency 是否已赋值
                     * @return PricingCurrency 是否已赋值
                     * 
                     */
                    bool PricingCurrencyHasBeenSet() const;

                    /**
                     * 获取源币种
                     * @return SourceCurrency 源币种
                     * 
                     */
                    std::string GetSourceCurrency() const;

                    /**
                     * 设置源币种
                     * @param _sourceCurrency 源币种
                     * 
                     */
                    void SetSourceCurrency(const std::string& _sourceCurrency);

                    /**
                     * 判断参数 SourceCurrency 是否已赋值
                     * @return SourceCurrency 是否已赋值
                     * 
                     */
                    bool SourceCurrencyHasBeenSet() const;

                    /**
                     * 获取目的币种
                     * @return TargetCurrency 目的币种
                     * 
                     */
                    std::string GetTargetCurrency() const;

                    /**
                     * 设置目的币种
                     * @param _targetCurrency 目的币种
                     * 
                     */
                    void SetTargetCurrency(const std::string& _targetCurrency);

                    /**
                     * 判断参数 TargetCurrency 是否已赋值
                     * @return TargetCurrency 是否已赋值
                     * 
                     */
                    bool TargetCurrencyHasBeenSet() const;

                    /**
                     * 获取收款人类型（银行卡填"BANK_ACCOUNT"）
                     * @return PayeeType 收款人类型（银行卡填"BANK_ACCOUNT"）
                     * 
                     */
                    std::string GetPayeeType() const;

                    /**
                     * 设置收款人类型（银行卡填"BANK_ACCOUNT"）
                     * @param _payeeType 收款人类型（银行卡填"BANK_ACCOUNT"）
                     * 
                     */
                    void SetPayeeType(const std::string& _payeeType);

                    /**
                     * 判断参数 PayeeType 是否已赋值
                     * @return PayeeType 是否已赋值
                     * 
                     */
                    bool PayeeTypeHasBeenSet() const;

                    /**
                     * 获取收款人账号
                     * @return PayeeAccount 收款人账号
                     * 
                     */
                    std::string GetPayeeAccount() const;

                    /**
                     * 设置收款人账号
                     * @param _payeeAccount 收款人账号
                     * 
                     */
                    void SetPayeeAccount(const std::string& _payeeAccount);

                    /**
                     * 判断参数 PayeeAccount 是否已赋值
                     * @return PayeeAccount 是否已赋值
                     * 
                     */
                    bool PayeeAccountHasBeenSet() const;

                    /**
                     * 获取源币种金额
                     * @return SourceAmount 源币种金额
                     * 
                     */
                    double GetSourceAmount() const;

                    /**
                     * 设置源币种金额
                     * @param _sourceAmount 源币种金额
                     * 
                     */
                    void SetSourceAmount(const double& _sourceAmount);

                    /**
                     * 判断参数 SourceAmount 是否已赋值
                     * @return SourceAmount 是否已赋值
                     * 
                     */
                    bool SourceAmountHasBeenSet() const;

                    /**
                     * 获取目的金额
                     * @return TargetAmount 目的金额
                     * 
                     */
                    double GetTargetAmount() const;

                    /**
                     * 设置目的金额
                     * @param _targetAmount 目的金额
                     * 
                     */
                    void SetTargetAmount(const double& _targetAmount);

                    /**
                     * 判断参数 TargetAmount 是否已赋值
                     * @return TargetAmount 是否已赋值
                     * 
                     */
                    bool TargetAmountHasBeenSet() const;

                    /**
                     * 获取收款人姓名（PayeeType为"BANK_COUNT"时必填）
                     * @return PayeeName 收款人姓名（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    std::string GetPayeeName() const;

                    /**
                     * 设置收款人姓名（PayeeType为"BANK_COUNT"时必填）
                     * @param _payeeName 收款人姓名（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    void SetPayeeName(const std::string& _payeeName);

                    /**
                     * 判断参数 PayeeName 是否已赋值
                     * @return PayeeName 是否已赋值
                     * 
                     */
                    bool PayeeNameHasBeenSet() const;

                    /**
                     * 获取收款人地址（PayeeType为"BANK_COUNT"时必填）
                     * @return PayeeAddress 收款人地址（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    std::string GetPayeeAddress() const;

                    /**
                     * 设置收款人地址（PayeeType为"BANK_COUNT"时必填）
                     * @param _payeeAddress 收款人地址（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    void SetPayeeAddress(const std::string& _payeeAddress);

                    /**
                     * 判断参数 PayeeAddress 是否已赋值
                     * @return PayeeAddress 是否已赋值
                     * 
                     */
                    bool PayeeAddressHasBeenSet() const;

                    /**
                     * 获取收款人银行账号类型（PayeeType为"BANK_COUNT"时必填）
个人填"INDIVIDUAL"
企业填"CORPORATE"
                     * @return PayeeBankAccountType 收款人银行账号类型（PayeeType为"BANK_COUNT"时必填）
个人填"INDIVIDUAL"
企业填"CORPORATE"
                     * 
                     */
                    std::string GetPayeeBankAccountType() const;

                    /**
                     * 设置收款人银行账号类型（PayeeType为"BANK_COUNT"时必填）
个人填"INDIVIDUAL"
企业填"CORPORATE"
                     * @param _payeeBankAccountType 收款人银行账号类型（PayeeType为"BANK_COUNT"时必填）
个人填"INDIVIDUAL"
企业填"CORPORATE"
                     * 
                     */
                    void SetPayeeBankAccountType(const std::string& _payeeBankAccountType);

                    /**
                     * 判断参数 PayeeBankAccountType 是否已赋值
                     * @return PayeeBankAccountType 是否已赋值
                     * 
                     */
                    bool PayeeBankAccountTypeHasBeenSet() const;

                    /**
                     * 获取收款人国家或地区编码（PayeeType为"BANK_COUNT"时必填）
                     * @return PayeeCountryCode 收款人国家或地区编码（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    std::string GetPayeeCountryCode() const;

                    /**
                     * 设置收款人国家或地区编码（PayeeType为"BANK_COUNT"时必填）
                     * @param _payeeCountryCode 收款人国家或地区编码（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    void SetPayeeCountryCode(const std::string& _payeeCountryCode);

                    /**
                     * 判断参数 PayeeCountryCode 是否已赋值
                     * @return PayeeCountryCode 是否已赋值
                     * 
                     */
                    bool PayeeCountryCodeHasBeenSet() const;

                    /**
                     * 获取收款人开户银行名称（PayeeType为"BANK_COUNT"时必填）
                     * @return PayeeBankName 收款人开户银行名称（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    std::string GetPayeeBankName() const;

                    /**
                     * 设置收款人开户银行名称（PayeeType为"BANK_COUNT"时必填）
                     * @param _payeeBankName 收款人开户银行名称（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    void SetPayeeBankName(const std::string& _payeeBankName);

                    /**
                     * 判断参数 PayeeBankName 是否已赋值
                     * @return PayeeBankName 是否已赋值
                     * 
                     */
                    bool PayeeBankNameHasBeenSet() const;

                    /**
                     * 获取收款人开户银行地址（PayeeType为"BANK_COUNT"时必填）
                     * @return PayeeBankAddress 收款人开户银行地址（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    std::string GetPayeeBankAddress() const;

                    /**
                     * 设置收款人开户银行地址（PayeeType为"BANK_COUNT"时必填）
                     * @param _payeeBankAddress 收款人开户银行地址（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    void SetPayeeBankAddress(const std::string& _payeeBankAddress);

                    /**
                     * 判断参数 PayeeBankAddress 是否已赋值
                     * @return PayeeBankAddress 是否已赋值
                     * 
                     */
                    bool PayeeBankAddressHasBeenSet() const;

                    /**
                     * 获取收款人开户银行所在国家或地区编码（PayeeType为"BANK_COUNT"时必填）
                     * @return PayeeBankDistrict 收款人开户银行所在国家或地区编码（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    std::string GetPayeeBankDistrict() const;

                    /**
                     * 设置收款人开户银行所在国家或地区编码（PayeeType为"BANK_COUNT"时必填）
                     * @param _payeeBankDistrict 收款人开户银行所在国家或地区编码（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    void SetPayeeBankDistrict(const std::string& _payeeBankDistrict);

                    /**
                     * 判断参数 PayeeBankDistrict 是否已赋值
                     * @return PayeeBankDistrict 是否已赋值
                     * 
                     */
                    bool PayeeBankDistrictHasBeenSet() const;

                    /**
                     * 获取收款银行SwiftCode（PayeeType为"BANK_COUNT"时必填）
                     * @return PayeeBankSwiftCode 收款银行SwiftCode（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    std::string GetPayeeBankSwiftCode() const;

                    /**
                     * 设置收款银行SwiftCode（PayeeType为"BANK_COUNT"时必填）
                     * @param _payeeBankSwiftCode 收款银行SwiftCode（PayeeType为"BANK_COUNT"时必填）
                     * 
                     */
                    void SetPayeeBankSwiftCode(const std::string& _payeeBankSwiftCode);

                    /**
                     * 判断参数 PayeeBankSwiftCode 是否已赋值
                     * @return PayeeBankSwiftCode 是否已赋值
                     * 
                     */
                    bool PayeeBankSwiftCodeHasBeenSet() const;

                    /**
                     * 获取收款银行国际编码类型
                     * @return PayeeBankType 收款银行国际编码类型
                     * 
                     */
                    std::string GetPayeeBankType() const;

                    /**
                     * 设置收款银行国际编码类型
                     * @param _payeeBankType 收款银行国际编码类型
                     * 
                     */
                    void SetPayeeBankType(const std::string& _payeeBankType);

                    /**
                     * 判断参数 PayeeBankType 是否已赋值
                     * @return PayeeBankType 是否已赋值
                     * 
                     */
                    bool PayeeBankTypeHasBeenSet() const;

                    /**
                     * 获取收款银行国际编码
                     * @return PayeeBankCode 收款银行国际编码
                     * 
                     */
                    std::string GetPayeeBankCode() const;

                    /**
                     * 设置收款银行国际编码
                     * @param _payeeBankCode 收款银行国际编码
                     * 
                     */
                    void SetPayeeBankCode(const std::string& _payeeBankCode);

                    /**
                     * 判断参数 PayeeBankCode 是否已赋值
                     * @return PayeeBankCode 是否已赋值
                     * 
                     */
                    bool PayeeBankCodeHasBeenSet() const;

                    /**
                     * 获取收款人附言
                     * @return ReferenceForBeneficiary 收款人附言
                     * 
                     */
                    std::string GetReferenceForBeneficiary() const;

                    /**
                     * 设置收款人附言
                     * @param _referenceForBeneficiary 收款人附言
                     * 
                     */
                    void SetReferenceForBeneficiary(const std::string& _referenceForBeneficiary);

                    /**
                     * 判断参数 ReferenceForBeneficiary 是否已赋值
                     * @return ReferenceForBeneficiary 是否已赋值
                     * 
                     */
                    bool ReferenceForBeneficiaryHasBeenSet() const;

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
                     * 对接方汇出指令编号
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 定价币种
                     */
                    std::string m_pricingCurrency;
                    bool m_pricingCurrencyHasBeenSet;

                    /**
                     * 源币种
                     */
                    std::string m_sourceCurrency;
                    bool m_sourceCurrencyHasBeenSet;

                    /**
                     * 目的币种
                     */
                    std::string m_targetCurrency;
                    bool m_targetCurrencyHasBeenSet;

                    /**
                     * 收款人类型（银行卡填"BANK_ACCOUNT"）
                     */
                    std::string m_payeeType;
                    bool m_payeeTypeHasBeenSet;

                    /**
                     * 收款人账号
                     */
                    std::string m_payeeAccount;
                    bool m_payeeAccountHasBeenSet;

                    /**
                     * 源币种金额
                     */
                    double m_sourceAmount;
                    bool m_sourceAmountHasBeenSet;

                    /**
                     * 目的金额
                     */
                    double m_targetAmount;
                    bool m_targetAmountHasBeenSet;

                    /**
                     * 收款人姓名（PayeeType为"BANK_COUNT"时必填）
                     */
                    std::string m_payeeName;
                    bool m_payeeNameHasBeenSet;

                    /**
                     * 收款人地址（PayeeType为"BANK_COUNT"时必填）
                     */
                    std::string m_payeeAddress;
                    bool m_payeeAddressHasBeenSet;

                    /**
                     * 收款人银行账号类型（PayeeType为"BANK_COUNT"时必填）
个人填"INDIVIDUAL"
企业填"CORPORATE"
                     */
                    std::string m_payeeBankAccountType;
                    bool m_payeeBankAccountTypeHasBeenSet;

                    /**
                     * 收款人国家或地区编码（PayeeType为"BANK_COUNT"时必填）
                     */
                    std::string m_payeeCountryCode;
                    bool m_payeeCountryCodeHasBeenSet;

                    /**
                     * 收款人开户银行名称（PayeeType为"BANK_COUNT"时必填）
                     */
                    std::string m_payeeBankName;
                    bool m_payeeBankNameHasBeenSet;

                    /**
                     * 收款人开户银行地址（PayeeType为"BANK_COUNT"时必填）
                     */
                    std::string m_payeeBankAddress;
                    bool m_payeeBankAddressHasBeenSet;

                    /**
                     * 收款人开户银行所在国家或地区编码（PayeeType为"BANK_COUNT"时必填）
                     */
                    std::string m_payeeBankDistrict;
                    bool m_payeeBankDistrictHasBeenSet;

                    /**
                     * 收款银行SwiftCode（PayeeType为"BANK_COUNT"时必填）
                     */
                    std::string m_payeeBankSwiftCode;
                    bool m_payeeBankSwiftCodeHasBeenSet;

                    /**
                     * 收款银行国际编码类型
                     */
                    std::string m_payeeBankType;
                    bool m_payeeBankTypeHasBeenSet;

                    /**
                     * 收款银行国际编码
                     */
                    std::string m_payeeBankCode;
                    bool m_payeeBankCodeHasBeenSet;

                    /**
                     * 收款人附言
                     */
                    std::string m_referenceForBeneficiary;
                    bool m_referenceForBeneficiaryHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOUTWARDORDERREQUEST_H_
