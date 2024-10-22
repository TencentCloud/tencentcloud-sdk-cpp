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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeEnterpriseSecurityGroupRule请求参数结构体
                */
                class DescribeEnterpriseSecurityGroupRuleRequest : public AbstractModel
                {
                public:
                    DescribeEnterpriseSecurityGroupRuleRequest();
                    ~DescribeEnterpriseSecurityGroupRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页查询时，显示的当前页的页码。

默认值为1。
                     * @return PageNo 分页查询时，显示的当前页的页码。

默认值为1。
                     * 
                     */
                    std::string GetPageNo() const;

                    /**
                     * 设置分页查询时，显示的当前页的页码。

默认值为1。
                     * @param _pageNo 分页查询时，显示的当前页的页码。

默认值为1。
                     * 
                     */
                    void SetPageNo(const std::string& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取分页查询时，显示的每页数据的最大条数。

可设置值最大为50。
                     * @return PageSize 分页查询时，显示的每页数据的最大条数。

可设置值最大为50。
                     * 
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置分页查询时，显示的每页数据的最大条数。

可设置值最大为50。
                     * @param _pageSize 分页查询时，显示的每页数据的最大条数。

可设置值最大为50。
                     * 
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
支持通配
                     * @return SourceContent 访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
支持通配
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
支持通配
                     * @param _sourceContent 访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
支持通配
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
                     * 获取访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
支持通配
                     * @return DestContent 访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
支持通配
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
支持通配
                     * @param _destContent 访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
支持通配
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
                     * 获取规则描述，支持通配
                     * @return Description 规则描述，支持通配
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述，支持通配
                     * @param _description 规则描述，支持通配
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
                     * 获取是否启用规则，默认为启用，取值：
true为启用，false为不启用
                     * @return Enable 是否启用规则，默认为启用，取值：
true为启用，false为不启用
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置是否启用规则，默认为启用，取值：
true为启用，false为不启用
                     * @param _enable 是否启用规则，默认为启用，取值：
true为启用，false为不启用
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
                     * 获取协议；TCP/UDP/ICMP/ANY
                     * @return Protocol 协议；TCP/UDP/ICMP/ANY
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议；TCP/UDP/ICMP/ANY
                     * @param _protocol 协议；TCP/UDP/ICMP/ANY
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
                     * 获取端口协议类型参数模板id；协议端口模板id
                     * @return ServiceTemplateId 端口协议类型参数模板id；协议端口模板id
                     * 
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置端口协议类型参数模板id；协议端口模板id
                     * @param _serviceTemplateId 端口协议类型参数模板id；协议端口模板id
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
                     * 获取规则的uuid
                     * @return RuleUuid 规则的uuid
                     * 
                     */
                    int64_t GetRuleUuid() const;

                    /**
                     * 设置规则的uuid
                     * @param _ruleUuid 规则的uuid
                     * 
                     */
                    void SetRuleUuid(const int64_t& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                private:

                    /**
                     * 分页查询时，显示的当前页的页码。

默认值为1。
                     */
                    std::string m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 分页查询时，显示的每页数据的最大条数。

可设置值最大为50。
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 访问源示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
支持通配
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 访问目的示例：
net：IP/CIDR(192.168.0.2)
template：参数模板(ipm-dyodhpby)
instance：资产实例(ins-123456)
resourcegroup：资产分组(/全部分组/分组1/子分组1)
tag：资源标签({"Key":"标签key值","Value":"标签Value值"})
region：地域(ap-gaungzhou)
支持通配
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * 规则描述，支持通配
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 访问控制策略中设置的流量通过云防火墙的方式。取值：
accept：放行
drop：拒绝
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 是否启用规则，默认为启用，取值：
true为启用，false为不启用
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 访问控制策略的端口。取值：
-1/-1：全部端口
80：80端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 协议；TCP/UDP/ICMP/ANY
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口协议类型参数模板id；协议端口模板id
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                    /**
                     * 规则的uuid
                     */
                    int64_t m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEENTERPRISESECURITYGROUPRULEREQUEST_H_
