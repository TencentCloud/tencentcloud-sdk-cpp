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
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取实例计费模式。取值范围：
<ul>
<li>2：包年包月</li>
<li>3：按量</li>
</ul>
                     * @return InstanceChargeType 实例计费模式。取值范围：
<ul>
<li>2：包年包月</li>
<li>3：按量</li>
</ul>
                     * 
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置实例计费模式。取值范围：
<ul>
<li>2：包年包月</li>
<li>3：按量</li>
</ul>
                     * @param _instanceChargeType 实例计费模式。取值范围：
<ul>
<li>2：包年包月</li>
<li>3：按量</li>
</ul>
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
                     * 获取地域 ID
                     * @return RegionId 地域 ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域 ID
                     * @param _regionId 地域 ID
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取子网 ID
                     * @return SubnetId 子网 ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网 ID
                     * @param _subnetId 子网 ID
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
                     * 获取实例业务状态。取值范围：
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重建中</li>
<li>5：销毁中</li>
<li>6：已停服</li>
<li>8：欠费停服中</li>
<li>9：欠费已停服</li>
</ul>
                     * @return InstanceStatus 实例业务状态。取值范围：
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重建中</li>
<li>5：销毁中</li>
<li>6：已停服</li>
<li>8：欠费停服中</li>
<li>9：欠费已停服</li>
</ul>
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置实例业务状态。取值范围：
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重建中</li>
<li>5：销毁中</li>
<li>6：已停服</li>
<li>8：欠费停服中</li>
<li>9：欠费已停服</li>
</ul>
                     * @param _instanceStatus 实例业务状态。取值范围：
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重建中</li>
<li>5：销毁中</li>
<li>6：已停服</li>
<li>8：欠费停服中</li>
<li>9：欠费已停服</li>
</ul>
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
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
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
                     * 获取是否开启 Grafana
<li>0：不开启</li>
<li>1：开启</li>
                     * @return EnableGrafana 是否开启 Grafana
