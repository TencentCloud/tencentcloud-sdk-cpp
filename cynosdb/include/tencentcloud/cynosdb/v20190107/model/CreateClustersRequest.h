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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/ParamItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateClusters请求参数结构体
                */
                class CreateClustersRequest : public AbstractModel
                {
                public:
                    CreateClustersRequest();
                    ~CreateClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param Zone 可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取所属VPC网络ID
                     * @return VpcId 所属VPC网络ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所属VPC网络ID
                     * @param VpcId 所属VPC网络ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取所属子网ID
                     * @return SubnetId 所属子网ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置所属子网ID
                     * @param SubnetId 所属子网ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取数据库类型，取值范围: 
<li> MYSQL </li>
                     * @return DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型，取值范围: 
<li> MYSQL </li>
                     * @param DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取数据库版本，取值范围: 
<li> MYSQL可选值：5.7 </li>
                     * @return DbVersion 数据库版本，取值范围: 
<li> MYSQL可选值：5.7 </li>
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置数据库版本，取值范围: 
<li> MYSQL可选值：5.7 </li>
                     * @param DbVersion 数据库版本，取值范围: 
<li> MYSQL可选值：5.7 </li>
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取所属项目ID
                     * @return ProjectId 所属项目ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置所属项目ID
                     * @param ProjectId 所属项目ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取普通实例Cpu核数
                     * @return Cpu 普通实例Cpu核数
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置普通实例Cpu核数
                     * @param Cpu 普通实例Cpu核数
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取普通实例内存,单位G
                     * @return Memory 普通实例内存,单位G
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置普通实例内存,单位G
                     * @param Memory 普通实例内存,单位G
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取存储大小，单位G
                     * @return Storage 存储大小，单位G
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置存储大小，单位G
                     * @param Storage 存储大小，单位G
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param ClusterName 集群名称
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/中的任意三种)
                     * @return AdminPassword 账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/中的任意三种)
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/中的任意三种)
                     * @param AdminPassword 账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/中的任意三种)
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取端口，默认5432
                     * @return Port 端口，默认5432
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口，默认5432
                     * @param Port 端口，默认5432
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取计费模式，按量计费：0，包年包月：1。默认按量计费。
                     * @return PayMode 计费模式，按量计费：0，包年包月：1。默认按量计费。
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费模式，按量计费：0，包年包月：1。默认按量计费。
                     * @param PayMode 计费模式，按量计费：0，包年包月：1。默认按量计费。
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取购买个数，目前只支持传1（不传默认为1）
                     * @return Count 购买个数，目前只支持传1（不传默认为1）
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置购买个数，目前只支持传1（不传默认为1）
                     * @param Count 购买个数，目前只支持传1（不传默认为1）
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取回档类型：
noneRollback：不回档；
snapRollback，快照回档；
timeRollback，时间点回档
                     * @return RollbackStrategy 回档类型：
