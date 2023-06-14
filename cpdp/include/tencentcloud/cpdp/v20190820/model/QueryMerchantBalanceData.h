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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTBALANCEDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTBALANCEDATA_H_

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
                * 对接账户余额查询数据
                */
                class QueryMerchantBalanceData : public AbstractModel
                {
                public:
                    QueryMerchantBalanceData();
                    ~QueryMerchantBalanceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取余额币种
                     * @return Currency 余额币种
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置余额币种
                     * @param _currency 余额币种
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取账户余额
                     * @return Balance 账户余额
                     * 
                     */
                    std::string GetBalance() const;

                    /**
                     * 设置账户余额
                     * @param _balance 账户余额
                     * 
                     */
                    void SetBalance(const std::string& _balance);

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取商户ID
                     * @return MerchantId 商户ID
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户ID
                     * @param _merchantId 商户ID
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                private:

                    /**
                     * 余额币种
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 账户余额
                     */
                    std::string m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * 商户ID
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTBALANCEDATA_H_
