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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/IngressRule.h>
#include <tencentcloud/tem/v20210701/model/IngressTls.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Ingress 配置
                */
                class IngressInfo : public AbstractModel
                {
                public:
                    IngressInfo();
                    ~IngressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境ID
                     * @return EnvironmentId 环境ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境ID
                     * @param _environmentId 环境ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取ip version
                     * @return AddressIPVersion ip version
                     * 
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置ip version
                     * @param _addressIPVersion ip version
                     * 
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     * 
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取ingress name
                     * @return IngressName ingress name
                     * 
                     */
                    std::string GetIngressName() const;

                    /**
                     * 设置ingress name
                     * @param _ingressName ingress name
                     * 
                     */
                    void SetIngressName(const std::string& _ingressName);

                    /**
                     * 判断参数 IngressName 是否已赋值
                     * @return IngressName 是否已赋值
                     * 
                     */
                    bool IngressNameHasBeenSet() const;

                    /**
                     * 获取rules 配置
                     * @return Rules rules 配置
                     * 
                     */
                    std::vector<IngressRule> GetRules() const;

                    /**
                     * 设置rules 配置
                     * @param _rules rules 配置
                     * 
                     */
                    void SetRules(const std::vector<IngressRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取clb ID
                     * @return ClbId clb ID
                     * 
                     */
                    std::string GetClbId() const;

                    /**
                     * 设置clb ID
                     * @param _clbId clb ID
                     * 
                     */
                    void SetClbId(const std::string& _clbId);

                    /**
                     * 判断参数 ClbId 是否已赋值
                     * @return ClbId 是否已赋值
                     * 
                     */
                    bool ClbIdHasBeenSet() const;

                    /**
                     * 获取环境namespace
                     * @return ClusterNamespace 环境namespace
                     * 
                     */
                    std::string GetClusterNamespace() const;

                    /**
                     * 设置环境namespace
                     * @param _clusterNamespace 环境namespace
                     * 
                     */
                    void SetClusterNamespace(const std::string& _clusterNamespace);

                    /**
                     * 判断参数 ClusterNamespace 是否已赋值
                     * @return ClusterNamespace 是否已赋值
                     * 
                     */
                    bool ClusterNamespaceHasBeenSet() const;

                    /**
                     * 获取tls 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tls tls 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IngressTls> GetTls() const;

                    /**
                     * 设置tls 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tls tls 配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTls(const std::vector<IngressTls>& _tls);

                    /**
                     * 判断参数 Tls 是否已赋值
                     * @return Tls 是否已赋值
                     * 
                     */
                    bool TlsHasBeenSet() const;

                    /**
                     * 获取环境集群ID
                     * @return ClusterId 环境集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置环境集群ID
                     * @param _clusterId 环境集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取clb ip
                     * @return Vip clb ip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置clb ip
                     * @param _vip clb ip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     * @return Mixed 是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     * 
                     */
                    bool GetMixed() const;

                    /**
                     * 设置是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     * @param _mixed 是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     * 
                     */
                    void SetMixed(const bool& _mixed);

                    /**
                     * 判断参数 Mixed 是否已赋值
                     * @return Mixed 是否已赋值
                     * 
                     */
                    bool MixedHasBeenSet() const;

                    /**
                     * 获取重定向模式，可选值：
- AUTO（自动重定向http到https）
- NONE（不使用重定向）
                     * @return RewriteType 重定向模式，可选值：
- AUTO（自动重定向http到https）
- NONE（不使用重定向）
                     * 
                     */
                    std::string GetRewriteType() const;

                    /**
                     * 设置重定向模式，可选值：
- AUTO（自动重定向http到https）
- NONE（不使用重定向）
                     * @param _rewriteType 重定向模式，可选值：
- AUTO（自动重定向http到https）
- NONE（不使用重定向）
                     * 
                     */
                    void SetRewriteType(const std::string& _rewriteType);

                    /**
                     * 判断参数 RewriteType 是否已赋值
                     * @return RewriteType 是否已赋值
                     * 
                     */
                    bool RewriteTypeHasBeenSet() const;

                    /**
                     * 获取clb 域名
                     * @return Domain clb 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置clb 域名
                     * @param _domain clb 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * ip version
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * ingress name
                     */
                    std::string m_ingressName;
                    bool m_ingressNameHasBeenSet;

                    /**
                     * rules 配置
                     */
                    std::vector<IngressRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * clb ID
                     */
                    std::string m_clbId;
                    bool m_clbIdHasBeenSet;

                    /**
                     * 环境namespace
                     */
                    std::string m_clusterNamespace;
                    bool m_clusterNamespaceHasBeenSet;

                    /**
                     * tls 配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IngressTls> m_tls;
                    bool m_tlsHasBeenSet;

                    /**
                     * 环境集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * clb ip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否混合 https，默认 false，可选值 true 代表有 https 协议监听
                     */
                    bool m_mixed;
                    bool m_mixedHasBeenSet;

                    /**
                     * 重定向模式，可选值：
- AUTO（自动重定向http到https）
- NONE（不使用重定向）
                     */
                    std::string m_rewriteType;
                    bool m_rewriteTypeHasBeenSet;

                    /**
                     * clb 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSINFO_H_