noneRollback：不回档；
snapRollback，快照回档；
timeRollback，时间点回档
                     */
                    std::string GetRollbackStrategy() const;

                    /**
                     * 设置回档类型：
noneRollback：不回档；
snapRollback，快照回档；
timeRollback，时间点回档
                     * @param RollbackStrategy 回档类型：
noneRollback：不回档；
snapRollback，快照回档；
timeRollback，时间点回档
                     */
                    void SetRollbackStrategy(const std::string& _rollbackStrategy);

                    /**
                     * 判断参数 RollbackStrategy 是否已赋值
                     * @return RollbackStrategy 是否已赋值
                     */
                    bool RollbackStrategyHasBeenSet() const;

                    /**
                     * 获取快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     * @return RollbackId 快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     */
                    uint64_t GetRollbackId() const;

                    /**
                     * 设置快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     * @param RollbackId 快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     */
                    void SetRollbackId(const uint64_t& _rollbackId);

                    /**
                     * 判断参数 RollbackId 是否已赋值
                     * @return RollbackId 是否已赋值
                     */
                    bool RollbackIdHasBeenSet() const;

                    /**
                     * 获取回档时，传入源集群ID，用于查找源poolId
                     * @return OriginalClusterId 回档时，传入源集群ID，用于查找源poolId
                     */
                    std::string GetOriginalClusterId() const;

                    /**
                     * 设置回档时，传入源集群ID，用于查找源poolId
                     * @param OriginalClusterId 回档时，传入源集群ID，用于查找源poolId
                     */
                    void SetOriginalClusterId(const std::string& _originalClusterId);

                    /**
                     * 判断参数 OriginalClusterId 是否已赋值
                     * @return OriginalClusterId 是否已赋值
                     */
                    bool OriginalClusterIdHasBeenSet() const;

                    /**
                     * 获取时间点回档，指定时间；快照回档，快照时间
                     * @return ExpectTime 时间点回档，指定时间；快照回档，快照时间
                     */
                    std::string GetExpectTime() const;

                    /**
                     * 设置时间点回档，指定时间；快照回档，快照时间
                     * @param ExpectTime 时间点回档，指定时间；快照回档，快照时间
                     */
                    void SetExpectTime(const std::string& _expectTime);

                    /**
                     * 判断参数 ExpectTime 是否已赋值
                     * @return ExpectTime 是否已赋值
                     */
                    bool ExpectTimeHasBeenSet() const;

                    /**
                     * 获取时间点回档，指定时间允许范围
                     * @return ExpectTimeThresh 时间点回档，指定时间允许范围
                     */
                    uint64_t GetExpectTimeThresh() const;

                    /**
                     * 设置时间点回档，指定时间允许范围
                     * @param ExpectTimeThresh 时间点回档，指定时间允许范围
                     */
                    void SetExpectTimeThresh(const uint64_t& _expectTimeThresh);

                    /**
                     * 判断参数 ExpectTimeThresh 是否已赋值
                     * @return ExpectTimeThresh 是否已赋值
                     */
                    bool ExpectTimeThreshHasBeenSet() const;

                    /**
                     * 获取普通实例存储上限，单位GB
当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限
                     * @return StorageLimit 普通实例存储上限，单位GB
当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置普通实例存储上限，单位GB
当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限
                     * @param StorageLimit 普通实例存储上限，单位GB
当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取实例数量
                     * @return InstanceCount 实例数量
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置实例数量
                     * @param InstanceCount 实例数量
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取包年包月购买时长
                     * @return TimeSpan 包年包月购买时长
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置包年包月购买时长
                     * @param TimeSpan 包年包月购买时长
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取包年包月购买时长单位
                     * @return TimeUnit 包年包月购买时长单位
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置包年包月购买时长单位
                     * @param TimeUnit 包年包月购买时长单位
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取包年包月购买是否自动续费
                     * @return AutoRenewFlag 包年包月购买是否自动续费
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置包年包月购买是否自动续费
                     * @param AutoRenewFlag 包年包月购买是否自动续费
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取是否自动选择代金券 1是 0否 默认为0
                     * @return AutoVoucher 是否自动选择代金券 1是 0否 默认为0
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券 1是 0否 默认为0
                     * @param AutoVoucher 是否自动选择代金券 1是 0否 默认为0
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取实例数量（该参数已不再使用，只做存量兼容处理）
                     * @return HaCount 实例数量（该参数已不再使用，只做存量兼容处理）
                     */
                    int64_t GetHaCount() const;

                    /**
                     * 设置实例数量（该参数已不再使用，只做存量兼容处理）
                     * @param HaCount 实例数量（该参数已不再使用，只做存量兼容处理）
                     */
                    void SetHaCount(const int64_t& _haCount);

                    /**
                     * 判断参数 HaCount 是否已赋值
                     * @return HaCount 是否已赋值
                     */
                    bool HaCountHasBeenSet() const;

                    /**
                     * 获取订单来源
                     * @return OrderSource 订单来源
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置订单来源
                     * @param OrderSource 订单来源
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     */
                    bool OrderSourceHasBeenSet() const;

                    /**
                     * 获取集群创建需要绑定的tag数组信息
                     * @return ResourceTags 集群创建需要绑定的tag数组信息
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置集群创建需要绑定的tag数组信息
                     * @param ResourceTags 集群创建需要绑定的tag数组信息
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
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
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Db类型
当DbType为MYSQL时可选(默认NORMAL)：
<li>NORMAL</li>
<li>SERVERLESS</li>
                     * @param DbMode Db类型
当DbType为MYSQL时可选(默认NORMAL)：
<li>NORMAL</li>
<li>SERVERLESS</li>
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取当DbMode为SEVERLESS时必填
cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @return MinCpu 当DbMode为SEVERLESS时必填
cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置当DbMode为SEVERLESS时必填
cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @param MinCpu 当DbMode为SEVERLESS时必填
cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取当DbMode为SEVERLESS时必填：
cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @return MaxCpu 当DbMode为SEVERLESS时必填：
cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置当DbMode为SEVERLESS时必填：
cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     * @param MaxCpu 当DbMode为SEVERLESS时必填：
cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
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
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置当DbMode为SEVERLESS时，指定集群是否自动暂停，可选范围
<li>yes</li>
<li>no</li>
默认值:yes
                     * @param AutoPause 当DbMode为SEVERLESS时，指定集群是否自动暂停，可选范围
<li>yes</li>
<li>no</li>
默认值:yes
                     */
                    void SetAutoPause(const std::string& _autoPause);

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]
默认值:600
                     * @return AutoPauseDelay 当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]
默认值:600
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]
默认值:600
                     * @param AutoPauseDelay 当DbMode为SEVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]
