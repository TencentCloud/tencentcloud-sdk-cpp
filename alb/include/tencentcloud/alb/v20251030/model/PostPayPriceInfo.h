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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_POSTPAYPRICEINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_POSTPAYPRICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 描述了后付费计费项的价格信息
                */
                class PostPayPriceInfo : public AbstractModel
                {
                public:
                    PostPayPriceInfo();
                    ~PostPayPriceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Discount 折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discount 折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPrice 单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPrice 单价，单位：元。
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
                     * 获取折扣单价，单位:元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnitPriceDiscount 折扣单价，单位:元。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置折扣单价，单位:元。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unitPriceDiscount 折扣单价，单位:元。
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

                private:

                    /**
                     * 折扣，如20.0代表2折。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * 单价，单位：元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 折扣单价，单位:元。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_POSTPAYPRICEINFO_H_
