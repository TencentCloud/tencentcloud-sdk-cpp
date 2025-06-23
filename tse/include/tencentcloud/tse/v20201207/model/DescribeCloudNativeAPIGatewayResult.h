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
                     * 获取云原生API网关ID。
                     * @return GatewayId 云原生API网关ID。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置云原生API网关ID。
                     * @param _gatewayId 云原生API网关ID。
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
                     * 获取云原生API网关状态。
                     * @return Status 云原生API网关状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置云原生API网关状态。
                     * @param _status 云原生API网关状态。
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
                     * 获取云原生API网关名。
                     * @return Name 云原生API网关名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置云原生API网关名。
                     * @param _name 云原生API网关名。
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
                     * 获取云原生API网关类型。
                     * @return Type 云原生API网关类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置云原生API网关类型。
                     * @param _type 云原生API网关类型。
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
                     * 获取实例版本：
- 2.4.1
- 2.5.1
                     * @return GatewayVersion 实例版本：
- 2.4.1
- 2.5.1
                     * 
                     */
                    std::string GetGatewayVersion() const;

                    /**
                     * 设置实例版本：
- 2.4.1
- 2.5.1
                     * @param _gatewayVersion 实例版本：
- 2.4.1
- 2.5.1
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
                     * 获取云原生API网关节点信息。
                     * @return NodeConfig 云原生API网关节点信息。
                     * 
                     */
                    CloudNativeAPIGatewayNodeConfig GetNodeConfig() const;

                    /**
                     * 设置云原生API网关节点信息。
                     * @param _nodeConfig 云原生API网关节点信息。
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
                     * 获取云原生API网关vpc配置。
                     * @return VpcConfig 云原生API网关vpc配置。
                     * 
                     */
                    CloudNativeAPIGatewayVpcConfig GetVpcConfig() const;

                    /**
                     * 设置云原生API网关vpc配置。
                     * @param _vpcConfig 云原生API网关vpc配置。
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
                     * 获取云原生API网关描述。
                     * @return Description 云原生API网关描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置云原生API网关描述。
                     * @param _description 云原生API网关描述。
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
                     * 获取云原生API网关创建时间。
                     * @return CreateTime 云原生API网关创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置云原生API网关创建时间。
                     * @param _createTime 云原生API网关创建时间。
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
                     * 获取实例的标签信息
                     * @return Tags 实例的标签信息
                     * 
                     */
                    std::vector<InstanceTagInfo> GetTags() const;

                    /**
                     * 设置实例的标签信息
                     * @param _tags 实例的标签信息
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
                     * 获取是否开启 cls 日志
                     * @return EnableCls 是否开启 cls 日志
                     * 
                     */
                    bool GetEnableCls() const;

                    /**
                     * 设置是否开启 cls 日志
                     * @param _enableCls 是否开启 cls 日志
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
                     * 获取付费模式，0表示后付费，1预付费
                     * @return TradeType 付费模式，0表示后付费，1预付费
                     * 
                     */
                    int64_t GetTradeType() const;

                    /**
                     * 设置付费模式，0表示后付费，1预付费
                     * @param _tradeType 付费模式，0表示后付费，1预付费
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
                     * 获取实例版本，当前支持开发版、标准版、专业版【TRIAL、STANDARD、PROFESSIONAL】
                     * @return FeatureVersion 实例版本，当前支持开发版、标准版、专业版【TRIAL、STANDARD、PROFESSIONAL】
                     * 
                     */
                    std::string GetFeatureVersion() const;

                    /**
                     * 设置实例版本，当前支持开发版、标准版、专业版【TRIAL、STANDARD、PROFESSIONAL】
                     * @param _featureVersion 实例版本，当前支持开发版、标准版、专业版【TRIAL、STANDARD、PROFESSIONAL】
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
                     * 获取公网出流量带宽，[1,2048]Mbps
                     * @return InternetMaxBandwidthOut 公网出流量带宽，[1,2048]Mbps
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置公网出流量带宽，[1,2048]Mbps
                     * @param _internetMaxBandwidthOut 公网出流量带宽，[1,2048]Mbps
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
                     * 获取自动续费标记，0表示默认状态(用户未设置，即初始状态)；
1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0
                     * @return AutoRenewFlag 自动续费标记，0表示默认状态(用户未设置，即初始状态)；
1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记，0表示默认状态(用户未设置，即初始状态)；
1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0
                     * @param _autoRenewFlag 自动续费标记，0表示默认状态(用户未设置，即初始状态)；
1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0
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
                     * 获取到期时间，预付费时使用
                     * @return CurDeadline 到期时间，预付费时使用
                     * 
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置到期时间，预付费时使用
                     * @param _curDeadline 到期时间，预付费时使用
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
                     * 获取隔离时间，实例隔离时使用
                     * @return IsolateTime 隔离时间，实例隔离时使用
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置隔离时间，实例隔离时使用
                     * @param _isolateTime 隔离时间，实例隔离时使用
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
                     * 获取是否开启客户端公网。
                     * @return EnableInternet 是否开启客户端公网。
                     * 
                     */
                    bool GetEnableInternet() const;

                    /**
                     * 设置是否开启客户端公网。
                     * @param _enableInternet 是否开启客户端公网。
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
                     * 获取实例实际的地域信息
                     * @return EngineRegion 实例实际的地域信息
                     * 
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置实例实际的地域信息
                     * @param _engineRegion 实例实际的地域信息
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
                     * 获取Ingress class名称
                     * @return IngressClassName Ingress class名称
                     * 
                     */
                    std::string GetIngressClassName() const;

                    /**
                     * 设置Ingress class名称
                     * @param _ingressClassName Ingress class名称
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
                     * 获取公网计费方式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。
                     * @return InternetPayMode 公网计费方式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。
                     * 
                     */
                    std::string GetInternetPayMode() const;

                    /**
                     * 设置公网计费方式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。
                     * @param _internetPayMode 公网计费方式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。
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
                     * 获取云原生API网关小版本号
                     * @return GatewayMinorVersion 云原生API网关小版本号
                     * 
                     */
                    std::string GetGatewayMinorVersion() const;

                    /**
                     * 设置云原生API网关小版本号
                     * @param _gatewayMinorVersion 云原生API网关小版本号
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
                     * 获取实例监听的端口信息
                     * @return InstancePort 实例监听的端口信息
                     * 
                     */
                    InstancePort GetInstancePort() const;

                    /**
                     * 设置实例监听的端口信息
                     * @param _instancePort 实例监听的端口信息
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
                     * 获取公网CLB默认类型
                     * @return LoadBalancerType 公网CLB默认类型
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置公网CLB默认类型
                     * @param _loadBalancerType 公网CLB默认类型
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
                     * 获取公网IP地址列表
                     * @return PublicIpAddresses 公网IP地址列表
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置公网IP地址列表
                     * @param _publicIpAddresses 公网IP地址列表
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
                     * 获取是否开启删除保护
                     * @return DeleteProtect 是否开启删除保护
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置是否开启删除保护
                     * @param _deleteProtect 是否开启删除保护
                     * 
                     */
                    void SetDeleteProtect(const bool& _deleteProtect);

                    /**
                     * 判断参数 DeleteProtect 是否已赋值
                     * @return DeleteProtect 是否已赋值
                     * 
                     */
                    bool DeleteProtectHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 云原生API网关状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 云原生API网关名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 云原生API网关类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 实例版本：