<li>0：不开启</li>
<li>1：开启</li>
                     * 
                     */
                    int64_t GetEnableGrafana() const;

                    /**
                     * 设置是否开启 Grafana
<li>0：不开启</li>
<li>1：开启</li>
                     * @param _enableGrafana 是否开启 Grafana
<li>0：不开启</li>
<li>1：开启</li>
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
                     * 获取实例IPV4地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPv4Address 实例IPV4地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIPv4Address() const;

                    /**
                     * 设置实例IPV4地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iPv4Address 实例IPV4地址
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
                     * 获取实例关联的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSpecification 实例关联的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusTag> GetTagSpecification() const;

                    /**
                     * 设置实例关联的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSpecification 实例关联的标签列表。
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
                     * 获取计费状态
<ul>
<li>1：正常</li>
<li>2：过期</li>
<li>3：销毁</li>
<li>4：分配中</li>
<li>5：分配失败</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeStatus 计费状态
<ul>
<li>1：正常</li>
<li>2：过期</li>
<li>3：销毁</li>
<li>4：分配中</li>
<li>5：分配失败</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChargeStatus() const;

                    /**
                     * 设置计费状态
<ul>
<li>1：正常</li>
<li>2：过期</li>
<li>3：销毁</li>
<li>4：分配中</li>
<li>5：分配失败</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeStatus 计费状态
<ul>
<li>1：正常</li>
<li>2：过期</li>
<li>3：销毁</li>
<li>4：分配中</li>
<li>5：分配失败</li>
</ul>
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
                     * 获取自动续费标记
<ul>
<li>0：不自动续费</li>
<li>1：开启自动续费</li>
<li>2：禁止自动续费</li>
<li>-1：无效</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag 自动续费标记
<ul>
<li>0：不自动续费</li>
<li>1：开启自动续费</li>
<li>2：禁止自动续费</li>
<li>-1：无效</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记
<ul>
<li>0：不自动续费</li>
<li>1：开启自动续费</li>
<li>2：禁止自动续费</li>
<li>-1：无效</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag 自动续费标记
<ul>
<li>0：不自动续费</li>
<li>1：开启自动续费</li>
<li>2：禁止自动续费</li>
<li>-1：无效</li>
</ul>
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
                     * 获取是否快过期
<ul>
<li>0：否</li>
<li>1：快过期</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNearExpire 是否快过期
<ul>
<li>0：否</li>
<li>1：快过期</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsNearExpire() const;

                    /**
                     * 设置是否快过期
<ul>
<li>0：否</li>
<li>1：快过期</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNearExpire 是否快过期
<ul>
<li>0：否</li>
<li>1：快过期</li>
</ul>
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
                     * 获取数据写入需要的 Token
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthToken 数据写入需要的 Token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthToken() const;

                    /**
                     * 设置数据写入需要的 Token
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authToken 数据写入需要的 Token
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
                     * 获取Prometheus Remote Write 的地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoteWrite Prometheus Remote Write 的地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemoteWrite() const;

                    /**
                     * 设置Prometheus Remote Write 的地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remoteWrite Prometheus Remote Write 的地址
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
                     * 获取Prometheus HTTP Api 根地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiRootPath Prometheus HTTP Api 根地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiRootPath() const;

                    /**
                     * 设置Prometheus HTTP Api 根地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiRootPath Prometheus HTTP Api 根地址
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
                     * 获取Proxy 的地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyAddress Proxy 的地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyAddress() const;

                    /**
                     * 设置Proxy 的地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyAddress Proxy 的地址
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
                     * 获取Grafana 运行状态
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重启中</li>
<li>5：销毁中</li>
<li>6：已停机</li>
<li>7：已删除</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrafanaStatus Grafana 运行状态
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重启中</li>
<li>5：销毁中</li>
<li>6：已停机</li>
<li>7：已删除</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGrafanaStatus() const;

                    /**
                     * 设置Grafana 运行状态
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重启中</li>
<li>5：销毁中</li>
<li>6：已停机</li>
<li>7：已删除</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grafanaStatus Grafana 运行状态
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重启中</li>
<li>5：销毁中</li>
<li>6：已停机</li>
<li>7：已删除</li>
</ul>
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
                     * 获取Grafana IP 白名单列表，使用英文分号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrafanaIpWhiteList Grafana IP 白名单列表，使用英文分号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrafanaIpWhiteList() const;

                    /**
                     * 设置Grafana IP 白名单列表，使用英文分号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grafanaIpWhiteList Grafana IP 白名单列表，使用英文分号分隔
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
                     * 获取实例的授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grant 实例的授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PrometheusInstanceGrantInfo GetGrant() const;

                    /**
                     * 设置实例的授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grant 实例的授权信息
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
                     * 获取绑定的 Grafana 实例 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GrafanaInstanceId 绑定的 Grafana 实例 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrafanaInstanceId() const;

                    /**
                     * 设置绑定的 Grafana 实例 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grafanaInstanceId 绑定的 Grafana 实例 ID
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
                     * 获取告警规则限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlertRuleLimit 告警规则限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAlertRuleLimit() const;

                    /**
                     * 设置告警规则限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alertRuleLimit 告警规则限制
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
                     * 获取预聚合规则限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordingRuleLimit 预聚合规则限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecordingRuleLimit() const;

                    /**
                     * 设置预聚合规则限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordingRuleLimit 预聚合规则限制
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
                     * 获取迁移状态，0-不在迁移中，1-迁移中、原实例，2-迁移中、目标实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MigrationType 迁移状态，0-不在迁移中，1-迁移中、原实例，2-迁移中、目标实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMigrationType() const;

                    /**
                     * 设置迁移状态，0-不在迁移中，1-迁移中、原实例，2-迁移中、目标实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _migrationType 迁移状态，0-不在迁移中，1-迁移中、原实例，2-迁移中、目标实例
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

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例计费模式。取值范围：
<ul>
<li>2：包年包月</li>
<li>3：按量</li>
</ul>
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 地域 ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网 ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 存储周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataRetentionTime;
                    bool m_dataRetentionTimeHasBeenSet;

                    /**
                     * 实例业务状态。取值范围：
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重建中</li>
<li>5：销毁中</li>
<li>6：已停服</li>
<li>8：欠费停服中</li>
<li>9：欠费已停服</li>
</ul>
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Grafana 面板 URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grafanaURL;
                    bool m_grafanaURLHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 是否开启 Grafana
<li>0：不开启</li>
<li>1：开启</li>
                     */
                    int64_t m_enableGrafana;
                    bool m_enableGrafanaHasBeenSet;

                    /**
                     * 实例IPV4地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iPv4Address;
                    bool m_iPv4AddressHasBeenSet;

                    /**
                     * 实例关联的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusTag> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 购买的实例过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 计费状态
<ul>
<li>1：正常</li>
<li>2：过期</li>
<li>3：销毁</li>
<li>4：分配中</li>
<li>5：分配失败</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * 规格名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 自动续费标记
<ul>
<li>0：不自动续费</li>
<li>1：开启自动续费</li>
<li>2：禁止自动续费</li>
<li>-1：无效</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 是否快过期
<ul>
<li>0：否</li>
<li>1：快过期</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isNearExpire;
                    bool m_isNearExpireHasBeenSet;

                    /**
                     * 数据写入需要的 Token
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authToken;
                    bool m_authTokenHasBeenSet;

                    /**
                     * Prometheus Remote Write 的地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remoteWrite;
                    bool m_remoteWriteHasBeenSet;

                    /**
                     * Prometheus HTTP Api 根地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiRootPath;
                    bool m_apiRootPathHasBeenSet;

                    /**
                     * Proxy 的地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyAddress;
                    bool m_proxyAddressHasBeenSet;

                    /**
                     * Grafana 运行状态
<ul>
<li>1：正在创建</li>
<li>2：运行中</li>
<li>3：异常</li>
<li>4：重启中</li>
<li>5：销毁中</li>
<li>6：已停机</li>
<li>7：已删除</li>
</ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_grafanaStatus;
                    bool m_grafanaStatusHasBeenSet;

                    /**
                     * Grafana IP 白名单列表，使用英文分号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grafanaIpWhiteList;
                    bool m_grafanaIpWhiteListHasBeenSet;

                    /**
                     * 实例的授权信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PrometheusInstanceGrantInfo m_grant;
                    bool m_grantHasBeenSet;

                    /**
                     * 绑定的 Grafana 实例 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grafanaInstanceId;
                    bool m_grafanaInstanceIdHasBeenSet;

                    /**
                     * 告警规则限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_alertRuleLimit;
                    bool m_alertRuleLimitHasBeenSet;

                    /**
                     * 预聚合规则限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordingRuleLimit;
                    bool m_recordingRuleLimitHasBeenSet;

                    /**
                     * 迁移状态，0-不在迁移中，1-迁移中、原实例，2-迁移中、目标实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_migrationType;
                    bool m_migrationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESITEM_H_
