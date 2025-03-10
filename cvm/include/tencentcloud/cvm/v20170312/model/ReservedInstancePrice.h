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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICE_H_

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
                * 预留实例相关价格信息。预留实例当前只针对国际站白名单用户开放。
                */
                class ReservedInstancePrice : public AbstractModel
                {
                public:
                    ReservedInstancePrice();
                    ~ReservedInstancePrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预支合计费用的原价，单位：元。
                     * @return OriginalFixedPrice 预支合计费用的原价，单位：元。
                     * 
                     */
                    double GetOriginalFixedPrice() const;

                    /**
                     * 设置预支合计费用的原价，单位：元。
                     * @param _originalFixedPrice 预支合计费用的原价，单位：元。
                     * 
                     */
                    void SetOriginalFixedPrice(const double& _originalFixedPrice);

                    /**
                     * 判断参数 OriginalFixedPrice 是否已赋值
                     * @return OriginalFixedPrice 是否已赋值
                     * 
                     */
                    bool OriginalFixedPriceHasBeenSet() const;

                    /**
                     * 获取预支合计费用的折扣价，单位：元。
                     * @return DiscountFixedPrice 预支合计费用的折扣价，单位：元。
                     * 
                     */
                    double GetDiscountFixedPrice() const;

                    /**
                     * 设置预支合计费用的折扣价，单位：元。
                     * @param _discountFixedPrice 预支合计费用的折扣价，单位：元。
                     * 
                     */
                    void SetDiscountFixedPrice(const double& _discountFixedPrice);

                    /**
                     * 判断参数 DiscountFixedPrice 是否已赋值
                     * @return DiscountFixedPrice 是否已赋值
                     * 
                     */
                    bool DiscountFixedPriceHasBeenSet() const;

                    /**
                     * 获取后续合计费用的原价，单位：元/小时
                     * @return OriginalUsagePrice 后续合计费用的原价，单位：元/小时
                     * 
                     */
                    double GetOriginalUsagePrice() const;

                    /**
                     * 设置后续合计费用的原价，单位：元/小时
                     * @param _originalUsagePrice 后续合计费用的原价，单位：元/小时
                     * 
                     */
                    void SetOriginalUsagePrice(const double& _originalUsagePrice);

                    /**
                     * 判断参数 OriginalUsagePrice 是否已赋值
                     * @return OriginalUsagePrice 是否已赋值
                     * 
                     */
                    bool OriginalUsagePriceHasBeenSet() const;

                    /**
                     * 获取后续合计费用的折扣价，单位：元/小时
                     * @return DiscountUsagePrice 后续合计费用的折扣价，单位：元/小时
                     * 
                     */
                    double GetDiscountUsagePrice() const;

                    /**
                     * 设置后续合计费用的折扣价，单位：元/小时
                     * @param _discountUsagePrice 后续合计费用的折扣价，单位：元/小时
                     * 
                     */
                    void SetDiscountUsagePrice(const double& _discountUsagePrice);

                    /**
                     * 判断参数 DiscountUsagePrice 是否已赋值
                     * @return DiscountUsagePrice 是否已赋值
                     * 
                     */
                    bool DiscountUsagePriceHasBeenSet() const;

                    /**
                     * 获取预支费用的折扣，如20.0代表2折。 注意：此字段可能返回 null，表示取不到有效值。
                     * @return FixedPriceDiscount 预支费用的折扣，如20.0代表2折。 注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFixedPriceDiscount() const;

                    /**
                     * 设置预支费用的折扣，如20.0代表2折。 注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fixedPriceDiscount 预支费用的折扣，如20.0代表2折。 注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFixedPriceDiscount(const double& _fixedPriceDiscount);

                    /**
                     * 判断参数 FixedPriceDiscount 是否已赋值
                     * @return FixedPriceDiscount 是否已赋值
                     * 
                     */
                    bool FixedPriceDiscountHasBeenSet() const;

                    /**
                     * 获取后续费用的折扣，如20.0代表2折。 注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsagePriceDiscount 后续费用的折扣，如20.0代表2折。 注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUsagePriceDiscount() const;

                    /**
                     * 设置后续费用的折扣，如20.0代表2折。 注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usagePriceDiscount 后续费用的折扣，如20.0代表2折。 注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsagePriceDiscount(const double& _usagePriceDiscount);

                    /**
                     * 判断参数 UsagePriceDiscount 是否已赋值
                     * @return UsagePriceDiscount 是否已赋值
                     * 
                     */
                    bool UsagePriceDiscountHasBeenSet() const;

                private:

                    /**
                     * 预支合计费用的原价，单位：元。
                     */
                    double m_originalFixedPrice;
                    bool m_originalFixedPriceHasBeenSet;

                    /**
                     * 预支合计费用的折扣价，单位：元。
                     */
                    double m_discountFixedPrice;
                    bool m_discountFixedPriceHasBeenSet;

                    /**
                     * 后续合计费用的原价，单位：元/小时
                     */
                    double m_originalUsagePrice;
                    bool m_originalUsagePriceHasBeenSet;

                    /**
                     * 后续合计费用的折扣价，单位：元/小时
                     */
                    double m_discountUsagePrice;
                    bool m_discountUsagePriceHasBeenSet;

                    /**
                     * 预支费用的折扣，如20.0代表2折。 注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_fixedPriceDiscount;
                    bool m_fixedPriceDiscountHasBeenSet;

                    /**
                     * 后续费用的折扣，如20.0代表2折。 注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_usagePriceDiscount;
                    bool m_usagePriceDiscountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICE_H_