- 2.4.1
- 2.5.1
                     */
                    std::string m_gatewayVersion;
                    bool m_gatewayVersionHasBeenSet;

                    /**
                     * 云原生API网关节点信息。
                     */
                    CloudNativeAPIGatewayNodeConfig m_nodeConfig;
                    bool m_nodeConfigHasBeenSet;

                    /**
                     * 云原生API网关vpc配置。
                     */
                    CloudNativeAPIGatewayVpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * 云原生API网关描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 云原生API网关创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例的标签信息
                     */
                    std::vector<InstanceTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否开启 cls 日志
                     */
                    bool m_enableCls;
                    bool m_enableClsHasBeenSet;

                    /**
                     * 付费模式，0表示后付费，1预付费
                     */
                    int64_t m_tradeType;
                    bool m_tradeTypeHasBeenSet;

                    /**
                     * 实例版本，当前支持开发版、标准版、专业版【TRIAL、STANDARD、PROFESSIONAL】
                     */
                    std::string m_featureVersion;
                    bool m_featureVersionHasBeenSet;

                    /**
                     * 公网出流量带宽，[1,2048]Mbps
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 自动续费标记，0表示默认状态(用户未设置，即初始状态)；
1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 到期时间，预付费时使用
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                    /**
                     * 隔离时间，实例隔离时使用
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 是否开启客户端公网。
                     */
                    bool m_enableInternet;
                    bool m_enableInternetHasBeenSet;

                    /**
                     * 实例实际的地域信息
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * Ingress class名称
                     */
                    std::string m_ingressClassName;
                    bool m_ingressClassNameHasBeenSet;

                    /**
                     * 公网计费方式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。
                     */
                    std::string m_internetPayMode;
                    bool m_internetPayModeHasBeenSet;

                    /**
                     * 云原生API网关小版本号
                     */
                    std::string m_gatewayMinorVersion;
                    bool m_gatewayMinorVersionHasBeenSet;

                    /**
                     * 实例监听的端口信息
                     */
                    InstancePort m_instancePort;
                    bool m_instancePortHasBeenSet;

                    /**
                     * 公网CLB默认类型
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 公网IP地址列表
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 是否开启删除保护
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYRESULT_H_
