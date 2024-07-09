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
                     * 获取云原生API网关名字, 最多支持60个字符。
                     * @return Name 云原生API网关名字, 最多支持60个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置云原生API网关名字, 最多支持60个字符。
                     * @param _name 云原生API网关名字, 最多支持60个字符。
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
                     * 获取云原生API网关类型, 目前只支持kong。
                     * @return Type 云原生API网关类型, 目前只支持kong。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置云原生API网关类型, 目前只支持kong。
                     * @param _type 云原生API网关类型, 目前只支持kong。
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
                     * 获取云原生API网关版本。参考值：
- 2.4.1
- 2.5.1
                     * @return GatewayVersion 云原生API网关版本。参考值：
- 2.4.1
- 2.5.1
                     * 
                     */
                    std::string GetGatewayVersion() const;

                    /**
                     * 设置云原生API网关版本。参考值：
- 2.4.1
- 2.5.1
                     * @param _gatewayVersion 云原生API网关版本。参考值：
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
                     * 获取云原生API网关节点配置。
                     * @return NodeConfig 云原生API网关节点配置。
                     * 
                     */
                    CloudNativeAPIGatewayNodeConfig GetNodeConfig() const;

                    /**
                     * 设置云原生API网关节点配置。
                     * @param _nodeConfig 云原生API网关节点配置。
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
                     * 获取云原生API网关描述信息, 最多支持120个字符。
                     * @return Description 云原生API网关描述信息, 最多支持120个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置云原生API网关描述信息, 最多支持120个字符。
                     * @param _description 云原生API网关描述信息, 最多支持120个字符。
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
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<InstanceTagInfo> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
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
                     * 获取是否开启 CLS 日志。默认值：fasle
                     * @return EnableCls 是否开启 CLS 日志。默认值：fasle
                     * 
                     */
                    bool GetEnableCls() const;

                    /**
                     * 设置是否开启 CLS 日志。默认值：fasle
                     * @param _enableCls 是否开启 CLS 日志。默认值：fasle
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
                     * 获取产品版本。参考值：
- TRIAL：开发版
- STANDARD：标准版 （默认值）
- PROFESSIONAL：专业版
                     * @return FeatureVersion 产品版本。参考值：
- TRIAL：开发版
- STANDARD：标准版 （默认值）
- PROFESSIONAL：专业版
                     * 
                     */
                    std::string GetFeatureVersion() const;

                    /**
                     * 设置产品版本。参考值：
- TRIAL：开发版
- STANDARD：标准版 （默认值）
- PROFESSIONAL：专业版
                     * @param _featureVersion 产品版本。参考值：
- TRIAL：开发版
- STANDARD：标准版 （默认值）
- PROFESSIONAL：专业版
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
                     * 获取实例实际的地域信息，默认值：ap-guangzhou
                     * @return EngineRegion 实例实际的地域信息，默认值：ap-guangzhou
                     * 
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置实例实际的地域信息，默认值：ap-guangzhou
                     * @param _engineRegion 实例实际的地域信息，默认值：ap-guangzhou
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
                     * 获取ingress Class名称
                     * @return IngressClassName ingress Class名称
                     * 
                     */
                    std::string GetIngressClassName() const;

                    /**
                     * 设置ingress Class名称
                     * @param _ingressClassName ingress Class名称
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
                     * 获取付费类型。参考值：
0：后付费（默认值）
1：预付费（接口暂不支持创建预付费实例）
                     * @return TradeType 付费类型。参考值：
0：后付费（默认值）
1：预付费（接口暂不支持创建预付费实例）
                     * 
                     */
                    int64_t GetTradeType() const;

                    /**
                     * 设置付费类型。参考值：
0：后付费（默认值）
1：预付费（接口暂不支持创建预付费实例）
                     * @param _tradeType 付费类型。参考值：
0：后付费（默认值）
1：预付费（接口暂不支持创建预付费实例）
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
                     * 获取公网相关配置
                     * @return InternetConfig 公网相关配置
                     * 
                     */
                    InternetConfig GetInternetConfig() const;

                    /**
                     * 设置公网相关配置
                     * @param _internetConfig 公网相关配置
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
                     * 获取关联的prometheus ID
                     * @return PromId 关联的prometheus ID
                     * 
                     */
                    std::string GetPromId() const;

                    /**
                     * 设置关联的prometheus ID
                     * @param _promId 关联的prometheus ID
                     * 
                     */
                    void SetPromId(const std::string& _promId);

                    /**
                     * 判断参数 PromId 是否已赋值
                     * @return PromId 是否已赋值
                     * 
                     */
                    bool PromIdHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关名字, 最多支持60个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 云原生API网关类型, 目前只支持kong。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 云原生API网关版本。参考值：
- 2.4.1
- 2.5.1
                     */
                    std::string m_gatewayVersion;
                    bool m_gatewayVersionHasBeenSet;

                    /**
                     * 云原生API网关节点配置。
                     */
                    CloudNativeAPIGatewayNodeConfig m_nodeConfig;
                    bool m_nodeConfigHasBeenSet;

                    /**
                     * 云原生API网关vpc配置。
                     */
                    CloudNativeAPIGatewayVpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * 云原生API网关描述信息, 最多支持120个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<InstanceTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否开启 CLS 日志。默认值：fasle
                     */
                    bool m_enableCls;
                    bool m_enableClsHasBeenSet;

                    /**
                     * 产品版本。参考值：
- TRIAL：开发版
- STANDARD：标准版 （默认值）
- PROFESSIONAL：专业版
                     */
                    std::string m_featureVersion;
                    bool m_featureVersionHasBeenSet;

                    /**
                     * 公网出流量带宽，[1,2048]Mbps
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 实例实际的地域信息，默认值：ap-guangzhou
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * ingress Class名称
                     */
                    std::string m_ingressClassName;
                    bool m_ingressClassNameHasBeenSet;

                    /**
                     * 付费类型。参考值：
0：后付费（默认值）
1：预付费（接口暂不支持创建预付费实例）
                     */
                    int64_t m_tradeType;
                    bool m_tradeTypeHasBeenSet;

                    /**
                     * 公网相关配置
                     */
                    InternetConfig m_internetConfig;
                    bool m_internetConfigHasBeenSet;

                    /**
                     * 关联的prometheus ID
                     */
                    std::string m_promId;
                    bool m_promIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECLOUDNATIVEAPIGATEWAYREQUEST_H_
