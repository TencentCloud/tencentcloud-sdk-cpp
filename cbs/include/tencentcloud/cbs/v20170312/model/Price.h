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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_PRICE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述预付费或后付费云盘的价格。
                */
                class Price : public AbstractModel
                {
                public:
                    Price();
                    ~Price() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后付费云盘折扣单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceDiscount 后付费云盘折扣单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置后付费云盘折扣单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPriceDiscount 后付费云盘折扣单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取预付费云盘预支费用的折扣价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountPrice 预付费云盘预支费用的折扣价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置预付费云盘预支费用的折扣价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discountPrice 预付费云盘预支费用的折扣价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取后付费云盘原单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPrice 后付费云盘原单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置后付费云盘原单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPrice 后付费云盘原单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取高精度后付费云盘原单价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceHigh 高精度后付费云盘原单价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnitPriceHigh() const;

                    /**
                     * 设置高精度后付费云盘原单价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPriceHigh 高精度后付费云盘原单价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnitPriceHigh(const std::string& _unitPriceHigh);

                    /**
                     * 判断参数 UnitPriceHigh 是否已赋值
                     * @return UnitPriceHigh 是否已赋值
                     * 
                     */
                    bool UnitPriceHighHasBeenSet() const;

                    /**
                     * 获取高精度预付费云盘预支费用的原价, 单位：元	。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalPriceHigh 高精度预付费云盘预支费用的原价, 单位：元	。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginalPriceHigh() const;

                    /**
                     * 设置高精度预付费云盘预支费用的原价, 单位：元	。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalPriceHigh 高精度预付费云盘预支费用的原价, 单位：元	。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalPriceHigh(const std::string& _originalPriceHigh);

                    /**
                     * 判断参数 OriginalPriceHigh 是否已赋值
                     * @return OriginalPriceHigh 是否已赋值
                     * 
                     */
                    bool OriginalPriceHighHasBeenSet() const;

                    /**
                     * 获取预付费云盘预支费用的原价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalPrice 预付费云盘预支费用的原价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置预付费云盘预支费用的原价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalPrice 预付费云盘预支费用的原价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取高精度预付费云盘预支费用的折扣价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountPriceHigh 高精度预付费云盘预支费用的折扣价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiscountPriceHigh() const;

                    /**
                     * 设置高精度预付费云盘预支费用的折扣价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discountPriceHigh 高精度预付费云盘预支费用的折扣价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiscountPriceHigh(const std::string& _discountPriceHigh);

                    /**
                     * 判断参数 DiscountPriceHigh 是否已赋值
                     * @return DiscountPriceHigh 是否已赋值
                     * 
                     */
                    bool DiscountPriceHighHasBeenSet() const;

                    /**
                     * 获取高精度后付费云盘折扣单价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceDiscountHigh 高精度后付费云盘折扣单价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnitPriceDiscountHigh() const;

                    /**
                     * 设置高精度后付费云盘折扣单价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPriceDiscountHigh 高精度后付费云盘折扣单价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnitPriceDiscountHigh(const std::string& _unitPriceDiscountHigh);

                    /**
                     * 判断参数 UnitPriceDiscountHigh 是否已赋值
                     * @return UnitPriceDiscountHigh 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountHighHasBeenSet() const;

                    /**
                     * 获取后付费云盘的计价单元，取值范围：<br><li>HOUR：表示后付费云盘的计价单元是按小时计算。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeUnit 后付费云盘的计价单元，取值范围：<br><li>HOUR：表示后付费云盘的计价单元是按小时计算。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置后付费云盘的计价单元，取值范围：<br><li>HOUR：表示后付费云盘的计价单元是按小时计算。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeUnit 后付费云盘的计价单元，取值范围：<br><li>HOUR：表示后付费云盘的计价单元是按小时计算。</li>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 后付费云盘折扣单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * 预付费云盘预支费用的折扣价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * 后付费云盘原单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 高精度后付费云盘原单价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unitPriceHigh;
                    bool m_unitPriceHighHasBeenSet;

                    /**
                     * 高精度预付费云盘预支费用的原价, 单位：元	。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originalPriceHigh;
                    bool m_originalPriceHighHasBeenSet;

                    /**
                     * 预付费云盘预支费用的原价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 高精度预付费云盘预支费用的折扣价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_discountPriceHigh;
                    bool m_discountPriceHighHasBeenSet;

                    /**
                     * 高精度后付费云盘折扣单价, 单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unitPriceDiscountHigh;
                    bool m_unitPriceDiscountHighHasBeenSet;

                    /**
                     * 后付费云盘的计价单元，取值范围：<br><li>HOUR：表示后付费云盘的计价单元是按小时计算。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_PRICE_H_
