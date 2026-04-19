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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESITEM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTag.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusInstanceGrantInfo.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusRuleKV.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus 服务响应体
                */
                class PrometheusInstancesItem : public AbstractModel
                {
                public:
                    PrometheusInstancesItem();
                    ~PrometheusInstancesItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID。</p>
                     * @return InstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _instanceId <p>实例ID。</p>
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
                     * 获取<p>实例名称。</p>
                     * @return InstanceName <p>实例名称。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p>
                     * @param _instanceName <p>实例名称。</p>
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
                     * 获取<p>实例计费模式。取值范围：</p><ul><li>2：包年包月</li><li>3：按量</li></ul>
                     * @return InstanceChargeType <p>实例计费模式。取值范围：</p><ul><li>2：包年包月</li><li>3：按量</li></ul>
                     * 
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例计费模式。取值范围：</p><ul><li>2：包年包月</li><li>3：按量</li></ul>
                     * @param _instanceChargeType <p>实例计费模式。取值范围：</p><ul><li>2：包年包月</li><li>3：按量</li></ul>
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
                     * 获取<p>地域 ID</p>
                     * @return RegionId <p>地域 ID</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>地域 ID</p>
                     * @param _regionId <p>地域 ID</p>
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>子网 ID</p>
                     * @return SubnetId <p>子网 ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID</p>
                     * @param _subnetId <p>子网 ID</p>
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
                     * 获取<p>实例业务状态。取值范围：</p><ul><li>1：正在创建</li><li>2：运行中</li><li>3：异常</li><li>4：重建中</li><li>5：销毁中</li><li>6：已停服</li><li>8：欠费停服中</li><li>9：欠费已停服</li></ul>
                     * @return InstanceStatus <p>实例业务状态。取值范围：</p><ul><li>1：正在创建</li><li>2：运行中</li><li>3：异常</li><li>4：重建中</li><li>5：销毁中</li><li>6：已停服</li><li>8：欠费停服中</li><li>9：欠费已停服</li></ul>
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置<p>实例业务状态。取值范围：</p><ul><li>1：正在创建</li><li>2：运行中</li><li>3：异常</li><li>4：重建中</li><li>5：销毁中</li><li>6：已停服</li><li>8：欠费停服中</li><li>9：欠费已停服</li></ul>
                     * @param _instanceStatus <p>实例业务状态。取值范围：</p><ul><li>1：正在创建</li><li>2：运行中</li><li>3：异常</li><li>4：重建中</li><li>5：销毁中</li><li>6：已停服</li><li>8：欠费停服中</li><li>9：欠费已停服</li></ul>
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
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdAt <p>创建时间</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>是否开启 Grafana</p><li>0：不开启</li><li>1：开启</li>
                     * @return EnableGrafana <p>是否开启 Grafana</p><li>0：不开启</li><li>1：开启</li>
                     * 
                     */
                    int64_t GetEnableGrafana() const;

                    /**
                     * 设置<p>是否开启 Grafana</p><li>0：不开启</li><li>1：开启</li>
                     * @param _enableGrafana <p>是否开启 Grafana</p><li>0：不开启</li><li>1：开启</li>
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
                     * 获取<p>实例IPV4地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPv4Address <p>实例IPV4地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIPv4Address() const;

                    /**
                     * 设置<p>实例IPV4地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iPv4Address <p>实例IPV4地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIPv4Address(const std::string& _iPv4Address);

                    /**
                     * 判断参数 IPv4Address 是否已赋值
                     * @return IPv4Address 是否已赋值
                     * 
                     */
                    bool IPv4AddressHasBeenSet() const;

                    /**
                     * 获取<p>实例关联的标签列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSpecification <p>实例关联的标签列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusTag> GetTagSpecification() const;

                    /**
                     * 设置<p>实例关联的标签列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSpecification <p>实例关联的标签列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagSpecification(const std::vector<PrometheusTag>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

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
                     * 获取<p>计费状态</p><ul><li>1：正常</li><li>2：过期</li><li>3：销毁</li><li>4：分配中</li><li>5：分配失败</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeStatus <p>计费状态</p><ul><li>1：正常</li><li>2：过期</li><li>3：销毁</li><li>4：分配中</li><li>5：分配失败</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChargeStatus() const;

                    /**
                     * 设置<p>计费状态</p><ul><li>1：正常</li><li>2：过期</li><li>3：销毁</li><li>4：分配中</li><li>5：分配失败</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeStatus <p>计费状态</p><ul><li>1：正常</li><li>2：过期</li><li>3：销毁</li><li>4：分配中</li><li>5：分配失败</li></ul>
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
                     * 获取<p>自动续费标记</p><ul><li>0：不自动续费</li><li>1：开启自动续费</li><li>2：禁止自动续费</li><li>-1：无效</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag <p>自动续费标记</p><ul><li>0：不自动续费</li><li>1：开启自动续费</li><li>2：禁止自动续费</li><li>-1：无效</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标记</p><ul><li>0：不自动续费</li><li>1：开启自动续费</li><li>2：禁止自动续费</li><li>-1：无效</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag <p>自动续费标记</p><ul><li>0：不自动续费</li><li>1：开启自动续费</li><li>2：禁止自动续费</li><li>-1：无效</li></ul>
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
                     * 获取<p>是否快过期</p><ul><li>0：否</li><li>1：快过期</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNearExpire <p>是否快过期</p><ul><li>0：否</li><li>1：快过期</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsNearExpire() const;

                    /**
                     * 设置<p>是否快过期</p><ul><li>0：否</li><li>1：快过期</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNearExpire <p>是否快过期</p><ul><li>0：否</li><li>1：快过期</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsNearExpire(const int64_t& _isNearExpire);

                    /**
                     * 判断参数 IsNearExpire 是否已赋值
                     * @return IsNearExpire 是否已赋值
                     * 
                     */
                    bool IsNearExpireHasBeenSet() const;

                    /**
                     * 获取<p>数据写入需要的 Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthToken <p>数据写入需要的 Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthToken() const;

                    /**
                     * 设置<p>数据写入需要的 Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authToken <p>数据写入需要的 Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthToken(const std::string& _authToken);

                    /**
                     * 判断参数 AuthToken 是否已赋值
                     * @return AuthToken 是否已赋值
                     * 
                     */
                    bool AuthTokenHasBeenSet() const;

                    /**
                     * 获取<p>Prometheus Remote Write 的地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoteWrite <p>Prometheus Remote Write 的地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemoteWrite() const;

                    /**
                     * 设置<p>Prometheus Remote Write 的地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remoteWrite <p>Prometheus Remote Write 的地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemoteWrite(const std::string& _remoteWrite);

                    /**
                     * 判断参数 RemoteWrite 是否已赋值
                     * @return RemoteWrite 是否已赋值
                     * 
                     */
                    bool RemoteWriteHasBeenSet() const;

                    /**
                     * 获取<p>Prometheus HTTP Api 根地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiRootPath <p>Prometheus HTTP Api 根地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiRootPath() const;

                    /**
                     * 设置<p>Prometheus HTTP Api 根地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiRootPath <p>Prometheus HTTP Api 根地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiRootPath(const std::string& _apiRootPath);

                    /**
                     * 判断参数 ApiRootPath 是否已赋值
                     * @return ApiRootPath 是否已赋值
                     * 
                     */
                    bool ApiRootPathHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 的地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyAddress <p>Proxy 的地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyAddress() const;

                    /**
                     * 设置<p>Proxy 的地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyAddress <p>Proxy 的地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyAddress(const std::string& _proxyAddress);

                    /**
                     * 判断参数 ProxyAddress 是否已赋值
                     * @return ProxyAddress 是否已赋值
                     * 
                     */
                    bool ProxyAddressHasBeenSet() const;

                    /**
                     * 获取<p>Grafana 运行状态</p><ul><li>1：正在创建</li><li>2：运行中</li><li>3：异常</li><li>4：重启中</li><li>5：销毁中</li><li>6：已停机</li><li>7：已删除</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrafanaStatus <p>Grafana 运行状态</p><ul><li>1：正在创建</li><li>2：运行中</li><li>3：异常</li><li>4：重启中</li><li>5：销毁中</li><li>6：已停机</li><li>7：已删除</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGrafanaStatus() const;

                    /**
                     * 设置<p>Grafana 运行状态</p><ul><li>1：正在创建</li><li>2：运行中</li><li>3：异常</li><li>4：重启中</li><li>5：销毁中</li><li>6：已停机</li><li>7：已删除</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grafanaStatus <p>Grafana 运行状态</p><ul><li>1：正在创建</li><li>2：运行中</li><li>3：异常</li><li>4：重启中</li><li>5：销毁中</li><li>6：已停机</li><li>7：已删除</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrafanaStatus(const int64_t& _grafanaStatus);

                    /**
                     * 判断参数 GrafanaStatus 是否已赋值
                     * @return GrafanaStatus 是否已赋值
                     * 
                     */
                    bool GrafanaStatusHasBeenSet() const;

                    /**
                     * 获取<p>Grafana IP 白名单列表，使用英文分号分隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrafanaIpWhiteList <p>Grafana IP 白名单列表，使用英文分号分隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrafanaIpWhiteList() const;

                    /**
                     * 设置<p>Grafana IP 白名单列表，使用英文分号分隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grafanaIpWhiteList <p>Grafana IP 白名单列表，使用英文分号分隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrafanaIpWhiteList(const std::string& _grafanaIpWhiteList);

                    /**
                     * 判断参数 GrafanaIpWhiteList 是否已赋值
                     * @return GrafanaIpWhiteList 是否已赋值
                     * 
                     */
                    bool GrafanaIpWhiteListHasBeenSet() const;

                    /**
                     * 获取<p>实例的授权信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grant <p>实例的授权信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PrometheusInstanceGrantInfo GetGrant() const;

                    /**
                     * 设置<p>实例的授权信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grant <p>实例的授权信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrant(const PrometheusInstanceGrantInfo& _grant);

                    /**
                     * 判断参数 Grant 是否已赋值
                     * @return Grant 是否已赋值
                     * 
                     */
                    bool GrantHasBeenSet() const;

                    /**
                     * 获取<p>绑定的 Grafana 实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrafanaInstanceId <p>绑定的 Grafana 实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrafanaInstanceId() const;

                    /**
                     * 设置<p>绑定的 Grafana 实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grafanaInstanceId <p>绑定的 Grafana 实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrafanaInstanceId(const std::string& _grafanaInstanceId);

                    /**
                     * 判断参数 GrafanaInstanceId 是否已赋值
                     * @return GrafanaInstanceId 是否已赋值
                     * 
                     */
                    bool GrafanaInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>告警规则限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertRuleLimit <p>告警规则限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAlertRuleLimit() const;

                    /**
                     * 设置<p>告警规则限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertRuleLimit <p>告警规则限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlertRuleLimit(const int64_t& _alertRuleLimit);

                    /**
                     * 判断参数 AlertRuleLimit 是否已赋值
                     * @return AlertRuleLimit 是否已赋值
                     * 
                     */
                    bool AlertRuleLimitHasBeenSet() const;

                    /**
                     * 获取<p>预聚合规则限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordingRuleLimit <p>预聚合规则限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecordingRuleLimit() const;

                    /**
                     * 设置<p>预聚合规则限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordingRuleLimit <p>预聚合规则限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordingRuleLimit(const int64_t& _recordingRuleLimit);

                    /**
                     * 判断参数 RecordingRuleLimit 是否已赋值
                     * @return RecordingRuleLimit 是否已赋值
                     * 
                     */
                    bool RecordingRuleLimitHasBeenSet() const;

                    /**
                     * 获取<p>迁移状态，0-不在迁移中，1-迁移中、原实例，2-迁移中、目标实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MigrationType <p>迁移状态，0-不在迁移中，1-迁移中、原实例，2-迁移中、目标实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMigrationType() const;

                    /**
                     * 设置<p>迁移状态，0-不在迁移中，1-迁移中、原实例，2-迁移中、目标实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _migrationType <p>迁移状态，0-不在迁移中，1-迁移中、原实例，2-迁移中、目标实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMigrationType(const int64_t& _migrationType);

                    /**
                     * 判断参数 MigrationType 是否已赋值
                     * @return MigrationType 是否已赋值
                     * 
                     */
                    bool MigrationTypeHasBeenSet() const;

                    /**
                     * 获取<p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p><p>实例创建方式：<br>key: CreatedFrom<br>value: 0 - 来自prom控制台<br>1 - 来自tke集群详情页<br>2 - 来自新建集群页</p><p>免费试用到期时间:<br>key: FreeTrialExpireAt<br>value: RFC3339 格式时间字符串</p><p>关联的资源包ID:<br>key: ResourcePackageID<br>value: prompkg-xxxxx</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceAttributes <p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p><p>实例创建方式：<br>key: CreatedFrom<br>value: 0 - 来自prom控制台<br>1 - 来自tke集群详情页<br>2 - 来自新建集群页</p><p>免费试用到期时间:<br>key: FreeTrialExpireAt<br>value: RFC3339 格式时间字符串</p><p>关联的资源包ID:<br>key: ResourcePackageID<br>value: prompkg-xxxxx</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetInstanceAttributes() const;

                    /**
                     * 设置<p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p><p>实例创建方式：<br>key: CreatedFrom<br>value: 0 - 来自prom控制台<br>1 - 来自tke集群详情页<br>2 - 来自新建集群页</p><p>免费试用到期时间:<br>key: FreeTrialExpireAt<br>value: RFC3339 格式时间字符串</p><p>关联的资源包ID:<br>key: ResourcePackageID<br>value: prompkg-xxxxx</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceAttributes <p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p><p>实例创建方式：<br>key: CreatedFrom<br>value: 0 - 来自prom控制台<br>1 - 来自tke集群详情页<br>2 - 来自新建集群页</p><p>免费试用到期时间:<br>key: FreeTrialExpireAt<br>value: RFC3339 格式时间字符串</p><p>关联的资源包ID:<br>key: ResourcePackageID<br>value: prompkg-xxxxx</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceAttributes(const std::vector<PrometheusRuleKV>& _instanceAttributes);

                    /**
                     * 判断参数 InstanceAttributes 是否已赋值
                     * @return InstanceAttributes 是否已赋值
                     * 
                     */
                    bool InstanceAttributesHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例计费模式。取值范围：</p><ul><li>2：包年包月</li><li>3：按量</li></ul>
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>地域 ID</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网 ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>存储周期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataRetentionTime;
                    bool m_dataRetentionTimeHasBeenSet;

                    /**
                     * <p>实例业务状态。取值范围：</p><ul><li>1：正在创建</li><li>2：运行中</li><li>3：异常</li><li>4：重建中</li><li>5：销毁中</li><li>6：已停服</li><li>8：欠费停服中</li><li>9：欠费已停服</li></ul>
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>Grafana 面板 URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grafanaURL;
                    bool m_grafanaURLHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>是否开启 Grafana</p><li>0：不开启</li><li>1：开启</li>
                     */
                    int64_t m_enableGrafana;
                    bool m_enableGrafanaHasBeenSet;

                    /**
                     * <p>实例IPV4地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iPv4Address;
                    bool m_iPv4AddressHasBeenSet;

                    /**
                     * <p>实例关联的标签列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusTag> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * <p>购买的实例过期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>计费状态</p><ul><li>1：正常</li><li>2：过期</li><li>3：销毁</li><li>4：分配中</li><li>5：分配失败</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * <p>规格名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>自动续费标记</p><ul><li>0：不自动续费</li><li>1：开启自动续费</li><li>2：禁止自动续费</li><li>-1：无效</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>是否快过期</p><ul><li>0：否</li><li>1：快过期</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isNearExpire;
                    bool m_isNearExpireHasBeenSet;

                    /**
                     * <p>数据写入需要的 Token</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authToken;
                    bool m_authTokenHasBeenSet;

                    /**
                     * <p>Prometheus Remote Write 的地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remoteWrite;
                    bool m_remoteWriteHasBeenSet;

                    /**
                     * <p>Prometheus HTTP Api 根地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiRootPath;
                    bool m_apiRootPathHasBeenSet;

                    /**
                     * <p>Proxy 的地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyAddress;
                    bool m_proxyAddressHasBeenSet;

                    /**
                     * <p>Grafana 运行状态</p><ul><li>1：正在创建</li><li>2：运行中</li><li>3：异常</li><li>4：重启中</li><li>5：销毁中</li><li>6：已停机</li><li>7：已删除</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_grafanaStatus;
                    bool m_grafanaStatusHasBeenSet;

                    /**
                     * <p>Grafana IP 白名单列表，使用英文分号分隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grafanaIpWhiteList;
                    bool m_grafanaIpWhiteListHasBeenSet;

                    /**
                     * <p>实例的授权信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PrometheusInstanceGrantInfo m_grant;
                    bool m_grantHasBeenSet;

                    /**
                     * <p>绑定的 Grafana 实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grafanaInstanceId;
                    bool m_grafanaInstanceIdHasBeenSet;

                    /**
                     * <p>告警规则限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_alertRuleLimit;
                    bool m_alertRuleLimitHasBeenSet;

                    /**
                     * <p>预聚合规则限制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordingRuleLimit;
                    bool m_recordingRuleLimitHasBeenSet;

                    /**
                     * <p>迁移状态，0-不在迁移中，1-迁移中、原实例，2-迁移中、目标实例</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_migrationType;
                    bool m_migrationTypeHasBeenSet;

                    /**
                     * <p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p><p>实例创建方式：<br>key: CreatedFrom<br>value: 0 - 来自prom控制台<br>1 - 来自tke集群详情页<br>2 - 来自新建集群页</p><p>免费试用到期时间:<br>key: FreeTrialExpireAt<br>value: RFC3339 格式时间字符串</p><p>关联的资源包ID:<br>key: ResourcePackageID<br>value: prompkg-xxxxx</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusRuleKV> m_instanceAttributes;
                    bool m_instanceAttributesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESITEM_H_
