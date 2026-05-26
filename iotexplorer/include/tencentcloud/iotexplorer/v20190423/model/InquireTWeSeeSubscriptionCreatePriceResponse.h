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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INQUIRETWESEESUBSCRIPTIONCREATEPRICERESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INQUIRETWESEESUBSCRIPTIONCREATEPRICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * InquireTWeSeeSubscriptionCreatePrice返回参数结构体
                */
                class InquireTWeSeeSubscriptionCreatePriceResponse : public AbstractModel
                {
                public:
                    InquireTWeSeeSubscriptionCreatePriceResponse();
                    ~InquireTWeSeeSubscriptionCreatePriceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取原价
                     * @return OriginalPrice 原价
                     * 
                     */
                    std::string GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取折后价
                     * @return DiscountPrice 折后价
                     * 
                     */
                    std::string GetDiscountPrice() const;

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

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

                private:

                    /**
                     * 原价
                     */
                    std::string m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 折后价
                     */
                    std::string m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * 币种
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INQUIRETWESEESUBSCRIPTIONCREATEPRICERESPONSE_H_
