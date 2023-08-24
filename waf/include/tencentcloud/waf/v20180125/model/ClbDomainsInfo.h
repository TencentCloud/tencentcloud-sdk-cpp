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
                * clb域名详情
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
                     * 获取域名id
                     * @return DomainId 域名id
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名id
                     * @param _domainId 域名id
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
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
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
                     * 获取waf类型
                     * @return Edition waf类型
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置waf类型
                     * @param _edition waf类型
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
                     * 获取是否是cdn
                     * @return IsCdn 是否是cdn
                     * 
                     */
                    uint64_t GetIsCdn() const;

                    /**
                     * 设置是否是cdn
                     * @param _isCdn 是否是cdn
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
                     * 获取负载均衡算法
                     * @return LoadBalancerSet 负载均衡算法
                     * 
                     */
                    std::vector<LoadBalancerPackageNew> GetLoadBalancerSet() const;

                    /**
                     * 设置负载均衡算法
                     * @param _loadBalancerSet 负载均衡算法
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
                     * 获取镜像模式
                     * @return FlowMode 镜像模式
                     * 
                     */
                    uint64_t GetFlowMode() const;

                    /**
                     * 设置镜像模式
                     * @param _flowMode 镜像模式
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
                     * 获取绑定clb状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 绑定clb状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置绑定clb状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 绑定clb状态
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlbType 负载均衡类型，clb或者apisix
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置负载均衡类型，clb或者apisix
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _albType 负载均衡类型，clb或者apisix
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpHeaders IsCdn=3时，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置IsCdn=3时，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipHeaders IsCdn=3时，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取cdc类型会增加集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdcClusters cdc类型会增加集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCdcClusters() const;

                    /**
                     * 设置cdc类型会增加集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cdcClusters cdc类型会增加集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCdcClusters(const std::string& _cdcClusters);

                    /**
                     * 判断参数 CdcClusters 是否已赋值
                     * @return CdcClusters 是否已赋值
                     * 
                     */
                    bool CdcClustersHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名id
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * waf类型
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 是否是cdn
                     */
                    uint64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * 负载均衡算法
                     */
                    std::vector<LoadBalancerPackageNew> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                    /**
                     * 镜像模式
                     */
                    uint64_t m_flowMode;
                    bool m_flowModeHasBeenSet;

                    /**
                     * 绑定clb状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 负载均衡类型，clb或者apisix
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * IsCdn=3时，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * cdc类型会增加集群信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cdcClusters;
                    bool m_cdcClustersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CLBDOMAINSINFO_H_
