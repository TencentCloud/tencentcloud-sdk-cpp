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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYTRADEDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYTRADEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 提交贸易材料结果
                */
                class ApplyTradeData : public AbstractModel
                {
                public:
                    ApplyTradeData();
                    ~ApplyTradeData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商户号
                     * @return MerchantId 商户号
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户号
                     * @param _merchantId 商户号
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
                     * 获取贸易材料流水号
                     * @return TradeFileId 贸易材料流水号
                     * 
                     */
                    std::string GetTradeFileId() const;

                    /**
                     * 设置贸易材料流水号
                     * @param _tradeFileId 贸易材料流水号
                     * 
                     */
                    void SetTradeFileId(const std::string& _tradeFileId);

                    /**
                     * 判断参数 TradeFileId 是否已赋值
                     * @return TradeFileId 是否已赋值
                     * 
                     */
                    bool TradeFileIdHasBeenSet() const;

                    /**
                     * 获取交易币种
                     * @return TradeCurrency 交易币种
                     * 
                     */
                    std::string GetTradeCurrency() const;

                    /**
                     * 设置交易币种
                     * @param _tradeCurrency 交易币种
                     * 
                     */
                    void SetTradeCurrency(const std::string& _tradeCurrency);

                    /**
                     * 判断参数 TradeCurrency 是否已赋值
                     * @return TradeCurrency 是否已赋值
                     * 
                     */
                    bool TradeCurrencyHasBeenSet() const;

                    /**
                     * 获取交易金额
                     * @return TradeAmount 交易金额
                     * 
                     */
                    std::string GetTradeAmount() const;

                    /**
                     * 设置交易金额
                     * @param _tradeAmount 交易金额
                     * 
                     */
                    void SetTradeAmount(const std::string& _tradeAmount);

                    /**
                     * 判断参数 TradeAmount 是否已赋值
                     * @return TradeAmount 是否已赋值
                     * 
                     */
                    bool TradeAmountHasBeenSet() const;

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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 商户号
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 贸易材料流水号
                     */
                    std::string m_tradeFileId;
                    bool m_tradeFileIdHasBeenSet;

                    /**
                     * 交易币种
                     */
                    std::string m_tradeCurrency;
                    bool m_tradeCurrencyHasBeenSet;

                    /**
                     * 交易金额
                     */
                    std::string m_tradeAmount;
                    bool m_tradeAmountHasBeenSet;

                    /**
                     * 付款人ID
                     */
                    std::string m_payerId;
                    bool m_payerIdHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYTRADEDATA_H_
