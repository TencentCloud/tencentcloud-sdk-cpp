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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_COPYPAIRPRICE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_COPYPAIRPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/CopyPairPriceDetail.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 复制对价格信息
                */
                class CopyPairPrice : public AbstractModel
                {
                public:
                    CopyPairPrice();
                    ~CopyPairPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后付费每小时原价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPrice 后付费每小时原价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置后付费每小时原价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPrice 后付费每小时原价，单位：元
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
                     * 获取高精度后付费每小时原价，单位：元（字符串形式，避免精度丢失）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceHigh 高精度后付费每小时原价，单位：元（字符串形式，避免精度丢失）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnitPriceHigh() const;

                    /**
                     * 设置高精度后付费每小时原价，单位：元（字符串形式，避免精度丢失）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPriceHigh 高精度后付费每小时原价，单位：元（字符串形式，避免精度丢失）
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
                     * 获取后付费每小时折扣价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceDiscount 后付费每小时折扣价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置后付费每小时折扣价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPriceDiscount 后付费每小时折扣价，单位：元
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
                     * 获取高精度后付费每小时折扣价，单位：元（字符串形式，避免精度丢失）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceDiscountHigh 高精度后付费每小时折扣价，单位：元（字符串形式，避免精度丢失）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnitPriceDiscountHigh() const;

                    /**
                     * 设置高精度后付费每小时折扣价，单位：元（字符串形式，避免精度丢失）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPriceDiscountHigh 高精度后付费每小时折扣价，单位：元（字符串形式，避免精度丢失）
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
                     * 获取折扣，100 表示无折扣，80 表示 8 折
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Discount 折扣，100 表示无折扣，80 表示 8 折
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiscount() const;

                    /**
                     * 设置折扣，100 表示无折扣，80 表示 8 折
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discount 折扣，100 表示无折扣，80 表示 8 折
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
                     * 获取计价单元，固定为 HOUR（按小时计费）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeUnit 计价单元，固定为 HOUR（按小时计费）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置计价单元，固定为 HOUR（按小时计费）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeUnit 计价单元，固定为 HOUR（按小时计费）
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

                    /**
                     * 获取计费项目明细列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailPrices 计费项目明细列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CopyPairPriceDetail> GetDetailPrices() const;

                    /**
                     * 设置计费项目明细列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detailPrices 计费项目明细列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetailPrices(const std::vector<CopyPairPriceDetail>& _detailPrices);

                    /**
                     * 判断参数 DetailPrices 是否已赋值
                     * @return DetailPrices 是否已赋值
                     * 
                     */
                    bool DetailPricesHasBeenSet() const;

                private:

                    /**
                     * 后付费每小时原价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 高精度后付费每小时原价，单位：元（字符串形式，避免精度丢失）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unitPriceHigh;
                    bool m_unitPriceHighHasBeenSet;

                    /**
                     * 后付费每小时折扣价，单位：元
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * 高精度后付费每小时折扣价，单位：元（字符串形式，避免精度丢失）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unitPriceDiscountHigh;
                    bool m_unitPriceDiscountHighHasBeenSet;

                    /**
                     * 折扣，100 表示无折扣，80 表示 8 折
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 计价单元，固定为 HOUR（按小时计费）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * 计费项目明细列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CopyPairPriceDetail> m_detailPrices;
                    bool m_detailPricesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_COPYPAIRPRICE_H_
