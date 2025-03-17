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
#include <tencentcloud/billing/v20180709/model/BillDetailComponentConfig.h>


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
                     * 获取组件类型：用户购买的产品或服务对应的组件大类，例如：云服务器 CVM 的组件：CPU、内存等
                     * @return ComponentCodeName 组件类型：用户购买的产品或服务对应的组件大类，例如：云服务器 CVM 的组件：CPU、内存等
                     * 
                     */
                    std::string GetComponentCodeName() const;

                    /**
                     * 设置组件类型：用户购买的产品或服务对应的组件大类，例如：云服务器 CVM 的组件：CPU、内存等
                     * @param _componentCodeName 组件类型：用户购买的产品或服务对应的组件大类，例如：云服务器 CVM 的组件：CPU、内存等
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
                     * 获取组件名称：用户购买的产品或服务，所包含的具体组件
                     * @return ItemCodeName 组件名称：用户购买的产品或服务，所包含的具体组件
                     * 
                     */
                    std::string GetItemCodeName() const;

                    /**
                     * 设置组件名称：用户购买的产品或服务，所包含的具体组件
                     * @param _itemCodeName 组件名称：用户购买的产品或服务，所包含的具体组件
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
                     * 获取组件刊例价：组件的官网原始单价（如果客户享受一口价/合同价则默认不展示）
                     * @return SinglePrice 组件刊例价：组件的官网原始单价（如果客户享受一口价/合同价则默认不展示）
                     * 
                     */
                    std::string GetSinglePrice() const;

                    /**
                     * 设置组件刊例价：组件的官网原始单价（如果客户享受一口价/合同价则默认不展示）
                     * @param _singlePrice 组件刊例价：组件的官网原始单价（如果客户享受一口价/合同价则默认不展示）
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
                     * 获取组件指定价（已废弃）
                     * @return SpecifiedPrice 组件指定价（已废弃）
                     * @deprecated
                     */
                    std::string GetSpecifiedPrice() const;

                    /**
                     * 设置组件指定价（已废弃）
                     * @param _specifiedPrice 组件指定价（已废弃）
                     * @deprecated
                     */
                    void SetSpecifiedPrice(const std::string& _specifiedPrice);

                    /**
                     * 判断参数 SpecifiedPrice 是否已赋值
                     * @return SpecifiedPrice 是否已赋值
                     * @deprecated
                     */
                    bool SpecifiedPriceHasBeenSet() const;

                    /**
                     * 获取组件价格单位：组件价格的单位，单位构成：元/用量单位/时长单位
                     * @return PriceUnit 组件价格单位：组件价格的单位，单位构成：元/用量单位/时长单位
                     * 
                     */
                    std::string GetPriceUnit() const;

                    /**
                     * 设置组件价格单位：组件价格的单位，单位构成：元/用量单位/时长单位
                     * @param _priceUnit 组件价格单位：组件价格的单位，单位构成：元/用量单位/时长单位
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
                     * 获取组件用量：该组件实际结算用量，组件用量 = 组件原始用量 - 抵扣用量（含资源包
                     * @return UsedAmount 组件用量：该组件实际结算用量，组件用量 = 组件原始用量 - 抵扣用量（含资源包
                     * 
                     */
                    std::string GetUsedAmount() const;

                    /**
                     * 设置组件用量：该组件实际结算用量，组件用量 = 组件原始用量 - 抵扣用量（含资源包
                     * @param _usedAmount 组件用量：该组件实际结算用量，组件用量 = 组件原始用量 - 抵扣用量（含资源包
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
                     * 获取组件用量单位：组件用量对应的单位
                     * @return UsedAmountUnit 组件用量单位：组件用量对应的单位
                     * 
                     */
                    std::string GetUsedAmountUnit() const;

                    /**
                     * 设置组件用量单位：组件用量对应的单位
                     * @param _usedAmountUnit 组件用量单位：组件用量对应的单位
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
                     * 获取原始用量/时长：组件被资源包抵扣前的原始用量/时长
                     * @return RealTotalMeasure 原始用量/时长：组件被资源包抵扣前的原始用量/时长
                     * 
                     */
                    std::string GetRealTotalMeasure() const;

                    /**
                     * 设置原始用量/时长：组件被资源包抵扣前的原始用量/时长
                     * @param _realTotalMeasure 原始用量/时长：组件被资源包抵扣前的原始用量/时长
                     * 
                     */
                    void SetRealTotalMeasure(const std::string& _realTotalMeasure);

                    /**
                     * 判断参数 RealTotalMeasure 是否已赋值
                     * @return RealTotalMeasure 是否已赋值
                     * 
                     */
                    bool RealTotalMeasureHasBeenSet() const;

                    /**
                     * 获取抵扣用量/时长（含资源包）：组件被资源包抵扣的用量/时长
                     * @return DeductedMeasure 抵扣用量/时长（含资源包）：组件被资源包抵扣的用量/时长
                     * 
                     */
                    std::string GetDeductedMeasure() const;

                    /**
                     * 设置抵扣用量/时长（含资源包）：组件被资源包抵扣的用量/时长
                     * @param _deductedMeasure 抵扣用量/时长（含资源包）：组件被资源包抵扣的用量/时长
                     * 
                     */
                    void SetDeductedMeasure(const std::string& _deductedMeasure);

                    /**
                     * 判断参数 DeductedMeasure 是否已赋值
                     * @return DeductedMeasure 是否已赋值
                     * 
                     */
                    bool DeductedMeasureHasBeenSet() const;

                    /**
                     * 获取使用时长：资源使用的时长
                     * @return TimeSpan 使用时长：资源使用的时长
                     * 
                     */
                    std::string GetTimeSpan() const;

                    /**
                     * 设置使用时长：资源使用的时长
                     * @param _timeSpan 使用时长：资源使用的时长
                     * 
                     */
                    void SetTimeSpan(const std::string& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取时长单位：资源使用时长的单位
                     * @return TimeUnitName 时长单位：资源使用时长的单位
                     * 
                     */
                    std::string GetTimeUnitName() const;

                    /**
                     * 设置时长单位：资源使用时长的单位
                     * @param _timeUnitName 时长单位：资源使用时长的单位
                     * 
                     */
                    void SetTimeUnitName(const std::string& _timeUnitName);

                    /**
                     * 判断参数 TimeUnitName 是否已赋值
                     * @return TimeUnitName 是否已赋值
                     * 
                     */
                    bool TimeUnitNameHasBeenSet() const;

                    /**
                     * 获取组件原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如果客户享受一口价/合同价则默认不展示，退费类场景也默认不展示）
                     * @return Cost 组件原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如果客户享受一口价/合同价则默认不展示，退费类场景也默认不展示）
                     * 
                     */
                    std::string GetCost() const;

                    /**
                     * 设置组件原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如果客户享受一口价/合同价则默认不展示，退费类场景也默认不展示）
                     * @param _cost 组件原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如果客户享受一口价/合同价则默认不展示，退费类场景也默认不展示）
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
                     * 获取折扣率：本资源享受的折扣率（如果客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     * @return Discount 折扣率：本资源享受的折扣率（如果客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     * 
                     */
                    std::string GetDiscount() const;

                    /**
                     * 设置折扣率：本资源享受的折扣率（如果客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     * @param _discount 折扣率：本资源享受的折扣率（如果客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
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
                     * 获取优惠类型
                     * @return ReduceType 优惠类型
                     * 
                     */
                    std::string GetReduceType() const;

                    /**
                     * 设置优惠类型
                     * @param _reduceType 优惠类型
                     * 
                     */
                    void SetReduceType(const std::string& _reduceType);

                    /**
                     * 判断参数 ReduceType 是否已赋值
                     * @return ReduceType 是否已赋值
                     * 
                     */
                    bool ReduceTypeHasBeenSet() const;

                    /**
                     * 获取优惠后总价：优惠后总价=（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     * @return RealCost 优惠后总价：优惠后总价=（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置优惠后总价：优惠后总价=（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     * @param _realCost 优惠后总价：优惠后总价=（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
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
                     * 获取优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     * @return VoucherPayAmount 优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     * @param _voucherPayAmount 优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
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
                     * 获取现金账户支出：通过现金账户支付的金额
                     * @return CashPayAmount 现金账户支出：通过现金账户支付的金额
                     * 
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置现金账户支出：通过现金账户支付的金额
                     * @param _cashPayAmount 现金账户支出：通过现金账户支付的金额
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
                     * 获取赠送账户支出：使用赠送金支付的金额
                     * @return IncentivePayAmount 赠送账户支出：使用赠送金支付的金额
                     * 
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置赠送账户支出：使用赠送金支付的金额
                     * @param _incentivePayAmount 赠送账户支出：使用赠送金支付的金额
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
                     * 获取分成金账户支出：通过分成金账户支付的金额
                     * @return TransferPayAmount 分成金账户支出：通过分成金账户支付的金额
                     * 
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置分成金账户支出：通过分成金账户支付的金额
                     * @param _transferPayAmount 分成金账户支出：通过分成金账户支付的金额
                     * 
                     */
                    void SetTransferPayAmount(const std::string& _transferPayAmount);

                    /**
                     * 判断参数 TransferPayAmount 是否已赋值
                     * @return TransferPayAmount 是否已赋值
                     * 
                     */
                    bool TransferPayAmountHasBeenSet() const;

                    /**
                     * 获取组件类型编码
                     * @return ItemCode 组件类型编码
                     * 
                     */
                    std::string GetItemCode() const;

                    /**
                     * 设置组件类型编码
                     * @param _itemCode 组件类型编码
                     * 
                     */
                    void SetItemCode(const std::string& _itemCode);

                    /**
                     * 判断参数 ItemCode 是否已赋值
                     * @return ItemCode 是否已赋值
                     * 
                     */
                    bool ItemCodeHasBeenSet() const;

                    /**
                     * 获取组件名称编码
                     * @return ComponentCode 组件名称编码
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置组件名称编码
                     * @param _componentCode 组件名称编码
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
                     * 获取组件单价：组件的折后单价，组件单价 = 刊例价 * 折扣
                     * @return ContractPrice 组件单价：组件的折后单价，组件单价 = 刊例价 * 折扣
                     * 
                     */
                    std::string GetContractPrice() const;

                    /**
                     * 设置组件单价：组件的折后单价，组件单价 = 刊例价 * 折扣
                     * @param _contractPrice 组件单价：组件的折后单价，组件单价 = 刊例价 * 折扣
                     * 
                     */
                    void SetContractPrice(const std::string& _contractPrice);

                    /**
                     * 判断参数 ContractPrice 是否已赋值
                     * @return ContractPrice 是否已赋值
                     * 
                     */
                    bool ContractPriceHasBeenSet() const;

                    /**
                     * 获取实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。正常的实例展示默认为不展示
                     * @return InstanceType 实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。正常的实例展示默认为不展示
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。正常的实例展示默认为不展示
                     * @param _instanceType 实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。正常的实例展示默认为不展示
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取预留实例抵扣的使用时长：本产品或服务使用预留实例抵扣的使用时长
                     * @return RiTimeSpan 预留实例抵扣的使用时长：本产品或服务使用预留实例抵扣的使用时长
                     * 
                     */
                    std::string GetRiTimeSpan() const;

                    /**
                     * 设置预留实例抵扣的使用时长：本产品或服务使用预留实例抵扣的使用时长
                     * @param _riTimeSpan 预留实例抵扣的使用时长：本产品或服务使用预留实例抵扣的使用时长
                     * 
                     */
                    void SetRiTimeSpan(const std::string& _riTimeSpan);

                    /**
                     * 判断参数 RiTimeSpan 是否已赋值
                     * @return RiTimeSpan 是否已赋值
                     * 
                     */
                    bool RiTimeSpanHasBeenSet() const;

                    /**
                     * 获取预留实例抵扣组件原价：本产品或服务使用预留实例抵扣的组件原价金额
                     * @return OriginalCostWithRI 预留实例抵扣组件原价：本产品或服务使用预留实例抵扣的组件原价金额
                     * 
                     */
                    std::string GetOriginalCostWithRI() const;

                    /**
                     * 设置预留实例抵扣组件原价：本产品或服务使用预留实例抵扣的组件原价金额
                     * @param _originalCostWithRI 预留实例抵扣组件原价：本产品或服务使用预留实例抵扣的组件原价金额
                     * 
                     */
                    void SetOriginalCostWithRI(const std::string& _originalCostWithRI);

                    /**
                     * 判断参数 OriginalCostWithRI 是否已赋值
                     * @return OriginalCostWithRI 是否已赋值
                     * 
                     */
                    bool OriginalCostWithRIHasBeenSet() const;

                    /**
                     * 获取节省计划抵扣率：节省计划可用余额额度范围内，节省计划对于此组件打的折扣率
                     * @return SPDeductionRate 节省计划抵扣率：节省计划可用余额额度范围内，节省计划对于此组件打的折扣率
                     * 
                     */
                    std::string GetSPDeductionRate() const;

                    /**
                     * 设置节省计划抵扣率：节省计划可用余额额度范围内，节省计划对于此组件打的折扣率
                     * @param _sPDeductionRate 节省计划抵扣率：节省计划可用余额额度范围内，节省计划对于此组件打的折扣率
                     * 
                     */
                    void SetSPDeductionRate(const std::string& _sPDeductionRate);

                    /**
                     * 判断参数 SPDeductionRate 是否已赋值
                     * @return SPDeductionRate 是否已赋值
                     * 
                     */
                    bool SPDeductionRateHasBeenSet() const;

                    /**
                     * 获取节省计划抵扣金额（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SPDeduction 节省计划抵扣金额（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetSPDeduction() const;

                    /**
                     * 设置节省计划抵扣金额（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sPDeduction 节省计划抵扣金额（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetSPDeduction(const std::string& _sPDeduction);

                    /**
                     * 判断参数 SPDeduction 是否已赋值
                     * @return SPDeduction 是否已赋值
                     * @deprecated
                     */
                    bool SPDeductionHasBeenSet() const;

                    /**
                     * 获取节省计划抵扣组件原价：节省计划抵扣原价=节省计划包抵扣金额/节省计划抵扣率
                     * @return OriginalCostWithSP 节省计划抵扣组件原价：节省计划抵扣原价=节省计划包抵扣金额/节省计划抵扣率
                     * 
                     */
                    std::string GetOriginalCostWithSP() const;

                    /**
                     * 设置节省计划抵扣组件原价：节省计划抵扣原价=节省计划包抵扣金额/节省计划抵扣率
                     * @param _originalCostWithSP 节省计划抵扣组件原价：节省计划抵扣原价=节省计划包抵扣金额/节省计划抵扣率
                     * 
                     */
                    void SetOriginalCostWithSP(const std::string& _originalCostWithSP);

                    /**
                     * 判断参数 OriginalCostWithSP 是否已赋值
                     * @return OriginalCostWithSP 是否已赋值
                     * 
                     */
                    bool OriginalCostWithSPHasBeenSet() const;

                    /**
                     * 获取混合折扣率：综合各类折扣抵扣信息后的最终折扣率，混合折扣率 = 优惠后总价 / 组件原价
                     * @return BlendedDiscount 混合折扣率：综合各类折扣抵扣信息后的最终折扣率，混合折扣率 = 优惠后总价 / 组件原价
                     * 
                     */
                    std::string GetBlendedDiscount() const;

                    /**
                     * 设置混合折扣率：综合各类折扣抵扣信息后的最终折扣率，混合折扣率 = 优惠后总价 / 组件原价
                     * @param _blendedDiscount 混合折扣率：综合各类折扣抵扣信息后的最终折扣率，混合折扣率 = 优惠后总价 / 组件原价
                     * 
                     */
                    void SetBlendedDiscount(const std::string& _blendedDiscount);

                    /**
                     * 判断参数 BlendedDiscount 是否已赋值
                     * @return BlendedDiscount 是否已赋值
                     * 
                     */
                    bool BlendedDiscountHasBeenSet() const;

                    /**
                     * 获取配置描述：资源配置规格信息
                     * @return ComponentConfig 配置描述：资源配置规格信息
                     * 
                     */
                    std::vector<BillDetailComponentConfig> GetComponentConfig() const;

                    /**
                     * 设置配置描述：资源配置规格信息
                     * @param _componentConfig 配置描述：资源配置规格信息
                     * 
                     */
                    void SetComponentConfig(const std::vector<BillDetailComponentConfig>& _componentConfig);

                    /**
                     * 判断参数 ComponentConfig 是否已赋值
                     * @return ComponentConfig 是否已赋值
                     * 
                     */
                    bool ComponentConfigHasBeenSet() const;

                private:

                    /**
                     * 组件类型：用户购买的产品或服务对应的组件大类，例如：云服务器 CVM 的组件：CPU、内存等
                     */
                    std::string m_componentCodeName;
                    bool m_componentCodeNameHasBeenSet;

                    /**
                     * 组件名称：用户购买的产品或服务，所包含的具体组件
                     */
                    std::string m_itemCodeName;
                    bool m_itemCodeNameHasBeenSet;

                    /**
                     * 组件刊例价：组件的官网原始单价（如果客户享受一口价/合同价则默认不展示）
                     */
                    std::string m_singlePrice;
                    bool m_singlePriceHasBeenSet;

                    /**
                     * 组件指定价（已废弃）
                     */
                    std::string m_specifiedPrice;
                    bool m_specifiedPriceHasBeenSet;

                    /**
                     * 组件价格单位：组件价格的单位，单位构成：元/用量单位/时长单位
                     */
                    std::string m_priceUnit;
                    bool m_priceUnitHasBeenSet;

                    /**
                     * 组件用量：该组件实际结算用量，组件用量 = 组件原始用量 - 抵扣用量（含资源包
                     */
                    std::string m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * 组件用量单位：组件用量对应的单位
                     */
                    std::string m_usedAmountUnit;
                    bool m_usedAmountUnitHasBeenSet;

                    /**
                     * 原始用量/时长：组件被资源包抵扣前的原始用量/时长
                     */
                    std::string m_realTotalMeasure;
                    bool m_realTotalMeasureHasBeenSet;

                    /**
                     * 抵扣用量/时长（含资源包）：组件被资源包抵扣的用量/时长
                     */
                    std::string m_deductedMeasure;
                    bool m_deductedMeasureHasBeenSet;

                    /**
                     * 使用时长：资源使用的时长
                     */
                    std::string m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 时长单位：资源使用时长的单位
                     */
                    std::string m_timeUnitName;
                    bool m_timeUnitNameHasBeenSet;

                    /**
                     * 组件原价：原价 = 组件刊例价 * 组件用量 * 使用时长（如果客户享受一口价/合同价则默认不展示，退费类场景也默认不展示）
                     */
                    std::string m_cost;
                    bool m_costHasBeenSet;

                    /**
                     * 折扣率：本资源享受的折扣率（如果客户享受一口价/合同价则默认不展示，退费场景也默认不展示）
                     */
                    std::string m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 优惠类型
                     */
                    std::string m_reduceType;
                    bool m_reduceTypeHasBeenSet;

                    /**
                     * 优惠后总价：优惠后总价=（原价 - 预留实例抵扣原价 - 节省计划抵扣原价）* 折扣率
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * 优惠券支出：使用各类优惠券（如代金券、现金券等）支付的金额
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * 现金账户支出：通过现金账户支付的金额
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * 赠送账户支出：使用赠送金支付的金额
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * 分成金账户支出：通过分成金账户支付的金额
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                    /**
                     * 组件类型编码
                     */
                    std::string m_itemCode;
                    bool m_itemCodeHasBeenSet;

                    /**
                     * 组件名称编码
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * 组件单价：组件的折后单价，组件单价 = 刊例价 * 折扣
                     */
                    std::string m_contractPrice;
                    bool m_contractPriceHasBeenSet;

                    /**
                     * 实例类型：购买的产品服务对应的实例类型，包括资源包、RI、SP、竞价实例。正常的实例展示默认为不展示
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 预留实例抵扣的使用时长：本产品或服务使用预留实例抵扣的使用时长
                     */
                    std::string m_riTimeSpan;
                    bool m_riTimeSpanHasBeenSet;

                    /**
                     * 预留实例抵扣组件原价：本产品或服务使用预留实例抵扣的组件原价金额
                     */
                    std::string m_originalCostWithRI;
                    bool m_originalCostWithRIHasBeenSet;

                    /**
                     * 节省计划抵扣率：节省计划可用余额额度范围内，节省计划对于此组件打的折扣率
                     */
                    std::string m_sPDeductionRate;
                    bool m_sPDeductionRateHasBeenSet;

                    /**
                     * 节省计划抵扣金额（已废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sPDeduction;
                    bool m_sPDeductionHasBeenSet;

                    /**
                     * 节省计划抵扣组件原价：节省计划抵扣原价=节省计划包抵扣金额/节省计划抵扣率
                     */
                    std::string m_originalCostWithSP;
                    bool m_originalCostWithSPHasBeenSet;

                    /**
                     * 混合折扣率：综合各类折扣抵扣信息后的最终折扣率，混合折扣率 = 优惠后总价 / 组件原价
                     */
                    std::string m_blendedDiscount;
                    bool m_blendedDiscountHasBeenSet;

                    /**
                     * 配置描述：资源配置规格信息
                     */
                    std::vector<BillDetailComponentConfig> m_componentConfig;
                    bool m_componentConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLDETAILCOMPONENT_H_
