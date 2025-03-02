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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EXISTEDINSTANCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EXISTEDINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 已经存在的实例信息
                */
                class ExistedInstance : public AbstractModel
                {
                public:
                    ExistedInstance();
                    ~ExistedInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例是否支持加入集群(TRUE 可以加入 FALSE 不能加入)。
                     * @return Usable 实例是否支持加入集群(TRUE 可以加入 FALSE 不能加入)。
                     * 
                     */
                    bool GetUsable() const;

                    /**
                     * 设置实例是否支持加入集群(TRUE 可以加入 FALSE 不能加入)。
                     * @param _usable 实例是否支持加入集群(TRUE 可以加入 FALSE 不能加入)。
                     * 
                     */
                    void SetUsable(const bool& _usable);

                    /**
                     * 判断参数 Usable 是否已赋值
                     * @return Usable 是否已赋值
                     * 
                     */
                    bool UsableHasBeenSet() const;

                    /**
                     * 获取实例不支持加入的原因。
                     * @return UnusableReason 实例不支持加入的原因。
                     * 
                     */
                    std::string GetUnusableReason() const;

                    /**
                     * 设置实例不支持加入的原因。
                     * @param _unusableReason 实例不支持加入的原因。
                     * 
                     */
                    void SetUnusableReason(const std::string& _unusableReason);

                    /**
                     * 判断参数 UnusableReason 是否已赋值
                     * @return UnusableReason 是否已赋值
                     * 
                     */
                    bool UnusableReasonHasBeenSet() const;

                    /**
                     * 获取实例已经所在的集群ID。
                     * @return AlreadyInCluster 实例已经所在的集群ID。
                     * 
                     */
                    std::string GetAlreadyInCluster() const;

                    /**
                     * 设置实例已经所在的集群ID。
                     * @param _alreadyInCluster 实例已经所在的集群ID。
                     * 
                     */
                    void SetAlreadyInCluster(const std::string& _alreadyInCluster);

                    /**
                     * 判断参数 AlreadyInCluster 是否已赋值
                     * @return AlreadyInCluster 是否已赋值
                     * 
                     */
                    bool AlreadyInClusterHasBeenSet() const;

                    /**
                     * 获取实例ID形如：ins-e55paxnt。
                     * @return InstanceId 实例ID形如：ins-e55paxnt。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID形如：ins-e55paxnt。
                     * @param _instanceId 实例ID形如：ins-e55paxnt。
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
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例主网卡的内网IP列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIpAddresses 实例主网卡的内网IP列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置实例主网卡的内网IP列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIpAddresses 实例主网卡的内网IP列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取实例主网卡的公网IP列表。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIpAddresses 实例主网卡的公网IP列表。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置实例主网卡的公网IP列表。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIpAddresses 实例主网卡的公网IP列表。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @return CreatedTime 创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @param _createdTime 创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取实例的CPU核数，单位：核。
                     * @return CPU 实例的CPU核数，单位：核。
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置实例的CPU核数，单位：核。
                     * @param _cPU 实例的CPU核数，单位：核。
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取实例内存容量，单位：GB。
                     * @return Memory 实例内存容量，单位：GB。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置实例内存容量，单位：GB。
                     * @param _memory 实例内存容量，单位：GB。
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取操作系统名称。
                     * @return OsName 操作系统名称。
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统名称。
                     * @param _osName 操作系统名称。
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取实例机型。
                     * @return InstanceType 实例机型。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例机型。
                     * @param _instanceType 实例机型。
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
                     * 获取伸缩组ID
                     * @return AutoscalingGroupId 伸缩组ID
                     * 
                     */
                    std::string GetAutoscalingGroupId() const;

                    /**
                     * 设置伸缩组ID
                     * @param _autoscalingGroupId 伸缩组ID
                     * 
                     */
                    void SetAutoscalingGroupId(const std::string& _autoscalingGroupId);

                    /**
                     * 判断参数 AutoscalingGroupId 是否已赋值
                     * @return AutoscalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoscalingGroupIdHasBeenSet() const;

                    /**
                     * 获取实例计费模式。取值范围： PREPAID：表示预付费，即包年包月 POSTPAID_BY_HOUR：表示后付费，即按量计费 CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * @return InstanceChargeType 实例计费模式。取值范围： PREPAID：表示预付费，即包年包月 POSTPAID_BY_HOUR：表示后付费，即按量计费 CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费模式。取值范围： PREPAID：表示预付费，即包年包月 POSTPAID_BY_HOUR：表示后付费，即按量计费 CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * @param _instanceChargeType 实例计费模式。取值范围： PREPAID：表示预付费，即包年包月 POSTPAID_BY_HOUR：表示后付费，即按量计费 CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取实例的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPv6Addresses 实例的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIPv6Addresses() const;

                    /**
                     * 设置实例的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iPv6Addresses 实例的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIPv6Addresses(const std::vector<std::string>& _iPv6Addresses);

                    /**
                     * 判断参数 IPv6Addresses 是否已赋值
                     * @return IPv6Addresses 是否已赋值
                     * 
                     */
                    bool IPv6AddressesHasBeenSet() const;

                private:

                    /**
                     * 实例是否支持加入集群(TRUE 可以加入 FALSE 不能加入)。
                     */
                    bool m_usable;
                    bool m_usableHasBeenSet;

                    /**
                     * 实例不支持加入的原因。
                     */
                    std::string m_unusableReason;
                    bool m_unusableReasonHasBeenSet;

                    /**
                     * 实例已经所在的集群ID。
                     */
                    std::string m_alreadyInCluster;
                    bool m_alreadyInClusterHasBeenSet;

                    /**
                     * 实例ID形如：ins-e55paxnt。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例主网卡的内网IP列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 实例主网卡的公网IP列表。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 创建时间。按照ISO8601标准表示，并且使用UTC时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 实例的CPU核数，单位：核。
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 实例内存容量，单位：GB。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 操作系统名称。
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 实例机型。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 伸缩组ID
                     */
                    std::string m_autoscalingGroupId;
                    bool m_autoscalingGroupIdHasBeenSet;

                    /**
                     * 实例计费模式。取值范围： PREPAID：表示预付费，即包年包月 POSTPAID_BY_HOUR：表示后付费，即按量计费 CDHPAID：CDH付费，即只对CDH计费，不对CDH上的实例计费。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 实例的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_iPv6Addresses;
                    bool m_iPv6AddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXISTEDINSTANCE_H_
