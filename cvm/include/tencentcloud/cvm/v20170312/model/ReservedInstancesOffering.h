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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCESOFFERING_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCESOFFERING_H_

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
                * 描述可购买预留实例计费信息
                */
                class ReservedInstancesOffering : public AbstractModel
                {
                public:
                    ReservedInstancesOffering();
                    ~ReservedInstancesOffering() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预留实例计费可购买的可用区。形如：ap-guangzhou-1。
返回项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a>
                     * @return Zone 预留实例计费可购买的可用区。形如：ap-guangzhou-1。
返回项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置预留实例计费可购买的可用区。形如：ap-guangzhou-1。
返回项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a>
                     * @param _zone 预留实例计费可购买的可用区。形如：ap-guangzhou-1。
返回项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取可购买的预留实例计费类型的结算货币，使用ISO 4217标准货币代码。
返回项：USD（美元）。
                     * @return CurrencyCode 可购买的预留实例计费类型的结算货币，使用ISO 4217标准货币代码。
返回项：USD（美元）。
                     * 
                     */
                    std::string GetCurrencyCode() const;

                    /**
                     * 设置可购买的预留实例计费类型的结算货币，使用ISO 4217标准货币代码。
返回项：USD（美元）。
                     * @param _currencyCode 可购买的预留实例计费类型的结算货币，使用ISO 4217标准货币代码。
返回项：USD（美元）。
                     * 
                     */
                    void SetCurrencyCode(const std::string& _currencyCode);

                    /**
                     * 判断参数 CurrencyCode 是否已赋值
                     * @return CurrencyCode 是否已赋值
                     * 
                     */
                    bool CurrencyCodeHasBeenSet() const;

                    /**
                     * 获取预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒
                     * @return Duration 预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒
                     * @param _duration 预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取预留实例计费的购买价格。形如：4000.0。
计量单位：与 currencyCode 一致，目前支持 USD（美元）
                     * @return FixedPrice 预留实例计费的购买价格。形如：4000.0。
计量单位：与 currencyCode 一致，目前支持 USD（美元）
                     * 
                     */
                    double GetFixedPrice() const;

                    /**
                     * 设置预留实例计费的购买价格。形如：4000.0。
计量单位：与 currencyCode 一致，目前支持 USD（美元）
                     * @param _fixedPrice 预留实例计费的购买价格。形如：4000.0。
计量单位：与 currencyCode 一致，目前支持 USD（美元）
                     * 
                     */
                    void SetFixedPrice(const double& _fixedPrice);

                    /**
                     * 判断参数 FixedPrice 是否已赋值
                     * @return FixedPrice 是否已赋值
                     * 
                     */
                    bool FixedPriceHasBeenSet() const;

                    /**
                     * 获取预留实例计费的实例类型。形如：S3.MEDIUM4。
返回项：<a href="https://cloud.tencent.com/product/cvm/instances">预留实例计费类型列表</a>
                     * @return InstanceType 预留实例计费的实例类型。形如：S3.MEDIUM4。
返回项：<a href="https://cloud.tencent.com/product/cvm/instances">预留实例计费类型列表</a>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置预留实例计费的实例类型。形如：S3.MEDIUM4。
返回项：<a href="https://cloud.tencent.com/product/cvm/instances">预留实例计费类型列表</a>
                     * @param _instanceType 预留实例计费的实例类型。形如：S3.MEDIUM4。
返回项：<a href="https://cloud.tencent.com/product/cvm/instances">预留实例计费类型列表</a>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取预留实例计费的付款类型。形如：All Upfront。
返回项： All Upfront (预付全部费用)。
                     * @return OfferingType 预留实例计费的付款类型。形如：All Upfront。
返回项： All Upfront (预付全部费用)。
                     * 
                     */
                    std::string GetOfferingType() const;

                    /**
                     * 设置预留实例计费的付款类型。形如：All Upfront。
返回项： All Upfront (预付全部费用)。
                     * @param _offeringType 预留实例计费的付款类型。形如：All Upfront。
返回项： All Upfront (预付全部费用)。
                     * 
                     */
                    void SetOfferingType(const std::string& _offeringType);

                    /**
                     * 判断参数 OfferingType 是否已赋值
                     * @return OfferingType 是否已赋值
                     * 
                     */
                    bool OfferingTypeHasBeenSet() const;

                    /**
                     * 获取可购买的预留实例计费配置ID。形如：650c138f-ae7e-4750-952a-96841d6e9fc1。
                     * @return ReservedInstancesOfferingId 可购买的预留实例计费配置ID。形如：650c138f-ae7e-4750-952a-96841d6e9fc1。
                     * 
                     */
                    std::string GetReservedInstancesOfferingId() const;

                    /**
                     * 设置可购买的预留实例计费配置ID。形如：650c138f-ae7e-4750-952a-96841d6e9fc1。
                     * @param _reservedInstancesOfferingId 可购买的预留实例计费配置ID。形如：650c138f-ae7e-4750-952a-96841d6e9fc1。
                     * 
                     */
                    void SetReservedInstancesOfferingId(const std::string& _reservedInstancesOfferingId);

                    /**
                     * 判断参数 ReservedInstancesOfferingId 是否已赋值
                     * @return ReservedInstancesOfferingId 是否已赋值
                     * 
                     */
                    bool ReservedInstancesOfferingIdHasBeenSet() const;

                    /**
                     * 获取预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     * @return ProductDescription 预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     * 
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     * @param _productDescription 预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     * 
                     */
                    void SetProductDescription(const std::string& _productDescription);

                    /**
                     * 判断参数 ProductDescription 是否已赋值
                     * @return ProductDescription 是否已赋值
                     * 
                     */
                    bool ProductDescriptionHasBeenSet() const;

                    /**
                     * 获取扣除预付费之后的使用价格 (按小时计费)。形如：0.0。
目前，因为只支持 All Upfront 付款类型，所以默认为 0元/小时。
计量单位：元/小时，货币单位与 currencyCode 一致，目前支持 USD（美元）
                     * @return UsagePrice 扣除预付费之后的使用价格 (按小时计费)。形如：0.0。
目前，因为只支持 All Upfront 付款类型，所以默认为 0元/小时。
计量单位：元/小时，货币单位与 currencyCode 一致，目前支持 USD（美元）
                     * 
                     */
                    double GetUsagePrice() const;

                    /**
                     * 设置扣除预付费之后的使用价格 (按小时计费)。形如：0.0。
目前，因为只支持 All Upfront 付款类型，所以默认为 0元/小时。
计量单位：元/小时，货币单位与 currencyCode 一致，目前支持 USD（美元）
                     * @param _usagePrice 扣除预付费之后的使用价格 (按小时计费)。形如：0.0。
目前，因为只支持 All Upfront 付款类型，所以默认为 0元/小时。
计量单位：元/小时，货币单位与 currencyCode 一致，目前支持 USD（美元）
                     * 
                     */
                    void SetUsagePrice(const double& _usagePrice);

                    /**
                     * 判断参数 UsagePrice 是否已赋值
                     * @return UsagePrice 是否已赋值
                     * 
                     */
                    bool UsagePriceHasBeenSet() const;

                private:

                    /**
                     * 预留实例计费可购买的可用区。形如：ap-guangzhou-1。
返回项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可购买的预留实例计费类型的结算货币，使用ISO 4217标准货币代码。
返回项：USD（美元）。
                     */
                    std::string m_currencyCode;
                    bool m_currencyCodeHasBeenSet;

                    /**
                     * 预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 预留实例计费的购买价格。形如：4000.0。
计量单位：与 currencyCode 一致，目前支持 USD（美元）
                     */
                    double m_fixedPrice;
                    bool m_fixedPriceHasBeenSet;

                    /**
                     * 预留实例计费的实例类型。形如：S3.MEDIUM4。
返回项：<a href="https://cloud.tencent.com/product/cvm/instances">预留实例计费类型列表</a>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 预留实例计费的付款类型。形如：All Upfront。
返回项： All Upfront (预付全部费用)。
                     */
                    std::string m_offeringType;
                    bool m_offeringTypeHasBeenSet;

                    /**
                     * 可购买的预留实例计费配置ID。形如：650c138f-ae7e-4750-952a-96841d6e9fc1。
                     */
                    std::string m_reservedInstancesOfferingId;
                    bool m_reservedInstancesOfferingIdHasBeenSet;

                    /**
                     * 预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * 扣除预付费之后的使用价格 (按小时计费)。形如：0.0。
目前，因为只支持 All Upfront 付款类型，所以默认为 0元/小时。
计量单位：元/小时，货币单位与 currencyCode 一致，目前支持 USD（美元）
                     */
                    double m_usagePrice;
                    bool m_usagePriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCESOFFERING_H_
