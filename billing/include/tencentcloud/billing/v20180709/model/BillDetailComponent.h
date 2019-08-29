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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILCOMPONENT_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 账单明细组件对象
                */
                class BillDetailComponent : public AbstractModel
                {
                public:
                    BillDetailComponent();
                    ~BillDetailComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件类型:资源组件类型的名称，如内存、硬盘等
                     * @return ComponentCodeName 组件类型:资源组件类型的名称，如内存、硬盘等
                     */
                    std::string GetComponentCodeName() const;

                    /**
                     * 设置组件类型:资源组件类型的名称，如内存、硬盘等
                     * @param ComponentCodeName 组件类型:资源组件类型的名称，如内存、硬盘等
                     */
                    void SetComponentCodeName(const std::string& _componentCodeName);

                    /**
                     * 判断参数 ComponentCodeName 是否已赋值
                     * @return ComponentCodeName 是否已赋值
                     */
                    bool ComponentCodeNameHasBeenSet() const;

                    /**
                     * 获取组件名称:资源组件的名称，如云数据库MySQL-内存等
                     * @return ItemCodeName 组件名称:资源组件的名称，如云数据库MySQL-内存等
                     */
                    std::string GetItemCodeName() const;

                    /**
                     * 设置组件名称:资源组件的名称，如云数据库MySQL-内存等
                     * @param ItemCodeName 组件名称:资源组件的名称，如云数据库MySQL-内存等
                     */
                    void SetItemCodeName(const std::string& _itemCodeName);

                    /**
                     * 判断参数 ItemCodeName 是否已赋值
                     * @return ItemCodeName 是否已赋值
                     */
                    bool ItemCodeNameHasBeenSet() const;

                    /**
                     * 获取组件刊例价:资源组件的原始价格，保持原始粒度
                     * @return SinglePrice 组件刊例价:资源组件的原始价格，保持原始粒度
                     */
                    std::string GetSinglePrice() const;

                    /**
                     * 设置组件刊例价:资源组件的原始价格，保持原始粒度
                     * @param SinglePrice 组件刊例价:资源组件的原始价格，保持原始粒度
                     */
                    void SetSinglePrice(const std::string& _singlePrice);

                    /**
                     * 判断参数 SinglePrice 是否已赋值
                     * @return SinglePrice 是否已赋值
                     */
                    bool SinglePriceHasBeenSet() const;

                    /**
                     * 获取组件指定价
                     * @return SpecifiedPrice 组件指定价
                     */
                    std::string GetSpecifiedPrice() const;

                    /**
                     * 设置组件指定价
                     * @param SpecifiedPrice 组件指定价
                     */
                    void SetSpecifiedPrice(const std::string& _specifiedPrice);

                    /**
                     * 判断参数 SpecifiedPrice 是否已赋值
                     * @return SpecifiedPrice 是否已赋值
                     */
                    bool SpecifiedPriceHasBeenSet() const;

                    /**
                     * 获取价格单位
                     * @return PriceUnit 价格单位
                     */
                    std::string GetPriceUnit() const;

                    /**
                     * 设置价格单位
                     * @param PriceUnit 价格单位
                     */
                    void SetPriceUnit(const std::string& _priceUnit);

                    /**
                     * 判断参数 PriceUnit 是否已赋值
                     * @return PriceUnit 是否已赋值
                     */
                    bool PriceUnitHasBeenSet() const;

                    /**
                     * 获取组件用量
                     * @return UsedAmount 组件用量
                     */
                    std::string GetUsedAmount() const;

                    /**
                     * 设置组件用量
                     * @param UsedAmount 组件用量
                     */
                    void SetUsedAmount(const std::string& _usedAmount);

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     */
                    bool UsedAmountHasBeenSet() const;

                    /**
                     * 获取组件用量单位
                     * @return UsedAmountUnit 组件用量单位
                     */
                    std::string GetUsedAmountUnit() const;

                    /**
                     * 设置组件用量单位
                     * @param UsedAmountUnit 组件用量单位
                     */
                    void SetUsedAmountUnit(const std::string& _usedAmountUnit);

                    /**
                     * 判断参数 UsedAmountUnit 是否已赋值
                     * @return UsedAmountUnit 是否已赋值
                     */
                    bool UsedAmountUnitHasBeenSet() const;

                    /**
                     * 获取使用时长
                     * @return TimeSpan 使用时长
                     */
                    std::string GetTimeSpan() const;

                    /**
                     * 设置使用时长
                     * @param TimeSpan 使用时长
                     */
                    void SetTimeSpan(const std::string& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取时长单位
                     * @return TimeUnitName 时长单位
                     */
                    std::string GetTimeUnitName() const;

                    /**
                     * 设置时长单位
                     * @param TimeUnitName 时长单位
                     */
                    void SetTimeUnitName(const std::string& _timeUnitName);

                    /**
                     * 判断参数 TimeUnitName 是否已赋值
                     * @return TimeUnitName 是否已赋值
                     */
                    bool TimeUnitNameHasBeenSet() const;

                    /**
                     * 获取组件原价
                     * @return Cost 组件原价
                     */
                    std::string GetCost() const;

                    /**
                     * 设置组件原价
                     * @param Cost 组件原价
                     */
                    void SetCost(const std::string& _cost);

                    /**
                     * 判断参数 Cost 是否已赋值
                     * @return Cost 是否已赋值
                     */
                    bool CostHasBeenSet() const;

                    /**
                     * 获取折扣率
                     * @return Discount 折扣率
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置折扣率
                     * @param Discount 折扣率
                     */
                    void SetDiscount(const std::string& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取优惠类型
                     * @return ReduceType 优惠类型
                     */
                    std::string GetReduceType() const;

                    /**
                     * 设置优惠类型
                     * @param ReduceType 优惠类型
                     */
                    void SetReduceType(const std::string& _reduceType);

                    /**
                     * 判断参数 ReduceType 是否已赋值
                     * @return ReduceType 是否已赋值
                     */
                    bool ReduceTypeHasBeenSet() const;

                    /**
                     * 获取优惠后总价
                     * @return RealCost 优惠后总价
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置优惠后总价
                     * @param RealCost 优惠后总价
                     */
                    void SetRealCost(const std::string& _realCost);

                    /**
                     * 判断参数 RealCost 是否已赋值
                     * @return RealCost 是否已赋值
                     */
                    bool RealCostHasBeenSet() const;

                    /**
                     * 获取代金券支付金额
                     * @return VoucherPayAmount 代金券支付金额
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置代金券支付金额
                     * @param VoucherPayAmount 代金券支付金额
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取现金支付金额
                     * @return CashPayAmount 现金支付金额
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置现金支付金额
                     * @param CashPayAmount 现金支付金额
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取赠送账户支付金额
                     * @return IncentivePayAmount 赠送账户支付金额
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置赠送账户支付金额
                     * @param IncentivePayAmount 赠送账户支付金额
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                private:

                    /**
                     * 组件类型:资源组件类型的名称，如内存、硬盘等
                     */
                    std::string m_componentCodeName;
                    bool m_componentCodeNameHasBeenSet;

                    /**
                     * 组件名称:资源组件的名称，如云数据库MySQL-内存等
                     */
                    std::string m_itemCodeName;
                    bool m_itemCodeNameHasBeenSet;

                    /**
                     * 组件刊例价:资源组件的原始价格，保持原始粒度
                     */
                    std::string m_singlePrice;
                    bool m_singlePriceHasBeenSet;

                    /**
                     * 组件指定价
                     */
                    std::string m_specifiedPrice;
                    bool m_specifiedPriceHasBeenSet;

                    /**
                     * 价格单位
                     */
                    std::string m_priceUnit;
                    bool m_priceUnitHasBeenSet;

                    /**
                     * 组件用量
                     */
                    std::string m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * 组件用量单位
                     */
                    std::string m_usedAmountUnit;
                    bool m_usedAmountUnitHasBeenSet;

                    /**
                     * 使用时长
                     */
                    std::string m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 时长单位
                     */
                    std::string m_timeUnitName;
                    bool m_timeUnitNameHasBeenSet;

                    /**
                     * 组件原价
                     */
                    std::string m_cost;
                    bool m_costHasBeenSet;

                    /**
                     * 折扣率
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 优惠类型
                     */
                    std::string m_reduceType;
                    bool m_reduceTypeHasBeenSet;

                    /**
                     * 优惠后总价
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * 代金券支付金额
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * 现金支付金额
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * 赠送账户支付金额
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILCOMPONENT_H_
