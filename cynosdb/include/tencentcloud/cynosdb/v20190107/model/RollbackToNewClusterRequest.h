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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTONEWCLUSTERREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTONEWCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/ParamItem.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceInitInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackDatabase.h>
#include <tencentcloud/cynosdb/v20190107/model/RollbackTable.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * RollbackToNewCluster请求参数结构体
                */
                class RollbackToNewClusterRequest : public AbstractModel
                {
                public:
                    RollbackToNewClusterRequest();
                    ~RollbackToNewClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取回档时，传入源集群ID，用于查找源poolId
                     * @return OriginalClusterId 回档时，传入源集群ID，用于查找源poolId
                     * 
                     */
                    std::string GetOriginalClusterId() const;

                    /**
                     * 设置回档时，传入源集群ID，用于查找源poolId
                     * @param _originalClusterId 回档时，传入源集群ID，用于查找源poolId
                     * 
                     */
                    void SetOriginalClusterId(const std::string& _originalClusterId);

                    /**
                     * 判断参数 OriginalClusterId 是否已赋值
                     * @return OriginalClusterId 是否已赋值
                     * 
                     */
                    bool OriginalClusterIdHasBeenSet() const;

                    /**
                     * 获取所属VPC网络ID
                     * @return UniqVpcId 所属VPC网络ID
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置所属VPC网络ID
                     * @param _uniqVpcId 所属VPC网络ID
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取所属子网ID
                     * @return UniqSubnetId 所属子网ID
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置所属子网ID
                     * @param _uniqSubnetId 所属子网ID
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（'-','_','.'）
                     * @return ClusterName 集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（'-','_','.'）
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（'-','_','.'）
                     * @param _clusterName 集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（'-','_','.'）
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     * @return RollbackId 快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     * 
                     */
                    uint64_t GetRollbackId() const;

                    /**
                     * 设置快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     * @param _rollbackId 快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     * 
                     */
                    void SetRollbackId(const uint64_t& _rollbackId);

                    /**
                     * 判断参数 RollbackId 是否已赋值
                     * @return RollbackId 是否已赋值
                     * 
                     */
                    bool RollbackIdHasBeenSet() const;

                    /**
                     * 获取时间点回档，指定时间；快照回档，快照时间
                     * @return ExpectTime 时间点回档，指定时间；快照回档，快照时间
                     * 
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置时间点回档，指定时间；快照回档，快照时间
                     * @param _expectTime 时间点回档，指定时间；快照回档，快照时间
                     * 
                     */
                    void SetExpectTime(const std::string& _expectTime);

                    /**
                     * 判断参数 ExpectTime 是否已赋值
                     * @return ExpectTime 是否已赋值
                     * 
                     */
                    bool ExpectTimeHasBeenSet() const;

                    /**
                     * 获取是否自动选择代金券 1是 0否 默认为0
                     * @return AutoVoucher 是否自动选择代金券 1是 0否 默认为0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券 1是 0否 默认为0
                     * @param _autoVoucher 是否自动选择代金券 1是 0否 默认为0
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取集群创建需要绑定的tag数组信息
                     * @return ResourceTags 集群创建需要绑定的tag数组信息
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置集群创建需要绑定的tag数组信息
                     * @param _resourceTags 集群创建需要绑定的tag数组信息
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取Db类型
当DbType为MYSQL时可选(默认NORMAL)：
<li>NORMAL</li>
<li>SERVERLESS</li>
                     * @return DbMode Db类型
当DbType为MYSQL时可选(默认NORMAL)：
<li>NORMAL</li>
<li>SERVERLESS</li>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Db类型
当DbType为MYSQL时可选(默认NORMAL)：
<li>NORMAL</li>
<li>SERVERLESS</li>
                     * @param _dbMode Db类型
当DbType为MYSQL时可选(默认NORMAL)：
<li>NORMAL</li>
<li>SERVERLESS</li>
                     * 
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取当DbMode为SEVERLESS时必填
cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @return MinCpu 当DbMode为SEVERLESS时必填
cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置当DbMode为SEVERLESS时必填
cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @param _minCpu 当DbMode为SEVERLESS时必填
cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * 
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取当DbMode为SEVERLESS时必填：
cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @return MaxCpu 当DbMode为SEVERLESS时必填：
cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置当DbMode为SEVERLESS时必填：
cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @param _maxCpu 当DbMode为SEVERLESS时必填：
cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * 
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取当DbMode为SEVERLESS时，指定集群是否自动暂停，可选范围
<li>yes</li>
<li>no</li>
默认值:yes
                     * @return AutoPause 当DbMode为SEVERLESS时，指定集群是否自动暂停，可选范围
<li>yes</li>
<li>no</li>
默认值:yes
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置当DbMode为SEVERLESS时，指定集群是否自动暂停，可选范围
<li>yes</li>
<li>no</li>
默认值:yes
                     * @param _autoPause 当DbMode为SEVERLESS时，指定集群是否自动暂停，可选范围
<li>yes</li>
<li>no</li>
默认值:yes
                     * 
                     */
                    void SetAutoPause(const std::string& _autoPause);

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     * 
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]
默认值:600
                     * @return AutoPauseDelay 当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]
