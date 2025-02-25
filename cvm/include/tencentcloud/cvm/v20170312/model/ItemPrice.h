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
                     * 获取后续合计费用的原价，后付费模式使用，单位：元。<br><li>如返回了其他时间区间项，如UnitPriceSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时</li>
                     * @return UnitPrice 后续合计费用的原价，后付费模式使用，单位：元。<br><li>如返回了其他时间区间项，如UnitPriceSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时</li>
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置后续合计费用的原价，后付费模式使用，单位：元。<br><li>如返回了其他时间区间项，如UnitPriceSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时</li>
                     * @param _unitPrice 后续合计费用的原价，后付费模式使用，单位：元。<br><li>如返回了其他时间区间项，如UnitPriceSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时</li>
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
                     * 获取后续计价单元，后付费模式使用，可取值范围： <br><li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）：</li><li>GB：表示计价单元是按每GB来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）。</li>
                     * @return ChargeUnit 后续计价单元，后付费模式使用，可取值范围： <br><li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）：</li><li>GB：表示计价单元是按每GB来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）。</li>
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置后续计价单元，后付费模式使用，可取值范围： <br><li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）：</li><li>GB：表示计价单元是按每GB来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）。</li>
                     * @param _chargeUnit 后续计价单元，后付费模式使用，可取值范围： <br><li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）：</li><li>GB：表示计价单元是按每GB来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）。</li>
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
                     * 获取预支合计费用的原价，预付费模式使用，单位：元。
                     * @return OriginalPrice 预支合计费用的原价，预付费模式使用，单位：元。
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置预支合计费用的原价，预付费模式使用，单位：元。
                     * @param _originalPrice 预支合计费用的原价，预付费模式使用，单位：元。
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
                     * 获取预支合计费用的折扣价，预付费模式使用，单位：元。
                     * @return DiscountPrice 预支合计费用的折扣价，预付费模式使用，单位：元。
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置预支合计费用的折扣价，预付费模式使用，单位：元。
                     * @param _discountPrice 预支合计费用的折扣价，预付费模式使用，单位：元。
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
                     * 获取折扣，如20.0代表2折。
                     * @return Discount 折扣，如20.0代表2折。
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置折扣，如20.0代表2折。
                     * @param _discount 折扣，如20.0代表2折。
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
                     * 获取后续合计费用的折扣价，后付费模式使用，单位：元<br><li>如返回了其他时间区间项，如UnitPriceDiscountSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时</li>
                     * @return UnitPriceDiscount 后续合计费用的折扣价，后付费模式使用，单位：元<br><li>如返回了其他时间区间项，如UnitPriceDiscountSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时</li>
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置后续合计费用的折扣价，后付费模式使用，单位：元<br><li>如返回了其他时间区间项，如UnitPriceDiscountSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时</li>
                     * @param _unitPriceDiscount 后续合计费用的折扣价，后付费模式使用，单位：元<br><li>如返回了其他时间区间项，如UnitPriceDiscountSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时</li>
                     * 
                     */
                    void SetUnitPriceDiscount(const double& _unitPriceDiscount);

                    /**
                     * 判断参数 UnitPriceDiscount 是否已赋值
                     * @return UnitPriceDiscount 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountHasBeenSet() const;

                    /**
                     * 获取使用时间区间在(96, 360)小时的后续合计费用的原价，后付费模式使用，单位：元。
                     * @return UnitPriceSecondStep 使用时间区间在(96, 360)小时的后续合计费用的原价，后付费模式使用，单位：元。
                     * 
                     */
                    double GetUnitPriceSecondStep() const;

                    /**
                     * 设置使用时间区间在(96, 360)小时的后续合计费用的原价，后付费模式使用，单位：元。
                     * @param _unitPriceSecondStep 使用时间区间在(96, 360)小时的后续合计费用的原价，后付费模式使用，单位：元。
                     * 
                     */
                    void SetUnitPriceSecondStep(const double& _unitPriceSecondStep);

                    /**
                     * 判断参数 UnitPriceSecondStep 是否已赋值
                     * @return UnitPriceSecondStep 是否已赋值
                     * 
                     */
                    bool UnitPriceSecondStepHasBeenSet() const;

                    /**
                     * 获取使用时间区间在(96, 360)小时的后续合计费用的折扣价，后付费模式使用，单位：元
                     * @return UnitPriceDiscountSecondStep 使用时间区间在(96, 360)小时的后续合计费用的折扣价，后付费模式使用，单位：元
                     * 
                     */
                    double GetUnitPriceDiscountSecondStep() const;

                    /**
                     * 设置使用时间区间在(96, 360)小时的后续合计费用的折扣价，后付费模式使用，单位：元
                     * @param _unitPriceDiscountSecondStep 使用时间区间在(96, 360)小时的后续合计费用的折扣价，后付费模式使用，单位：元
                     * 
                     */
                    void SetUnitPriceDiscountSecondStep(const double& _unitPriceDiscountSecondStep);

                    /**
                     * 判断参数 UnitPriceDiscountSecondStep 是否已赋值
                     * @return UnitPriceDiscountSecondStep 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountSecondStepHasBeenSet() const;

                    /**
                     * 获取使用时间区间在(360, ∞)小时的后续合计费用的原价，后付费模式使用，单位：元。
                     * @return UnitPriceThirdStep 使用时间区间在(360, ∞)小时的后续合计费用的原价，后付费模式使用，单位：元。
                     * 
                     */
                    double GetUnitPriceThirdStep() const;

                    /**
                     * 设置使用时间区间在(360, ∞)小时的后续合计费用的原价，后付费模式使用，单位：元。
                     * @param _unitPriceThirdStep 使用时间区间在(360, ∞)小时的后续合计费用的原价，后付费模式使用，单位：元。
                     * 
                     */
                    void SetUnitPriceThirdStep(const double& _unitPriceThirdStep);

                    /**
                     * 判断参数 UnitPriceThirdStep 是否已赋值
                     * @return UnitPriceThirdStep 是否已赋值
                     * 
                     */
                    bool UnitPriceThirdStepHasBeenSet() const;

                    /**
                     * 获取使用时间区间在(360, ∞)小时的后续合计费用的折扣价，后付费模式使用，单位：元
                     * @return UnitPriceDiscountThirdStep 使用时间区间在(360, ∞)小时的后续合计费用的折扣价，后付费模式使用，单位：元
                     * 
                     */
                    double GetUnitPriceDiscountThirdStep() const;

                    /**
                     * 设置使用时间区间在(360, ∞)小时的后续合计费用的折扣价，后付费模式使用，单位：元
                     * @param _unitPriceDiscountThirdStep 使用时间区间在(360, ∞)小时的后续合计费用的折扣价，后付费模式使用，单位：元
                     * 
                     */
                    void SetUnitPriceDiscountThirdStep(const double& _unitPriceDiscountThirdStep);

                    /**
                     * 判断参数 UnitPriceDiscountThirdStep 是否已赋值
                     * @return UnitPriceDiscountThirdStep 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountThirdStepHasBeenSet() const;

                    /**
                     * 获取预支三年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalPriceThreeYear 预支三年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetOriginalPriceThreeYear() const;

                    /**
                     * 设置预支三年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalPriceThreeYear 预支三年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalPriceThreeYear(const double& _originalPriceThreeYear);

                    /**
                     * 判断参数 OriginalPriceThreeYear 是否已赋值
                     * @return OriginalPriceThreeYear 是否已赋值
                     * 
                     */
                    bool OriginalPriceThreeYearHasBeenSet() const;

                    /**
                     * 获取预支三年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountPriceThreeYear 预支三年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiscountPriceThreeYear() const;

                    /**
                     * 设置预支三年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discountPriceThreeYear 预支三年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiscountPriceThreeYear(const double& _discountPriceThreeYear);

                    /**
                     * 判断参数 DiscountPriceThreeYear 是否已赋值
                     * @return DiscountPriceThreeYear 是否已赋值
                     * 
                     */
                    bool DiscountPriceThreeYearHasBeenSet() const;

                    /**
                     * 获取预支三年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountThreeYear 预支三年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiscountThreeYear() const;

                    /**
                     * 设置预支三年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discountThreeYear 预支三年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiscountThreeYear(const double& _discountThreeYear);

                    /**
                     * 判断参数 DiscountThreeYear 是否已赋值
                     * @return DiscountThreeYear 是否已赋值
                     * 
                     */
                    bool DiscountThreeYearHasBeenSet() const;

                    /**
                     * 获取预支五年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalPriceFiveYear 预支五年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetOriginalPriceFiveYear() const;

                    /**
                     * 设置预支五年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalPriceFiveYear 预支五年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalPriceFiveYear(const double& _originalPriceFiveYear);

                    /**
                     * 判断参数 OriginalPriceFiveYear 是否已赋值
                     * @return OriginalPriceFiveYear 是否已赋值
                     * 
                     */
                    bool OriginalPriceFiveYearHasBeenSet() const;

                    /**
                     * 获取预支五年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountPriceFiveYear 预支五年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiscountPriceFiveYear() const;

                    /**
                     * 设置预支五年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discountPriceFiveYear 预支五年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiscountPriceFiveYear(const double& _discountPriceFiveYear);

                    /**
                     * 判断参数 DiscountPriceFiveYear 是否已赋值
                     * @return DiscountPriceFiveYear 是否已赋值
                     * 
                     */
                    bool DiscountPriceFiveYearHasBeenSet() const;

                    /**
                     * 获取预支五年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountFiveYear 预支五年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiscountFiveYear() const;

                    /**
                     * 设置预支五年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discountFiveYear 预支五年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiscountFiveYear(const double& _discountFiveYear);

                    /**
                     * 判断参数 DiscountFiveYear 是否已赋值
                     * @return DiscountFiveYear 是否已赋值
                     * 
                     */
                    bool DiscountFiveYearHasBeenSet() const;

                    /**
                     * 获取预支一年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalPriceOneYear 预支一年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetOriginalPriceOneYear() const;

                    /**
                     * 设置预支一年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalPriceOneYear 预支一年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalPriceOneYear(const double& _originalPriceOneYear);

                    /**
                     * 判断参数 OriginalPriceOneYear 是否已赋值
                     * @return OriginalPriceOneYear 是否已赋值
                     * 
                     */
                    bool OriginalPriceOneYearHasBeenSet() const;

                    /**
                     * 获取预支一年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountPriceOneYear 预支一年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiscountPriceOneYear() const;

                    /**
                     * 设置预支一年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discountPriceOneYear 预支一年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiscountPriceOneYear(const double& _discountPriceOneYear);

                    /**
                     * 判断参数 DiscountPriceOneYear 是否已赋值
                     * @return DiscountPriceOneYear 是否已赋值
                     * 
                     */
                    bool DiscountPriceOneYearHasBeenSet() const;

                    /**
                     * 获取预支一年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountOneYear 预支一年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiscountOneYear() const;

                    /**
                     * 设置预支一年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discountOneYear 预支一年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiscountOneYear(const double& _discountOneYear);

                    /**
                     * 判断参数 DiscountOneYear 是否已赋值
                     * @return DiscountOneYear 是否已赋值
                     * 
                     */
                    bool DiscountOneYearHasBeenSet() const;

                private:

                    /**
                     * 后续合计费用的原价，后付费模式使用，单位：元。<br><li>如返回了其他时间区间项，如UnitPriceSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时</li>
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 后续计价单元，后付费模式使用，可取值范围： <br><li>HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）、带宽按小时后付费（BANDWIDTH_POSTPAID_BY_HOUR）：</li><li>GB：表示计价单元是按每GB来计算。当前涉及该计价单元的场景有：流量按小时后付费（TRAFFIC_POSTPAID_BY_HOUR）。</li>
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * 预支合计费用的原价，预付费模式使用，单位：元。
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 预支合计费用的折扣价，预付费模式使用，单位：元。
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * 折扣，如20.0代表2折。
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 后续合计费用的折扣价，后付费模式使用，单位：元<br><li>如返回了其他时间区间项，如UnitPriceDiscountSecondStep，则本项代表时间区间在(0, 96)小时；若未返回其他时间区间项，则本项代表全时段，即(0, ∞)小时</li>
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * 使用时间区间在(96, 360)小时的后续合计费用的原价，后付费模式使用，单位：元。
                     */
                    double m_unitPriceSecondStep;
                    bool m_unitPriceSecondStepHasBeenSet;

                    /**
                     * 使用时间区间在(96, 360)小时的后续合计费用的折扣价，后付费模式使用，单位：元
                     */
                    double m_unitPriceDiscountSecondStep;
                    bool m_unitPriceDiscountSecondStepHasBeenSet;

                    /**
                     * 使用时间区间在(360, ∞)小时的后续合计费用的原价，后付费模式使用，单位：元。
                     */
                    double m_unitPriceThirdStep;
                    bool m_unitPriceThirdStepHasBeenSet;

                    /**
                     * 使用时间区间在(360, ∞)小时的后续合计费用的折扣价，后付费模式使用，单位：元
                     */
                    double m_unitPriceDiscountThirdStep;
                    bool m_unitPriceDiscountThirdStepHasBeenSet;

                    /**
                     * 预支三年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_originalPriceThreeYear;
                    bool m_originalPriceThreeYearHasBeenSet;

                    /**
                     * 预支三年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discountPriceThreeYear;
                    bool m_discountPriceThreeYearHasBeenSet;

                    /**
                     * 预支三年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discountThreeYear;
                    bool m_discountThreeYearHasBeenSet;

                    /**
                     * 预支五年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_originalPriceFiveYear;
                    bool m_originalPriceFiveYearHasBeenSet;

                    /**
                     * 预支五年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discountPriceFiveYear;
                    bool m_discountPriceFiveYearHasBeenSet;

                    /**
                     * 预支五年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discountFiveYear;
                    bool m_discountFiveYearHasBeenSet;

                    /**
                     * 预支一年合计费用的原价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_originalPriceOneYear;
                    bool m_originalPriceOneYearHasBeenSet;

                    /**
                     * 预支一年合计费用的折扣价，预付费模式使用，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discountPriceOneYear;
                    bool m_discountPriceOneYearHasBeenSet;

                    /**
                     * 预支一年应用的折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discountOneYear;
                    bool m_discountOneYearHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ITEMPRICE_H_
