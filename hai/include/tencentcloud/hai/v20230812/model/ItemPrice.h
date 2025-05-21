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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_ITEMPRICE_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_ITEMPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 套餐价格
                */
                class ItemPrice : public AbstractModel
                {
                public:
                    ItemPrice();
                    ~ItemPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原单价，元
                     * @return UnitPrice 原单价，元
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置原单价，元
                     * @param _unitPrice 原单价，元
                     * 
                     */
                    void SetUnitPrice(const double& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取折扣后单价，元
                     * @return DiscountUnitPrice 折扣后单价，元
                     * 
                     */
                    double GetDiscountUnitPrice() const;

                    /**
                     * 设置折扣后单价，元
                     * @param _discountUnitPrice 折扣后单价，元
                     * 
                     */
                    void SetDiscountUnitPrice(const double& _discountUnitPrice);

                    /**
                     * 判断参数 DiscountUnitPrice 是否已赋值
                     * @return DiscountUnitPrice 是否已赋值
                     * 
                     */
                    bool DiscountUnitPriceHasBeenSet() const;

                    /**
                     * 获取折扣
                     * @return Discount 折扣
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置折扣
                     * @param _discount 折扣
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
                     * 获取单位：时/月

                     * @return ChargeUnit 单位：时/月

                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置单位：时/月

                     * @param _chargeUnit 单位：时/月

                     * 
                     */
                    void SetChargeUnit(const std::string& _chargeUnit);

                    /**
                     * 判断参数 ChargeUnit 是否已赋值
                     * @return ChargeUnit 是否已赋值
                     * 
                     */
                    bool ChargeUnitHasBeenSet() const;

                    /**
                     * 获取商品数量
                     * @return Amount 商品数量
                     * 
                     */
                    uint64_t GetAmount() const;

                    /**
                     * 设置商品数量
                     * @param _amount 商品数量
                     * 
                     */
                    void SetAmount(const uint64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                private:

                    /**
                     * 原单价，元
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 折扣后单价，元
                     */
                    double m_discountUnitPrice;
                    bool m_discountUnitPriceHasBeenSet;

                    /**
                     * 折扣
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 单位：时/月

                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * 商品数量
                     */
                    uint64_t m_amount;
                    bool m_amountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_ITEMPRICE_H_
