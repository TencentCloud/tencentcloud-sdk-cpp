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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_ANALYSISSGRULEINFORESP_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_ANALYSISSGRULEINFORESP_H_

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
                class AnalysisSgRuleInfoResp : public AbstractModel
                {
                public:
                    AnalysisSgRuleInfoResp();
                    ~AnalysisSgRuleInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则id  等同RuleUuid
                     * @return Id 规则id  等同RuleUuid
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置规则id  等同RuleUuid
                     * @param _id 规则id  等同RuleUuid
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
                     * 获取规则Id
                     * @return RuleId 规则Id
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则Id
                     * @param _ruleId 规则Id
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
                     * 获取排序
                     * @return OrderIndex 排序
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置排序
                     * @param _orderIndex 排序
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
                     * 获取云防排序
                     * @return CfwOrderIndex 云防排序
                     * 
                     */
                    int64_t GetCfwOrderIndex() const;

                    /**
                     * 设置云防排序
                     * @param _cfwOrderIndex 云防排序
                     * 
                     */
                    void SetCfwOrderIndex(const int64_t& _cfwOrderIndex);

                    /**
                     * 判断参数 CfwOrderIndex 是否已赋值
                     * @return CfwOrderIndex 是否已赋值
                     * 
                     */
                    bool CfwOrderIndexHasBeenSet() const;

                    /**
                     * 获取源规则内容
                     * @return SourceId 源规则内容
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置源规则内容
                     * @param _sourceId 源规则内容
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
                     * 获取源规则类型 
取值范围 0/1/2/3/4/5/6/7/8/9/100
0表示ip(net),
1表示VPC实例(instance)
2表示子网实例(instance)
3表示CVM实例(instance)
4表示CLB实例(instance)
5表示ENI实例(instance)
6表示数据库实例(instance)
7表示模板(template)
8表示标签(tag)
9表示地域(region)
100表示资产分组(resourcegroup)
                     * @return SourceType 源规则类型 
取值范围 0/1/2/3/4/5/6/7/8/9/100
0表示ip(net),
1表示VPC实例(instance)
2表示子网实例(instance)
3表示CVM实例(instance)
4表示CLB实例(instance)
5表示ENI实例(instance)
6表示数据库实例(instance)
7表示模板(template)
8表示标签(tag)
9表示地域(region)
100表示资产分组(resourcegroup)
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置源规则类型 
取值范围 0/1/2/3/4/5/6/7/8/9/100
0表示ip(net),
1表示VPC实例(instance)
2表示子网实例(instance)
3表示CVM实例(instance)
4表示CLB实例(instance)
5表示ENI实例(instance)
6表示数据库实例(instance)
7表示模板(template)
8表示标签(tag)
9表示地域(region)
100表示资产分组(resourcegroup)
                     * @param _sourceType 源规则类型 
取值范围 0/1/2/3/4/5/6/7/8/9/100
0表示ip(net),
1表示VPC实例(instance)
2表示子网实例(instance)
3表示CVM实例(instance)
4表示CLB实例(instance)
5表示ENI实例(instance)
6表示数据库实例(instance)
7表示模板(template)
8表示标签(tag)
9表示地域(region)
100表示资产分组(resourcegroup)
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
                     * 获取目的规则内容
                     * @return TargetId 目的规则内容
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置目的规则内容
                     * @param _targetId 目的规则内容
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
                     * 获取目的规则类型 
取值范围 0/1/2/3/4/5/6/7/8/9/100
0表示ip(net),
1表示VPC实例(instance)
2表示子网实例(instance)
3表示CVM实例(instance)
4表示CLB实例(instance)
5表示ENI实例(instance)
6表示数据库实例(instance)
7表示模板(template)
8表示标签(tag)
9表示地域(region)
100表示资产分组(resourcegroup)
                     * @return TargetType 目的规则类型 
取值范围 0/1/2/3/4/5/6/7/8/9/100
0表示ip(net),
1表示VPC实例(instance)
2表示子网实例(instance)
3表示CVM实例(instance)
4表示CLB实例(instance)
5表示ENI实例(instance)
6表示数据库实例(instance)
7表示模板(template)
8表示标签(tag)
9表示地域(region)
100表示资产分组(resourcegroup)
                     * 
                     */
                    int64_t GetTargetType() const;

                    /**
                     * 设置目的规则类型 
取值范围 0/1/2/3/4/5/6/7/8/9/100
0表示ip(net),
1表示VPC实例(instance)
2表示子网实例(instance)
3表示CVM实例(instance)
4表示CLB实例(instance)
5表示ENI实例(instance)
6表示数据库实例(instance)
7表示模板(template)
8表示标签(tag)
9表示地域(region)
100表示资产分组(resourcegroup)
                     * @param _targetType 目的规则类型 
取值范围 0/1/2/3/4/5/6/7/8/9/100
0表示ip(net),
1表示VPC实例(instance)
2表示子网实例(instance)
3表示CVM实例(instance)
4表示CLB实例(instance)
5表示ENI实例(instance)
6表示数据库实例(instance)
7表示模板(template)
8表示标签(tag)
9表示地域(region)
100表示资产分组(resourcegroup)
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
                     * 获取协议名称
取值范围:TCP/ANY/ICMP/UDP
ANY:表示所有

                     * @return Protocol 协议名称
取值范围:TCP/ANY/ICMP/UDP
ANY:表示所有

                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议名称
取值范围:TCP/ANY/ICMP/UDP
ANY:表示所有

                     * @param _protocol 协议名称
取值范围:TCP/ANY/ICMP/UDP
ANY:表示所有

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
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
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
                     * 获取规则策略
取值范围:1/2
1:阻断
2:放行
                     * @return Strategy 规则策略
取值范围:1/2
1:阻断
2:放行
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置规则策略
取值范围:1/2
1:阻断
2:放行
                     * @param _strategy 规则策略
取值范围:1/2
1:阻断
2:放行
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
                     * 获取描述
                     * @return Detail 描述
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置描述
                     * @param _detail 描述
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取服务模板id
                     * @return ServiceTemplateId 服务模板id
                     * 
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置服务模板id
                     * @param _serviceTemplateId 服务模板id
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
                     * 获取源资产名称
                     * @return SouInstanceName 源资产名称
                     * 
                     */
                    std::string GetSouInstanceName() const;

                    /**
                     * 设置源资产名称
                     * @param _souInstanceName 源资产名称
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
                     * 获取源资产公网ip
                     * @return SouPublicIp 源资产公网ip
                     * 
                     */
                    std::string GetSouPublicIp() const;

                    /**
                     * 设置源资产公网ip
                     * @param _souPublicIp 源资产公网ip
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
                     * 获取源资产内网ip
                     * @return SouPrivateIp 源资产内网ip
                     * 
                     */
                    std::string GetSouPrivateIp() const;

                    /**
                     * 设置源资产内网ip
                     * @param _souPrivateIp 源资产内网ip
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
                     * 获取源资产网段信息
                     * @return SouCidr 源资产网段信息
                     * 
                     */
                    std::string GetSouCidr() const;

                    /**
                     * 设置源资产网段信息
                     * @param _souCidr 源资产网段信息
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
                     * 获取源模板名称
                     * @return SouParameterName 源模板名称
                     * 
                     */
                    std::string GetSouParameterName() const;

                    /**
                     * 设置源模板名称
                     * @param _souParameterName 源模板名称
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
                     * 获取目的资产名称
                     * @return InstanceName 目的资产名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置目的资产名称
                     * @param _instanceName 目的资产名称
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
                     * 获取目的资产公网ip
                     * @return PublicIp 目的资产公网ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置目的资产公网ip
                     * @param _publicIp 目的资产公网ip
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
                     * 获取目的资产内网ip
                     * @return PrivateIp 目的资产内网ip
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置目的资产内网ip
                     * @param _privateIp 目的资产内网ip
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
                     * 获取目的资产网段信息
                     * @return Cidr 目的资产网段信息
                     * 
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置目的资产网段信息
                     * @param _cidr 目的资产网段信息
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
                     * 获取目的模板名称
                     * @return ParameterName 目的模板名称
                     * 
                     */
                    std::string GetParameterName() const;

                    /**
                     * 设置目的模板名称
                     * @param _parameterName 目的模板名称
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
                     * 获取端口模板名称
                     * @return ProtocolPortName 端口模板名称
                     * 
                     */
                    std::string GetProtocolPortName() const;

                    /**
                     * 设置端口模板名称
                     * @param _protocolPortName 端口模板名称
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
                     * 获取域名解析的IP统计
                     * @return DnsParseCount 域名解析的IP统计
                     * 
                     */
                    SgDnsParseCount GetDnsParseCount() const;

                    /**
                     * 设置域名解析的IP统计
                     * @param _dnsParseCount 域名解析的IP统计
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
                     * 获取规则生效范围
                     * @return Scope 规则生效范围
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置规则生效范围
                     * @param _scope 规则生效范围
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
                     * 获取分区：
1防火墙管理最前分区
2是云防规则
3防火墙管理最后分区
                     * @return RulePartition 分区：
1防火墙管理最前分区
2是云防规则
3防火墙管理最后分区
                     * 
                     */
                    int64_t GetRulePartition() const;

                    /**
                     * 设置分区：
1防火墙管理最前分区
2是云防规则
3防火墙管理最后分区
                     * @param _rulePartition 分区：
1防火墙管理最前分区
2是云防规则
3防火墙管理最后分区
                     * 
                     */
                    void SetRulePartition(const int64_t& _rulePartition);

                    /**
                     * 判断参数 RulePartition 是否已赋值
                     * @return RulePartition 是否已赋值
                     * 
                     */
                    bool RulePartitionHasBeenSet() const;

                    /**
                     * 获取规则组Id
                     * @return GroupId 规则组Id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置规则组Id
                     * @param _groupId 规则组Id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取规则组名称
                     * @return GroupName 规则组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置规则组名称
                     * @param _groupName 规则组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取规则组内规则id
                     * @return GroupRuleId 规则组内规则id
                     * 
                     */
                    std::string GetGroupRuleId() const;

                    /**
                     * 设置规则组内规则id
                     * @param _groupRuleId 规则组内规则id
                     * 
                     */
                    void SetGroupRuleId(const std::string& _groupRuleId);

                    /**
                     * 判断参数 GroupRuleId 是否已赋值
                     * @return GroupRuleId 是否已赋值
                     * 
                     */
                    bool GroupRuleIdHasBeenSet() const;

                    /**
                     * 获取策略Id
                     * @return StrategyId 策略Id
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置策略Id
                     * @param _strategyId 策略Id
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取ip类型
                     * @return IpVersion ip类型
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置ip类型
                     * @param _ipVersion ip类型
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
                     * 获取成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BelongMember 成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MemberInfo GetBelongMember() const;

                    /**
                     * 设置成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _belongMember 成员信息
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
                     * 规则id  等同RuleUuid
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则Id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 排序
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 云防排序
                     */
                    int64_t m_cfwOrderIndex;
                    bool m_cfwOrderIndexHasBeenSet;

                    /**
                     * 源规则内容
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 源规则类型 
取值范围 0/1/2/3/4/5/6/7/8/9/100
0表示ip(net),
1表示VPC实例(instance)
2表示子网实例(instance)
3表示CVM实例(instance)
4表示CLB实例(instance)
5表示ENI实例(instance)
6表示数据库实例(instance)
7表示模板(template)
8表示标签(tag)
9表示地域(region)
100表示资产分组(resourcegroup)
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 目的规则内容
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 目的规则类型 
取值范围 0/1/2/3/4/5/6/7/8/9/100
0表示ip(net),
1表示VPC实例(instance)
2表示子网实例(instance)
3表示CVM实例(instance)
4表示CLB实例(instance)
5表示ENI实例(instance)
6表示数据库实例(instance)
7表示模板(template)
8表示标签(tag)
9表示地域(region)
100表示资产分组(resourcegroup)
                     */
                    int64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 协议名称
取值范围:TCP/ANY/ICMP/UDP
ANY:表示所有

                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 规则策略
取值范围:1/2
1:阻断
2:放行
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 服务模板id
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                    /**
                     * 源资产名称
                     */
                    std::string m_souInstanceName;
                    bool m_souInstanceNameHasBeenSet;

                    /**
                     * 源资产公网ip
                     */
                    std::string m_souPublicIp;
                    bool m_souPublicIpHasBeenSet;

                    /**
                     * 源资产内网ip
                     */
                    std::string m_souPrivateIp;
                    bool m_souPrivateIpHasBeenSet;

                    /**
                     * 源资产网段信息
                     */
                    std::string m_souCidr;
                    bool m_souCidrHasBeenSet;

                    /**
                     * 源模板名称
                     */
                    std::string m_souParameterName;
                    bool m_souParameterNameHasBeenSet;

                    /**
                     * 目的资产名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 目的资产公网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 目的资产内网ip
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 目的资产网段信息
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                    /**
                     * 目的模板名称
                     */
                    std::string m_parameterName;
                    bool m_parameterNameHasBeenSet;

                    /**
                     * 端口模板名称
                     */
                    std::string m_protocolPortName;
                    bool m_protocolPortNameHasBeenSet;

                    /**
                     * 域名解析的IP统计
                     */
                    SgDnsParseCount m_dnsParseCount;
                    bool m_dnsParseCountHasBeenSet;

                    /**
                     * 规则生效范围
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 分区：
1防火墙管理最前分区
2是云防规则
3防火墙管理最后分区
                     */
                    int64_t m_rulePartition;
                    bool m_rulePartitionHasBeenSet;

                    /**
                     * 规则组Id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 规则组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 规则组内规则id
                     */
                    std::string m_groupRuleId;
                    bool m_groupRuleIdHasBeenSet;

                    /**
                     * 策略Id
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * ip类型
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * 成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MemberInfo m_belongMember;
                    bool m_belongMemberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_ANALYSISSGRULEINFORESP_H_
