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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_ITEMPRICE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_ITEMPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述了单项的价格信息
                */
                class ItemPrice : public AbstractModel
                {
                public:
                    ItemPrice();
                    ~ItemPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后续合计费用的原价，后付费模式使用，单位：元。<br><li>如返回了其他时间区间项，如UnitPriceSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPrice 后续合计费用的原价，后付费模式使用，单位：元。<br><li>如返回了其他时间区间项，如UnitPriceSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置后续合计费用的原价，后付费模式使用，单位：元。<br><li>如返回了其他时间区间项，如UnitPriceSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnitPrice 后续合计费用的原价，后付费模式使用，单位：元。<br><li>如返回了其他时间区间项，如UnitPriceSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnitPrice(const double& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取后续计价单元，后付费模式使用，可取值范围： <br><li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）：<br><li>GB：表示计价单元是按每GB来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeUnit 后续计价单元，后付费模式使用，可取值范围： <br><li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）：<br><li>GB：表示计价单元是按每GB来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置后续计价单元，后付费模式使用，可取值范围： <br><li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）：<br><li>GB：表示计价单元是按每GB来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChargeUnit 后续计价单元，后付费模式使用，可取值范围： <br><li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）：<br><li>GB：表示计价单元是按每GB来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChargeUnit(const std::string& _chargeUnit);

                    /**
                     * 判断参数 ChargeUnit 是否已赋值
                     * @return ChargeUnit 是否已赋值
                     */
                    bool ChargeUnitHasBeenSet() const;

                    /**
                     * 获取预支合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalPrice 预支合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置预支合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OriginalPrice 预支合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取预支合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountPrice 预支合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置预支合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiscountPrice 预支合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取折扣，如20代表2折
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Discount 折扣，如20代表2折
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDiscount() const;

                    /**
                     * 设置折扣，如20代表2折
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Discount 折扣，如20代表2折
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiscount(const uint64_t& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取后续合计费用的折扣价，后付费模式使用，单位：元<br><li>如返回了其他时间区间项，如UnitPriceDiscountSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceDiscount 后续合计费用的折扣价，后付费模式使用，单位：元<br><li>如返回了其他时间区间项，如UnitPriceDiscountSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置后续合计费用的折扣价，后付费模式使用，单位：元<br><li>如返回了其他时间区间项，如UnitPriceDiscountSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnitPriceDiscount 后续合计费用的折扣价，后付费模式使用，单位：元<br><li>如返回了其他时间区间项，如UnitPriceDiscountSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnitPriceDiscount(const double& _unitPriceDiscount);

                    /**
                     * 判断参数 UnitPriceDiscount 是否已赋值
                     * @return UnitPriceDiscount 是否已赋值
                     */
                    bool UnitPriceDiscountHasBeenSet() const;

                    /**
                     * 获取使用时间区间在(96, 360)小时的后续合计费用的原价，后付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceSecondStep 使用时间区间在(96, 360)小时的后续合计费用的原价，后付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetUnitPriceSecondStep() const;

                    /**
                     * 设置使用时间区间在(96, 360)小时的后续合计费用的原价，后付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnitPriceSecondStep 使用时间区间在(96, 360)小时的后续合计费用的原价，后付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnitPriceSecondStep(const double& _unitPriceSecondStep);

                    /**
                     * 判断参数 UnitPriceSecondStep 是否已赋值
                     * @return UnitPriceSecondStep 是否已赋值
                     */
                    bool UnitPriceSecondStepHasBeenSet() const;

                    /**
                     * 获取使用时间区间在(96, 360)小时的后续合计费用的折扣价，后付费模式使用，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceDiscountSecondStep 使用时间区间在(96, 360)小时的后续合计费用的折扣价，后付费模式使用，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetUnitPriceDiscountSecondStep() const;

                    /**
                     * 设置使用时间区间在(96, 360)小时的后续合计费用的折扣价，后付费模式使用，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnitPriceDiscountSecondStep 使用时间区间在(96, 360)小时的后续合计费用的折扣价，后付费模式使用，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnitPriceDiscountSecondStep(const double& _unitPriceDiscountSecondStep);

                    /**
                     * 判断参数 UnitPriceDiscountSecondStep 是否已赋值
                     * @return UnitPriceDiscountSecondStep 是否已赋值
                     */
                    bool UnitPriceDiscountSecondStepHasBeenSet() const;

                    /**
                     * 获取使用时间区间在(360, ∞)小时的后续合计费用的原价，后付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceThirdStep 使用时间区间在(360, ∞)小时的后续合计费用的原价，后付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetUnitPriceThirdStep() const;

                    /**
                     * 设置使用时间区间在(360, ∞)小时的后续合计费用的原价，后付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnitPriceThirdStep 使用时间区间在(360, ∞)小时的后续合计费用的原价，后付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnitPriceThirdStep(const double& _unitPriceThirdStep);

                    /**
                     * 判断参数 UnitPriceThirdStep 是否已赋值
                     * @return UnitPriceThirdStep 是否已赋值
                     */
                    bool UnitPriceThirdStepHasBeenSet() const;

                    /**
                     * 获取使用时间区间在(360, ∞)小时的后续合计费用的折扣价，后付费模式使用，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceDiscountThirdStep 使用时间区间在(360, ∞)小时的后续合计费用的折扣价，后付费模式使用，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetUnitPriceDiscountThirdStep() const;

                    /**
                     * 设置使用时间区间在(360, ∞)小时的后续合计费用的折扣价，后付费模式使用，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnitPriceDiscountThirdStep 使用时间区间在(360, ∞)小时的后续合计费用的折扣价，后付费模式使用，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnitPriceDiscountThirdStep(const double& _unitPriceDiscountThirdStep);

                    /**
                     * 判断参数 UnitPriceDiscountThirdStep 是否已赋值
                     * @return UnitPriceDiscountThirdStep 是否已赋值
                     */
                    bool UnitPriceDiscountThirdStepHasBeenSet() const;

                private:

                    /**
                     * 后续合计费用的原价，后付费模式使用，单位：元。<br><li>如返回了其他时间区间项，如UnitPriceSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 后续计价单元，后付费模式使用，可取值范围： <br><li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）：<br><li>GB：表示计价单元是按每GB来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * 预支合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 预支合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * 折扣，如20代表2折
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 后续合计费用的折扣价，后付费模式使用，单位：元<br><li>如返回了其他时间区间项，如UnitPriceDiscountSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * 使用时间区间在(96, 360)小时的后续合计费用的原价，后付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPriceSecondStep;
                    bool m_unitPriceSecondStepHasBeenSet;

                    /**
                     * 使用时间区间在(96, 360)小时的后续合计费用的折扣价，后付费模式使用，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPriceDiscountSecondStep;
                    bool m_unitPriceDiscountSecondStepHasBeenSet;

                    /**
                     * 使用时间区间在(360, ∞)小时的后续合计费用的原价，后付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPriceThirdStep;
                    bool m_unitPriceThirdStepHasBeenSet;

                    /**
                     * 使用时间区间在(360, ∞)小时的后续合计费用的折扣价，后付费模式使用，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPriceDiscountThirdStep;
                    bool m_unitPriceDiscountThirdStepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ITEMPRICE_H_
