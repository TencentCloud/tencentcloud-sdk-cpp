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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_INQUIREVMPRICERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_INQUIREVMPRICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * InquireVmPrice返回参数结构体
                */
                class InquireVmPriceResponse : public AbstractModel
                {
                public:
                    InquireVmPriceResponse();
                    ~InquireVmPriceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取价格货币单位。取值范围CNY:人民币。USD:美元。
                     * @return Currency 价格货币单位。取值范围CNY:人民币。USD:美元。
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
                     * 获取原价（主机原始每月价格）
                     * @return OriginalPrice 原价（主机原始每月价格）
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
                     * 获取折扣率
                     * @return Discount 折扣率
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取折扣后每月价格
                     * @return DiscountPrice 折扣后每月价格
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取折扣前每天资源点
                     * @return OriginalCredits 折扣前每天资源点
                     * 
                     */
                    double GetOriginalCredits() const;

                    /**
                     * 判断参数 OriginalCredits 是否已赋值
                     * @return OriginalCredits 是否已赋值
                     * 
                     */
                    bool OriginalCreditsHasBeenSet() const;

                    /**
                     * 获取折扣后每天资源点
                     * @return DiscountCredits 折扣后每天资源点
                     * 
                     */
                    double GetDiscountCredits() const;

                    /**
                     * 判断参数 DiscountCredits 是否已赋值
                     * @return DiscountCredits 是否已赋值
                     * 
                     */
                    bool DiscountCreditsHasBeenSet() const;

                private:

                    /**
                     * 价格货币单位。取值范围CNY:人民币。USD:美元。
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 原价（主机原始每月价格）
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 折扣率
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 折扣后每月价格
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * 折扣前每天资源点
                     */
                    double m_originalCredits;
                    bool m_originalCreditsHasBeenSet;

                    /**
                     * 折扣后每天资源点
                     */
                    double m_discountCredits;
                    bool m_discountCreditsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_INQUIREVMPRICERESPONSE_H_
