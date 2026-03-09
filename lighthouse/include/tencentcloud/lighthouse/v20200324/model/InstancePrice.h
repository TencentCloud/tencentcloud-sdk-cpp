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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DetailPrice.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 关于Lighthouse Instance实例的价格信息。
                */
                class InstancePrice : public AbstractModel
                {
                public:
                    InstancePrice();
                    ~InstancePrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>套餐单价原价。</p><p>单位：元</p>
                     * @return OriginalBundlePrice <p>套餐单价原价。</p><p>单位：元</p>
                     * 
                     */
                    double GetOriginalBundlePrice() const;

                    /**
                     * 设置<p>套餐单价原价。</p><p>单位：元</p>
                     * @param _originalBundlePrice <p>套餐单价原价。</p><p>单位：元</p>
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
                     * 获取<p>原价。</p><p>单位：元</p>
                     * @return OriginalPrice <p>原价。</p><p>单位：元</p>
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置<p>原价。</p><p>单位：元</p>
                     * @param _originalPrice <p>原价。</p><p>单位：元</p>
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
                     * 获取<p>折扣。</p>
                     * @return Discount <p>折扣。</p>
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置<p>折扣。</p>
                     * @param _discount <p>折扣。</p>
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
                     * 获取<p>折后价。</p><p>单位：元</p>
                     * @return DiscountPrice <p>折后价。</p><p>单位：元</p>
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置<p>折后价。</p><p>单位：元</p>
                     * @param _discountPrice <p>折后价。</p><p>单位：元</p>
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
                     * 获取<p>价格货币单位。取值范围CNY:人民币。USD:美元。</p>
                     * @return Currency <p>价格货币单位。取值范围CNY:人民币。USD:美元。</p>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置<p>价格货币单位。取值范围CNY:人民币。USD:美元。</p>
                     * @param _currency <p>价格货币单位。取值范围CNY:人民币。USD:美元。</p>
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
                     * 获取<p>计费项目明细。</p>
                     * @return DetailPrices <p>计费项目明细。</p>
                     * 
                     */
                    std::vector<DetailPrice> GetDetailPrices() const;

                    /**
                     * 设置<p>计费项目明细。</p>
                     * @param _detailPrices <p>计费项目明细。</p>
                     * 
                     */
                    void SetDetailPrices(const std::vector<DetailPrice>& _detailPrices);

                    /**
                     * 判断参数 DetailPrices 是否已赋值
                     * @return DetailPrices 是否已赋值
                     * 
                     */
                    bool DetailPricesHasBeenSet() const;

                private:

                    /**
                     * <p>套餐单价原价。</p><p>单位：元</p>
                     */
                    double m_originalBundlePrice;
                    bool m_originalBundlePriceHasBeenSet;

                    /**
                     * <p>原价。</p><p>单位：元</p>
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * <p>折扣。</p>
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * <p>折后价。</p><p>单位：元</p>
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * <p>价格货币单位。取值范围CNY:人民币。USD:美元。</p>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * <p>计费项目明细。</p>
                     */
                    std::vector<DetailPrice> m_detailPrices;
                    bool m_detailPricesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICE_H_
