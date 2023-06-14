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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYFLEXSETTLEMENTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYFLEXSETTLEMENTRESULT_H_

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
                * 结算结果
                */
                class ApplyFlexSettlementResult : public AbstractModel
                {
                public:
                    ApplyFlexSettlementResult();
                    ~ApplyFlexSettlementResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单ID
                     * @return OrderId 订单ID
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单ID
                     * @param _orderId 订单ID
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取税前金额
                     * @return AmountBeforeTax 税前金额
                     * 
                     */
                    std::string GetAmountBeforeTax() const;

                    /**
                     * 设置税前金额
                     * @param _amountBeforeTax 税前金额
                     * 
                     */
                    void SetAmountBeforeTax(const std::string& _amountBeforeTax);

                    /**
                     * 判断参数 AmountBeforeTax 是否已赋值
                     * @return AmountBeforeTax 是否已赋值
                     * 
                     */
                    bool AmountBeforeTaxHasBeenSet() const;

                    /**
                     * 获取税后金额
                     * @return AmountAfterTax 税后金额
                     * 
                     */
                    std::string GetAmountAfterTax() const;

                    /**
                     * 设置税后金额
                     * @param _amountAfterTax 税后金额
                     * 
                     */
                    void SetAmountAfterTax(const std::string& _amountAfterTax);

                    /**
                     * 判断参数 AmountAfterTax 是否已赋值
                     * @return AmountAfterTax 是否已赋值
                     * 
                     */
                    bool AmountAfterTaxHasBeenSet() const;

                    /**
                     * 获取税金
                     * @return Tax 税金
                     * 
                     */
                    std::string GetTax() const;

                    /**
                     * 设置税金
                     * @param _tax 税金
                     * 
                     */
                    void SetTax(const std::string& _tax);

                    /**
                     * 判断参数 Tax 是否已赋值
                     * @return Tax 是否已赋值
                     * 
                     */
                    bool TaxHasBeenSet() const;

                private:

                    /**
                     * 订单ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 税前金额
                     */
                    std::string m_amountBeforeTax;
                    bool m_amountBeforeTaxHasBeenSet;

                    /**
                     * 税后金额
                     */
                    std::string m_amountAfterTax;
                    bool m_amountAfterTaxHasBeenSet;

                    /**
                     * 税金
                     */
                    std::string m_tax;
                    bool m_taxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYFLEXSETTLEMENTRESULT_H_
