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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CLBDOMAINSINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CLBDOMAINSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LoadBalancerPackageNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 负载均衡型WAF域名详情
                */
                class ClbDomainsInfo : public AbstractModel
                {
                public:
                    ClbDomainsInfo();
                    ~ClbDomainsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名唯一ID
                     * @return DomainId 域名唯一ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名唯一ID
                     * @param _domainId 域名唯一ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取域名所属实例ID
                     * @return InstanceId 域名所属实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置域名所属实例ID
                     * @param _instanceId 域名所属实例ID
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
                     * 获取域名所属实例名
                     * @return InstanceName 域名所属实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置域名所属实例名
                     * @param _instanceName 域名所属实例名
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
                     * 获取域名所属实例类型
                     * @return Edition 域名所属实例类型
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置域名所属实例类型
                     * @param _edition 域名所属实例类型
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     * @return IsCdn waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     * 
                     */
                    uint64_t GetIsCdn() const;

                    /**
                     * 设置waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     * @param _isCdn waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     * 
                     */
                    void SetIsCdn(const uint64_t& _isCdn);

                    /**
                     * 判断参数 IsCdn 是否已赋值
                     * @return IsCdn 是否已赋值
                     * 
                     */
                    bool IsCdnHasBeenSet() const;

                    /**
                     * 获取负载均衡类型为clb时，对应的负载均衡器信息
                     * @return LoadBalancerSet 负载均衡类型为clb时，对应的负载均衡器信息
                     * 
                     */
                    std::vector<LoadBalancerPackageNew> GetLoadBalancerSet() const;

                    /**
                     * 设置负载均衡类型为clb时，对应的负载均衡器信息
                     * @param _loadBalancerSet 负载均衡类型为clb时，对应的负载均衡器信息
                     * 
                     */
                    void SetLoadBalancerSet(const std::vector<LoadBalancerPackageNew>& _loadBalancerSet);

                    /**
                     * 判断参数 LoadBalancerSet 是否已赋值
                     * @return LoadBalancerSet 是否已赋值
                     * 
                     */
                    bool LoadBalancerSetHasBeenSet() const;

                    /**
                     * 获取负载均衡型WAF的流量模式，1：清洗模式，0：镜像模式
                     * @return FlowMode 负载均衡型WAF的流量模式，1：清洗模式，0：镜像模式
                     * 
                     */
                    uint64_t GetFlowMode() const;

                    /**
                     * 设置负载均衡型WAF的流量模式，1：清洗模式，0：镜像模式
                     * @param _flowMode 负载均衡型WAF的流量模式，1：清洗模式，0：镜像模式
                     * 
                     */
                    void SetFlowMode(const uint64_t& _flowMode);

                    /**
                     * 判断参数 FlowMode 是否已赋值
                     * @return FlowMode 是否已赋值
                     * 
                     */
                    bool FlowModeHasBeenSet() const;

                    /**
                     * 获取域名绑定负载均衡器状态
                     * @return State 域名绑定负载均衡器状态
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置域名绑定负载均衡器状态
                     * @param _state 域名绑定负载均衡器状态
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取负载均衡类型，clb或者apisix
                     * @return AlbType 负载均衡类型，clb或者apisix
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置负载均衡类型，clb或者apisix
                     * @param _albType 负载均衡类型，clb或者apisix
                     * 
                     */
                    void SetAlbType(const std::string& _albType);

                    /**
                     * 判断参数 AlbType 是否已赋值
                     * @return AlbType 是否已赋值
                     * 
                     */
                    bool AlbTypeHasBeenSet() const;

                    /**
                     * 获取IsCdn=3时，表示自定义header
                     * @return IpHeaders IsCdn=3时，表示自定义header
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置IsCdn=3时，表示自定义header
                     * @param _ipHeaders IsCdn=3时，表示自定义header
                     * 
                     */
                    void SetIpHeaders(const std::vector<std::string>& _ipHeaders);

                    /**
                     * 判断参数 IpHeaders 是否已赋值
                     * @return IpHeaders 是否已赋值
                     * 
                     */
                    bool IpHeadersHasBeenSet() const;

                    /**
                     * 获取cdc-clb-waf类型WAF的CDC集群信息
                     * @return CdcClusters cdc-clb-waf类型WAF的CDC集群信息
                     * 
                     */
                    std::string GetCdcClusters() const;

                    /**
                     * 设置cdc-clb-waf类型WAF的CDC集群信息
                     * @param _cdcClusters cdc-clb-waf类型WAF的CDC集群信息
                     * 
                     */
                    void SetCdcClusters(const std::string& _cdcClusters);

                    /**
                     * 判断参数 CdcClusters 是否已赋值
                     * @return CdcClusters 是否已赋值
                     * 
                     */
                    bool CdcClustersHasBeenSet() const;

                    /**
                     * 获取云类型:public:公有云；private:私有云;hybrid:混合云
                     * @return CloudType 云类型:public:公有云；private:私有云;hybrid:混合云
                     * 
                     */
                    std::string GetCloudType() const;

                    /**
                     * 设置云类型:public:公有云；private:私有云;hybrid:混合云
                     * @param _cloudType 云类型:public:公有云；private:私有云;hybrid:混合云
                     * 
                     */
                    void SetCloudType(const std::string& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取域名备注信息
                     * @return Note 域名备注信息
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置域名备注信息
                     * @param _note 域名备注信息
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取域名标签
                     * @return Labels 域名标签
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置域名标签
                     * @param _labels 域名标签
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名唯一ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 域名所属实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 域名所属实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 域名所属实例类型
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     */
                    uint64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * 负载均衡类型为clb时，对应的负载均衡器信息
                     */
                    std::vector<LoadBalancerPackageNew> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                    /**
                     * 负载均衡型WAF的流量模式，1：清洗模式，0：镜像模式
                     */
                    uint64_t m_flowMode;
                    bool m_flowModeHasBeenSet;

                    /**
                     * 域名绑定负载均衡器状态
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 负载均衡类型，clb或者apisix
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * IsCdn=3时，表示自定义header
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * cdc-clb-waf类型WAF的CDC集群信息
                     */
                    std::string m_cdcClusters;
                    bool m_cdcClustersHasBeenSet;

                    /**
                     * 云类型:public:公有云；private:私有云;hybrid:混合云
                     */
                    std::string m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * 域名备注信息
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 域名标签
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CLBDOMAINSINFO_H_
