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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_COPYPAIRPRICEDETAIL_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_COPYPAIRPRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 复制对价格明细项
                */
                class CopyPairPriceDetail : public AbstractModel
                {
                public:
                    CopyPairPriceDetail();
                    ~CopyPairPriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费项目标识名称。取值：InstanceCount（容灾CVM实例数）、InstanceDataCapacity（容灾CVM实例数据量）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PriceName 计费项目标识名称。取值：InstanceCount（容灾CVM实例数）、InstanceDataCapacity（容灾CVM实例数据量）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPriceName() const;

                    /**
                     * 设置计费项目标识名称。取值：InstanceCount（容灾CVM实例数）、InstanceDataCapacity（容灾CVM实例数据量）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priceName 计费项目标识名称。取值：InstanceCount（容灾CVM实例数）、InstanceDataCapacity（容灾CVM实例数据量）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPriceName(const std::string& _priceName);

                    /**
                     * 判断参数 PriceName 是否已赋值
                     * @return PriceName 是否已赋值
                     * 
                     */
                    bool PriceNameHasBeenSet() const;

                    /**
                     * 获取计费项目展示名称（跟随语言环境翻译）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PriceTitle 计费项目展示名称（跟随语言环境翻译）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPriceTitle() const;

                    /**
                     * 设置计费项目展示名称（跟随语言环境翻译）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priceTitle 计费项目展示名称（跟随语言环境翻译）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPriceTitle(const std::string& _priceTitle);

                    /**
                     * 判断参数 PriceTitle 是否已赋值
                     * @return PriceTitle 是否已赋值
                     * 
                     */
                    bool PriceTitleHasBeenSet() const;

                    /**
                     * 获取该计费项每小时原价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPrice 该计费项每小时原价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置该计费项每小时原价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPrice 该计费项每小时原价，单位：元
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
                     * 获取该计费项每小时折扣价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceDiscount 该计费项每小时折扣价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置该计费项每小时折扣价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPriceDiscount 该计费项每小时折扣价，单位：元
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
                     * 获取该计费项的折扣，100 表示无折扣
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Discount 该计费项的折扣，100 表示无折扣
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiscount() const;

                    /**
                     * 设置该计费项的折扣，100 表示无折扣
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discount 该计费项的折扣，100 表示无折扣
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiscount(const int64_t& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取计价单元，固定为 HOUR
                     * @return ChargeUnit 计价单元，固定为 HOUR
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置计价单元，固定为 HOUR
                     * @param _chargeUnit 计价单元，固定为 HOUR
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
                     * 计费项目标识名称。取值：InstanceCount（容灾CVM实例数）、InstanceDataCapacity（容灾CVM实例数据量）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_priceName;
                    bool m_priceNameHasBeenSet;

                    /**
                     * 计费项目展示名称（跟随语言环境翻译）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_priceTitle;
                    bool m_priceTitleHasBeenSet;

                    /**
                     * 该计费项每小时原价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 该计费项每小时折扣价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * 该计费项的折扣，100 表示无折扣
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 计价单元，固定为 HOUR
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_COPYPAIRPRICEDETAIL_H_
