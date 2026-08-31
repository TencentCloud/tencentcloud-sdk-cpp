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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROINSTANCE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>
#include <tencentcloud/tdmq/v20200217/model/CertificateInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Pulsar标准版或专业版实例信息
                */
                class PulsarProInstance : public AbstractModel
                {
                public:
                    PulsarProInstance();
                    ~PulsarProInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>实例版本</p>
                     * @return InstanceVersion <p>实例版本</p>
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置<p>实例版本</p>
                     * @param _instanceVersion <p>实例版本</p>
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取<p>实例状态，0-创建中，1-正常，2-隔离中，3-已销毁，4 - 异常, 5 - 发货失败，6-变配中，7-变配失败</p>
                     * @return Status <p>实例状态，0-创建中，1-正常，2-隔离中，3-已销毁，4 - 异常, 5 - 发货失败，6-变配中，7-变配失败</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>实例状态，0-创建中，1-正常，2-隔离中，3-已销毁，4 - 异常, 5 - 发货失败，6-变配中，7-变配失败</p>
                     * @param _status <p>实例状态，0-创建中，1-正常，2-隔离中，3-已销毁，4 - 异常, 5 - 发货失败，6-变配中，7-变配失败</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>实例配置规格名称</p>
                     * @return ConfigDisplay <p>实例配置规格名称</p>
                     * 
                     */
                    std::string GetConfigDisplay() const;

                    /**
                     * 设置<p>实例配置规格名称</p>
                     * @param _configDisplay <p>实例配置规格名称</p>
                     * 
                     */
                    void SetConfigDisplay(const std::string& _configDisplay);

                    /**
                     * 判断参数 ConfigDisplay 是否已赋值
                     * @return ConfigDisplay 是否已赋值
                     * 
                     */
                    bool ConfigDisplayHasBeenSet() const;

                    /**
                     * 获取<p>峰值TPS</p>
                     * @return MaxTps <p>峰值TPS</p>
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置<p>峰值TPS</p>
                     * @param _maxTps <p>峰值TPS</p>
                     * 
                     */
                    void SetMaxTps(const uint64_t& _maxTps);

                    /**
                     * 判断参数 MaxTps 是否已赋值
                     * @return MaxTps 是否已赋值
                     * 
                     */
                    bool MaxTpsHasBeenSet() const;

                    /**
                     * 获取<p>存储容量，GB为单位</p>
                     * @return MaxStorage <p>存储容量，GB为单位</p>
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置<p>存储容量，GB为单位</p>
                     * @param _maxStorage <p>存储容量，GB为单位</p>
                     * 
                     */
                    void SetMaxStorage(const uint64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取<p>实例到期时间，毫秒为单位</p>
                     * @return ExpireTime <p>实例到期时间，毫秒为单位</p>
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置<p>实例到期时间，毫秒为单位</p>
                     * @param _expireTime <p>实例到期时间，毫秒为单位</p>
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * @return AutoRenewFlag <p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * @param _autoRenewFlag <p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>0-后付费，1-预付费</p>
                     * @return PayMode <p>0-后付费，1-预付费</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>0-后付费，1-预付费</p>
                     * @param _payMode <p>0-后付费，1-预付费</p>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark <p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark <p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>实例配置ID</p>
                     * @return SpecName <p>实例配置ID</p>
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置<p>实例配置ID</p>
                     * @param _specName <p>实例配置ID</p>
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
                     * 获取<p>规格外弹性TPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalableTps <p>规格外弹性TPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetScalableTps() const;

                    /**
                     * 设置<p>规格外弹性TPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scalableTps <p>规格外弹性TPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScalableTps(const uint64_t& _scalableTps);

                    /**
                     * 判断参数 ScalableTps 是否已赋值
                     * @return ScalableTps 是否已赋值
                     * 
                     */
                    bool ScalableTpsHasBeenSet() const;

                    /**
                     * 获取<p>VPC的id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId <p>VPC的id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC的id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId <p>VPC的id</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>子网id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId <p>子网id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId <p>子网id</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>峰值带宽。单位：mbps</p>
                     * @return MaxBandWidth <p>峰值带宽。单位：mbps</p>
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置<p>峰值带宽。单位：mbps</p>
                     * @param _maxBandWidth <p>峰值带宽。单位：mbps</p>
                     * 
                     */
                    void SetMaxBandWidth(const uint64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取<p>集群的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>集群的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>集群的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>集群的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>集群创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>集群创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>集群创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>集群创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>代表是专业版和标准版的不同计费规格<br>PULSAR.P1固定存储<br>PULSAR.P2弹性存储<br>PULSAR.S2标准版</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingLabelVersion <p>代表是专业版和标准版的不同计费规格<br>PULSAR.P1固定存储<br>PULSAR.P2弹性存储<br>PULSAR.S2标准版</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingLabelVersion() const;

                    /**
                     * 设置<p>代表是专业版和标准版的不同计费规格<br>PULSAR.P1固定存储<br>PULSAR.P2弹性存储<br>PULSAR.S2标准版</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingLabelVersion <p>代表是专业版和标准版的不同计费规格<br>PULSAR.P1固定存储<br>PULSAR.P2弹性存储<br>PULSAR.S2标准版</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingLabelVersion(const std::string& _billingLabelVersion);

                    /**
                     * 判断参数 BillingLabelVersion 是否已赋值
                     * @return BillingLabelVersion 是否已赋值
                     * 
                     */
                    bool BillingLabelVersionHasBeenSet() const;

                    /**
                     * 获取<p>自定义租户</p>
                     * @return Tenant <p>自定义租户</p>
                     * 
                     */
                    std::string GetTenant() const;

                    /**
                     * 设置<p>自定义租户</p>
                     * @param _tenant <p>自定义租户</p>
                     * 
                     */
                    void SetTenant(const std::string& _tenant);

                    /**
                     * 判断参数 Tenant 是否已赋值
                     * @return Tenant 是否已赋值
                     * 
                     */
                    bool TenantHasBeenSet() const;

                    /**
                     * 获取<p>集群的证书列表</p>
                     * @return CertificateList <p>集群的证书列表</p>
                     * 
                     */
                    std::vector<CertificateInfo> GetCertificateList() const;

                    /**
                     * 设置<p>集群的证书列表</p>
                     * @param _certificateList <p>集群的证书列表</p>
                     * 
                     */
                    void SetCertificateList(const std::vector<CertificateInfo>& _certificateList);

                    /**
                     * 判断参数 CertificateList 是否已赋值
                     * @return CertificateList 是否已赋值
                     * 
                     */
                    bool CertificateListHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例版本</p>
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * <p>实例状态，0-创建中，1-正常，2-隔离中，3-已销毁，4 - 异常, 5 - 发货失败，6-变配中，7-变配失败</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例配置规格名称</p>
                     */
                    std::string m_configDisplay;
                    bool m_configDisplayHasBeenSet;

                    /**
                     * <p>峰值TPS</p>
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * <p>存储容量，GB为单位</p>
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * <p>实例到期时间，毫秒为单位</p>
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>0-后付费，1-预付费</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>备注信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>实例配置ID</p>
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>规格外弹性TPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_scalableTps;
                    bool m_scalableTpsHasBeenSet;

                    /**
                     * <p>VPC的id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>峰值带宽。单位：mbps</p>
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * <p>集群的标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>集群创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>代表是专业版和标准版的不同计费规格<br>PULSAR.P1固定存储<br>PULSAR.P2弹性存储<br>PULSAR.S2标准版</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingLabelVersion;
                    bool m_billingLabelVersionHasBeenSet;

                    /**
                     * <p>自定义租户</p>
                     */
                    std::string m_tenant;
                    bool m_tenantHasBeenSet;

                    /**
                     * <p>集群的证书列表</p>
                     */
                    std::vector<CertificateInfo> m_certificateList;
                    bool m_certificateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROINSTANCE_H_
