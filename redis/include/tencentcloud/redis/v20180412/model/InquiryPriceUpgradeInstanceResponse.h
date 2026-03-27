/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICEUPGRADEINSTANCERESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICEUPGRADEINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * InquiryPriceUpgradeInstance返回参数结构体
                */
                class InquiryPriceUpgradeInstanceResponse : public AbstractModel
                {
                public:
                    InquiryPriceUpgradeInstanceResponse();
                    ~InquiryPriceUpgradeInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>折扣后价格</p>
                     * @return Price <p>折扣后价格</p>
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取<p>高精度折扣后价格</p>
                     * @return HighPrecisionPrice <p>高精度折扣后价格</p>
                     * 
                     */
                    double GetHighPrecisionPrice() const;

                    /**
                     * 判断参数 HighPrecisionPrice 是否已赋值
                     * @return HighPrecisionPrice 是否已赋值
                     * 
                     */
                    bool HighPrecisionPriceHasBeenSet() const;

                    /**
                     * 获取<p>原价</p>
                     * @return OriginalPrice <p>原价</p>
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取<p>高精度原价</p>
                     * @return HighPrecisionOriginalPrice <p>高精度原价</p>
                     * 
                     */
                    double GetHighPrecisionOriginalPrice() const;

                    /**
                     * 判断参数 HighPrecisionOriginalPrice 是否已赋值
                     * @return HighPrecisionOriginalPrice 是否已赋值
                     * 
                     */
                    bool HighPrecisionOriginalPriceHasBeenSet() const;

                    /**
                     * 获取<p>币种</p>
                     * @return Currency <p>币种</p>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取<p>价格金额单位</p><ul><li>pent: 分</li><li>microPent: 微分</li></ul>
                     * @return AmountUnit <p>价格金额单位</p><ul><li>pent: 分</li><li>microPent: 微分</li></ul>
                     * 
                     */
                    std::string GetAmountUnit() const;

                    /**
                     * 判断参数 AmountUnit 是否已赋值
                     * @return AmountUnit 是否已赋值
                     * 
                     */
                    bool AmountUnitHasBeenSet() const;

                private:

                    /**
                     * <p>折扣后价格</p>
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * <p>高精度折扣后价格</p>
                     */
                    double m_highPrecisionPrice;
                    bool m_highPrecisionPriceHasBeenSet;

                    /**
                     * <p>原价</p>
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * <p>高精度原价</p>
                     */
                    double m_highPrecisionOriginalPrice;
                    bool m_highPrecisionOriginalPriceHasBeenSet;

                    /**
                     * <p>币种</p>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * <p>价格金额单位</p><ul><li>pent: 分</li><li>microPent: 微分</li></ul>
                     */
                    std::string m_amountUnit;
                    bool m_amountUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICEUPGRADEINSTANCERESPONSE_H_
