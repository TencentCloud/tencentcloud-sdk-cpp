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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例名</p>
                     * @return InstanceName <p>实例名</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名</p>
                     * @param _instanceName <p>实例名</p>
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
                     * 获取<p>VPC ID</p>
                     * @return VpcId <p>VPC ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID</p>
                     * @param _vpcId <p>VPC ID</p>
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
                     * 获取<p>子网ID</p>
                     * @return SubnetId <p>子网ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _subnetId <p>子网ID</p>
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
                     * 获取<p>运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:销毁中； 6:已停机； 7: 已删除）</p>
                     * @return InstanceStatus <p>运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:销毁中； 6:已停机； 7: 已删除）</p>
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置<p>运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:销毁中； 6:已停机； 7: 已删除）</p>
                     * @param _instanceStatus <p>运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:销毁中； 6:已停机； 7: 已删除）</p>
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
                     * 获取<p>计费状态（1:正常；2:过期; 3:销毁; 4:分配中; 5:分配失败）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeStatus <p>计费状态（1:正常；2:过期; 3:销毁; 4:分配中; 5:分配失败）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChargeStatus() const;

                    /**
                     * 设置<p>计费状态（1:正常；2:过期; 3:销毁; 4:分配中; 5:分配失败）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeStatus <p>计费状态（1:正常；2:过期; 3:销毁; 4:分配中; 5:分配失败）</p>
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
                     * 获取<p>是否开启 Grafana（0:不开启，1:开启）</p>
                     * @return EnableGrafana <p>是否开启 Grafana（0:不开启，1:开启）</p>
                     * 
                     */
                    int64_t GetEnableGrafana() const;

                    /**
                     * 设置<p>是否开启 Grafana（0:不开启，1:开启）</p>
                     * @param _enableGrafana <p>是否开启 Grafana（0:不开启，1:开启）</p>
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
                     * 获取<p>Grafana 面板 URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrafanaURL <p>Grafana 面板 URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrafanaURL() const;

                    /**
                     * 设置<p>Grafana 面板 URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grafanaURL <p>Grafana 面板 URL</p>
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
                     * 获取<p>实例付费类型（1:试用版；2:预付费）</p>
                     * @return InstanceChargeType <p>实例付费类型（1:试用版；2:预付费）</p>
                     * 
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例付费类型（1:试用版；2:预付费）</p>
                     * @param _instanceChargeType <p>实例付费类型（1:试用版；2:预付费）</p>
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
                     * 获取<p>规格名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecName <p>规格名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置<p>规格名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specName <p>规格名称</p>
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
                     * 获取<p>存储周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataRetentionTime <p>存储周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataRetentionTime() const;

                    /**
                     * 设置<p>存储周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataRetentionTime <p>存储周期</p>
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
                     * 获取<p>购买的实例过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime <p>购买的实例过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>购买的实例过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime <p>购买的实例过期时间</p>
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
                     * 获取<p>自动续费标记(0:不自动续费；1:开启自动续费；2:禁止自动续费；-1:无效)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag <p>自动续费标记(0:不自动续费；1:开启自动续费；2:禁止自动续费；-1:无效)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标记(0:不自动续费；1:开启自动续费；2:禁止自动续费；-1:无效)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag <p>自动续费标记(0:不自动续费；1:开启自动续费；2:禁止自动续费；-1:无效)</p>
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
                     * 获取<p>绑定集群总数</p>
                     * @return BoundTotal <p>绑定集群总数</p>
                     * 
                     */
                    int64_t GetBoundTotal() const;

                    /**
                     * 设置<p>绑定集群总数</p>
                     * @param _boundTotal <p>绑定集群总数</p>
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
                     * 获取<p>绑定集群正常状态总数</p>
                     * @return BoundNormal <p>绑定集群正常状态总数</p>
                     * 
                     */
                    int64_t GetBoundNormal() const;

                    /**
                     * 设置<p>绑定集群正常状态总数</p>
                     * @param _boundNormal <p>绑定集群正常状态总数</p>
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
                     * 获取<p>资源包状态，0-无可用资源包，1-有可用资源包</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePackageStatus <p>资源包状态，0-无可用资源包，1-有可用资源包</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResourcePackageStatus() const;

                    /**
                     * 设置<p>资源包状态，0-无可用资源包，1-有可用资源包</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePackageStatus <p>资源包状态，0-无可用资源包，1-有可用资源包</p>
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
                     * 获取<p>资源包规格名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePackageSpecName <p>资源包规格名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourcePackageSpecName() const;

                    /**
                     * 设置<p>资源包规格名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePackageSpecName <p>资源包规格名称</p>
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
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>运行状态（1:正在创建；2:运行中；3:异常；4:重启中；5:销毁中； 6:已停机； 7: 已删除）</p>
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>计费状态（1:正常；2:过期; 3:销毁; 4:分配中; 5:分配失败）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * <p>是否开启 Grafana（0:不开启，1:开启）</p>
                     */
                    int64_t m_enableGrafana;
                    bool m_enableGrafanaHasBeenSet;

                    /**
                     * <p>Grafana 面板 URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grafanaURL;
                    bool m_grafanaURLHasBeenSet;

                    /**
                     * <p>实例付费类型（1:试用版；2:预付费）</p>
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>规格名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>存储周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataRetentionTime;
                    bool m_dataRetentionTimeHasBeenSet;

                    /**
                     * <p>购买的实例过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>自动续费标记(0:不自动续费；1:开启自动续费；2:禁止自动续费；-1:无效)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>绑定集群总数</p>
                     */
                    int64_t m_boundTotal;
                    bool m_boundTotalHasBeenSet;

                    /**
                     * <p>绑定集群正常状态总数</p>
                     */
                    int64_t m_boundNormal;
                    bool m_boundNormalHasBeenSet;

                    /**
                     * <p>资源包状态，0-无可用资源包，1-有可用资源包</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resourcePackageStatus;
                    bool m_resourcePackageStatusHasBeenSet;

                    /**
                     * <p>资源包规格名称</p>
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
