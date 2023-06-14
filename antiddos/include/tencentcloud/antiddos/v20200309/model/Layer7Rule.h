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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LAYER7RULE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LAYER7RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/ProxyTypeInfo.h>
#include <tencentcloud/antiddos/v20200309/model/SourceServer.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>
#include <tencentcloud/antiddos/v20200309/model/RuleInstanceRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 7层转发规则
                */
                class Layer7Rule : public AbstractModel
                {
                public:
                    Layer7Rule();
                    ~Layer7Rule() = default;
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
                     * 获取转发类型列表
                     * @return ProxyTypeList 转发类型列表
                     * 
                     */
                    std::vector<ProxyTypeInfo> GetProxyTypeList() const;

                    /**
                     * 设置转发类型列表
                     * @param _proxyTypeList 转发类型列表
                     * 
                     */
                    void SetProxyTypeList(const std::vector<ProxyTypeInfo>& _proxyTypeList);

                    /**
                     * 判断参数 ProxyTypeList 是否已赋值
                     * @return ProxyTypeList 是否已赋值
                     * 
                     */
                    bool ProxyTypeListHasBeenSet() const;

                    /**
                     * 获取源站列表
                     * @return RealServers 源站列表
                     * 
                     */
                    std::vector<SourceServer> GetRealServers() const;

                    /**
                     * 设置源站列表
                     * @param _realServers 源站列表
                     * 
                     */
                    void SetRealServers(const std::vector<SourceServer>& _realServers);

                    /**
                     * 判断参数 RealServers 是否已赋值
                     * @return RealServers 是否已赋值
                     * 
                     */
                    bool RealServersHasBeenSet() const;

                    /**
                     * 获取资源实例
                     * @return InstanceDetails 资源实例
                     * 
                     */
                    std::vector<InstanceRelation> GetInstanceDetails() const;

                    /**
                     * 设置资源实例
                     * @param _instanceDetails 资源实例
                     * 
                     */
                    void SetInstanceDetails(const std::vector<InstanceRelation>& _instanceDetails);

                    /**
                     * 判断参数 InstanceDetails 是否已赋值
                     * @return InstanceDetails 是否已赋值
                     * 
                     */
                    bool InstanceDetailsHasBeenSet() const;

                    /**
                     * 获取规则所属的资源实例
                     * @return InstanceDetailRule 规则所属的资源实例
                     * 
                     */
                    std::vector<RuleInstanceRelation> GetInstanceDetailRule() const;

                    /**
                     * 设置规则所属的资源实例
                     * @param _instanceDetailRule 规则所属的资源实例
                     * 
                     */
                    void SetInstanceDetailRule(const std::vector<RuleInstanceRelation>& _instanceDetailRule);

                    /**
                     * 判断参数 InstanceDetailRule 是否已赋值
                     * @return InstanceDetailRule 是否已赋值
                     * 
                     */
                    bool InstanceDetailRuleHasBeenSet() const;

                    /**
                     * 获取协议
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取端口号
                     * @return Vport 端口号
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置端口号
                     * @param _vport 端口号
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 转发类型列表
                     */
                    std::vector<ProxyTypeInfo> m_proxyTypeList;
                    bool m_proxyTypeListHasBeenSet;

                    /**
                     * 源站列表
                     */
                    std::vector<SourceServer> m_realServers;
                    bool m_realServersHasBeenSet;

                    /**
                     * 资源实例
                     */
                    std::vector<InstanceRelation> m_instanceDetails;
                    bool m_instanceDetailsHasBeenSet;

                    /**
                     * 规则所属的资源实例
                     */
                    std::vector<RuleInstanceRelation> m_instanceDetailRule;
                    bool m_instanceDetailRuleHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口号
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LAYER7RULE_H_
