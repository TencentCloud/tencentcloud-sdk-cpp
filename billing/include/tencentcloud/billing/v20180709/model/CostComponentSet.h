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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_COSTCOMPONENTSET_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_COSTCOMPONENTSET_H_

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
                * 消耗组件明细
                */
                class CostComponentSet : public AbstractModel
                {
                public:
                    CostComponentSet();
                    ~CostComponentSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件类型名称
                     * @return ComponentCodeName 组件类型名称
                     * 
                     */
                    std::string GetComponentCodeName() const;

                    /**
                     * 设置组件类型名称
                     * @param _componentCodeName 组件类型名称
                     * 
                     */
                    void SetComponentCodeName(const std::string& _componentCodeName);

                    /**
                     * 判断参数 ComponentCodeName 是否已赋值
                     * @return ComponentCodeName 是否已赋值
                     * 
                     */
                    bool ComponentCodeNameHasBeenSet() const;

                    /**
                     * 获取组件名称
                     * @return ItemCodeName 组件名称
                     * 
                     */
                    std::string GetItemCodeName() const;

                    /**
                     * 设置组件名称
                     * @param _itemCodeName 组件名称
                     * 
                     */
                    void SetItemCodeName(const std::string& _itemCodeName);

                    /**
                     * 判断参数 ItemCodeName 是否已赋值
                     * @return ItemCodeName 是否已赋值
                     * 
                     */
                    bool ItemCodeNameHasBeenSet() const;

                    /**
                     * 获取刊例价
                     * @return SinglePrice 刊例价
                     * 
                     */
                    std::string GetSinglePrice() const;

                    /**
                     * 设置刊例价
                     * @param _singlePrice 刊例价
                     * 
                     */
                    void SetSinglePrice(const std::string& _singlePrice);

                    /**
                     * 判断参数 SinglePrice 是否已赋值
                     * @return SinglePrice 是否已赋值
                     * 
                     */
                    bool SinglePriceHasBeenSet() const;

                    /**
                     * 获取刊例价单位
                     * @return PriceUnit 刊例价单位
                     * 
                     */
                    std::string GetPriceUnit() const;

                    /**
                     * 设置刊例价单位
                     * @param _priceUnit 刊例价单位
                     * 
                     */
                    void SetPriceUnit(const std::string& _priceUnit);

                    /**
                     * 判断参数 PriceUnit 是否已赋值
                     * @return PriceUnit 是否已赋值
                     * 
                     */
                    bool PriceUnitHasBeenSet() const;

                    /**
                     * 获取用量
                     * @return UsedAmount 用量
                     * 
                     */
                    std::string GetUsedAmount() const;

                    /**
                     * 设置用量
                     * @param _usedAmount 用量
                     * 
                     */
                    void SetUsedAmount(const std::string& _usedAmount);

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     * 
                     */
                    bool UsedAmountHasBeenSet() const;

                    /**
                     * 获取用量单位
                     * @return UsedAmountUnit 用量单位
                     * 
                     */
                    std::string GetUsedAmountUnit() const;

                    /**
                     * 设置用量单位
                     * @param _usedAmountUnit 用量单位
                     * 
                     */
                    void SetUsedAmountUnit(const std::string& _usedAmountUnit);

                    /**
                     * 判断参数 UsedAmountUnit 是否已赋值
                     * @return UsedAmountUnit 是否已赋值
                     * 
                     */
                    bool UsedAmountUnitHasBeenSet() const;

                    /**
                     * 获取原价
                     * @return Cost 原价
                     * 
                     */
                    std::string GetCost() const;

                    /**
                     * 设置原价
                     * @param _cost 原价
                     * 
                     */
                    void SetCost(const std::string& _cost);

                    /**
                     * 判断参数 Cost 是否已赋值
                     * @return Cost 是否已赋值
                     * 
                     */
                    bool CostHasBeenSet() const;

                    /**
                     * 获取折扣
                     * @return Discount 折扣
                     * 
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置折扣
                     * @param _discount 折扣
                     * 
                     */
                    void SetDiscount(const std::string& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取折后价
                     * @return RealCost 折后价
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置折后价
                     * @param _realCost 折后价
                     * 
                     */
                    void SetRealCost(const std::string& _realCost);

                    /**
                     * 判断参数 RealCost 是否已赋值
                     * @return RealCost 是否已赋值
                     * 
                     */
                    bool RealCostHasBeenSet() const;

                    /**
                     * 获取代金券支付金额
                     * @return VoucherPayAmount 代金券支付金额
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置代金券支付金额
                     * @param _voucherPayAmount 代金券支付金额
                     * 
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     * 
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取现金支付金额
                     * @return CashPayAmount 现金支付金额
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置现金支付金额
                     * @param _cashPayAmount 现金支付金额
                     * 
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     * 
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取赠送金支付金额
                     * @return IncentivePayAmount 赠送金支付金额
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置赠送金支付金额
                     * @param _incentivePayAmount 赠送金支付金额
                     * 
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     * 
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                private:

                    /**
                     * 组件类型名称
                     */
                    std::string m_componentCodeName;
                    bool m_componentCodeNameHasBeenSet;

                    /**
                     * 组件名称
                     */
                    std::string m_itemCodeName;
                    bool m_itemCodeNameHasBeenSet;

                    /**
                     * 刊例价
                     */
                    std::string m_singlePrice;
                    bool m_singlePriceHasBeenSet;

                    /**
                     * 刊例价单位
                     */
                    std::string m_priceUnit;
                    bool m_priceUnitHasBeenSet;

                    /**
                     * 用量
                     */
                    std::string m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * 用量单位
                     */
                    std::string m_usedAmountUnit;
                    bool m_usedAmountUnitHasBeenSet;

                    /**
                     * 原价
                     */
                    std::string m_cost;
                    bool m_costHasBeenSet;

                    /**
                     * 折扣
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 折后价
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
                     * 赠送金支付金额
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_COSTCOMPONENTSET_H_
