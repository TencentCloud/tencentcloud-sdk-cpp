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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayNodeConfig.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayVpcConfig.h>
#include <tencentcloud/tse/v20201207/model/InstanceTagInfo.h>
#include <tencentcloud/tse/v20201207/model/InstancePort.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 获取云原生API网关基础信息响应结果。
                */
                class DescribeCloudNativeAPIGatewayResult : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayResult();
                    ~DescribeCloudNativeAPIGatewayResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>云原生API网关ID。</p>
                     * @return GatewayId <p>云原生API网关ID。</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>云原生API网关ID。</p>
                     * @param _gatewayId <p>云原生API网关ID。</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>云原生API网关状态。</p>
                     * @return Status <p>云原生API网关状态。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>云原生API网关状态。</p>
                     * @param _status <p>云原生API网关状态。</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>云原生API网关名。</p>
                     * @return Name <p>云原生API网关名。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>云原生API网关名。</p>
                     * @param _name <p>云原生API网关名。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>云原生API网关类型。</p>
                     * @return Type <p>云原生API网关类型。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>云原生API网关类型。</p>
                     * @param _type <p>云原生API网关类型。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>实例版本：</p><ul><li>2.4.1</li><li>2.5.1</li></ul>
                     * @return GatewayVersion <p>实例版本：</p><ul><li>2.4.1</li><li>2.5.1</li></ul>
                     * 
                     */
                    std::string GetGatewayVersion() const;

                    /**
                     * 设置<p>实例版本：</p><ul><li>2.4.1</li><li>2.5.1</li></ul>
                     * @param _gatewayVersion <p>实例版本：</p><ul><li>2.4.1</li><li>2.5.1</li></ul>
                     * 
                     */
                    void SetGatewayVersion(const std::string& _gatewayVersion);

                    /**
                     * 判断参数 GatewayVersion 是否已赋值
                     * @return GatewayVersion 是否已赋值
                     * 
                     */
                    bool GatewayVersionHasBeenSet() const;

                    /**
                     * 获取<p>云原生API网关节点信息。</p>
                     * @return NodeConfig <p>云原生API网关节点信息。</p>
                     * 
                     */
                    CloudNativeAPIGatewayNodeConfig GetNodeConfig() const;

                    /**
                     * 设置<p>云原生API网关节点信息。</p>
                     * @param _nodeConfig <p>云原生API网关节点信息。</p>
                     * 
                     */
                    void SetNodeConfig(const CloudNativeAPIGatewayNodeConfig& _nodeConfig);

                    /**
                     * 判断参数 NodeConfig 是否已赋值
                     * @return NodeConfig 是否已赋值
                     * 
                     */
                    bool NodeConfigHasBeenSet() const;

                    /**
                     * 获取<p>云原生API网关vpc配置。</p>
                     * @return VpcConfig <p>云原生API网关vpc配置。</p>
                     * 
                     */
                    CloudNativeAPIGatewayVpcConfig GetVpcConfig() const;

                    /**
                     * 设置<p>云原生API网关vpc配置。</p>
                     * @param _vpcConfig <p>云原生API网关vpc配置。</p>
                     * 
                     */
                    void SetVpcConfig(const CloudNativeAPIGatewayVpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取<p>云原生API网关描述。</p>
                     * @return Description <p>云原生API网关描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>云原生API网关描述。</p>
                     * @param _description <p>云原生API网关描述。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>云原生API网关创建时间。</p>
                     * @return CreateTime <p>云原生API网关创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>云原生API网关创建时间。</p>
                     * @param _createTime <p>云原生API网关创建时间。</p>
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
                     * 获取<p>实例的标签信息</p>
                     * @return Tags <p>实例的标签信息</p>
                     * 
                     */
                    std::vector<InstanceTagInfo> GetTags() const;

                    /**
                     * 设置<p>实例的标签信息</p>
                     * @param _tags <p>实例的标签信息</p>
                     * 
                     */
                    void SetTags(const std::vector<InstanceTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启 cls 日志</p>
                     * @return EnableCls <p>是否开启 cls 日志</p>
                     * 
                     */
                    bool GetEnableCls() const;

                    /**
                     * 设置<p>是否开启 cls 日志</p>
                     * @param _enableCls <p>是否开启 cls 日志</p>
                     * 
                     */
                    void SetEnableCls(const bool& _enableCls);

                    /**
                     * 判断参数 EnableCls 是否已赋值
                     * @return EnableCls 是否已赋值
                     * 
                     */
                    bool EnableClsHasBeenSet() const;

                    /**
                     * 获取<p>付费模式，0表示后付费，1预付费</p>
                     * @return TradeType <p>付费模式，0表示后付费，1预付费</p>
                     * 
                     */
                    int64_t GetTradeType() const;

                    /**
                     * 设置<p>付费模式，0表示后付费，1预付费</p>
                     * @param _tradeType <p>付费模式，0表示后付费，1预付费</p>
                     * 
                     */
                    void SetTradeType(const int64_t& _tradeType);

                    /**
                     * 判断参数 TradeType 是否已赋值
                     * @return TradeType 是否已赋值
                     * 
                     */
                    bool TradeTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例版本，当前支持开发版、标准版、专业版【TRIAL、STANDARD、PROFESSIONAL】</p>
                     * @return FeatureVersion <p>实例版本，当前支持开发版、标准版、专业版【TRIAL、STANDARD、PROFESSIONAL】</p>
                     * 
                     */
                    std::string GetFeatureVersion() const;

                    /**
                     * 设置<p>实例版本，当前支持开发版、标准版、专业版【TRIAL、STANDARD、PROFESSIONAL】</p>
                     * @param _featureVersion <p>实例版本，当前支持开发版、标准版、专业版【TRIAL、STANDARD、PROFESSIONAL】</p>
                     * 
                     */
                    void SetFeatureVersion(const std::string& _featureVersion);

                    /**
                     * 判断参数 FeatureVersion 是否已赋值
                     * @return FeatureVersion 是否已赋值
                     * 
                     */
                    bool FeatureVersionHasBeenSet() const;

                    /**
                     * 获取<p>公网出流量带宽，[1,2048]Mbps</p>
                     * @return InternetMaxBandwidthOut <p>公网出流量带宽，[1,2048]Mbps</p>
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置<p>公网出流量带宽，[1,2048]Mbps</p>
                     * @param _internetMaxBandwidthOut <p>公网出流量带宽，[1,2048]Mbps</p>
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标记，0表示默认状态(用户未设置，即初始状态)；<br>1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0</p>
                     * @return AutoRenewFlag <p>自动续费标记，0表示默认状态(用户未设置，即初始状态)；<br>1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标记，0表示默认状态(用户未设置，即初始状态)；<br>1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0</p>
                     * @param _autoRenewFlag <p>自动续费标记，0表示默认状态(用户未设置，即初始状态)；<br>1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0</p>
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
                     * 获取<p>到期时间，预付费时使用</p>
                     * @return CurDeadline <p>到期时间，预付费时使用</p>
                     * 
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置<p>到期时间，预付费时使用</p>
                     * @param _curDeadline <p>到期时间，预付费时使用</p>
                     * 
                     */
                    void SetCurDeadline(const std::string& _curDeadline);

                    /**
                     * 判断参数 CurDeadline 是否已赋值
                     * @return CurDeadline 是否已赋值
                     * 
                     */
                    bool CurDeadlineHasBeenSet() const;

                    /**
                     * 获取<p>隔离时间，实例隔离时使用</p>
                     * @return IsolateTime <p>隔离时间，实例隔离时使用</p>
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置<p>隔离时间，实例隔离时使用</p>
                     * @param _isolateTime <p>隔离时间，实例隔离时使用</p>
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启客户端公网。</p>
                     * @return EnableInternet <p>是否开启客户端公网。</p>
                     * 
                     */
                    bool GetEnableInternet() const;

                    /**
                     * 设置<p>是否开启客户端公网。</p>
                     * @param _enableInternet <p>是否开启客户端公网。</p>
                     * 
                     */
                    void SetEnableInternet(const bool& _enableInternet);

                    /**
                     * 判断参数 EnableInternet 是否已赋值
                     * @return EnableInternet 是否已赋值
                     * 
                     */
                    bool EnableInternetHasBeenSet() const;

                    /**
                     * 获取<p>实例实际的地域信息</p>
                     * @return EngineRegion <p>实例实际的地域信息</p>
                     * 
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置<p>实例实际的地域信息</p>
                     * @param _engineRegion <p>实例实际的地域信息</p>
                     * 
                     */
                    void SetEngineRegion(const std::string& _engineRegion);

                    /**
                     * 判断参数 EngineRegion 是否已赋值
                     * @return EngineRegion 是否已赋值
                     * 
                     */
                    bool EngineRegionHasBeenSet() const;

                    /**
                     * 获取<p>Ingress class名称</p>
                     * @return IngressClassName <p>Ingress class名称</p>
                     * 
                     */
                    std::string GetIngressClassName() const;

                    /**
                     * 设置<p>Ingress class名称</p>
                     * @param _ingressClassName <p>Ingress class名称</p>
                     * 
                     */
                    void SetIngressClassName(const std::string& _ingressClassName);

                    /**
                     * 判断参数 IngressClassName 是否已赋值
                     * @return IngressClassName 是否已赋值
                     * 
                     */
                    bool IngressClassNameHasBeenSet() const;

                    /**
                     * 获取<p>公网计费方式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。</p>
                     * @return InternetPayMode <p>公网计费方式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。</p>
                     * 
                     */
                    std::string GetInternetPayMode() const;

                    /**
                     * 设置<p>公网计费方式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。</p>
                     * @param _internetPayMode <p>公网计费方式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。</p>
                     * 
                     */
                    void SetInternetPayMode(const std::string& _internetPayMode);

                    /**
                     * 判断参数 InternetPayMode 是否已赋值
                     * @return InternetPayMode 是否已赋值
                     * 
                     */
                    bool InternetPayModeHasBeenSet() const;

                    /**
                     * 获取<p>云原生API网关小版本号</p>
                     * @return GatewayMinorVersion <p>云原生API网关小版本号</p>
                     * 
                     */
                    std::string GetGatewayMinorVersion() const;

                    /**
                     * 设置<p>云原生API网关小版本号</p>
                     * @param _gatewayMinorVersion <p>云原生API网关小版本号</p>
                     * 
                     */
                    void SetGatewayMinorVersion(const std::string& _gatewayMinorVersion);

                    /**
                     * 判断参数 GatewayMinorVersion 是否已赋值
                     * @return GatewayMinorVersion 是否已赋值
                     * 
                     */
                    bool GatewayMinorVersionHasBeenSet() const;

                    /**
                     * 获取<p>实例监听的端口信息</p>
                     * @return InstancePort <p>实例监听的端口信息</p>
                     * 
                     */
                    InstancePort GetInstancePort() const;

                    /**
                     * 设置<p>实例监听的端口信息</p>
                     * @param _instancePort <p>实例监听的端口信息</p>
                     * 
                     */
                    void SetInstancePort(const InstancePort& _instancePort);

                    /**
                     * 判断参数 InstancePort 是否已赋值
                     * @return InstancePort 是否已赋值
                     * 
                     */
                    bool InstancePortHasBeenSet() const;

                    /**
                     * 获取<p>公网CLB默认类型</p>
                     * @return LoadBalancerType <p>公网CLB默认类型</p>
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置<p>公网CLB默认类型</p>
                     * @param _loadBalancerType <p>公网CLB默认类型</p>
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取<p>公网IP地址列表</p>
                     * @return PublicIpAddresses <p>公网IP地址列表</p>
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置<p>公网IP地址列表</p>
                     * @param _publicIpAddresses <p>公网IP地址列表</p>
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
                     * 获取<p>是否开启删除保护</p>
                     * @return DeleteProtect <p>是否开启删除保护</p>
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置<p>是否开启删除保护</p>
                     * @param _deleteProtect <p>是否开启删除保护</p>
                     * 
                     */
                    void SetDeleteProtect(const bool& _deleteProtect);

                    /**
                     * 判断参数 DeleteProtect 是否已赋值
                     * @return DeleteProtect 是否已赋值
                     * 
                     */
                    bool DeleteProtectHasBeenSet() const;

                    /**
                     * 获取<p>表示可以升级的版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableVersions <p>表示可以升级的版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAvailableVersions() const;

                    /**
                     * 设置<p>表示可以升级的版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableVersions <p>表示可以升级的版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableVersions(const std::vector<std::string>& _availableVersions);

                    /**
                     * 判断参数 AvailableVersions 是否已赋值
                     * @return AvailableVersions 是否已赋值
                     * 
                     */
                    bool AvailableVersionsHasBeenSet() const;

                    /**
                     * 获取<p>网关可以升级的版本号列表</p>
                     * @return AvailableUpgradeVersions <p>网关可以升级的版本号列表</p>
                     * 
                     */
                    std::vector<std::string> GetAvailableUpgradeVersions() const;

                    /**
                     * 设置<p>网关可以升级的版本号列表</p>
                     * @param _availableUpgradeVersions <p>网关可以升级的版本号列表</p>
                     * 
                     */
                    void SetAvailableUpgradeVersions(const std::vector<std::string>& _availableUpgradeVersions);

                    /**
                     * 判断参数 AvailableUpgradeVersions 是否已赋值
                     * @return AvailableUpgradeVersions 是否已赋值
                     * 
                     */
                    bool AvailableUpgradeVersionsHasBeenSet() const;

                    /**
                     * 获取<p>是否提示可升级</p>
                     * @return AvailableUpgrade <p>是否提示可升级</p>
                     * 
                     */
                    bool GetAvailableUpgrade() const;

                    /**
                     * 设置<p>是否提示可升级</p>
                     * @param _availableUpgrade <p>是否提示可升级</p>
                     * 
                     */
                    void SetAvailableUpgrade(const bool& _availableUpgrade);

                    /**
                     * 判断参数 AvailableUpgrade 是否已赋值
                     * @return AvailableUpgrade 是否已赋值
                     * 
                     */
                    bool AvailableUpgradeHasBeenSet() const;

                    /**
                     * 获取<p>可回退的版本</p>
                     * @return AvailableRollbackVersion <p>可回退的版本</p>
                     * 
                     */
                    std::string GetAvailableRollbackVersion() const;

                    /**
                     * 设置<p>可回退的版本</p>
                     * @param _availableRollbackVersion <p>可回退的版本</p>
                     * 
                     */
                    void SetAvailableRollbackVersion(const std::string& _availableRollbackVersion);

                    /**
                     * 判断参数 AvailableRollbackVersion 是否已赋值
                     * @return AvailableRollbackVersion 是否已赋值
                     * 
                     */
                    bool AvailableRollbackVersionHasBeenSet() const;

                    /**
                     * 获取<p>强制跳转HTTPS开关</p>
                     * @return ForceHTTPSRedirect <p>强制跳转HTTPS开关</p>
                     * 
                     */
                    bool GetForceHTTPSRedirect() const;

                    /**
                     * 设置<p>强制跳转HTTPS开关</p>
                     * @param _forceHTTPSRedirect <p>强制跳转HTTPS开关</p>
                     * 
                     */
                    void SetForceHTTPSRedirect(const bool& _forceHTTPSRedirect);

                    /**
                     * 判断参数 ForceHTTPSRedirect 是否已赋值
                     * @return ForceHTTPSRedirect 是否已赋值
                     * 
                     */
                    bool ForceHTTPSRedirectHasBeenSet() const;

                private:

                    /**
                     * <p>云原生API网关ID。</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>云原生API网关状态。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>云原生API网关名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>云原生API网关类型。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>实例版本：</p><ul><li>2.4.1</li><li>2.5.1</li></ul>
                     */
                    std::string m_gatewayVersion;
                    bool m_gatewayVersionHasBeenSet;

                    /**
                     * <p>云原生API网关节点信息。</p>
                     */
                    CloudNativeAPIGatewayNodeConfig m_nodeConfig;
                    bool m_nodeConfigHasBeenSet;

                    /**
                     * <p>云原生API网关vpc配置。</p>
                     */
                    CloudNativeAPIGatewayVpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * <p>云原生API网关描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>云原生API网关创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>实例的标签信息</p>
                     */
                    std::vector<InstanceTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否开启 cls 日志</p>
                     */
                    bool m_enableCls;
                    bool m_enableClsHasBeenSet;

                    /**
                     * <p>付费模式，0表示后付费，1预付费</p>
                     */
                    int64_t m_tradeType;
                    bool m_tradeTypeHasBeenSet;

                    /**
                     * <p>实例版本，当前支持开发版、标准版、专业版【TRIAL、STANDARD、PROFESSIONAL】</p>
                     */
                    std::string m_featureVersion;
                    bool m_featureVersionHasBeenSet;

                    /**
                     * <p>公网出流量带宽，[1,2048]Mbps</p>
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * <p>自动续费标记，0表示默认状态(用户未设置，即初始状态)；<br>1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>到期时间，预付费时使用</p>
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                    /**
                     * <p>隔离时间，实例隔离时使用</p>
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * <p>是否开启客户端公网。</p>
                     */
                    bool m_enableInternet;
                    bool m_enableInternetHasBeenSet;

                    /**
                     * <p>实例实际的地域信息</p>
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * <p>Ingress class名称</p>
                     */
                    std::string m_ingressClassName;
                    bool m_ingressClassNameHasBeenSet;

                    /**
                     * <p>公网计费方式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。</p>
                     */
                    std::string m_internetPayMode;
                    bool m_internetPayModeHasBeenSet;

                    /**
                     * <p>云原生API网关小版本号</p>
                     */
                    std::string m_gatewayMinorVersion;
                    bool m_gatewayMinorVersionHasBeenSet;

                    /**
                     * <p>实例监听的端口信息</p>
                     */
                    InstancePort m_instancePort;
                    bool m_instancePortHasBeenSet;

                    /**
                     * <p>公网CLB默认类型</p>
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * <p>公网IP地址列表</p>
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * <p>是否开启删除保护</p>
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                    /**
                     * <p>表示可以升级的版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_availableVersions;
                    bool m_availableVersionsHasBeenSet;

                    /**
                     * <p>网关可以升级的版本号列表</p>
                     */
                    std::vector<std::string> m_availableUpgradeVersions;
                    bool m_availableUpgradeVersionsHasBeenSet;

                    /**
                     * <p>是否提示可升级</p>
                     */
                    bool m_availableUpgrade;
                    bool m_availableUpgradeHasBeenSet;

                    /**
                     * <p>可回退的版本</p>
                     */
                    std::string m_availableRollbackVersion;
                    bool m_availableRollbackVersionHasBeenSet;

                    /**
                     * <p>强制跳转HTTPS开关</p>
                     */
                    bool m_forceHTTPSRedirect;
                    bool m_forceHTTPSRedirectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYRESULT_H_
