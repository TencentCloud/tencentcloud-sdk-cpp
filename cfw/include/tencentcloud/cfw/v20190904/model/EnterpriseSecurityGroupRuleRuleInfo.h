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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ENTERPRISESECURITYGROUPRULERULEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ENTERPRISESECURITYGROUPRULERULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/EnterpriseSecurityGroupRuleBetaInfo.h>
#include <tencentcloud/cfw/v20190904/model/SgDnsParseCount.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 企业安全组规则列表信息
                */
                class EnterpriseSecurityGroupRuleRuleInfo : public AbstractModel
                {
                public:
                    EnterpriseSecurityGroupRuleRuleInfo();
                    ~EnterpriseSecurityGroupRuleRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取主键id
                     * @return RuleUuid 主键id
                     * 
                     */
                    uint64_t GetRuleUuid() const;

                    /**
                     * 设置主键id
                     * @param _ruleUuid 主键id
                     * 
                     */
                    void SetRuleUuid(const uint64_t& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                    /**
                     * 获取规则uuid
                     * @return Uuid 规则uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置规则uuid
                     * @param _uuid 规则uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

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
                     * 获取规则启用状态 
取值范围： 0/1
0:未开启
1:开启
                     * @return Status 规则启用状态 
取值范围： 0/1
0:未开启
1:开启
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则启用状态 
取值范围： 0/1
0:未开启
1:开启
                     * @param _status 规则启用状态 
取值范围： 0/1
0:未开启
1:开启
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取标签
                     * @return AclTags 标签
                     * 
                     */
                    std::string GetAclTags() const;

                    /**
                     * 设置标签
                     * @param _aclTags 标签
                     * 
                     */
                    void SetAclTags(const std::string& _aclTags);

                    /**
                     * 判断参数 AclTags 是否已赋值
                     * @return AclTags 是否已赋值
                     * 
                     */
                    bool AclTagsHasBeenSet() const;

                    /**
                     * 获取规则最新一次是否有改动
取值范围：0/1
0:否
1:是
                     * @return IsNew 规则最新一次是否有改动
取值范围：0/1
0:否
1:是
                     * 
                     */
                    int64_t GetIsNew() const;

                    /**
                     * 设置规则最新一次是否有改动
取值范围：0/1
0:否
1:是
                     * @param _isNew 规则最新一次是否有改动
取值范围：0/1
0:否
1:是
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
                     * 获取是否延迟下发规则 
取值范围：0/1
0:立即下发 1:延迟下发
                     * @return IsDelay 是否延迟下发规则 
取值范围：0/1
0:立即下发 1:延迟下发
                     * 
                     */
                    int64_t GetIsDelay() const;

                    /**
                     * 设置是否延迟下发规则 
取值范围：0/1
0:立即下发 1:延迟下发
                     * @param _isDelay 是否延迟下发规则 
取值范围：0/1
0:立即下发 1:延迟下发
                     * 
                     */
                    void SetIsDelay(const int64_t& _isDelay);

                    /**
                     * 判断参数 IsDelay 是否已赋值
                     * @return IsDelay 是否已赋值
                     * 
                     */
                    bool IsDelayHasBeenSet() const;

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
                     * 获取自动化任务信息
                     * @return BetaList 自动化任务信息
                     * 
                     */
                    std::vector<EnterpriseSecurityGroupRuleBetaInfo> GetBetaList() const;

                    /**
                     * 设置自动化任务信息
                     * @param _betaList 自动化任务信息
                     * 
                     */
                    void SetBetaList(const std::vector<EnterpriseSecurityGroupRuleBetaInfo>& _betaList);

                    /**
                     * 判断参数 BetaList 是否已赋值
                     * @return BetaList 是否已赋值
                     * 
                     */
                    bool BetaListHasBeenSet() const;

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

                private:

                    /**
                     * 排序
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 主键id
                     */
                    uint64_t m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * 规则uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

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
                     * 规则启用状态 
取值范围： 0/1
0:未开启
1:开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 标签
                     */
                    std::string m_aclTags;
                    bool m_aclTagsHasBeenSet;

                    /**
                     * 规则最新一次是否有改动
取值范围：0/1
0:否
1:是
                     */
                    int64_t m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 是否延迟下发规则 
取值范围：0/1
0:立即下发 1:延迟下发
                     */
                    int64_t m_isDelay;
                    bool m_isDelayHasBeenSet;

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
                     * 自动化任务信息
                     */
                    std::vector<EnterpriseSecurityGroupRuleBetaInfo> m_betaList;
                    bool m_betaListHasBeenSet;

                    /**
                     * 规则id  等同RuleUuid
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 域名解析的IP统计
                     */
                    SgDnsParseCount m_dnsParseCount;
                    bool m_dnsParseCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ENTERPRISESECURITYGROUPRULERULEINFO_H_
