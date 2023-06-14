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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESOVERVIEW_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 托管prometheusV2实例概览
                */
                class PrometheusInstancesOverview : public AbstractModel
                {
                public:
                    PrometheusInstancesOverview();
                    ~PrometheusInstancesOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
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
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:销毁中； 6:已停机； 7: 已删除）
                     * @return InstanceStatus 运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:销毁中； 6:已停机； 7: 已删除）
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:销毁中； 6:已停机； 7: 已删除）
                     * @param _instanceStatus 运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:销毁中； 6:已停机； 7: 已删除）
                     * 
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取计费状态（1:正常；2:过期; 3:销毁; 4:分配中; 5:分配失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeStatus 计费状态（1:正常；2:过期; 3:销毁; 4:分配中; 5:分配失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChargeStatus() const;

                    /**
                     * 设置计费状态（1:正常；2:过期; 3:销毁; 4:分配中; 5:分配失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeStatus 计费状态（1:正常；2:过期; 3:销毁; 4:分配中; 5:分配失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChargeStatus(const int64_t& _chargeStatus);

                    /**
                     * 判断参数 ChargeStatus 是否已赋值
                     * @return ChargeStatus 是否已赋值
                     * 
                     */
                    bool ChargeStatusHasBeenSet() const;

                    /**
                     * 获取是否开启 Grafana（0:不开启，1:开启）
                     * @return EnableGrafana 是否开启 Grafana（0:不开启，1:开启）
                     * 
                     */
                    int64_t GetEnableGrafana() const;

                    /**
                     * 设置是否开启 Grafana（0:不开启，1:开启）
                     * @param _enableGrafana 是否开启 Grafana（0:不开启，1:开启）
                     * 
                     */
                    void SetEnableGrafana(const int64_t& _enableGrafana);

                    /**
                     * 判断参数 EnableGrafana 是否已赋值
                     * @return EnableGrafana 是否已赋值
                     * 
                     */
                    bool EnableGrafanaHasBeenSet() const;

                    /**
                     * 获取Grafana 面板 URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrafanaURL Grafana 面板 URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrafanaURL() const;

                    /**
                     * 设置Grafana 面板 URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grafanaURL Grafana 面板 URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrafanaURL(const std::string& _grafanaURL);

                    /**
                     * 判断参数 GrafanaURL 是否已赋值
                     * @return GrafanaURL 是否已赋值
                     * 
                     */
                    bool GrafanaURLHasBeenSet() const;

                    /**
                     * 获取实例付费类型（1:试用版；2:预付费）
                     * @return InstanceChargeType 实例付费类型（1:试用版；2:预付费）
                     * 
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置实例付费类型（1:试用版；2:预付费）
                     * @param _instanceChargeType 实例付费类型（1:试用版；2:预付费）
                     * 
                     */
                    void SetInstanceChargeType(const int64_t& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecName 规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specName 规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取存储周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataRetentionTime 存储周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataRetentionTime() const;

                    /**
                     * 设置存储周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataRetentionTime 存储周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataRetentionTime(const int64_t& _dataRetentionTime);

                    /**
                     * 判断参数 DataRetentionTime 是否已赋值
                     * @return DataRetentionTime 是否已赋值
                     * 
                     */
                    bool DataRetentionTimeHasBeenSet() const;

                    /**
                     * 获取购买的实例过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 购买的实例过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置购买的实例过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 购买的实例过期时间
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

                    /**
                     * 获取自动续费标记(0:不自动续费；1:开启自动续费；2:禁止自动续费；-1:无效)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag 自动续费标记(0:不自动续费；1:开启自动续费；2:禁止自动续费；-1:无效)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记(0:不自动续费；1:开启自动续费；2:禁止自动续费；-1:无效)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag 自动续费标记(0:不自动续费；1:开启自动续费；2:禁止自动续费；-1:无效)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取绑定集群总数
                     * @return BoundTotal 绑定集群总数
                     * 
                     */
                    int64_t GetBoundTotal() const;

                    /**
                     * 设置绑定集群总数
                     * @param _boundTotal 绑定集群总数
                     * 
                     */
                    void SetBoundTotal(const int64_t& _boundTotal);

                    /**
                     * 判断参数 BoundTotal 是否已赋值
                     * @return BoundTotal 是否已赋值
                     * 
                     */
                    bool BoundTotalHasBeenSet() const;

                    /**
                     * 获取绑定集群正常状态总数
                     * @return BoundNormal 绑定集群正常状态总数
                     * 
                     */
                    int64_t GetBoundNormal() const;

                    /**
                     * 设置绑定集群正常状态总数
                     * @param _boundNormal 绑定集群正常状态总数
                     * 
                     */
                    void SetBoundNormal(const int64_t& _boundNormal);

                    /**
                     * 判断参数 BoundNormal 是否已赋值
                     * @return BoundNormal 是否已赋值
                     * 
                     */
                    bool BoundNormalHasBeenSet() const;

                    /**
                     * 获取资源包状态，0-无可用资源包，1-有可用资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePackageStatus 资源包状态，0-无可用资源包，1-有可用资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResourcePackageStatus() const;

                    /**
                     * 设置资源包状态，0-无可用资源包，1-有可用资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePackageStatus 资源包状态，0-无可用资源包，1-有可用资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourcePackageStatus(const int64_t& _resourcePackageStatus);

                    /**
                     * 判断参数 ResourcePackageStatus 是否已赋值
                     * @return ResourcePackageStatus 是否已赋值
                     * 
                     */
                    bool ResourcePackageStatusHasBeenSet() const;

                    /**
                     * 获取资源包规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePackageSpecName 资源包规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourcePackageSpecName() const;

                    /**
                     * 设置资源包规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePackageSpecName 资源包规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourcePackageSpecName(const std::string& _resourcePackageSpecName);

                    /**
                     * 判断参数 ResourcePackageSpecName 是否已赋值
                     * @return ResourcePackageSpecName 是否已赋值
                     * 
                     */
                    bool ResourcePackageSpecNameHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:销毁中； 6:已停机； 7: 已删除）
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 计费状态（1:正常；2:过期; 3:销毁; 4:分配中; 5:分配失败）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * 是否开启 Grafana（0:不开启，1:开启）
                     */
                    int64_t m_enableGrafana;
                    bool m_enableGrafanaHasBeenSet;

                    /**
                     * Grafana 面板 URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grafanaURL;
                    bool m_grafanaURLHasBeenSet;

                    /**
                     * 实例付费类型（1:试用版；2:预付费）
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 存储周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataRetentionTime;
                    bool m_dataRetentionTimeHasBeenSet;

                    /**
                     * 购买的实例过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 自动续费标记(0:不自动续费；1:开启自动续费；2:禁止自动续费；-1:无效)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 绑定集群总数
                     */
                    int64_t m_boundTotal;
                    bool m_boundTotalHasBeenSet;

                    /**
                     * 绑定集群正常状态总数
                     */
                    int64_t m_boundNormal;
                    bool m_boundNormalHasBeenSet;

                    /**
                     * 资源包状态，0-无可用资源包，1-有可用资源包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resourcePackageStatus;
                    bool m_resourcePackageStatusHasBeenSet;

                    /**
                     * 资源包规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourcePackageSpecName;
                    bool m_resourcePackageSpecNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESOVERVIEW_H_
