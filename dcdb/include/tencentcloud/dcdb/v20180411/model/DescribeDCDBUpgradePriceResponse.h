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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBUPGRADEPRICERESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBUPGRADEPRICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDCDBUpgradePrice返回参数结构体
                */
                class DescribeDCDBUpgradePriceResponse : public AbstractModel
                {
                public:
                    DescribeDCDBUpgradePriceResponse();
                    ~DescribeDCDBUpgradePriceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取原价  
* 单位：默认为分，若请求参数带有AmountUnit，参考AmountUnit描述
* 币种：国内站为人民币，国际站为美元
                     * @return OriginalPrice 原价  
* 单位：默认为分，若请求参数带有AmountUnit，参考AmountUnit描述
* 币种：国内站为人民币，国际站为美元
                     * 
                     */
                    int64_t GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取实际价格，受折扣等影响，可能和原价不同
* 单位：默认为分，若请求参数带有AmountUnit，参考AmountUnit描述
* 币种：国内站人民币，国际站美元
                     * @return Price 实际价格，受折扣等影响，可能和原价不同
* 单位：默认为分，若请求参数带有AmountUnit，参考AmountUnit描述
* 币种：国内站人民币，国际站美元
                     * 
                     */
                    int64_t GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取变配明细计算公式
                     * @return Formula 变配明细计算公式
                     * 
                     */
                    std::string GetFormula() const;

                    /**
                     * 判断参数 Formula 是否已赋值
                     * @return Formula 是否已赋值
                     * 
                     */
                    bool FormulaHasBeenSet() const;

                private:

                    /**
                     * 原价  
* 单位：默认为分，若请求参数带有AmountUnit，参考AmountUnit描述
* 币种：国内站为人民币，国际站为美元
                     */
                    int64_t m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 实际价格，受折扣等影响，可能和原价不同
* 单位：默认为分，若请求参数带有AmountUnit，参考AmountUnit描述
* 币种：国内站人民币，国际站美元
                     */
                    int64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 变配明细计算公式
                     */
                    std::string m_formula;
                    bool m_formulaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBUPGRADEPRICERESPONSE_H_
