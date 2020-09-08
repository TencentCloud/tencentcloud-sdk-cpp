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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICEITEM_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICEITEM_H_

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
                * 基于付费类型的预留实例相关价格信息。预留实例当前只针对国际站白名单用户开放。
                */
                class ReservedInstancePriceItem : public AbstractModel
                {
                public:
                    ReservedInstancePriceItem();
                    ~ReservedInstancePriceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取付费类型，如："All Upfront","Partial Upfront","No Upfront"
                     * @return OfferingType 付费类型，如："All Upfront","Partial Upfront","No Upfront"
                     */
                    std::string GetOfferingType() const;

                    /**
                     * 设置付费类型，如："All Upfront","Partial Upfront","No Upfront"
                     * @param OfferingType 付费类型，如："All Upfront","Partial Upfront","No Upfront"
                     */
                    void SetOfferingType(const std::string& _offeringType);

                    /**
                     * 判断参数 OfferingType 是否已赋值
                     * @return OfferingType 是否已赋值
                     */
                    bool OfferingTypeHasBeenSet() const;

                    /**
                     * 获取预支合计费用，单位：元。
                     * @return FixedPrice 预支合计费用，单位：元。
                     */
                    double GetFixedPrice() const;

                    /**
                     * 设置预支合计费用，单位：元。
                     * @param FixedPrice 预支合计费用，单位：元。
                     */
                    void SetFixedPrice(const double& _fixedPrice);

                    /**
                     * 判断参数 FixedPrice 是否已赋值
                     * @return FixedPrice 是否已赋值
                     */
                    bool FixedPriceHasBeenSet() const;

                    /**
                     * 获取后续合计费用，单位：元/小时
                     * @return UsagePrice 后续合计费用，单位：元/小时
                     */
                    double GetUsagePrice() const;

                    /**
                     * 设置后续合计费用，单位：元/小时
                     * @param UsagePrice 后续合计费用，单位：元/小时
                     */
                    void SetUsagePrice(const double& _usagePrice);

                    /**
                     * 判断参数 UsagePrice 是否已赋值
                     * @return UsagePrice 是否已赋值
                     */
                    bool UsagePriceHasBeenSet() const;

                    /**
                     * 获取预留实例配置ID
                     * @return ReservedInstancesOfferingId 预留实例配置ID
                     */
                    std::string GetReservedInstancesOfferingId() const;

                    /**
                     * 设置预留实例配置ID
                     * @param ReservedInstancesOfferingId 预留实例配置ID
                     */
                    void SetReservedInstancesOfferingId(const std::string& _reservedInstancesOfferingId);

                    /**
                     * 判断参数 ReservedInstancesOfferingId 是否已赋值
                     * @return ReservedInstancesOfferingId 是否已赋值
                     */
                    bool ReservedInstancesOfferingIdHasBeenSet() const;

                    /**
                     * 获取预留实例计费可购买的可用区。
                     * @return Zone 预留实例计费可购买的可用区。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置预留实例计费可购买的可用区。
                     * @param Zone 预留实例计费可购买的可用区。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒
                     * @return Duration 预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒
                     * @param Duration 预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     * @return ProductDescription 预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     * @param ProductDescription 预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     */
                    void SetProductDescription(const std::string& _productDescription);

                    /**
                     * 判断参数 ProductDescription 是否已赋值
                     * @return ProductDescription 是否已赋值
                     */
                    bool ProductDescriptionHasBeenSet() const;

                private:

                    /**
                     * 付费类型，如："All Upfront","Partial Upfront","No Upfront"
                     */
                    std::string m_offeringType;
                    bool m_offeringTypeHasBeenSet;

                    /**
                     * 预支合计费用，单位：元。
                     */
                    double m_fixedPrice;
                    bool m_fixedPriceHasBeenSet;

                    /**
                     * 后续合计费用，单位：元/小时
                     */
                    double m_usagePrice;
                    bool m_usagePriceHasBeenSet;

                    /**
                     * 预留实例配置ID
                     */
                    std::string m_reservedInstancesOfferingId;
                    bool m_reservedInstancesOfferingIdHasBeenSet;

                    /**
                     * 预留实例计费可购买的可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEPRICEITEM_H_
