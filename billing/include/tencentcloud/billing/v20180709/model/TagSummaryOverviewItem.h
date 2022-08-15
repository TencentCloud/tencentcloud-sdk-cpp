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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_TAGSUMMARYOVERVIEWITEM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_TAGSUMMARYOVERVIEWITEM_H_

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
                * 按标签汇总消费详情
                */
                class TagSummaryOverviewItem : public AbstractModel
                {
                public:
                    TagSummaryOverviewItem();
                    ~TagSummaryOverviewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagValue 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagValue 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取实际花费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealTotalCost 实际花费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRealTotalCost() const;

                    /**
                     * 设置实际花费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealTotalCost 实际花费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealTotalCost(const std::string& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取费用所占百分比，两位小数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealTotalCostRatio 费用所占百分比，两位小数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRealTotalCostRatio() const;

                    /**
                     * 设置费用所占百分比，两位小数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealTotalCostRatio 费用所占百分比，两位小数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealTotalCostRatio(const std::string& _realTotalCostRatio);

                    /**
                     * 判断参数 RealTotalCostRatio 是否已赋值
                     * @return RealTotalCostRatio 是否已赋值
                     */
                    bool RealTotalCostRatioHasBeenSet() const;

                    /**
                     * 获取原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCost 原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TotalCost 原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取现金金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CashPayAmount 现金金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCashPayAmount() const;

                    /**
                     * 设置现金金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CashPayAmount 现金金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCashPayAmount(const std::string& _cashPayAmount);

                    /**
                     * 判断参数 CashPayAmount 是否已赋值
                     * @return CashPayAmount 是否已赋值
                     */
                    bool CashPayAmountHasBeenSet() const;

                    /**
                     * 获取赠送金金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncentivePayAmount 赠送金金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIncentivePayAmount() const;

                    /**
                     * 设置赠送金金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IncentivePayAmount 赠送金金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIncentivePayAmount(const std::string& _incentivePayAmount);

                    /**
                     * 判断参数 IncentivePayAmount 是否已赋值
                     * @return IncentivePayAmount 是否已赋值
                     */
                    bool IncentivePayAmountHasBeenSet() const;

                    /**
                     * 获取代金券金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoucherPayAmount 代金券金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置代金券金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VoucherPayAmount 代金券金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取分成金金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransferPayAmount 分成金金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTransferPayAmount() const;

                    /**
                     * 设置分成金金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TransferPayAmount 分成金金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransferPayAmount(const std::string& _transferPayAmount);

                    /**
                     * 判断参数 TransferPayAmount 是否已赋值
                     * @return TransferPayAmount 是否已赋值
                     */
                    bool TransferPayAmountHasBeenSet() const;

                private:

                    /**
                     * 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * 实际花费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 费用所占百分比，两位小数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realTotalCostRatio;
                    bool m_realTotalCostRatioHasBeenSet;

                    /**
                     * 原价，单位为元。TotalCost字段自账单3.0（即2021-05）之后开始生效，账单3.0之前返回"-"。合同价的情况下，TotalCost字段与官网价格存在差异，也返回“-”。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * 现金金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cashPayAmount;
                    bool m_cashPayAmountHasBeenSet;

                    /**
                     * 赠送金金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_incentivePayAmount;
                    bool m_incentivePayAmountHasBeenSet;

                    /**
                     * 代金券金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * 分成金金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transferPayAmount;
                    bool m_transferPayAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_TAGSUMMARYOVERVIEWITEM_H_
