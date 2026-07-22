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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPSIMPLIFYRULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPSIMPLIFYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 创建请求写入成功后返回的企业安全组规则摘要。
                */
                class SecurityGroupSimplifyRule : public AbstractModel
                {
                public:
                    SecurityGroupSimplifyRule();
                    ~SecurityGroupSimplifyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取写入规则的描述。
                     * @return Description 写入规则的描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置写入规则的描述。
                     * @param _description 写入规则的描述。
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
                     * 获取访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
                     * @return DestContent 访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
                     * @param _destContent 访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
                     * 
                     */
                    void SetDestContent(const std::string& _destContent);

                    /**
                     * 判断参数 DestContent 是否已赋值
                     * @return DestContent 是否已赋值
                     * 
                     */
                    bool DestContentHasBeenSet() const;

                    /**
                     * 获取写入规则的协议。普通 IPv4 规则返回 ANY、TCP、UDP 或 ICMP；使用服务模板时，Protocol 可省略或留空，此时返回空字符串；若仍显式填写 Protocol，则只接受 ANY 并返回 ANY。
                     * @return Protocol 写入规则的协议。普通 IPv4 规则返回 ANY、TCP、UDP 或 ICMP；使用服务模板时，Protocol 可省略或留空，此时返回空字符串；若仍显式填写 Protocol，则只接受 ANY 并返回 ANY。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置写入规则的协议。普通 IPv4 规则返回 ANY、TCP、UDP 或 ICMP；使用服务模板时，Protocol 可省略或留空，此时返回空字符串；若仍显式填写 Protocol，则只接受 ANY 并返回 ANY。
                     * @param _protocol 写入规则的协议。普通 IPv4 规则返回 ANY、TCP、UDP 或 ICMP；使用服务模板时，Protocol 可省略或留空，此时返回空字符串；若仍显式填写 Protocol，则只接受 ANY 并返回 ANY。
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
                     * 获取服务端写入后生成或采用的规则数据库 ID。
                     * @return RuleUuid 服务端写入后生成或采用的规则数据库 ID。
                     * 
                     */
                    int64_t GetRuleUuid() const;

                    /**
                     * 设置服务端写入后生成或采用的规则数据库 ID。
                     * @param _ruleUuid 服务端写入后生成或采用的规则数据库 ID。
                     * 
                     */
                    void SetRuleUuid(const int64_t& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                    /**
                     * 获取写入后的规则生效范围；SG 表示安全组，LH 表示轻量应用服务器，组合范围以逗号分隔。
                     * @return Scope 写入后的规则生效范围；SG 表示安全组，LH 表示轻量应用服务器，组合范围以逗号分隔。
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置写入后的规则生效范围；SG 表示安全组，LH 表示轻量应用服务器，组合范围以逗号分隔。
                     * @param _scope 写入后的规则生效范围；SG 表示安全组，LH 表示轻量应用服务器，组合范围以逗号分隔。
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取服务端写入后的实际规则顺序。
                     * @return Sequence 服务端写入后的实际规则顺序。
                     * 
                     */
                    int64_t GetSequence() const;

                    /**
                     * 设置服务端写入后的实际规则顺序。
                     * @param _sequence 服务端写入后的实际规则顺序。
                     * 
                     */
                    void SetSequence(const int64_t& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
                     * @return SourceContent 访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
                     * @param _sourceContent 访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
                     * 
                     */
                    void SetSourceContent(const std::string& _sourceContent);

                    /**
                     * 判断参数 SourceContent 是否已赋值
                     * @return SourceContent 是否已赋值
                     * 
                     */
                    bool SourceContentHasBeenSet() const;

                private:

                    /**
                     * 写入规则的描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * 写入规则的协议。普通 IPv4 规则返回 ANY、TCP、UDP 或 ICMP；使用服务模板时，Protocol 可省略或留空，此时返回空字符串；若仍显式填写 Protocol，则只接受 ANY 并返回 ANY。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 服务端写入后生成或采用的规则数据库 ID。
                     */
                    int64_t m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * 写入后的规则生效范围；SG 表示安全组，LH 表示轻量应用服务器，组合范围以逗号分隔。
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 服务端写入后的实际规则顺序。
                     */
                    int64_t m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * 访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPSIMPLIFYRULE_H_
