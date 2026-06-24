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
                     * 获取<p>组件类型名称</p>
                     * @return ComponentCodeName <p>组件类型名称</p>
                     * 
                     */
                    std::string GetComponentCodeName() const;

                    /**
                     * 设置<p>组件类型名称</p>
                     * @param _componentCodeName <p>组件类型名称</p>
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
                     * 获取<p>组件名称</p>
                     * @return ItemCodeName <p>组件名称</p>
                     * 
                     */
                    std::string GetItemCodeName() const;

                    /**
                     * 设置<p>组件名称</p>
                     * @param _itemCodeName <p>组件名称</p>
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
                     * 获取<p>刊例价</p>
                     * @return SinglePrice <p>刊例价</p>
                     * 
                     */
                    std::string GetSinglePrice() const;

                    /**
                     * 设置<p>刊例价</p>
                     * @param _singlePrice <p>刊例价</p>
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
                     * 获取<p>刊例价单位</p>
                     * @return PriceUnit <p>刊例价单位</p>
                     * 
                     */
                    std::string GetPriceUnit() const;

                    /**
                     * 设置<p>刊例价单位</p>
                     * @param _priceUnit <p>刊例价单位</p>
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
                     * 获取<p>用量</p>
                     * @return UsedAmount <p>用量</p>
                     * 
                     */
                    std::string GetUsedAmount() const;

                    /**
                     * 设置<p>用量</p>
                     * @param _usedAmount <p>用量</p>
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
                     * 获取<p>用量单位</p>
                     * @return UsedAmountUnit <p>用量单位</p>
                     * 
                     */
                    std::string GetUsedAmountUnit() const;

                    /**
                     * 设置<p>用量单位</p>
                     * @param _usedAmountUnit <p>用量单位</p>
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
                     * 获取<p>原价</p>
                     * @return Cost <p>原价</p>
                     * 
                     */
                    std::string GetCost() const;

                    /**
                     * 设置<p>原价</p>
                     * @param _cost <p>原价</p>
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
                     * 获取<p>折扣</p>
                     * @return Discount <p>折扣</p>
                     * 
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置<p>折扣</p>
                     * @param _discount <p>折扣</p>
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
                     * 获取<p>折后价</p>
                     * @return RealCost <p>折后价</p>
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置<p>折后价</p>
                     * @param _realCost <p>折后价</p>
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
                     * 获取<p>代金券支付金额</p>
                     * @return VoucherPayAmount <p>代金券支付金额</p>
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置<p>代金券支付金额</p>
                     * @param _voucherPayAmount <p>代金券支付金额</p>
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
                     * 获取<p>现金支付金额</p>
                     * @return CashPayAmount <p>现金支付金额</p>
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置<p>现金支付金额</p>
                     * @param _cashPayAmount <p>现金支付金额</p>
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
                     * 获取<p>赠送金支付金额</p>
                     * @return IncentivePayAmount <p>赠送金支付金额</p>
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置<p>赠送金支付金额</p>
                     * @param _incentivePayAmount <p>赠送金支付金额</p>
                     * 
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     * 
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取<p>组件类型code</p>
                     * @return ComponentCode <p>组件类型code</p>
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置<p>组件类型code</p>
                     * @param _componentCode <p>组件类型code</p>
                     * 
                     */
                    void SetComponentCode(const std::string& _componentCode);

                    /**
                     * 判断参数 ComponentCode 是否已赋值
                     * @return ComponentCode 是否已赋值
                     * 
                     */
                    bool ComponentCodeHasBeenSet() const;

                    /**
                     * 获取<p>组件名称code</p>
                     * @return ItemCode <p>组件名称code</p>
                     * 
                     */
                    std::string GetItemCode() const;

                    /**
                     * 设置<p>组件名称code</p>
                     * @param _itemCode <p>组件名称code</p>
                     * 
                     */
                    void SetItemCode(const std::string& _itemCode);

                    /**
                     * 判断参数 ItemCode 是否已赋值
                     * @return ItemCode 是否已赋值
                     * 
                     */
                    bool ItemCodeHasBeenSet() const;

                private:

                    /**
                     * <p>组件类型名称</p>
                     */
                    std::string m_componentCodeName;
                    bool m_componentCodeNameHasBeenSet;

                    /**
                     * <p>组件名称</p>
                     */
                    std::string m_itemCodeName;
                    bool m_itemCodeNameHasBeenSet;

                    /**
                     * <p>刊例价</p>
                     */
                    std::string m_singlePrice;
                    bool m_singlePriceHasBeenSet;

                    /**
                     * <p>刊例价单位</p>
                     */
                    std::string m_priceUnit;
                    bool m_priceUnitHasBeenSet;

                    /**
                     * <p>用量</p>
                     */
                    std::string m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * <p>用量单位</p>
                     */
                    std::string m_usedAmountUnit;
                    bool m_usedAmountUnitHasBeenSet;

                    /**
                     * <p>原价</p>
                     */
                    std::string m_cost;
                    bool m_costHasBeenSet;

                    /**
                     * <p>折扣</p>
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * <p>折后价</p>
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * <p>代金券支付金额</p>
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * <p>现金支付金额</p>
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * <p>赠送金支付金额</p>
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * <p>组件类型code</p>
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * <p>组件名称code</p>
                     */
                    std::string m_itemCode;
                    bool m_itemCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_COSTCOMPONENTSET_H_
