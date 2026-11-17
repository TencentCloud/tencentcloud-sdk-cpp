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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayNodeConfig.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayVpcConfig.h>
#include <tencentcloud/tse/v20201207/model/InstanceTagInfo.h>
#include <tencentcloud/tse/v20201207/model/InternetConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGateway请求参数结构体
                */
                class CreateCloudNativeAPIGatewayRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayRequest();
                    ~CreateCloudNativeAPIGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云原生API网关名字, 最多支持60个字符。</p>
                     * @return Name <p>云原生API网关名字, 最多支持60个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>云原生API网关名字, 最多支持60个字符。</p>
                     * @param _name <p>云原生API网关名字, 最多支持60个字符。</p>
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
                     * 获取<p>云原生API网关类型, 目前只支持kong。</p>
                     * @return Type <p>云原生API网关类型, 目前只支持kong。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>云原生API网关类型, 目前只支持kong。</p>
                     * @param _type <p>云原生API网关类型, 目前只支持kong。</p>
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
                     * 获取<p>云原生API网关版本。参考值：</p><ul><li>2.4.1</li><li>2.5.1</li></ul>
                     * @return GatewayVersion <p>云原生API网关版本。参考值：</p><ul><li>2.4.1</li><li>2.5.1</li></ul>
                     * 
                     */
                    std::string GetGatewayVersion() const;

                    /**
                     * 设置<p>云原生API网关版本。参考值：</p><ul><li>2.4.1</li><li>2.5.1</li></ul>
                     * @param _gatewayVersion <p>云原生API网关版本。参考值：</p><ul><li>2.4.1</li><li>2.5.1</li></ul>
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
                     * 获取<p>云原生API网关节点配置。</p>
                     * @return NodeConfig <p>云原生API网关节点配置。</p>
                     * 
                     */
                    CloudNativeAPIGatewayNodeConfig GetNodeConfig() const;

                    /**
                     * 设置<p>云原生API网关节点配置。</p>
                     * @param _nodeConfig <p>云原生API网关节点配置。</p>
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
                     * 获取<p>云原生API网关描述信息, 最多支持120个字符。</p>
                     * @return Description <p>云原生API网关描述信息, 最多支持120个字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>云原生API网关描述信息, 最多支持120个字符。</p>
                     * @param _description <p>云原生API网关描述信息, 最多支持120个字符。</p>
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
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<InstanceTagInfo> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
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
                     * 获取<p>是否开启 CLS 日志。默认值：fasle</p>
                     * @return EnableCls <p>是否开启 CLS 日志。默认值：fasle</p>
                     * 
                     */
                    bool GetEnableCls() const;

                    /**
                     * 设置<p>是否开启 CLS 日志。默认值：fasle</p>
                     * @param _enableCls <p>是否开启 CLS 日志。默认值：fasle</p>
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
                     * 获取<p>产品版本</p><p>枚举值：</p><ul><li>STANDARD： 标准版</li><li>PROFESSIONAL： 专业版</li></ul>
                     * @return FeatureVersion <p>产品版本</p><p>枚举值：</p><ul><li>STANDARD： 标准版</li><li>PROFESSIONAL： 专业版</li></ul>
                     * 
                     */
                    std::string GetFeatureVersion() const;

                    /**
                     * 设置<p>产品版本</p><p>枚举值：</p><ul><li>STANDARD： 标准版</li><li>PROFESSIONAL： 专业版</li></ul>
                     * @param _featureVersion <p>产品版本</p><p>枚举值：</p><ul><li>STANDARD： 标准版</li><li>PROFESSIONAL： 专业版</li></ul>
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
                     * 获取<p>实例实际的地域信息，默认值：ap-guangzhou</p>
                     * @return EngineRegion <p>实例实际的地域信息，默认值：ap-guangzhou</p>
                     * 
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置<p>实例实际的地域信息，默认值：ap-guangzhou</p>
                     * @param _engineRegion <p>实例实际的地域信息，默认值：ap-guangzhou</p>
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
                     * 获取<p>ingress Class名称</p>
                     * @return IngressClassName <p>ingress Class名称</p>
                     * 
                     */
                    std::string GetIngressClassName() const;

                    /**
                     * 设置<p>ingress Class名称</p>
                     * @param _ingressClassName <p>ingress Class名称</p>
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
                     * 获取<p>付费类型。参考值：<br>0：后付费（默认值）<br>1：预付费（接口暂不支持创建预付费实例）</p>
                     * @return TradeType <p>付费类型。参考值：<br>0：后付费（默认值）<br>1：预付费（接口暂不支持创建预付费实例）</p>
                     * 
                     */
                    int64_t GetTradeType() const;

                    /**
                     * 设置<p>付费类型。参考值：<br>0：后付费（默认值）<br>1：预付费（接口暂不支持创建预付费实例）</p>
                     * @param _tradeType <p>付费类型。参考值：<br>0：后付费（默认值）<br>1：预付费（接口暂不支持创建预付费实例）</p>
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
                     * 获取<p>公网相关配置</p>
                     * @return InternetConfig <p>公网相关配置</p>
                     * 
                     */
                    InternetConfig GetInternetConfig() const;

                    /**
                     * 设置<p>公网相关配置</p>
                     * @param _internetConfig <p>公网相关配置</p>
                     * 
                     */
                    void SetInternetConfig(const InternetConfig& _internetConfig);

                    /**
                     * 判断参数 InternetConfig 是否已赋值
                     * @return InternetConfig 是否已赋值
                     * 
                     */
                    bool InternetConfigHasBeenSet() const;

                    /**
                     * 获取<p>关联的prometheus ID</p>
                     * @return PromId <p>关联的prometheus ID</p>
                     * 
                     */
                    std::string GetPromId() const;

                    /**
                     * 设置<p>关联的prometheus ID</p>
                     * @param _promId <p>关联的prometheus ID</p>
                     * 
                     */
                    void SetPromId(const std::string& _promId);

                    /**
                     * 判断参数 PromId 是否已赋值
                     * @return PromId 是否已赋值
                     * 
                     */
                    bool PromIdHasBeenSet() const;

                    /**
                     * 获取<p>是否开启HTTP 80 端口的访问</p>
                     * @return EnableHttpPort <p>是否开启HTTP 80 端口的访问</p>
                     * 
                     */
                    bool GetEnableHttpPort() const;

                    /**
                     * 设置<p>是否开启HTTP 80 端口的访问</p>
                     * @param _enableHttpPort <p>是否开启HTTP 80 端口的访问</p>
                     * 
                     */
                    void SetEnableHttpPort(const bool& _enableHttpPort);

                    /**
                     * 判断参数 EnableHttpPort 是否已赋值
                     * @return EnableHttpPort 是否已赋值
                     * 
                     */
                    bool EnableHttpPortHasBeenSet() const;

                private:

                    /**
                     * <p>云原生API网关名字, 最多支持60个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>云原生API网关类型, 目前只支持kong。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>云原生API网关版本。参考值：</p><ul><li>2.4.1</li><li>2.5.1</li></ul>
                     */
                    std::string m_gatewayVersion;
                    bool m_gatewayVersionHasBeenSet;

                    /**
                     * <p>云原生API网关节点配置。</p>
                     */
                    CloudNativeAPIGatewayNodeConfig m_nodeConfig;
                    bool m_nodeConfigHasBeenSet;

                    /**
                     * <p>云原生API网关vpc配置。</p>
                     */
                    CloudNativeAPIGatewayVpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * <p>云原生API网关描述信息, 最多支持120个字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<InstanceTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否开启 CLS 日志。默认值：fasle</p>
                     */
                    bool m_enableCls;
                    bool m_enableClsHasBeenSet;

                    /**
                     * <p>产品版本</p><p>枚举值：</p><ul><li>STANDARD： 标准版</li><li>PROFESSIONAL： 专业版</li></ul>
                     */
                    std::string m_featureVersion;
                    bool m_featureVersionHasBeenSet;

                    /**
                     * <p>公网出流量带宽，[1,2048]Mbps</p>
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * <p>实例实际的地域信息，默认值：ap-guangzhou</p>
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * <p>ingress Class名称</p>
                     */
                    std::string m_ingressClassName;
                    bool m_ingressClassNameHasBeenSet;

                    /**
                     * <p>付费类型。参考值：<br>0：后付费（默认值）<br>1：预付费（接口暂不支持创建预付费实例）</p>
                     */
                    int64_t m_tradeType;
                    bool m_tradeTypeHasBeenSet;

                    /**
                     * <p>公网相关配置</p>
                     */
                    InternetConfig m_internetConfig;
                    bool m_internetConfigHasBeenSet;

                    /**
                     * <p>关联的prometheus ID</p>
                     */
                    std::string m_promId;
                    bool m_promIdHasBeenSet;

                    /**
                     * <p>是否开启HTTP 80 端口的访问</p>
                     */
                    bool m_enableHttpPort;
                    bool m_enableHttpPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYREQUEST_H_
