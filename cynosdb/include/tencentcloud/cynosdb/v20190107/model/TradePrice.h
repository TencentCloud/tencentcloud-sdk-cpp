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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRADEPRICE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRADEPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 计费询价结果
                */
                class TradePrice : public AbstractModel
                {
                public:
                    TradePrice();
                    ~TradePrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预付费模式下资源总价，不包含优惠，单位:分
                     * @return TotalPrice 预付费模式下资源总价，不包含优惠，单位:分
                     * 
                     */
                    int64_t GetTotalPrice() const;

                    /**
                     * 设置预付费模式下资源总价，不包含优惠，单位:分
                     * @param _totalPrice 预付费模式下资源总价，不包含优惠，单位:分
                     * 
                     */
                    void SetTotalPrice(const int64_t& _totalPrice);

                    /**
                     * 判断参数 TotalPrice 是否已赋值
                     * @return TotalPrice 是否已赋值
                     * 
                     */
                    bool TotalPriceHasBeenSet() const;

                    /**
                     * 获取总的折扣，100表示100%不打折
                     * @return Discount 总的折扣，100表示100%不打折
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置总的折扣，100表示100%不打折
                     * @param _discount 总的折扣，100表示100%不打折
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
                     * 获取预付费模式下的优惠后总价, 单位: 分,例如用户享有折扣 =TotalPrice × Discount
                     * @return TotalPriceDiscount 预付费模式下的优惠后总价, 单位: 分,例如用户享有折扣 =TotalPrice × Discount
                     * 
                     */
                    int64_t GetTotalPriceDiscount() const;

                    /**
                     * 设置预付费模式下的优惠后总价, 单位: 分,例如用户享有折扣 =TotalPrice × Discount
                     * @param _totalPriceDiscount 预付费模式下的优惠后总价, 单位: 分,例如用户享有折扣 =TotalPrice × Discount
                     * 
                     */
                    void SetTotalPriceDiscount(const int64_t& _totalPriceDiscount);

                    /**
                     * 判断参数 TotalPriceDiscount 是否已赋值
                     * @return TotalPriceDiscount 是否已赋值
                     * 
                     */
                    bool TotalPriceDiscountHasBeenSet() const;

                    /**
                     * 获取后付费模式下的单位资源价格，不包含优惠，单位:分
                     * @return UnitPrice 后付费模式下的单位资源价格，不包含优惠，单位:分
                     * 
                     */
                    int64_t GetUnitPrice() const;

                    /**
                     * 设置后付费模式下的单位资源价格，不包含优惠，单位:分
                     * @param _unitPrice 后付费模式下的单位资源价格，不包含优惠，单位:分
                     * 
                     */
                    void SetUnitPrice(const int64_t& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取优惠后后付费模式下的单位资源价格, 单位: 分,例如用户享有折扣=UnitPricet × Discount
                     * @return UnitPriceDiscount 优惠后后付费模式下的单位资源价格, 单位: 分,例如用户享有折扣=UnitPricet × Discount
                     * 
                     */
                    int64_t GetUnitPriceDiscount() const;

                    /**
                     * 设置优惠后后付费模式下的单位资源价格, 单位: 分,例如用户享有折扣=UnitPricet × Discount
                     * @param _unitPriceDiscount 优惠后后付费模式下的单位资源价格, 单位: 分,例如用户享有折扣=UnitPricet × Discount
                     * 
                     */
                    void SetUnitPriceDiscount(const int64_t& _unitPriceDiscount);

                    /**
                     * 判断参数 UnitPriceDiscount 是否已赋值
                     * @return UnitPriceDiscount 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountHasBeenSet() const;

                    /**
                     * 获取计费价格单位
                     * @return ChargeUnit 计费价格单位
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置计费价格单位
                     * @param _chargeUnit 计费价格单位
                     * 
                     */
                    void SetChargeUnit(const std::string& _chargeUnit);

                    /**
                     * 判断参数 ChargeUnit 是否已赋值
                     * @return ChargeUnit 是否已赋值
                     * 
                     */
                    bool ChargeUnitHasBeenSet() const;

                private:

                    /**
                     * 预付费模式下资源总价，不包含优惠，单位:分
                     */
                    int64_t m_totalPrice;
                    bool m_totalPriceHasBeenSet;

                    /**
                     * 总的折扣，100表示100%不打折
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 预付费模式下的优惠后总价, 单位: 分,例如用户享有折扣 =TotalPrice × Discount
                     */
                    int64_t m_totalPriceDiscount;
                    bool m_totalPriceDiscountHasBeenSet;

                    /**
                     * 后付费模式下的单位资源价格，不包含优惠，单位:分
                     */
                    int64_t m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 优惠后后付费模式下的单位资源价格, 单位: 分,例如用户享有折扣=UnitPricet × Discount
                     */
                    int64_t m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * 计费价格单位
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRADEPRICE_H_