默认值:600
                     */
                    void SetAutoPauseDelay(const int64_t& _autoPauseDelay);

                    /**
                     * 判断参数 AutoPauseDelay 是否已赋值
                     * @return AutoPauseDelay 是否已赋值
                     */
                    bool AutoPauseDelayHasBeenSet() const;

                    /**
                     * 获取集群存储计费模式，按量计费：0，包年包月：1。默认按量计费
当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费
回档与克隆均不支持包年包月存储
                     * @return StoragePayMode 集群存储计费模式，按量计费：0，包年包月：1。默认按量计费
当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费
回档与克隆均不支持包年包月存储
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置集群存储计费模式，按量计费：0，包年包月：1。默认按量计费
当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费
回档与克隆均不支持包年包月存储
                     * @param StoragePayMode 集群存储计费模式，按量计费：0，包年包月：1。默认按量计费
当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费
回档与克隆均不支持包年包月存储
                     */
                    void SetStoragePayMode(const int64_t& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     */
                    bool StoragePayModeHasBeenSet() const;

                    /**
                     * 获取安全组id数组
                     * @return SecurityGroupIds 安全组id数组
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组id数组
                     * @param SecurityGroupIds 安全组id数组
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取告警策略Id数组
                     * @return AlarmPolicyIds 告警策略Id数组
                     */
                    std::vector<std::string> GetAlarmPolicyIds() const;

                    /**
                     * 设置告警策略Id数组
                     * @param AlarmPolicyIds 告警策略Id数组
                     */
                    void SetAlarmPolicyIds(const std::vector<std::string>& _alarmPolicyIds);

                    /**
                     * 判断参数 AlarmPolicyIds 是否已赋值
                     * @return AlarmPolicyIds 是否已赋值
                     */
                    bool AlarmPolicyIdsHasBeenSet() const;

                    /**
                     * 获取参数数组
                     * @return ClusterParams 参数数组
                     */
                    std::vector<ParamItem> GetClusterParams() const;

                    /**
                     * 设置参数数组
                     * @param ClusterParams 参数数组
                     */
                    void SetClusterParams(const std::vector<ParamItem>& _clusterParams);

                    /**
                     * 判断参数 ClusterParams 是否已赋值
                     * @return ClusterParams 是否已赋值
                     */
                    bool ClusterParamsHasBeenSet() const;

                    /**
                     * 获取交易模式，0-下单且支付，1-下单
                     * @return DealMode 交易模式，0-下单且支付，1-下单
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置交易模式，0-下单且支付，1-下单
                     * @param DealMode 交易模式，0-下单且支付，1-下单
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取参数模版ID
                     * @return ParamTemplateId 参数模版ID
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置参数模版ID
                     * @param ParamTemplateId 参数模版ID
                     */
                    void SetParamTemplateId(const int64_t& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 所属VPC网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 所属子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 数据库版本，取值范围: 
<li> MYSQL可选值：5.7 </li>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * 所属项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 普通实例Cpu核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 普通实例内存,单位G
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 存储大小，单位G
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&*_-+=`|\(){}[]:;'<>,.?/中的任意三种)
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * 端口，默认5432
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 计费模式，按量计费：0，包年包月：1。默认按量计费。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 购买个数，目前只支持传1（不传默认为1）
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 回档类型：
noneRollback：不回档；
snapRollback，快照回档；
timeRollback，时间点回档
                     */
                    std::string m_rollbackStrategy;
                    bool m_rollbackStrategyHasBeenSet;

                    /**
                     * 快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效
                     */
                    uint64_t m_rollbackId;
                    bool m_rollbackIdHasBeenSet;

                    /**
                     * 回档时，传入源集群ID，用于查找源poolId
                     */
                    std::string m_originalClusterId;
                    bool m_originalClusterIdHasBeenSet;

                    /**
                     * 时间点回档，指定时间；快照回档，快照时间
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * 时间点回档，指定时间允许范围
                     */
                    uint64_t m_expectTimeThresh;
                    bool m_expectTimeThreshHasBeenSet;

                    /**
                     * 普通实例存储上限，单位GB
当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 实例数量
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 包年包月购买时长
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 包年包月购买时长单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 包年包月购买是否自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 是否自动选择代金券 1是 0否 默认为0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 实例数量（该参数已不再使用，只做存量兼容处理）
                     */
                    int64_t m_haCount;
                    bool m_haCountHasBeenSet;

                    /**
                     * 订单来源
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

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
                     * 集群存储计费模式，按量计费：0，包年包月：1。默认按量计费
当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费
回档与克隆均不支持包年包月存储
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

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
                     * 参数数组
                     */
                    std::vector<ParamItem> m_clusterParams;
                    bool m_clusterParamsHasBeenSet;

                    /**
                     * 交易模式，0-下单且支付，1-下单
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * 参数模版ID
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_
