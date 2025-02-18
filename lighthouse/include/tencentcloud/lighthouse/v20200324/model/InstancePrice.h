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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 关于Lighthouse Instance实例的价格信息
                */
                class InstancePrice : public AbstractModel
                {
                public:
                    InstancePrice();
                    ~InstancePrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取套餐单价原价。
                     * @return OriginalBundlePrice 套餐单价原价。
                     * 
                     */
                    double GetOriginalBundlePrice() const;

                    /**
                     * 设置套餐单价原价。
                     * @param _originalBundlePrice 套餐单价原价。
                     * 
                     */
                    void SetOriginalBundlePrice(const double& _originalBundlePrice);

                    /**
                     * 判断参数 OriginalBundlePrice 是否已赋值
                     * @return OriginalBundlePrice 是否已赋值
                     * 
                     */
                    bool OriginalBundlePriceHasBeenSet() const;

                    /**
                     * 获取原价。
                     * @return OriginalPrice 原价。
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置原价。
                     * @param _originalPrice 原价。
                     * 
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取折扣。
                     * @return Discount 折扣。
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置折扣。
                     * @param _discount 折扣。
                     * 
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取折后价。
                     * @return DiscountPrice 折后价。
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置折后价。
                     * @param _discountPrice 折后价。
                     * 
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取价格货币单位。取值范围CNY:人民币。USD:美元。
                     * @return Currency 价格货币单位。取值范围CNY:人民币。USD:美元。
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置价格货币单位。取值范围CNY:人民币。USD:美元。
                     * @param _currency 价格货币单位。取值范围CNY:人民币。USD:美元。
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * 套餐单价原价。
                     */
                    double m_originalBundlePrice;
                    bool m_originalBundlePriceHasBeenSet;

                    /**
                     * 原价。
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 折扣。
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 折后价。
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * 价格货币单位。取值范围CNY:人民币。USD:美元。
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICE_H_
