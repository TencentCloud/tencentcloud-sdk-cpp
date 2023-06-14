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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYAPPLICATIONMATERIALREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYAPPLICATIONMATERIALREQUEST_H_

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
                * ApplyApplicationMaterial请求参数结构体
                */
                class ApplyApplicationMaterialRequest : public AbstractModel
                {
                public:
                    ApplyApplicationMaterialRequest();
                    ~ApplyApplicationMaterialRequest() = default;
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
                     * 获取申报流水号
                     * @return DeclareId 申报流水号
                     * 
                     */
                    std::string GetDeclareId() const;

                    /**
                     * 设置申报流水号
                     * @param _declareId 申报流水号
                     * 
                     */
                    void SetDeclareId(const std::string& _declareId);

                    /**
                     * 判断参数 DeclareId 是否已赋值
                     * @return DeclareId 是否已赋值
                     * 
                     */
                    bool DeclareIdHasBeenSet() const;

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
                     * 获取贸易编码
                     * @return TradeCode 贸易编码
                     * 
                     */
                    std::string GetTradeCode() const;

                    /**
                     * 设置贸易编码
                     * @param _tradeCode 贸易编码
                     * 
                     */
                    void SetTradeCode(const std::string& _tradeCode);

                    /**
                     * 判断参数 TradeCode 是否已赋值
                     * @return TradeCode 是否已赋值
                     * 
                     */
                    bool TradeCodeHasBeenSet() const;

                    /**
                     * 获取原申报流水号
                     * @return OriginalDeclareId 原申报流水号
                     * 
                     */
                    std::string GetOriginalDeclareId() const;

                    /**
                     * 设置原申报流水号
                     * @param _originalDeclareId 原申报流水号
                     * 
                     */
                    void SetOriginalDeclareId(const std::string& _originalDeclareId);

                    /**
                     * 判断参数 OriginalDeclareId 是否已赋值
                     * @return OriginalDeclareId 是否已赋值
                     * 
                     */
                    bool OriginalDeclareIdHasBeenSet() const;

                    /**
                     * 获取源金额
                     * @return SourceAmount 源金额
                     * 
                     */
                    int64_t GetSourceAmount() const;

                    /**
                     * 设置源金额
                     * @param _sourceAmount 源金额
                     * 
                     */
                    void SetSourceAmount(const int64_t& _sourceAmount);

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
                    int64_t GetTargetAmount() const;

                    /**
                     * 设置目的金额
                     * @param _targetAmount 目的金额
                     * 
                     */
                    void SetTargetAmount(const int64_t& _targetAmount);

                    /**
                     * 判断参数 TargetAmount 是否已赋值
                     * @return TargetAmount 是否已赋值
                     * 
                     */
                    bool TargetAmountHasBeenSet() const;

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
                     * 申报流水号
                     */
                    std::string m_declareId;
                    bool m_declareIdHasBeenSet;

                    /**
                     * 付款人ID
                     */
                    std::string m_payerId;
                    bool m_payerIdHasBeenSet;

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
                     * 贸易编码
                     */
                    std::string m_tradeCode;
                    bool m_tradeCodeHasBeenSet;

                    /**
                     * 原申报流水号
                     */
                    std::string m_originalDeclareId;
                    bool m_originalDeclareIdHasBeenSet;

                    /**
                     * 源金额
                     */
                    int64_t m_sourceAmount;
                    bool m_sourceAmountHasBeenSet;

                    /**
                     * 目的金额
                     */
                    int64_t m_targetAmount;
                    bool m_targetAmountHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYAPPLICATIONMATERIALREQUEST_H_
