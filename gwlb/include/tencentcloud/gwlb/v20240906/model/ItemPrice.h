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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_ITEMPRICE_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_ITEMPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
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
                     * 获取后付费单价，单位：元。
                     * @return UnitPrice 后付费单价，单位：元。
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置后付费单价，单位：元。
                     * @param _unitPrice 后付费单价，单位：元。
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
                     * 获取后付费计价单元，可取值范围： HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）。
                     * @return ChargeUnit 后付费计价单元，可取值范围： HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）。
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置后付费计价单元，可取值范围： HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）。
                     * @param _chargeUnit 后付费计价单元，可取值范围： HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）。
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
                     * 获取预支费用的原价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalPrice 预支费用的原价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置预支费用的原价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalPrice 预支费用的原价，单位：元。
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
                     * 获取预支费用的折扣价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountPrice 预支费用的折扣价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置预支费用的折扣价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discountPrice 预支费用的折扣价，单位：元。
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
                     * 获取后付费的折扣单价，单位:元。
                     * @return UnitPriceDiscount 后付费的折扣单价，单位:元。
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置后付费的折扣单价，单位:元。
                     * @param _unitPriceDiscount 后付费的折扣单价，单位:元。
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

                private:

                    /**
                     * 后付费单价，单位：元。
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 后付费计价单元，可取值范围： HOUR：表示计价单元是按每小时来计算。当前涉及该计价单元的场景有：实例按小时后付费（POSTPAID_BY_HOUR）。
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * 预支费用的原价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * 预支费用的折扣价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * 后付费的折扣单价，单位:元。
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * 折扣，如20.0代表2折。
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_ITEMPRICE_H_
