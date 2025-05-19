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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPRULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPRULE_H_

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
                * 安全组规则
                */
                class SecurityGroupRule : public AbstractModel
                {
                public:
                    SecurityGroupRule();
                    ~SecurityGroupRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板id(ipm-dyodhpby)
instance：资产实例id(ins-123456)
resourcegroup：资产分组id(cfwrg-xxxx)
tag：资源标签({\"Key\":\"标签key值\",\"Value\":\"标签Value值\"})
region：地域(ap-gaungzhou)
                     * @return SourceContent 访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板id(ipm-dyodhpby)
instance：资产实例id(ins-123456)
resourcegroup：资产分组id(cfwrg-xxxx)
tag：资源标签({\"Key\":\"标签key值\",\"Value\":\"标签Value值\"})
region：地域(ap-gaungzhou)
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板id(ipm-dyodhpby)
instance：资产实例id(ins-123456)
resourcegroup：资产分组id(cfwrg-xxxx)
tag：资源标签({\"Key\":\"标签key值\",\"Value\":\"标签Value值\"})
region：地域(ap-gaungzhou)
                     * @param _sourceContent 访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板id(ipm-dyodhpby)
instance：资产实例id(ins-123456)
resourcegroup：资产分组id(cfwrg-xxxx)
tag：资源标签({\"Key\":\"标签key值\",\"Value\":\"标签Value值\"})
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

                    /**
                     * 获取访问源类型，类型可以为以下6种：net|template|instance|resourcegroup|tag|region
                     * @return SourceType 访问源类型，类型可以为以下6种：net|template|instance|resourcegroup|tag|region
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置访问源类型，类型可以为以下6种：net|template|instance|resourcegroup|tag|region
                     * @param _sourceType 访问源类型，类型可以为以下6种：net|template|instance|resourcegroup|tag|region
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板id(ipm-dyodhpby)
instance：资产实例id(ins-123456)
resourcegroup：资产分组id(cfwrg-xxxx)
tag：资源标签({\"Key\":\"标签key值\",\"Value\":\"标签Value值\"})
region：地域(ap-gaungzhou)
                     * @return DestContent 访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板id(ipm-dyodhpby)
instance：资产实例id(ins-123456)
resourcegroup：资产分组id(cfwrg-xxxx)
tag：资源标签({\"Key\":\"标签key值\",\"Value\":\"标签Value值\"})
region：地域(ap-gaungzhou)
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板id(ipm-dyodhpby)
instance：资产实例id(ins-123456)
resourcegroup：资产分组id(cfwrg-xxxx)
tag：资源标签({\"Key\":\"标签key值\",\"Value\":\"标签Value值\"})
region：地域(ap-gaungzhou)
                     * @param _destContent 访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板id(ipm-dyodhpby)
instance：资产实例id(ins-123456)
resourcegroup：资产分组id(cfwrg-xxxx)
tag：资源标签({\"Key\":\"标签key值\",\"Value\":\"标签Value值\"})
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
                     * 获取访问目的类型，类型可以为以下6种：net|template|instance|resourcegroup|tag|region
                     * @return DestType 访问目的类型，类型可以为以下6种：net|template|instance|resourcegroup|tag|region
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置访问目的类型，类型可以为以下6种：net|template|instance|resourcegroup|tag|region
                     * @param _destType 访问目的类型，类型可以为以下6种：net|template|instance|resourcegroup|tag|region
                     * 
                     */
                    void SetDestType(const std::string& _destType);

                    /**
                     * 判断参数 DestType 是否已赋值
                     * @return DestType 是否已赋值
                     * 
                     */
                    bool DestTypeHasBeenSet() const;

                    /**
                     * 获取访问控制策略中设置的流量通过云防火墙的方式。取值：
accept：放行
drop：拒绝
                     * @return RuleAction 访问控制策略中设置的流量通过云防火墙的方式。取值：
accept：放行
drop：拒绝
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置访问控制策略中设置的流量通过云防火墙的方式。取值：
accept：放行
drop：拒绝
                     * @param _ruleAction 访问控制策略中设置的流量通过云防火墙的方式。取值：
accept：放行
drop：拒绝
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取规则描述 用于规则使用或者场景的描述，最多支持50个字符
                     * @return Description 规则描述 用于规则使用或者场景的描述，最多支持50个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述 用于规则使用或者场景的描述，最多支持50个字符
                     * @param _description 规则描述 用于规则使用或者场景的描述，最多支持50个字符
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
                     * 获取规则顺序，-1表示最低，1表示最高，请勿和外层Type冲突（和外层的Type配合使用，当中间插入时，指定添加位置）
                     * @return OrderIndex 规则顺序，-1表示最低，1表示最高，请勿和外层Type冲突（和外层的Type配合使用，当中间插入时，指定添加位置）
                     * 
                     */
                    std::string GetOrderIndex() const;

                    /**
                     * 设置规则顺序，-1表示最低，1表示最高，请勿和外层Type冲突（和外层的Type配合使用，当中间插入时，指定添加位置）
                     * @param _orderIndex 规则顺序，-1表示最低，1表示最高，请勿和外层Type冲突（和外层的Type配合使用，当中间插入时，指定添加位置）
                     * 
                     */
                    void SetOrderIndex(const std::string& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取协议；TCP/UDP/ICMP/ICMPv6/ANY
                     * @return Protocol 协议；TCP/UDP/ICMP/ICMPv6/ANY
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议；TCP/UDP/ICMP/ICMPv6/ANY
                     * @param _protocol 协议；TCP/UDP/ICMP/ICMPv6/ANY
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
                     * 获取访问控制策略的端口。取值：
-1/-1：全部端口
80：80端口
                     * @return Port 访问控制策略的端口。取值：
-1/-1：全部端口
80：80端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置访问控制策略的端口。取值：
-1/-1：全部端口
80：80端口
                     * @param _port 访问控制策略的端口。取值：
-1/-1：全部端口
80：80端口
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取端口协议类型参数模板id；协议端口模板id；与Protocol,Port互斥
                     * @return ServiceTemplateId 端口协议类型参数模板id；协议端口模板id；与Protocol,Port互斥
                     * 
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置端口协议类型参数模板id；协议端口模板id；与Protocol,Port互斥
                     * @param _serviceTemplateId 端口协议类型参数模板id；协议端口模板id；与Protocol,Port互斥
                     * 
                     */
                    void SetServiceTemplateId(const std::string& _serviceTemplateId);

                    /**
                     * 判断参数 ServiceTemplateId 是否已赋值
                     * @return ServiceTemplateId 是否已赋值
                     * 
                     */
                    bool ServiceTemplateIdHasBeenSet() const;

                    /**
                     * 获取（入参时无需填写，自动生成）规则对应的唯一id
                     * @return Id （入参时无需填写，自动生成）规则对应的唯一id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置（入参时无需填写，自动生成）规则对应的唯一id
                     * @param _id （入参时无需填写，自动生成）规则对应的唯一id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取（入参时Enable无意义；由通用配置中新增规则启用状态控制）
规则状态，true表示启用，false表示禁用
                     * @return Enable （入参时Enable无意义；由通用配置中新增规则启用状态控制）
规则状态，true表示启用，false表示禁用
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置（入参时Enable无意义；由通用配置中新增规则启用状态控制）
规则状态，true表示启用，false表示禁用
                     * @param _enable （入参时Enable无意义；由通用配置中新增规则启用状态控制）
规则状态，true表示启用，false表示禁用
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取规则对应的唯一内部id
                     * @return Uid 规则对应的唯一内部id
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置规则对应的唯一内部id
                     * @param _uid 规则对应的唯一内部id
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                private:

                    /**
                     * 访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板id(ipm-dyodhpby)
instance：资产实例id(ins-123456)
resourcegroup：资产分组id(cfwrg-xxxx)
tag：资源标签({\"Key\":\"标签key值\",\"Value\":\"标签Value值\"})
region：地域(ap-gaungzhou)
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 访问源类型，类型可以为以下6种：net|template|instance|resourcegroup|tag|region
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板id(ipm-dyodhpby)
instance：资产实例id(ins-123456)
resourcegroup：资产分组id(cfwrg-xxxx)
tag：资源标签({\"Key\":\"标签key值\",\"Value\":\"标签Value值\"})
region：地域(ap-gaungzhou)
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * 访问目的类型，类型可以为以下6种：net|template|instance|resourcegroup|tag|region
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * 访问控制策略中设置的流量通过云防火墙的方式。取值：
accept：放行
drop：拒绝
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 规则描述 用于规则使用或者场景的描述，最多支持50个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则顺序，-1表示最低，1表示最高，请勿和外层Type冲突（和外层的Type配合使用，当中间插入时，指定添加位置）
                     */
                    std::string m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 协议；TCP/UDP/ICMP/ICMPv6/ANY
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 访问控制策略的端口。取值：
-1/-1：全部端口
80：80端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 端口协议类型参数模板id；协议端口模板id；与Protocol,Port互斥
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                    /**
                     * （入参时无需填写，自动生成）规则对应的唯一id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * （入参时Enable无意义；由通用配置中新增规则启用状态控制）
规则状态，true表示启用，false表示禁用
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 规则对应的唯一内部id
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPRULE_H_
