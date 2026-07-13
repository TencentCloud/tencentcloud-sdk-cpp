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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_SECGROUPRULERESP_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_SECGROUPRULERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/SgDnsParseCount.h>
#include <tencentcloud/fwm/v20250611/model/MemberInfo.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 企业安全组规则列表信息
                */
                class SecGroupRuleResp : public AbstractModel
                {
                public:
                    SecGroupRuleResp();
                    ~SecGroupRuleResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>排序</p>
                     * @return OrderIndex <p>排序</p>
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置<p>排序</p>
                     * @param _orderIndex <p>排序</p>
                     * 
                     */
                    void SetOrderIndex(const int64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取<p>主键id</p>
                     * @return RuleId <p>主键id</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>主键id</p>
                     * @param _ruleId <p>主键id</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>ip类型</p>
                     * @return IpVersion <p>ip类型</p>
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置<p>ip类型</p>
                     * @param _ipVersion <p>ip类型</p>
                     * 
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取<p>源规则内容</p>
                     * @return SourceId <p>源规则内容</p>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置<p>源规则内容</p>
                     * @param _sourceId <p>源规则内容</p>
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取<p>源规则类型<br>取值范围 0/1/2/3/4/5/6/7/8/9/100<br>0表示ip(net),<br>1表示VPC实例(instance)<br>2表示子网实例(instance)<br>3表示CVM实例(instance)<br>4表示CLB实例(instance)<br>5表示ENI实例(instance)<br>6表示数据库实例(instance)<br>7表示模板(template)<br>8表示标签(tag)<br>9表示地域(region)<br>100表示资产分组(resourcegroup)</p>
                     * @return SourceType <p>源规则类型<br>取值范围 0/1/2/3/4/5/6/7/8/9/100<br>0表示ip(net),<br>1表示VPC实例(instance)<br>2表示子网实例(instance)<br>3表示CVM实例(instance)<br>4表示CLB实例(instance)<br>5表示ENI实例(instance)<br>6表示数据库实例(instance)<br>7表示模板(template)<br>8表示标签(tag)<br>9表示地域(region)<br>100表示资产分组(resourcegroup)</p>
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置<p>源规则类型<br>取值范围 0/1/2/3/4/5/6/7/8/9/100<br>0表示ip(net),<br>1表示VPC实例(instance)<br>2表示子网实例(instance)<br>3表示CVM实例(instance)<br>4表示CLB实例(instance)<br>5表示ENI实例(instance)<br>6表示数据库实例(instance)<br>7表示模板(template)<br>8表示标签(tag)<br>9表示地域(region)<br>100表示资产分组(resourcegroup)</p>
                     * @param _sourceType <p>源规则类型<br>取值范围 0/1/2/3/4/5/6/7/8/9/100<br>0表示ip(net),<br>1表示VPC实例(instance)<br>2表示子网实例(instance)<br>3表示CVM实例(instance)<br>4表示CLB实例(instance)<br>5表示ENI实例(instance)<br>6表示数据库实例(instance)<br>7表示模板(template)<br>8表示标签(tag)<br>9表示地域(region)<br>100表示资产分组(resourcegroup)</p>
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>目的规则内容</p>
                     * @return TargetId <p>目的规则内容</p>
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置<p>目的规则内容</p>
                     * @param _targetId <p>目的规则内容</p>
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取<p>目的规则类型<br>取值范围 0/1/2/3/4/5/6/7/8/9/100<br>0表示ip(net),<br>1表示VPC实例(instance)<br>2表示子网实例(instance)<br>3表示CVM实例(instance)<br>4表示CLB实例(instance)<br>5表示ENI实例(instance)<br>6表示数据库实例(instance)<br>7表示模板(template)<br>8表示标签(tag)<br>9表示地域(region)<br>100表示资产分组(resourcegroup)</p>
                     * @return TargetType <p>目的规则类型<br>取值范围 0/1/2/3/4/5/6/7/8/9/100<br>0表示ip(net),<br>1表示VPC实例(instance)<br>2表示子网实例(instance)<br>3表示CVM实例(instance)<br>4表示CLB实例(instance)<br>5表示ENI实例(instance)<br>6表示数据库实例(instance)<br>7表示模板(template)<br>8表示标签(tag)<br>9表示地域(region)<br>100表示资产分组(resourcegroup)</p>
                     * 
                     */
                    int64_t GetTargetType() const;

                    /**
                     * 设置<p>目的规则类型<br>取值范围 0/1/2/3/4/5/6/7/8/9/100<br>0表示ip(net),<br>1表示VPC实例(instance)<br>2表示子网实例(instance)<br>3表示CVM实例(instance)<br>4表示CLB实例(instance)<br>5表示ENI实例(instance)<br>6表示数据库实例(instance)<br>7表示模板(template)<br>8表示标签(tag)<br>9表示地域(region)<br>100表示资产分组(resourcegroup)</p>
                     * @param _targetType <p>目的规则类型<br>取值范围 0/1/2/3/4/5/6/7/8/9/100<br>0表示ip(net),<br>1表示VPC实例(instance)<br>2表示子网实例(instance)<br>3表示CVM实例(instance)<br>4表示CLB实例(instance)<br>5表示ENI实例(instance)<br>6表示数据库实例(instance)<br>7表示模板(template)<br>8表示标签(tag)<br>9表示地域(region)<br>100表示资产分组(resourcegroup)</p>
                     * 
                     */
                    void SetTargetType(const int64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取<p>协议名称<br>取值范围:TCP/ANY/ICMP/UDP<br>ANY:表示所有</p>
                     * @return Protocol <p>协议名称<br>取值范围:TCP/ANY/ICMP/UDP<br>ANY:表示所有</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议名称<br>取值范围:TCP/ANY/ICMP/UDP<br>ANY:表示所有</p>
                     * @param _protocol <p>协议名称<br>取值范围:TCP/ANY/ICMP/UDP<br>ANY:表示所有</p>
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
                     * 获取<p>端口</p>
                     * @return Port <p>端口</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>端口</p>
                     * @param _port <p>端口</p>
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
                     * 获取<p>策略</p>
                     * @return Strategy <p>策略</p>
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置<p>策略</p>
                     * @param _strategy <p>策略</p>
                     * 
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Detail <p>描述</p>
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _detail <p>描述</p>
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>服务模板id</p>
                     * @return ServiceTemplateId <p>服务模板id</p>
                     * 
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置<p>服务模板id</p>
                     * @param _serviceTemplateId <p>服务模板id</p>
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
                     * 获取<p>源资产名称</p>
                     * @return SouInstanceName <p>源资产名称</p>
                     * 
                     */
                    std::string GetSouInstanceName() const;

                    /**
                     * 设置<p>源资产名称</p>
                     * @param _souInstanceName <p>源资产名称</p>
                     * 
                     */
                    void SetSouInstanceName(const std::string& _souInstanceName);

                    /**
                     * 判断参数 SouInstanceName 是否已赋值
                     * @return SouInstanceName 是否已赋值
                     * 
                     */
                    bool SouInstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>源资产公网ip</p>
                     * @return SouPublicIp <p>源资产公网ip</p>
                     * 
                     */
                    std::string GetSouPublicIp() const;

                    /**
                     * 设置<p>源资产公网ip</p>
                     * @param _souPublicIp <p>源资产公网ip</p>
                     * 
                     */
                    void SetSouPublicIp(const std::string& _souPublicIp);

                    /**
                     * 判断参数 SouPublicIp 是否已赋值
                     * @return SouPublicIp 是否已赋值
                     * 
                     */
                    bool SouPublicIpHasBeenSet() const;

                    /**
                     * 获取<p>源资产内网ip</p>
                     * @return SouPrivateIp <p>源资产内网ip</p>
                     * 
                     */
                    std::string GetSouPrivateIp() const;

                    /**
                     * 设置<p>源资产内网ip</p>
                     * @param _souPrivateIp <p>源资产内网ip</p>
                     * 
                     */
                    void SetSouPrivateIp(const std::string& _souPrivateIp);

                    /**
                     * 判断参数 SouPrivateIp 是否已赋值
                     * @return SouPrivateIp 是否已赋值
                     * 
                     */
                    bool SouPrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>源资产网段信息</p>
                     * @return SouCidr <p>源资产网段信息</p>
                     * 
                     */
                    std::string GetSouCidr() const;

                    /**
                     * 设置<p>源资产网段信息</p>
                     * @param _souCidr <p>源资产网段信息</p>
                     * 
                     */
                    void SetSouCidr(const std::string& _souCidr);

                    /**
                     * 判断参数 SouCidr 是否已赋值
                     * @return SouCidr 是否已赋值
                     * 
                     */
                    bool SouCidrHasBeenSet() const;

                    /**
                     * 获取<p>源模板名称</p>
                     * @return SouParameterName <p>源模板名称</p>
                     * 
                     */
                    std::string GetSouParameterName() const;

                    /**
                     * 设置<p>源模板名称</p>
                     * @param _souParameterName <p>源模板名称</p>
                     * 
                     */
                    void SetSouParameterName(const std::string& _souParameterName);

                    /**
                     * 判断参数 SouParameterName 是否已赋值
                     * @return SouParameterName 是否已赋值
                     * 
                     */
                    bool SouParameterNameHasBeenSet() const;

                    /**
                     * 获取<p>目的资产名称</p>
                     * @return InstanceName <p>目的资产名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>目的资产名称</p>
                     * @param _instanceName <p>目的资产名称</p>
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
                     * 获取<p>目的资产公网ip</p>
                     * @return PublicIp <p>目的资产公网ip</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>目的资产公网ip</p>
                     * @param _publicIp <p>目的资产公网ip</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>目的资产内网ip</p>
                     * @return PrivateIp <p>目的资产内网ip</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>目的资产内网ip</p>
                     * @param _privateIp <p>目的资产内网ip</p>
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>目的资产网段信息</p>
                     * @return Cidr <p>目的资产网段信息</p>
                     * 
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置<p>目的资产网段信息</p>
                     * @param _cidr <p>目的资产网段信息</p>
                     * 
                     */
                    void SetCidr(const std::string& _cidr);

                    /**
                     * 判断参数 Cidr 是否已赋值
                     * @return Cidr 是否已赋值
                     * 
                     */
                    bool CidrHasBeenSet() const;

                    /**
                     * 获取<p>目的模板名称</p>
                     * @return ParameterName <p>目的模板名称</p>
                     * 
                     */
                    std::string GetParameterName() const;

                    /**
                     * 设置<p>目的模板名称</p>
                     * @param _parameterName <p>目的模板名称</p>
                     * 
                     */
                    void SetParameterName(const std::string& _parameterName);

                    /**
                     * 判断参数 ParameterName 是否已赋值
                     * @return ParameterName 是否已赋值
                     * 
                     */
                    bool ParameterNameHasBeenSet() const;

                    /**
                     * 获取<p>端口模板名称</p>
                     * @return ProtocolPortName <p>端口模板名称</p>
                     * 
                     */
                    std::string GetProtocolPortName() const;

                    /**
                     * 设置<p>端口模板名称</p>
                     * @param _protocolPortName <p>端口模板名称</p>
                     * 
                     */
                    void SetProtocolPortName(const std::string& _protocolPortName);

                    /**
                     * 判断参数 ProtocolPortName 是否已赋值
                     * @return ProtocolPortName 是否已赋值
                     * 
                     */
                    bool ProtocolPortNameHasBeenSet() const;

                    /**
                     * 获取<p>规则id  等同RuleUuid</p>
                     * @return Id <p>规则id  等同RuleUuid</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>规则id  等同RuleUuid</p>
                     * @param _id <p>规则id  等同RuleUuid</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>域名解析的IP统计</p>
                     * @return DnsParseCount <p>域名解析的IP统计</p>
                     * 
                     */
                    SgDnsParseCount GetDnsParseCount() const;

                    /**
                     * 设置<p>域名解析的IP统计</p>
                     * @param _dnsParseCount <p>域名解析的IP统计</p>
                     * 
                     */
                    void SetDnsParseCount(const SgDnsParseCount& _dnsParseCount);

                    /**
                     * 判断参数 DnsParseCount 是否已赋值
                     * @return DnsParseCount 是否已赋值
                     * 
                     */
                    bool DnsParseCountHasBeenSet() const;

                    /**
                     * 获取<p>规则生效范围</p>
                     * @return Scope <p>规则生效范围</p>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置<p>规则生效范围</p>
                     * @param _scope <p>规则生效范围</p>
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
                     * 获取<p>规则最近一次是否有改动 取值范围：0/1 0:否 1:是</p>
                     * @return IsNew <p>规则最近一次是否有改动 取值范围：0/1 0:否 1:是</p>
                     * 
                     */
                    int64_t GetIsNew() const;

                    /**
                     * 设置<p>规则最近一次是否有改动 取值范围：0/1 0:否 1:是</p>
                     * @param _isNew <p>规则最近一次是否有改动 取值范围：0/1 0:否 1:是</p>
                     * 
                     */
                    void SetIsNew(const int64_t& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取<p>规则归属的成员账号（当FwGroupId为cfwg-xxx或SourceType/DestType为instance/tag时必填)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BelongMember <p>规则归属的成员账号（当FwGroupId为cfwg-xxx或SourceType/DestType为instance/tag时必填)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MemberInfo GetBelongMember() const;

                    /**
                     * 设置<p>规则归属的成员账号（当FwGroupId为cfwg-xxx或SourceType/DestType为instance/tag时必填)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _belongMember <p>规则归属的成员账号（当FwGroupId为cfwg-xxx或SourceType/DestType为instance/tag时必填)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBelongMember(const MemberInfo& _belongMember);

                    /**
                     * 判断参数 BelongMember 是否已赋值
                     * @return BelongMember 是否已赋值
                     * 
                     */
                    bool BelongMemberHasBeenSet() const;

                private:

                    /**
                     * <p>排序</p>
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * <p>主键id</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>ip类型</p>
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * <p>源规则内容</p>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * <p>源规则类型<br>取值范围 0/1/2/3/4/5/6/7/8/9/100<br>0表示ip(net),<br>1表示VPC实例(instance)<br>2表示子网实例(instance)<br>3表示CVM实例(instance)<br>4表示CLB实例(instance)<br>5表示ENI实例(instance)<br>6表示数据库实例(instance)<br>7表示模板(template)<br>8表示标签(tag)<br>9表示地域(region)<br>100表示资产分组(resourcegroup)</p>
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>目的规则内容</p>
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * <p>目的规则类型<br>取值范围 0/1/2/3/4/5/6/7/8/9/100<br>0表示ip(net),<br>1表示VPC实例(instance)<br>2表示子网实例(instance)<br>3表示CVM实例(instance)<br>4表示CLB实例(instance)<br>5表示ENI实例(instance)<br>6表示数据库实例(instance)<br>7表示模板(template)<br>8表示标签(tag)<br>9表示地域(region)<br>100表示资产分组(resourcegroup)</p>
                     */
                    int64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>协议名称<br>取值范围:TCP/ANY/ICMP/UDP<br>ANY:表示所有</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>端口</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>策略</p>
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>服务模板id</p>
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                    /**
                     * <p>源资产名称</p>
                     */
                    std::string m_souInstanceName;
                    bool m_souInstanceNameHasBeenSet;

                    /**
                     * <p>源资产公网ip</p>
                     */
                    std::string m_souPublicIp;
                    bool m_souPublicIpHasBeenSet;

                    /**
                     * <p>源资产内网ip</p>
                     */
                    std::string m_souPrivateIp;
                    bool m_souPrivateIpHasBeenSet;

                    /**
                     * <p>源资产网段信息</p>
                     */
                    std::string m_souCidr;
                    bool m_souCidrHasBeenSet;

                    /**
                     * <p>源模板名称</p>
                     */
                    std::string m_souParameterName;
                    bool m_souParameterNameHasBeenSet;

                    /**
                     * <p>目的资产名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>目的资产公网ip</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>目的资产内网ip</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>目的资产网段信息</p>
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                    /**
                     * <p>目的模板名称</p>
                     */
                    std::string m_parameterName;
                    bool m_parameterNameHasBeenSet;

                    /**
                     * <p>端口模板名称</p>
                     */
                    std::string m_protocolPortName;
                    bool m_protocolPortNameHasBeenSet;

                    /**
                     * <p>规则id  等同RuleUuid</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>域名解析的IP统计</p>
                     */
                    SgDnsParseCount m_dnsParseCount;
                    bool m_dnsParseCountHasBeenSet;

                    /**
                     * <p>规则生效范围</p>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>规则最近一次是否有改动 取值范围：0/1 0:否 1:是</p>
                     */
                    int64_t m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * <p>规则归属的成员账号（当FwGroupId为cfwg-xxx或SourceType/DestType为instance/tag时必填)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MemberInfo m_belongMember;
                    bool m_belongMemberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_SECGROUPRULERESP_H_
