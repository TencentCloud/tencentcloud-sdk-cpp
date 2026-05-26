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
#include <tencentcloud/waf/v20180125/model/TagInfo.h>


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
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
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
                     * 获取<p>域名唯一ID</p>
                     * @return DomainId <p>域名唯一ID</p>
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置<p>域名唯一ID</p>
                     * @param _domainId <p>域名唯一ID</p>
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
                     * 获取<p>域名所属实例ID</p>
                     * @return InstanceId <p>域名所属实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>域名所属实例ID</p>
                     * @param _instanceId <p>域名所属实例ID</p>
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
                     * 获取<p>域名所属实例名</p>
                     * @return InstanceName <p>域名所属实例名</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>域名所属实例名</p>
                     * @param _instanceName <p>域名所属实例名</p>
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
                     * 获取<p>域名所属实例类型</p>
                     * @return Edition <p>域名所属实例类型</p>
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置<p>域名所属实例类型</p>
                     * @param _edition <p>域名所属实例类型</p>
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
                     * 获取<p>waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP</p>
                     * @return IsCdn <p>waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP</p>
                     * 
                     */
                    uint64_t GetIsCdn() const;

                    /**
                     * 设置<p>waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP</p>
                     * @param _isCdn <p>waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP</p>
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
                     * 获取<p>负载均衡类型为clb时，对应的负载均衡器信息</p>
                     * @return LoadBalancerSet <p>负载均衡类型为clb时，对应的负载均衡器信息</p>
                     * 
                     */
                    std::vector<LoadBalancerPackageNew> GetLoadBalancerSet() const;

                    /**
                     * 设置<p>负载均衡类型为clb时，对应的负载均衡器信息</p>
                     * @param _loadBalancerSet <p>负载均衡类型为clb时，对应的负载均衡器信息</p>
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
                     * 获取<p>负载均衡型WAF的流量模式，1：清洗模式，0：镜像模式</p>
                     * @return FlowMode <p>负载均衡型WAF的流量模式，1：清洗模式，0：镜像模式</p>
                     * 
                     */
                    uint64_t GetFlowMode() const;

                    /**
                     * 设置<p>负载均衡型WAF的流量模式，1：清洗模式，0：镜像模式</p>
                     * @param _flowMode <p>负载均衡型WAF的流量模式，1：清洗模式，0：镜像模式</p>
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
                     * 获取<p>域名绑定负载均衡器状态</p>
                     * @return State <p>域名绑定负载均衡器状态</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>域名绑定负载均衡器状态</p>
                     * @param _state <p>域名绑定负载均衡器状态</p>
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
                     * 获取<p>负载均衡类型，clb或者apisix</p>
                     * @return AlbType <p>负载均衡类型，clb或者apisix</p>
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置<p>负载均衡类型，clb或者apisix</p>
                     * @param _albType <p>负载均衡类型，clb或者apisix</p>
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
                     * 获取<p>IsCdn=3时，表示自定义header</p>
                     * @return IpHeaders <p>IsCdn=3时，表示自定义header</p>
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置<p>IsCdn=3时，表示自定义header</p>
                     * @param _ipHeaders <p>IsCdn=3时，表示自定义header</p>
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
                     * 获取<p>cdc-clb-waf类型WAF的CDC集群信息</p>
                     * @return CdcClusters <p>cdc-clb-waf类型WAF的CDC集群信息</p>
                     * 
                     */
                    std::string GetCdcClusters() const;

                    /**
                     * 设置<p>cdc-clb-waf类型WAF的CDC集群信息</p>
                     * @param _cdcClusters <p>cdc-clb-waf类型WAF的CDC集群信息</p>
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
                     * 获取<p>云类型:public:公有云；private:私有云;hybrid:混合云</p>
                     * @return CloudType <p>云类型:public:公有云；private:私有云;hybrid:混合云</p>
                     * 
                     */
                    std::string GetCloudType() const;

                    /**
                     * 设置<p>云类型:public:公有云；private:私有云;hybrid:混合云</p>
                     * @param _cloudType <p>云类型:public:公有云；private:私有云;hybrid:混合云</p>
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
                     * 获取<p>域名备注信息</p>
                     * @return Note <p>域名备注信息</p>
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>域名备注信息</p>
                     * @param _note <p>域名备注信息</p>
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
                     * 获取<p>域名标签</p>
                     * @return Labels <p>域名标签</p>
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置<p>域名标签</p>
                     * @param _labels <p>域名标签</p>
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>clbwaf接入状态，0代表“尚无流量接入”，1代表“流量接入”，2代表“CLB监听器已注销”，3代表“配置生效中”，4代表“配置下发失败中”</p>
                     * @return AccessStatus <p>clbwaf接入状态，0代表“尚无流量接入”，1代表“流量接入”，2代表“CLB监听器已注销”，3代表“配置生效中”，4代表“配置下发失败中”</p>
                     * 
                     */
                    int64_t GetAccessStatus() const;

                    /**
                     * 设置<p>clbwaf接入状态，0代表“尚无流量接入”，1代表“流量接入”，2代表“CLB监听器已注销”，3代表“配置生效中”，4代表“配置下发失败中”</p>
                     * @param _accessStatus <p>clbwaf接入状态，0代表“尚无流量接入”，1代表“流量接入”，2代表“CLB监听器已注销”，3代表“配置生效中”，4代表“配置下发失败中”</p>
                     * 
                     */
                    void SetAccessStatus(const int64_t& _accessStatus);

                    /**
                     * 判断参数 AccessStatus 是否已赋值
                     * @return AccessStatus 是否已赋值
                     * 
                     */
                    bool AccessStatusHasBeenSet() const;

                    /**
                     * 获取<p>标签信息</p>
                     * @return TagInfos <p>标签信息</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagInfos() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tagInfos <p>标签信息</p>
                     * 
                     */
                    void SetTagInfos(const std::vector<TagInfo>& _tagInfos);

                    /**
                     * 判断参数 TagInfos 是否已赋值
                     * @return TagInfos 是否已赋值
                     * 
                     */
                    bool TagInfosHasBeenSet() const;

                private:

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>域名唯一ID</p>
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>域名所属实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>域名所属实例名</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>域名所属实例类型</p>
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * <p>waf前是否部署有七层代理服务。 0：没有部署代理服务 1：有部署代理服务，waf将使用XFF获取客户端IP 2：有部署代理服务，waf将使用remote_addr获取客户端IP 3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP</p>
                     */
                    uint64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * <p>负载均衡类型为clb时，对应的负载均衡器信息</p>
                     */
                    std::vector<LoadBalancerPackageNew> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                    /**
                     * <p>负载均衡型WAF的流量模式，1：清洗模式，0：镜像模式</p>
                     */
                    uint64_t m_flowMode;
                    bool m_flowModeHasBeenSet;

                    /**
                     * <p>域名绑定负载均衡器状态</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>负载均衡类型，clb或者apisix</p>
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * <p>IsCdn=3时，表示自定义header</p>
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * <p>cdc-clb-waf类型WAF的CDC集群信息</p>
                     */
                    std::string m_cdcClusters;
                    bool m_cdcClustersHasBeenSet;

                    /**
                     * <p>云类型:public:公有云；private:私有云;hybrid:混合云</p>
                     */
                    std::string m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>域名备注信息</p>
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <p>域名标签</p>
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>clbwaf接入状态，0代表“尚无流量接入”，1代表“流量接入”，2代表“CLB监听器已注销”，3代表“配置生效中”，4代表“配置下发失败中”</p>
                     */
                    int64_t m_accessStatus;
                    bool m_accessStatusHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<TagInfo> m_tagInfos;
                    bool m_tagInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CLBDOMAINSINFO_H_
