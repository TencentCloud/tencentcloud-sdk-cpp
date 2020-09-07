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
                * 预留实例相关价格信息
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
                     */
                    double GetOriginalFixedPrice() const;

                    /**
                     * 设置预支合计费用的原价，单位：元。
                     * @param OriginalFixedPrice 预支合计费用的原价，单位：元。
                     */
                    void SetOriginalFixedPrice(const double& _originalFixedPrice);

                    /**
                     * 判断参数 OriginalFixedPrice 是否已赋值
                     * @return OriginalFixedPrice 是否已赋值
                     */
                    bool OriginalFixedPriceHasBeenSet() const;

                    /**
                     * 获取预支合计费用的折扣价，单位：元。
                     * @return DiscountFixedPrice 预支合计费用的折扣价，单位：元。
                     */
                    double GetDiscountFixedPrice() const;

                    /**
                     * 设置预支合计费用的折扣价，单位：元。
                     * @param DiscountFixedPrice 预支合计费用的折扣价，单位：元。
                     */
                    void SetDiscountFixedPrice(const double& _discountFixedPrice);

                    /**
                     * 判断参数 DiscountFixedPrice 是否已赋值
                     * @return DiscountFixedPrice 是否已赋值
                     */
                    bool DiscountFixedPriceHasBeenSet() const;

                    /**
                     * 获取后续合计费用的原价，单位：元/小时
                     * @return OriginalUsagePrice 后续合计费用的原价，单位：元/小时
                     */
                    double GetOriginalUsagePrice() const;

                    /**
                     * 设置后续合计费用的原价，单位：元/小时
                     * @param OriginalUsagePrice 后续合计费用的原价，单位：元/小时
                     */
                    void SetOriginalUsagePrice(const double& _originalUsagePrice);

                    /**
                     * 判断参数 OriginalUsagePrice 是否已赋值
                     * @return OriginalUsagePrice 是否已赋值
                     */
                    bool OriginalUsagePriceHasBeenSet() const;

                    /**
                     * 获取后续合计费用的折扣价，单位：元/小时
                     * @return DiscountUsagePrice 后续合计费用的折扣价，单位：元/小时
                     */
                    double GetDiscountUsagePrice() const;

                    /**
                     * 设置后续合计费用的折扣价，单位：元/小时
                     * @param DiscountUsagePrice 后续合计费用的折扣价，单位：元/小时
                     */
                    void SetDiscountUsagePrice(const double& _discountUsagePrice);

                    /**
                     * 判断参数 DiscountUsagePrice 是否已赋值
                     * @return DiscountUsagePrice 是否已赋值
                     */
                    bool DiscountUsagePriceHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICE_H_
