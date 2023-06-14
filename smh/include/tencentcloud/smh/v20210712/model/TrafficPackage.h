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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_TRAFFICPACKAGE_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_TRAFFICPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * 流量资源包信息
                */
                class TrafficPackage : public AbstractModel
                {
                public:
                    TrafficPackage();
                    ~TrafficPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量资源包所抵扣的实例 ID
                     * @return InstanceId 流量资源包所抵扣的实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置流量资源包所抵扣的实例 ID
                     * @param _instanceId 流量资源包所抵扣的实例 ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取专属域名。如果实例无专属域名，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 专属域名。如果实例无专属域名，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置专属域名。如果实例无专属域名，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 专属域名。如果实例无专属域名，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取流量资源包来源类型，0 为付费购买，1 为赠送。
                     * @return Type 流量资源包来源类型，0 为付费购买，1 为赠送。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置流量资源包来源类型，0 为付费购买，1 为赠送。
                     * @param _type 流量资源包来源类型，0 为付费购买，1 为赠送。
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取总流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * @return Size 总流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置总流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * @param _size 总流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取总流量，单位为 GB
                     * @return SizeGB 总流量，单位为 GB
                     * 
                     */
                    uint64_t GetSizeGB() const;

                    /**
                     * 设置总流量，单位为 GB
                     * @param _sizeGB 总流量，单位为 GB
                     * 
                     */
                    void SetSizeGB(const uint64_t& _sizeGB);

                    /**
                     * 判断参数 SizeGB 是否已赋值
                     * @return SizeGB 是否已赋值
                     * 
                     */
                    bool SizeGBHasBeenSet() const;

                    /**
                     * 获取剩余流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * @return Remain 剩余流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    std::string GetRemain() const;

                    /**
                     * 设置剩余流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * @param _remain 剩余流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    void SetRemain(const std::string& _remain);

                    /**
                     * 判断参数 Remain 是否已赋值
                     * @return Remain 是否已赋值
                     * 
                     */
                    bool RemainHasBeenSet() const;

                    /**
                     * 获取已使用流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * @return Used 已使用流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    std::string GetUsed() const;

                    /**
                     * 设置已使用流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * @param _used 已使用流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    void SetUsed(const std::string& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取已使用百分比，由于数字类型精度限制，该字段为 String 类型。
                     * @return UsedPercentage 已使用百分比，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    std::string GetUsedPercentage() const;

                    /**
                     * 设置已使用百分比，由于数字类型精度限制，该字段为 String 类型。
                     * @param _usedPercentage 已使用百分比，由于数字类型精度限制，该字段为 String 类型。
                     * 
                     */
                    void SetUsedPercentage(const std::string& _usedPercentage);

                    /**
                     * 判断参数 UsedPercentage 是否已赋值
                     * @return UsedPercentage 是否已赋值
                     * 
                     */
                    bool UsedPercentageHasBeenSet() const;

                    /**
                     * 获取生效时间，即流量资源包的订购时间
                     * @return EffectiveTime 生效时间，即流量资源包的订购时间
                     * 
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置生效时间，即流量资源包的订购时间
                     * @param _effectiveTime 生效时间，即流量资源包的订购时间
                     * 
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取过期时间，即所抵扣的实例的过期时间。如果流量资源包所抵扣的实例为按量计费或永久有效实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 过期时间，即所抵扣的实例的过期时间。如果流量资源包所抵扣的实例为按量计费或永久有效实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间，即所抵扣的实例的过期时间。如果流量资源包所抵扣的实例为按量计费或永久有效实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 过期时间，即所抵扣的实例的过期时间。如果流量资源包所抵扣的实例为按量计费或永久有效实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 流量资源包所抵扣的实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 专属域名。如果实例无专属域名，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 流量资源包来源类型，0 为付费购买，1 为赠送。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 总流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 总流量，单位为 GB
                     */
                    uint64_t m_sizeGB;
                    bool m_sizeGBHasBeenSet;

                    /**
                     * 剩余流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     */
                    std::string m_remain;
                    bool m_remainHasBeenSet;

                    /**
                     * 已使用流量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。
                     */
                    std::string m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * 已使用百分比，由于数字类型精度限制，该字段为 String 类型。
                     */
                    std::string m_usedPercentage;
                    bool m_usedPercentageHasBeenSet;

                    /**
                     * 生效时间，即流量资源包的订购时间
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * 过期时间，即所抵扣的实例的过期时间。如果流量资源包所抵扣的实例为按量计费或永久有效实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_TRAFFICPACKAGE_H_