默认值:600
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]
默认值:600
                     * @param _autoPauseDelay 当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]
默认值:600
                     * 
                     */
                    void SetAutoPauseDelay(const int64_t& _autoPauseDelay);

                    /**
                     * 判断参数 AutoPauseDelay 是否已赋值
                     * @return AutoPauseDelay 是否已赋值
                     * 
                     */
                    bool AutoPauseDelayHasBeenSet() const;

                    /**
                     * 获取安全组id数组
                     * @return SecurityGroupIds 安全组id数组
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组id数组
                     * @param _securityGroupIds 安全组id数组
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取告警策略Id数组
                     * @return AlarmPolicyIds 告警策略Id数组
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyIds() const;

                    /**
                     * 设置告警策略Id数组
                     * @param _alarmPolicyIds 告警策略Id数组
                     * 
                     */
                    void SetAlarmPolicyIds(const std::vector<std::string>& _alarmPolicyIds);

                    /**
                     * 判断参数 AlarmPolicyIds 是否已赋值
                     * @return AlarmPolicyIds 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIdsHasBeenSet() const;

                    /**
                     * 获取参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感
                     * @return ClusterParams 参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感
                     * 
                     */
                    std::vector<ParamItem> GetClusterParams() const;

                    /**
                     * 设置参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感
                     * @param _clusterParams 参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感
                     * 
                     */
                    void SetClusterParams(const std::vector<ParamItem>& _clusterParams);

                    /**
                     * 判断参数 ClusterParams 是否已赋值
                     * @return ClusterParams 是否已赋值
                     * 
                     */
                    bool ClusterParamsHasBeenSet() const;

                    /**
                     * 获取参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID
                     * @return ParamTemplateId 参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID
                     * @param _paramTemplateId 参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID
                     * 
                     */
                    void SetParamTemplateId(const int64_t& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取实例初始化配置信息，主要用于购买集群时选不同规格实例
                     * @return InstanceInitInfos 实例初始化配置信息，主要用于购买集群时选不同规格实例
                     * 
                     */
                    std::vector<InstanceInitInfo> GetInstanceInitInfos() const;

                    /**
                     * 设置实例初始化配置信息，主要用于购买集群时选不同规格实例
                     * @param _instanceInitInfos 实例初始化配置信息，主要用于购买集群时选不同规格实例
                     * 
                     */
                    void SetInstanceInitInfos(const std::vector<InstanceInitInfo>& _instanceInitInfos);

                    /**
                     * 判断参数 InstanceInitInfos 是否已赋值
                     * @return InstanceInitInfos 是否已赋值
                     * 
                     */
                    bool InstanceInitInfosHasBeenSet() const;

                    /**
                     * 获取0-下单并支付 1-下单
                     * @return DealMode 0-下单并支付 1-下单
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置0-下单并支付 1-下单
                     * @param _dealMode 0-下单并支付 1-下单
                     * 
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取计算节点付费模式：0-按量计费，1-预付费
                     * @return PayMode 计算节点付费模式：0-按量计费，1-预付费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计算节点付费模式：0-按量计费，1-预付费
                     * @param _payMode 计算节点付费模式：0-按量计费，1-预付费
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取时间
                     * @return TimeSpan 时间
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置时间
                     * @param _timeSpan 时间
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return TimeUnit 单位
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置单位
                     * @param _timeUnit 单位
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取回档库信息
                     * @return RollbackDatabases 回档库信息
                     * 
                     */
                    std::vector<RollbackDatabase> GetRollbackDatabases() const;

                    /**
                     * 设置回档库信息
                     * @param _rollbackDatabases 回档库信息
                     * 
                     */
                    void SetRollbackDatabases(const std::vector<RollbackDatabase>& _rollbackDatabases);

                    /**
                     * 判断参数 RollbackDatabases 是否已赋值
                     * @return RollbackDatabases 是否已赋值
                     * 
                     */
                    bool RollbackDatabasesHasBeenSet() const;

                    /**
                     * 获取回档表信息
                     * @return RollbackTables 回档表信息
                     * 
                     */
                    std::vector<RollbackTable> GetRollbackTables() const;

                    /**
                     * 设置回档表信息
                     * @param _rollbackTables 回档表信息
                     * 
                     */
                    void SetRollbackTables(const std::vector<RollbackTable>& _rollbackTables);

                    /**
                     * 判断参数 RollbackTables 是否已赋值
                     * @return RollbackTables 是否已赋值
                     * 
                     */
                    bool RollbackTablesHasBeenSet() const;

                    /**
                     * 获取原ro实例信息
                     * @return OriginalROInstanceList 原ro实例信息
                     * 
                     */
                    std::vector<std::string> GetOriginalROInstanceList() const;

                    /**
                     * 设置原ro实例信息
                     * @param _originalROInstanceList 原ro实例信息
                     * 
                     */
                    void SetOriginalROInstanceList(const std::vector<std::string>& _originalROInstanceList);

                    /**
                     * 判断参数 OriginalROInstanceList 是否已赋值
                     * @return OriginalROInstanceList 是否已赋值
                     * 
                     */
                    bool OriginalROInstanceListHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     * @return AutoArchive 是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 设置是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     * @param _autoArchive 是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     * 
                     */
                    void SetAutoArchive(const std::string& _autoArchive);

                    /**
                     * 判断参数 AutoArchive 是否已赋值
                     * @return AutoArchive 是否已赋值
                     * 
                     */
                    bool AutoArchiveHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 回档时，传入源集群ID，用于查找源poolId
                     */
                    std::string m_originalClusterId;
                    bool m_originalClusterIdHasBeenSet;

                    /**
                     * 所属VPC网络ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 所属子网ID
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（'-','_','.'）
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     */
                    uint64_t m_rollbackId;
                    bool m_rollbackIdHasBeenSet;

                    /**
                     * 时间点回档，指定时间；快照回档，快照时间
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * 是否自动选择代金券 1是 0否 默认为0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 集群创建需要绑定的tag数组信息
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * Db类型
当DbType为MYSQL时可选(默认NORMAL)：
<li>NORMAL</li>
<li>SERVERLESS</li>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * 当DbMode为SEVERLESS时必填
cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * 当DbMode为SEVERLESS时必填：
cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * 当DbMode为SEVERLESS时，指定集群是否自动暂停，可选范围
<li>yes</li>
<li>no</li>
默认值:yes
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * 当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]
默认值:600
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * 安全组id数组
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 告警策略Id数组
                     */
                    std::vector<std::string> m_alarmPolicyIds;
                    bool m_alarmPolicyIdsHasBeenSet;

                    /**
                     * 参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感
                     */
                    std::vector<ParamItem> m_clusterParams;
                    bool m_clusterParamsHasBeenSet;

                    /**
                     * 参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * 实例初始化配置信息，主要用于购买集群时选不同规格实例
                     */
                    std::vector<InstanceInitInfo> m_instanceInitInfos;
                    bool m_instanceInitInfosHasBeenSet;

                    /**
                     * 0-下单并支付 1-下单
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * 计算节点付费模式：0-按量计费，1-预付费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 时间
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 回档库信息
                     */
                    std::vector<RollbackDatabase> m_rollbackDatabases;
                    bool m_rollbackDatabasesHasBeenSet;

                    /**
                     * 回档表信息
                     */
                    std::vector<RollbackTable> m_rollbackTables;
                    bool m_rollbackTablesHasBeenSet;

                    /**
                     * 原ro实例信息
                     */
                    std::vector<std::string> m_originalROInstanceList;
                    bool m_originalROInstanceListHasBeenSet;

                    /**
                     * 项目id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTONEWCLUSTERREQUEST_H_
