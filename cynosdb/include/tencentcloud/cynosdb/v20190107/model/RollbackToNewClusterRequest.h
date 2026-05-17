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
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>回档时，传入源集群ID，用于查找源poolId</p>
                     * @return OriginalClusterId <p>回档时，传入源集群ID，用于查找源poolId</p>
                     * 
                     */
                    std::string GetOriginalClusterId() const;

                    /**
                     * 设置<p>回档时，传入源集群ID，用于查找源poolId</p>
                     * @param _originalClusterId <p>回档时，传入源集群ID，用于查找源poolId</p>
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
                     * 获取<p>所属VPC网络ID</p>
                     * @return UniqVpcId <p>所属VPC网络ID</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>所属VPC网络ID</p>
                     * @param _uniqVpcId <p>所属VPC网络ID</p>
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
                     * 获取<p>所属子网ID</p>
                     * @return UniqSubnetId <p>所属子网ID</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>所属子网ID</p>
                     * @param _uniqSubnetId <p>所属子网ID</p>
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
                     * 获取<p>集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（&#39;-&#39;,&#39;_&#39;,&#39;.&#39;）</p>
                     * @return ClusterName <p>集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（&#39;-&#39;,&#39;_&#39;,&#39;.&#39;）</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（&#39;-&#39;,&#39;_&#39;,&#39;.&#39;）</p>
                     * @param _clusterName <p>集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（&#39;-&#39;,&#39;_&#39;,&#39;.&#39;）</p>
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
                     * 获取<p>快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效</p>
                     * @return RollbackId <p>快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效</p>
                     * 
                     */
                    uint64_t GetRollbackId() const;

                    /**
                     * 设置<p>快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效</p>
                     * @param _rollbackId <p>快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效</p>
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
                     * 获取<p>时间点回档，指定时间；快照回档，快照时间</p>
                     * @return ExpectTime <p>时间点回档，指定时间；快照回档，快照时间</p>
                     * 
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置<p>时间点回档，指定时间；快照回档，快照时间</p>
                     * @param _expectTime <p>时间点回档，指定时间；快照回档，快照时间</p>
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
                     * 获取<p>是否自动选择代金券 1是 0否 默认为0</p>
                     * @return AutoVoucher <p>是否自动选择代金券 1是 0否 默认为0</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动选择代金券 1是 0否 默认为0</p>
                     * @param _autoVoucher <p>是否自动选择代金券 1是 0否 默认为0</p>
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
                     * 获取<p>集群创建需要绑定的tag数组信息</p>
                     * @return ResourceTags <p>集群创建需要绑定的tag数组信息</p>
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>集群创建需要绑定的tag数组信息</p>
                     * @param _resourceTags <p>集群创建需要绑定的tag数组信息</p>
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
                     * 获取<p>Db类型<br>当DbType为MYSQL时可选(默认NORMAL)：</p><li>NORMAL</li><li>SERVERLESS</li>
                     * @return DbMode <p>Db类型<br>当DbType为MYSQL时可选(默认NORMAL)：</p><li>NORMAL</li><li>SERVERLESS</li>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>Db类型<br>当DbType为MYSQL时可选(默认NORMAL)：</p><li>NORMAL</li><li>SERVERLESS</li>
                     * @param _dbMode <p>Db类型<br>当DbType为MYSQL时可选(默认NORMAL)：</p><li>NORMAL</li><li>SERVERLESS</li>
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
                     * 获取<p>当DbMode为SEVERLESS时必填<br>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @return MinCpu <p>当DbMode为SEVERLESS时必填<br>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>当DbMode为SEVERLESS时必填<br>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @param _minCpu <p>当DbMode为SEVERLESS时必填<br>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
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
                     * 获取<p>当DbMode为SEVERLESS时必填：<br>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @return MaxCpu <p>当DbMode为SEVERLESS时必填：<br>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>当DbMode为SEVERLESS时必填：<br>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @param _maxCpu <p>当DbMode为SEVERLESS时必填：<br>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
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
                     * 获取<p>当DbMode为SEVERLESS时，指定集群是否自动暂停，可选范围</p><li>yes</li><li>no</li>默认值:yes
                     * @return AutoPause <p>当DbMode为SEVERLESS时，指定集群是否自动暂停，可选范围</p><li>yes</li><li>no</li>默认值:yes
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置<p>当DbMode为SEVERLESS时，指定集群是否自动暂停，可选范围</p><li>yes</li><li>no</li>默认值:yes
                     * @param _autoPause <p>当DbMode为SEVERLESS时，指定集群是否自动暂停，可选范围</p><li>yes</li><li>no</li>默认值:yes
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
                     * 获取<p>当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]<br>默认值:600</p>
                     * @return AutoPauseDelay <p>当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]<br>默认值:600</p>
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置<p>当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]<br>默认值:600</p>
                     * @param _autoPauseDelay <p>当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]<br>默认值:600</p>
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
                     * 获取<p>安全组id数组</p>
                     * @return SecurityGroupIds <p>安全组id数组</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>安全组id数组</p>
                     * @param _securityGroupIds <p>安全组id数组</p>
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
                     * 获取<p>告警策略Id数组</p>
                     * @return AlarmPolicyIds <p>告警策略Id数组</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyIds() const;

                    /**
                     * 设置<p>告警策略Id数组</p>
                     * @param _alarmPolicyIds <p>告警策略Id数组</p>
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
                     * 获取<p>参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感</p>
                     * @return ClusterParams <p>参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感</p>
                     * 
                     */
                    std::vector<ParamItem> GetClusterParams() const;

                    /**
                     * 设置<p>参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感</p>
                     * @param _clusterParams <p>参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感</p>
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
                     * 获取<p>参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID</p>
                     * @return ParamTemplateId <p>参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID</p>
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置<p>参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID</p>
                     * @param _paramTemplateId <p>参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID</p>
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
                     * 获取<p>实例初始化配置信息，主要用于购买集群时选不同规格实例</p>
                     * @return InstanceInitInfos <p>实例初始化配置信息，主要用于购买集群时选不同规格实例</p>
                     * 
                     */
                    std::vector<InstanceInitInfo> GetInstanceInitInfos() const;

                    /**
                     * 设置<p>实例初始化配置信息，主要用于购买集群时选不同规格实例</p>
                     * @param _instanceInitInfos <p>实例初始化配置信息，主要用于购买集群时选不同规格实例</p>
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
                     * 获取<p>0-下单并支付 1-下单</p>
                     * @return DealMode <p>0-下单并支付 1-下单</p>
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置<p>0-下单并支付 1-下单</p>
                     * @param _dealMode <p>0-下单并支付 1-下单</p>
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
                     * 获取<p>计算节点付费模式：0-按量计费，1-预付费</p>
                     * @return PayMode <p>计算节点付费模式：0-按量计费，1-预付费</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>计算节点付费模式：0-按量计费，1-预付费</p>
                     * @param _payMode <p>计算节点付费模式：0-按量计费，1-预付费</p>
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
                     * 获取<p>时间</p>
                     * @return TimeSpan <p>时间</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>时间</p>
                     * @param _timeSpan <p>时间</p>
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
                     * 获取<p>单位</p>
                     * @return TimeUnit <p>单位</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>单位</p>
                     * @param _timeUnit <p>单位</p>
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
                     * 获取<p>回档库信息</p>
                     * @return RollbackDatabases <p>回档库信息</p>
                     * 
                     */
                    std::vector<RollbackDatabase> GetRollbackDatabases() const;

                    /**
                     * 设置<p>回档库信息</p>
                     * @param _rollbackDatabases <p>回档库信息</p>
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
                     * 获取<p>回档表信息</p>
                     * @return RollbackTables <p>回档表信息</p>
                     * 
                     */
                    std::vector<RollbackTable> GetRollbackTables() const;

                    /**
                     * 设置<p>回档表信息</p>
                     * @param _rollbackTables <p>回档表信息</p>
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
                     * 获取<p>原ro实例信息</p>
                     * @return OriginalROInstanceList <p>原ro实例信息</p>
                     * 
                     */
                    std::vector<std::string> GetOriginalROInstanceList() const;

                    /**
                     * 设置<p>原ro实例信息</p>
                     * @param _originalROInstanceList <p>原ro实例信息</p>
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
                     * 获取<p>项目id</p>
                     * @return ProjectId <p>项目id</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectId <p>项目id</p>
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
                     * 获取<p>是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes</p>
                     * @return AutoArchive <p>是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes</p>
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 设置<p>是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes</p>
                     * @param _autoArchive <p>是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes</p>
                     * 
                     */
                    void SetAutoArchive(const std::string& _autoArchive);

                    /**
                     * 判断参数 AutoArchive 是否已赋值
                     * @return AutoArchive 是否已赋值
                     * 
                     */
                    bool AutoArchiveHasBeenSet() const;

                    /**
                     * 获取<p>是否从保存备份中恢复</p>
                     * @return FromSaveBackup <p>是否从保存备份中恢复</p>
                     * 
                     */
                    bool GetFromSaveBackup() const;

                    /**
                     * 设置<p>是否从保存备份中恢复</p>
                     * @param _fromSaveBackup <p>是否从保存备份中恢复</p>
                     * 
                     */
                    void SetFromSaveBackup(const bool& _fromSaveBackup);

                    /**
                     * 判断参数 FromSaveBackup 是否已赋值
                     * @return FromSaveBackup 是否已赋值
                     * 
                     */
                    bool FromSaveBackupHasBeenSet() const;

                private:

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>回档时，传入源集群ID，用于查找源poolId</p>
                     */
                    std::string m_originalClusterId;
                    bool m_originalClusterIdHasBeenSet;

                    /**
                     * <p>所属VPC网络ID</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>所属子网ID</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（&#39;-&#39;,&#39;_&#39;,&#39;.&#39;）</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效</p>
                     */
                    uint64_t m_rollbackId;
                    bool m_rollbackIdHasBeenSet;

                    /**
                     * <p>时间点回档，指定时间；快照回档，快照时间</p>
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * <p>是否自动选择代金券 1是 0否 默认为0</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>集群创建需要绑定的tag数组信息</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Db类型<br>当DbType为MYSQL时可选(默认NORMAL)：</p><li>NORMAL</li><li>SERVERLESS</li>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>当DbMode为SEVERLESS时必填<br>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>当DbMode为SEVERLESS时必填：<br>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>当DbMode为SEVERLESS时，指定集群是否自动暂停，可选范围</p><li>yes</li><li>no</li>默认值:yes
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * <p>当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]<br>默认值:600</p>
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * <p>安全组id数组</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>告警策略Id数组</p>
                     */
                    std::vector<std::string> m_alarmPolicyIds;
                    bool m_alarmPolicyIdsHasBeenSet;

                    /**
                     * <p>参数数组，暂时支持character_set_server （utf8｜latin1｜gbk｜utf8mb4） ，lower_case_table_names，1-大小写不敏感，0-大小写敏感</p>
                     */
                    std::vector<ParamItem> m_clusterParams;
                    bool m_clusterParamsHasBeenSet;

                    /**
                     * <p>参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID</p>
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>实例初始化配置信息，主要用于购买集群时选不同规格实例</p>
                     */
                    std::vector<InstanceInitInfo> m_instanceInitInfos;
                    bool m_instanceInitInfosHasBeenSet;

                    /**
                     * <p>0-下单并支付 1-下单</p>
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * <p>计算节点付费模式：0-按量计费，1-预付费</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>时间</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>单位</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>回档库信息</p>
                     */
                    std::vector<RollbackDatabase> m_rollbackDatabases;
                    bool m_rollbackDatabasesHasBeenSet;

                    /**
                     * <p>回档表信息</p>
                     */
                    std::vector<RollbackTable> m_rollbackTables;
                    bool m_rollbackTablesHasBeenSet;

                    /**
                     * <p>原ro实例信息</p>
                     */
                    std::vector<std::string> m_originalROInstanceList;
                    bool m_originalROInstanceListHasBeenSet;

                    /**
                     * <p>项目id</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>是否开启归档，可选范围<li>yes</li><li>no</li>默认值:yes</p>
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                    /**
                     * <p>是否从保存备份中恢复</p>
                     */
                    bool m_fromSaveBackup;
                    bool m_fromSaveBackupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKTONEWCLUSTERREQUEST_H_
