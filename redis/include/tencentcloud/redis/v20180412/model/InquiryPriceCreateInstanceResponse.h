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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCERESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCERESPONSE_H_

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
                * InquiryPriceCreateInstance返回参数结构体
                */
                class InquiryPriceCreateInstanceResponse : public AbstractModel
                {
                public:
                    InquiryPriceCreateInstanceResponse();
                    ~InquiryPriceCreateInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取价格
                     * @return Price 价格
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
                     * 获取高精度价格
                     * @return HighPrecisionPrice 高精度价格
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
                     * 获取币种
                     * @return Currency 币种
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
                     * 获取价格金额单位

- pent: 分
- microPent: 微分
                     * @return AmountUnit 价格金额单位

- pent: 分
- microPent: 微分
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
                     * 价格
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 高精度价格
                     */
                    double m_highPrecisionPrice;
                    bool m_highPrecisionPriceHasBeenSet;

                    /**
                     * 币种
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 价格金额单位

- pent: 分
- microPent: 微分
                     */
                    std::string m_amountUnit;
                    bool m_amountUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INQUIRYPRICECREATEINSTANCERESPONSE_H_
