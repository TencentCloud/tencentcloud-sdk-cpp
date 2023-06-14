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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCES_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCES_H_

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
                * 描述用户已购买预留实例计费信息
                */
                class ReservedInstances : public AbstractModel
                {
                public:
                    ReservedInstances();
                    ~ReservedInstances() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取（此字段已废弃，建议使用字段：ReservedInstanceId）已购买的预留实例计费ID。形如：ri-rtbh4han。
                     * @return ReservedInstancesId （此字段已废弃，建议使用字段：ReservedInstanceId）已购买的预留实例计费ID。形如：ri-rtbh4han。
                     * 
                     */
                    std::string GetReservedInstancesId() const;

                    /**
                     * 设置（此字段已废弃，建议使用字段：ReservedInstanceId）已购买的预留实例计费ID。形如：ri-rtbh4han。
                     * @param _reservedInstancesId （此字段已废弃，建议使用字段：ReservedInstanceId）已购买的预留实例计费ID。形如：ri-rtbh4han。
                     * 
                     */
                    void SetReservedInstancesId(const std::string& _reservedInstancesId);

                    /**
                     * 判断参数 ReservedInstancesId 是否已赋值
                     * @return ReservedInstancesId 是否已赋值
                     * 
                     */
                    bool ReservedInstancesIdHasBeenSet() const;

                    /**
                     * 获取预留实例计费的规格。形如：S3.MEDIUM4。
返回项：<a href="https://cloud.tencent.com/document/product/213/11518">预留实例计费规格列表</a>
                     * @return InstanceType 预留实例计费的规格。形如：S3.MEDIUM4。
返回项：<a href="https://cloud.tencent.com/document/product/213/11518">预留实例计费规格列表</a>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置预留实例计费的规格。形如：S3.MEDIUM4。
返回项：<a href="https://cloud.tencent.com/document/product/213/11518">预留实例计费规格列表</a>
                     * @param _instanceType 预留实例计费的规格。形如：S3.MEDIUM4。
返回项：<a href="https://cloud.tencent.com/document/product/213/11518">预留实例计费规格列表</a>
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
                     * 获取预留实例计费开始时间。形如：1949-10-01 00:00:00
                     * @return StartTime 预留实例计费开始时间。形如：1949-10-01 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置预留实例计费开始时间。形如：1949-10-01 00:00:00
                     * @param _startTime 预留实例计费开始时间。形如：1949-10-01 00:00:00
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取预留实例计费到期时间。形如：1949-10-01 00:00:00
                     * @return EndTime 预留实例计费到期时间。形如：1949-10-01 00:00:00
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置预留实例计费到期时间。形如：1949-10-01 00:00:00
                     * @param _endTime 预留实例计费到期时间。形如：1949-10-01 00:00:00
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒。
                     * @return Duration 预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒。
                     * @param _duration 预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒。
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
                     * 获取已购买的预留实例计费个数。形如：10。
                     * @return InstanceCount 已购买的预留实例计费个数。形如：10。
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置已购买的预留实例计费个数。形如：10。
                     * @param _instanceCount 已购买的预留实例计费个数。形如：10。
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取描述预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     * @return ProductDescription 描述预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     * 
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置描述预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     * @param _productDescription 描述预留实例计费的平台描述（即操作系统）。形如：linux。
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
                     * 获取预留实例计费购买的状态。形如：active
返回项： active (以创建) | pending (等待被创建) | retired (过期)。
                     * @return State 预留实例计费购买的状态。形如：active
返回项： active (以创建) | pending (等待被创建) | retired (过期)。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置预留实例计费购买的状态。形如：active
返回项： active (以创建) | pending (等待被创建) | retired (过期)。
                     * @param _state 预留实例计费购买的状态。形如：active
返回项： active (以创建) | pending (等待被创建) | retired (过期)。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取可购买的预留实例计费类型的结算货币，使用ISO 4217标准货币代码。形如：USD。
返回项：USD（美元）。
                     * @return CurrencyCode 可购买的预留实例计费类型的结算货币，使用ISO 4217标准货币代码。形如：USD。
返回项：USD（美元）。
                     * 
                     */
                    std::string GetCurrencyCode() const;

                    /**
                     * 设置可购买的预留实例计费类型的结算货币，使用ISO 4217标准货币代码。形如：USD。
返回项：USD（美元）。
                     * @param _currencyCode 可购买的预留实例计费类型的结算货币，使用ISO 4217标准货币代码。形如：USD。
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
                     * 获取预留实例计费的类型。形如：S3。
返回项：<a href="https://cloud.tencent.com/document/product/213/11518">预留实例计费类型列表</a>
                     * @return InstanceFamily 预留实例计费的类型。形如：S3。
返回项：<a href="https://cloud.tencent.com/document/product/213/11518">预留实例计费类型列表</a>
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置预留实例计费的类型。形如：S3。
返回项：<a href="https://cloud.tencent.com/document/product/213/11518">预留实例计费类型列表</a>
                     * @param _instanceFamily 预留实例计费的类型。形如：S3。
返回项：<a href="https://cloud.tencent.com/document/product/213/11518">预留实例计费类型列表</a>
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取已购买的预留实例计费ID。形如：ri-rtbh4han。
                     * @return ReservedInstanceId 已购买的预留实例计费ID。形如：ri-rtbh4han。
                     * 
                     */
                    std::string GetReservedInstanceId() const;

                    /**
                     * 设置已购买的预留实例计费ID。形如：ri-rtbh4han。
                     * @param _reservedInstanceId 已购买的预留实例计费ID。形如：ri-rtbh4han。
                     * 
                     */
                    void SetReservedInstanceId(const std::string& _reservedInstanceId);

                    /**
                     * 判断参数 ReservedInstanceId 是否已赋值
                     * @return ReservedInstanceId 是否已赋值
                     * 
                     */
                    bool ReservedInstanceIdHasBeenSet() const;

                    /**
                     * 获取预留实例显示名称。形如：riname-01
                     * @return ReservedInstanceName 预留实例显示名称。形如：riname-01
                     * 
                     */
                    std::string GetReservedInstanceName() const;

                    /**
                     * 设置预留实例显示名称。形如：riname-01
                     * @param _reservedInstanceName 预留实例显示名称。形如：riname-01
                     * 
                     */
                    void SetReservedInstanceName(const std::string& _reservedInstanceName);

                    /**
                     * 判断参数 ReservedInstanceName 是否已赋值
                     * @return ReservedInstanceName 是否已赋值
                     * 
                     */
                    bool ReservedInstanceNameHasBeenSet() const;

                private:

                    /**
                     * （此字段已废弃，建议使用字段：ReservedInstanceId）已购买的预留实例计费ID。形如：ri-rtbh4han。
                     */
                    std::string m_reservedInstancesId;
                    bool m_reservedInstancesIdHasBeenSet;

                    /**
                     * 预留实例计费的规格。形如：S3.MEDIUM4。
返回项：<a href="https://cloud.tencent.com/document/product/213/11518">预留实例计费规格列表</a>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 预留实例计费可购买的可用区。形如：ap-guangzhou-1。
返回项：<a href="https://cloud.tencent.com/document/product/213/6091">可用区列表</a>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 预留实例计费开始时间。形如：1949-10-01 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 预留实例计费到期时间。形如：1949-10-01 00:00:00
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 预留实例计费【有效期】即预留实例计费购买时长。形如：31536000。
计量单位：秒。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 已购买的预留实例计费个数。形如：10。
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 描述预留实例计费的平台描述（即操作系统）。形如：linux。
返回项： linux 。
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * 预留实例计费购买的状态。形如：active
返回项： active (以创建) | pending (等待被创建) | retired (过期)。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 可购买的预留实例计费类型的结算货币，使用ISO 4217标准货币代码。形如：USD。
返回项：USD（美元）。
                     */
                    std::string m_currencyCode;
                    bool m_currencyCodeHasBeenSet;

                    /**
                     * 预留实例计费的付款类型。形如：All Upfront。
返回项： All Upfront (预付全部费用)。
                     */
                    std::string m_offeringType;
                    bool m_offeringTypeHasBeenSet;

                    /**
                     * 预留实例计费的类型。形如：S3。
返回项：<a href="https://cloud.tencent.com/document/product/213/11518">预留实例计费类型列表</a>
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * 已购买的预留实例计费ID。形如：ri-rtbh4han。
                     */
                    std::string m_reservedInstanceId;
                    bool m_reservedInstanceIdHasBeenSet;

                    /**
                     * 预留实例显示名称。形如：riname-01
                     */
                    std::string m_reservedInstanceName;
                    bool m_reservedInstanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCES_H_
