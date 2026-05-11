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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/Tag.h>
#include <tencentcloud/cynosdb/v20190107/model/ParamItem.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceInitInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyConfig.h>


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
                     * 获取<p>所属VPC网络ID</p>
                     * @return VpcId <p>所属VPC网络ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>所属VPC网络ID</p>
                     * @param _vpcId <p>所属VPC网络ID</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>所属子网ID</p>
                     * @return SubnetId <p>所属子网ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>所属子网ID</p>
                     * @param _subnetId <p>所属子网ID</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>数据库类型</p><p>枚举值：</p><ul><li>MYSQL： MYSQL</li></ul>
                     * @return DbType <p>数据库类型</p><p>枚举值：</p><ul><li>MYSQL： MYSQL</li></ul>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>数据库类型</p><p>枚举值：</p><ul><li>MYSQL： MYSQL</li></ul>
                     * @param _dbType <p>数据库类型</p><p>枚举值：</p><ul><li>MYSQL： MYSQL</li></ul>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据库版本</p><p>枚举值：</p><ul><li>5.7： MySQL5.7版本</li><li>8.0： MySQL8.0版本</li></ul>
                     * @return DbVersion <p>数据库版本</p><p>枚举值：</p><ul><li>5.7： MySQL5.7版本</li><li>8.0： MySQL8.0版本</li></ul>
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置<p>数据库版本</p><p>枚举值：</p><ul><li>5.7： MySQL5.7版本</li><li>8.0： MySQL8.0版本</li></ul>
                     * @param _dbVersion <p>数据库版本</p><p>枚举值：</p><ul><li>5.7： MySQL5.7版本</li><li>8.0： MySQL8.0版本</li></ul>
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取<p>所属项目ID</p>
                     * @return ProjectId <p>所属项目ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>所属项目ID</p>
                     * @param _projectId <p>所属项目ID</p>
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
                     * 获取<p>当DbMode为NORMAL或不填时必选<br>普通实例Cpu核数</p>
                     * @return Cpu <p>当DbMode为NORMAL或不填时必选<br>普通实例Cpu核数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>当DbMode为NORMAL或不填时必选<br>普通实例Cpu核数</p>
                     * @param _cpu <p>当DbMode为NORMAL或不填时必选<br>普通实例Cpu核数</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>当DbMode为NORMAL或不填时必选<br>普通实例内存,单位GB</p>
                     * @return Memory <p>当DbMode为NORMAL或不填时必选<br>普通实例内存,单位GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>当DbMode为NORMAL或不填时必选<br>普通实例内存,单位GB</p>
                     * @param _memory <p>当DbMode为NORMAL或不填时必选<br>普通实例内存,单位GB</p>
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>实例数量，数量范围为(0,16]，默认值为2（即一个rw实例+一个ro实例），传递的n表示1个rw实例+n-1个ro实例（规格相同），如需要更精确的集群组成搭配，请使用InstanceInitInfos</p>
                     * @return InstanceCount <p>实例数量，数量范围为(0,16]，默认值为2（即一个rw实例+一个ro实例），传递的n表示1个rw实例+n-1个ro实例（规格相同），如需要更精确的集群组成搭配，请使用InstanceInitInfos</p>
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>实例数量，数量范围为(0,16]，默认值为2（即一个rw实例+一个ro实例），传递的n表示1个rw实例+n-1个ro实例（规格相同），如需要更精确的集群组成搭配，请使用InstanceInitInfos</p>
                     * @param _instanceCount <p>实例数量，数量范围为(0,16]，默认值为2（即一个rw实例+一个ro实例），传递的n表示1个rw实例+n-1个ro实例（规格相同），如需要更精确的集群组成搭配，请使用InstanceInitInfos</p>
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>该参数无实际意义，已废弃。<br>存储大小，单位GB。</p>
                     * @return Storage <p>该参数无实际意义，已废弃。<br>存储大小，单位GB。</p>
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置<p>该参数无实际意义，已废弃。<br>存储大小，单位GB。</p>
                     * @param _storage <p>该参数无实际意义，已废弃。<br>存储大小，单位GB。</p>
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

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
                     * 获取<p>账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&amp;*_-+=`|(){}[]:;&#39;&lt;&gt;,.?/中的任意三种)</p>
                     * @return AdminPassword <p>账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&amp;*_-+=`|(){}[]:;&#39;&lt;&gt;,.?/中的任意三种)</p>
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置<p>账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&amp;*_-+=`|(){}[]:;&#39;&lt;&gt;,.?/中的任意三种)</p>
                     * @param _adminPassword <p>账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&amp;*_-+=`|(){}[]:;&#39;&lt;&gt;,.?/中的任意三种)</p>
                     * 
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     * 
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取<p>端口，默认3306，取值范围[0, 65535)</p>
                     * @return Port <p>端口，默认3306，取值范围[0, 65535)</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>端口，默认3306，取值范围[0, 65535)</p>
                     * @param _port <p>端口，默认3306，取值范围[0, 65535)</p>
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>计费模式</p><p>枚举值：</p><ul><li>0： 表示按量计费</li><li>1： 表示包年包月</li></ul><p>默认值：0</p>
                     * @return PayMode <p>计费模式</p><p>枚举值：</p><ul><li>0： 表示按量计费</li><li>1： 表示包年包月</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>计费模式</p><p>枚举值：</p><ul><li>0： 表示按量计费</li><li>1： 表示包年包月</li></ul><p>默认值：0</p>
                     * @param _payMode <p>计费模式</p><p>枚举值：</p><ul><li>0： 表示按量计费</li><li>1： 表示包年包月</li></ul><p>默认值：0</p>
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
                     * 获取<p>购买集群数，可选值范围[1,50]，默认为1</p>
                     * @return Count <p>购买集群数，可选值范围[1,50]，默认为1</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>购买集群数，可选值范围[1,50]，默认为1</p>
                     * @param _count <p>购买集群数，可选值范围[1,50]，默认为1</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>回档类型</p><p>枚举值：</p><ul><li>noneRollback： 不回档</li><li>snapRollback： 快照回档</li><li>timeRollback： 时间点回档</li></ul>
                     * @return RollbackStrategy <p>回档类型</p><p>枚举值：</p><ul><li>noneRollback： 不回档</li><li>snapRollback： 快照回档</li><li>timeRollback： 时间点回档</li></ul>
                     * 
                     */
                    std::string GetRollbackStrategy() const;

                    /**
                     * 设置<p>回档类型</p><p>枚举值：</p><ul><li>noneRollback： 不回档</li><li>snapRollback： 快照回档</li><li>timeRollback： 时间点回档</li></ul>
                     * @param _rollbackStrategy <p>回档类型</p><p>枚举值：</p><ul><li>noneRollback： 不回档</li><li>snapRollback： 快照回档</li><li>timeRollback： 时间点回档</li></ul>
                     * 
                     */
                    void SetRollbackStrategy(const std::string& _rollbackStrategy);

                    /**
                     * 判断参数 RollbackStrategy 是否已赋值
                     * @return RollbackStrategy 是否已赋值
                     * 
                     */
                    bool RollbackStrategyHasBeenSet() const;

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
                     * 获取<p>该参数无实际意义，已废弃。<br>时间点回档，指定时间允许范围</p>
                     * @return ExpectTimeThresh <p>该参数无实际意义，已废弃。<br>时间点回档，指定时间允许范围</p>
                     * 
                     */
                    uint64_t GetExpectTimeThresh() const;

                    /**
                     * 设置<p>该参数无实际意义，已废弃。<br>时间点回档，指定时间允许范围</p>
                     * @param _expectTimeThresh <p>该参数无实际意义，已废弃。<br>时间点回档，指定时间允许范围</p>
                     * 
                     */
                    void SetExpectTimeThresh(const uint64_t& _expectTimeThresh);

                    /**
                     * 判断参数 ExpectTimeThresh 是否已赋值
                     * @return ExpectTimeThresh 是否已赋值
                     * 
                     */
                    bool ExpectTimeThreshHasBeenSet() const;

                    /**
                     * 获取<p>普通实例存储上限，单位GB<br>当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限</p>
                     * @return StorageLimit <p>普通实例存储上限，单位GB<br>当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限</p>
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置<p>普通实例存储上限，单位GB<br>当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限</p>
                     * @param _storageLimit <p>普通实例存储上限，单位GB<br>当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限</p>
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取<p>包年包月购买时长</p>
                     * @return TimeSpan <p>包年包月购买时长</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>包年包月购买时长</p>
                     * @param _timeSpan <p>包年包月购买时长</p>
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
                     * 获取<p>包年包月购买时长单位，[&#39;s&#39;,&#39;d&#39;,&#39;m&#39;,&#39;y&#39;]</p>
                     * @return TimeUnit <p>包年包月购买时长单位，[&#39;s&#39;,&#39;d&#39;,&#39;m&#39;,&#39;y&#39;]</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>包年包月购买时长单位，[&#39;s&#39;,&#39;d&#39;,&#39;m&#39;,&#39;y&#39;]</p>
                     * @param _timeUnit <p>包年包月购买时长单位，[&#39;s&#39;,&#39;d&#39;,&#39;m&#39;,&#39;y&#39;]</p>
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
                     * 获取<p>包年包月购买是否自动续费</p><p>枚举值：</p><ul><li>0： 默认续费方式</li><li>1： 自动续费</li><li>2： 不自动续费</li></ul><p>默认值：0</p>
                     * @return AutoRenewFlag <p>包年包月购买是否自动续费</p><p>枚举值：</p><ul><li>0： 默认续费方式</li><li>1： 自动续费</li><li>2： 不自动续费</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>包年包月购买是否自动续费</p><p>枚举值：</p><ul><li>0： 默认续费方式</li><li>1： 自动续费</li><li>2： 不自动续费</li></ul><p>默认值：0</p>
                     * @param _autoRenewFlag <p>包年包月购买是否自动续费</p><p>枚举值：</p><ul><li>0： 默认续费方式</li><li>1： 自动续费</li><li>2： 不自动续费</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否自动选择代金券 1是 0否 默认为0</p><p>枚举值：</p><ul><li>1： 是</li><li>0： 否</li></ul><p>默认值：0</p>
                     * @return AutoVoucher <p>是否自动选择代金券 1是 0否 默认为0</p><p>枚举值：</p><ul><li>1： 是</li><li>0： 否</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动选择代金券 1是 0否 默认为0</p><p>枚举值：</p><ul><li>1： 是</li><li>0： 否</li></ul><p>默认值：0</p>
                     * @param _autoVoucher <p>是否自动选择代金券 1是 0否 默认为0</p><p>枚举值：</p><ul><li>1： 是</li><li>0： 否</li></ul><p>默认值：0</p>
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
                     * 获取<p>实例数量（该参数已不再使用，只做存量兼容处理）</p>
                     * @return HaCount <p>实例数量（该参数已不再使用，只做存量兼容处理）</p>
                     * 
                     */
                    int64_t GetHaCount() const;

                    /**
                     * 设置<p>实例数量（该参数已不再使用，只做存量兼容处理）</p>
                     * @param _haCount <p>实例数量（该参数已不再使用，只做存量兼容处理）</p>
                     * 
                     */
                    void SetHaCount(const int64_t& _haCount);

                    /**
                     * 判断参数 HaCount 是否已赋值
                     * @return HaCount 是否已赋值
                     * 
                     */
                    bool HaCountHasBeenSet() const;

                    /**
                     * 获取<p>订单来源</p>
                     * @return OrderSource <p>订单来源</p>
                     * 
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置<p>订单来源</p>
                     * @param _orderSource <p>订单来源</p>
                     * 
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     * 
                     */
                    bool OrderSourceHasBeenSet() const;

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
                     * 获取<p>Db类型</p><p>枚举值：</p><ul><li>NORMAL： 普通实例</li><li>SERVERLESS： serverless实例</li></ul><p>默认值：NORMAL</p><p>当DbType为MYSQL时可选(默认NORMAL)</p>
                     * @return DbMode <p>Db类型</p><p>枚举值：</p><ul><li>NORMAL： 普通实例</li><li>SERVERLESS： serverless实例</li></ul><p>默认值：NORMAL</p><p>当DbType为MYSQL时可选(默认NORMAL)</p>
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置<p>Db类型</p><p>枚举值：</p><ul><li>NORMAL： 普通实例</li><li>SERVERLESS： serverless实例</li></ul><p>默认值：NORMAL</p><p>当DbType为MYSQL时可选(默认NORMAL)</p>
                     * @param _dbMode <p>Db类型</p><p>枚举值：</p><ul><li>NORMAL： 普通实例</li><li>SERVERLESS： serverless实例</li></ul><p>默认值：NORMAL</p><p>当DbType为MYSQL时可选(默认NORMAL)</p>
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
                     * 获取<p>当DbMode为SERVERLESS时必填<br>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @return MinCpu <p>当DbMode为SERVERLESS时必填<br>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>当DbMode为SERVERLESS时必填<br>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @param _minCpu <p>当DbMode为SERVERLESS时必填<br>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
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
                     * 获取<p>当DbMode为SERVERLESS时必填：<br>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @return MaxCpu <p>当DbMode为SERVERLESS时必填：<br>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>当DbMode为SERVERLESS时必填：<br>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     * @param _maxCpu <p>当DbMode为SERVERLESS时必填：<br>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
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
                     * 获取<p>否自动暂停</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul><p>默认值：yes</p><p>DbMode为SERVERLESS生效</p>
                     * @return AutoPause <p>否自动暂停</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul><p>默认值：yes</p><p>DbMode为SERVERLESS生效</p>
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置<p>否自动暂停</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul><p>默认值：yes</p><p>DbMode为SERVERLESS生效</p>
                     * @param _autoPause <p>否自动暂停</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul><p>默认值：yes</p><p>DbMode为SERVERLESS生效</p>
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
                     * 获取<p>当DbMode为SERVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]<br>默认值:600</p>
                     * @return AutoPauseDelay <p>当DbMode为SERVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]<br>默认值:600</p>
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置<p>当DbMode为SERVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]<br>默认值:600</p>
                     * @param _autoPauseDelay <p>当DbMode为SERVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]<br>默认值:600</p>
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
                     * 获取<p>集群存储计费模式，按量计费：0，包年包月：1。默认按量计费<br>当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费<br>回档与克隆均不支持包年包月存储</p>
                     * @return StoragePayMode <p>集群存储计费模式，按量计费：0，包年包月：1。默认按量计费<br>当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费<br>回档与克隆均不支持包年包月存储</p>
                     * 
                     */
                    int64_t GetStoragePayMode() const;

                    /**
                     * 设置<p>集群存储计费模式，按量计费：0，包年包月：1。默认按量计费<br>当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费<br>回档与克隆均不支持包年包月存储</p>
                     * @param _storagePayMode <p>集群存储计费模式，按量计费：0，包年包月：1。默认按量计费<br>当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费<br>回档与克隆均不支持包年包月存储</p>
                     * 
                     */
                    void SetStoragePayMode(const int64_t& _storagePayMode);

                    /**
                     * 判断参数 StoragePayMode 是否已赋值
                     * @return StoragePayMode 是否已赋值
                     * 
                     */
                    bool StoragePayModeHasBeenSet() const;

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
                     * 获取<p>交易模式</p><p>枚举值：</p><ul><li>0： 下单且支付</li><li>1： 下单</li></ul><p>默认值：0</p>
                     * @return DealMode <p>交易模式</p><p>枚举值：</p><ul><li>0： 下单且支付</li><li>1： 下单</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置<p>交易模式</p><p>枚举值：</p><ul><li>0： 下单且支付</li><li>1： 下单</li></ul><p>默认值：0</p>
                     * @param _dealMode <p>交易模式</p><p>枚举值：</p><ul><li>0： 下单且支付</li><li>1： 下单</li></ul><p>默认值：0</p>
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
                     * 获取<p>多可用区地址</p>
                     * @return SlaveZone <p>多可用区地址</p>
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置<p>多可用区地址</p>
                     * @param _slaveZone <p>多可用区地址</p>
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

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
                     * 获取<p>全球数据库唯一标识</p>
                     * @return GdnId <p>全球数据库唯一标识</p>
                     * 
                     */
                    std::string GetGdnId() const;

                    /**
                     * 设置<p>全球数据库唯一标识</p>
                     * @param _gdnId <p>全球数据库唯一标识</p>
                     * 
                     */
                    void SetGdnId(const std::string& _gdnId);

                    /**
                     * 判断参数 GdnId 是否已赋值
                     * @return GdnId 是否已赋值
                     * 
                     */
                    bool GdnIdHasBeenSet() const;

                    /**
                     * 获取<p>数据库代理配置</p>
                     * @return ProxyConfig <p>数据库代理配置</p>
                     * 
                     */
                    ProxyConfig GetProxyConfig() const;

                    /**
                     * 设置<p>数据库代理配置</p>
                     * @param _proxyConfig <p>数据库代理配置</p>
                     * 
                     */
                    void SetProxyConfig(const ProxyConfig& _proxyConfig);

                    /**
                     * 判断参数 ProxyConfig 是否已赋值
                     * @return ProxyConfig 是否已赋值
                     * 
                     */
                    bool ProxyConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否自动归档</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul><p>默认值：no</p><p>仅当前集群主实例为SERVERLESS时，该参数生效</p>
                     * @return AutoArchive <p>是否自动归档</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul><p>默认值：no</p><p>仅当前集群主实例为SERVERLESS时，该参数生效</p>
                     * 
                     */
                    std::string GetAutoArchive() const;

                    /**
                     * 设置<p>是否自动归档</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul><p>默认值：no</p><p>仅当前集群主实例为SERVERLESS时，该参数生效</p>
                     * @param _autoArchive <p>是否自动归档</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul><p>默认值：no</p><p>仅当前集群主实例为SERVERLESS时，该参数生效</p>
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
                     * 获取<p>暂停后的归档处理时间</p><p>单位：时</p><p>默认值：12</p><p>仅当前集群主实例为SERVERLESS时，该参数生效</p>
                     * @return AutoArchiveDelayHours <p>暂停后的归档处理时间</p><p>单位：时</p><p>默认值：12</p><p>仅当前集群主实例为SERVERLESS时，该参数生效</p>
                     * 
                     */
                    int64_t GetAutoArchiveDelayHours() const;

                    /**
                     * 设置<p>暂停后的归档处理时间</p><p>单位：时</p><p>默认值：12</p><p>仅当前集群主实例为SERVERLESS时，该参数生效</p>
                     * @param _autoArchiveDelayHours <p>暂停后的归档处理时间</p><p>单位：时</p><p>默认值：12</p><p>仅当前集群主实例为SERVERLESS时，该参数生效</p>
                     * 
                     */
                    void SetAutoArchiveDelayHours(const int64_t& _autoArchiveDelayHours);

                    /**
                     * 判断参数 AutoArchiveDelayHours 是否已赋值
                     * @return AutoArchiveDelayHours 是否已赋值
                     * 
                     */
                    bool AutoArchiveDelayHoursHasBeenSet() const;

                    /**
                     * 获取<p>内核小版本号</p>
                     * @return CynosVersion <p>内核小版本号</p>
                     * 
                     */
                    std::string GetCynosVersion() const;

                    /**
                     * 设置<p>内核小版本号</p>
                     * @param _cynosVersion <p>内核小版本号</p>
                     * 
                     */
                    void SetCynosVersion(const std::string& _cynosVersion);

                    /**
                     * 判断参数 CynosVersion 是否已赋值
                     * @return CynosVersion 是否已赋值
                     * 
                     */
                    bool CynosVersionHasBeenSet() const;

                private:

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>所属VPC网络ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>所属子网ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>数据库类型</p><p>枚举值：</p><ul><li>MYSQL： MYSQL</li></ul>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>数据库版本</p><p>枚举值：</p><ul><li>5.7： MySQL5.7版本</li><li>8.0： MySQL8.0版本</li></ul>
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * <p>所属项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>当DbMode为NORMAL或不填时必选<br>普通实例Cpu核数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>当DbMode为NORMAL或不填时必选<br>普通实例内存,单位GB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例数量，数量范围为(0,16]，默认值为2（即一个rw实例+一个ro实例），传递的n表示1个rw实例+n-1个ro实例（规格相同），如需要更精确的集群组成搭配，请使用InstanceInitInfos</p>
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>该参数无实际意义，已废弃。<br>存储大小，单位GB。</p>
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>集群名称，长度小于64个字符，每个字符取值范围：大/小写字母，数字，特殊符号（&#39;-&#39;,&#39;_&#39;,&#39;.&#39;）</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>账号密码(8-64个字符，包含大小写英文字母、数字和符号~!@#$%^&amp;*_-+=`|(){}[]:;&#39;&lt;&gt;,.?/中的任意三种)</p>
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * <p>端口，默认3306，取值范围[0, 65535)</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>计费模式</p><p>枚举值：</p><ul><li>0： 表示按量计费</li><li>1： 表示包年包月</li></ul><p>默认值：0</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>购买集群数，可选值范围[1,50]，默认为1</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>回档类型</p><p>枚举值：</p><ul><li>noneRollback： 不回档</li><li>snapRollback： 快照回档</li><li>timeRollback： 时间点回档</li></ul>
                     */
                    std::string m_rollbackStrategy;
                    bool m_rollbackStrategyHasBeenSet;

                    /**
                     * <p>快照回档，表示snapshotId；时间点回档，表示queryId，为0，表示需要判断时间点是否有效</p>
                     */
                    uint64_t m_rollbackId;
                    bool m_rollbackIdHasBeenSet;

                    /**
                     * <p>回档时，传入源集群ID，用于查找源poolId</p>
                     */
                    std::string m_originalClusterId;
                    bool m_originalClusterIdHasBeenSet;

                    /**
                     * <p>时间点回档，指定时间；快照回档，快照时间</p>
                     */
                    std::string m_expectTime;
                    bool m_expectTimeHasBeenSet;

                    /**
                     * <p>该参数无实际意义，已废弃。<br>时间点回档，指定时间允许范围</p>
                     */
                    uint64_t m_expectTimeThresh;
                    bool m_expectTimeThreshHasBeenSet;

                    /**
                     * <p>普通实例存储上限，单位GB<br>当DbType为MYSQL，且存储计费模式为预付费时，该参数需不大于cpu与memory对应存储规格上限</p>
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * <p>包年包月购买时长</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>包年包月购买时长单位，[&#39;s&#39;,&#39;d&#39;,&#39;m&#39;,&#39;y&#39;]</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>包年包月购买是否自动续费</p><p>枚举值：</p><ul><li>0： 默认续费方式</li><li>1： 自动续费</li><li>2： 不自动续费</li></ul><p>默认值：0</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>是否自动选择代金券 1是 0否 默认为0</p><p>枚举值：</p><ul><li>1： 是</li><li>0： 否</li></ul><p>默认值：0</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>实例数量（该参数已不再使用，只做存量兼容处理）</p>
                     */
                    int64_t m_haCount;
                    bool m_haCountHasBeenSet;

                    /**
                     * <p>订单来源</p>
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * <p>集群创建需要绑定的tag数组信息</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Db类型</p><p>枚举值：</p><ul><li>NORMAL： 普通实例</li><li>SERVERLESS： serverless实例</li></ul><p>默认值：NORMAL</p><p>当DbType为MYSQL时可选(默认NORMAL)</p>
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * <p>当DbMode为SERVERLESS时必填<br>cpu最小值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>当DbMode为SERVERLESS时必填：<br>cpu最大值，可选范围参考DescribeServerlessInstanceSpecs接口返回</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>否自动暂停</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul><p>默认值：yes</p><p>DbMode为SERVERLESS生效</p>
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * <p>当DbMode为SERVERLESS时，指定集群自动暂停的延迟，单位秒，可选范围[600,691200]<br>默认值:600</p>
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * <p>集群存储计费模式，按量计费：0，包年包月：1。默认按量计费<br>当DbType为MYSQL时，在集群计算计费模式为后付费（包括DbMode为SERVERLESS）时，存储计费模式仅可为按量计费<br>回档与克隆均不支持包年包月存储</p>
                     */
                    int64_t m_storagePayMode;
                    bool m_storagePayModeHasBeenSet;

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
                     * <p>交易模式</p><p>枚举值：</p><ul><li>0： 下单且支付</li><li>1： 下单</li></ul><p>默认值：0</p>
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * <p>参数模板ID，可以通过查询参数模板信息DescribeParamTemplates获得参数模板ID</p>
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>多可用区地址</p>
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * <p>实例初始化配置信息，主要用于购买集群时选不同规格实例</p>
                     */
                    std::vector<InstanceInitInfo> m_instanceInitInfos;
                    bool m_instanceInitInfosHasBeenSet;

                    /**
                     * <p>全球数据库唯一标识</p>
                     */
                    std::string m_gdnId;
                    bool m_gdnIdHasBeenSet;

                    /**
                     * <p>数据库代理配置</p>
                     */
                    ProxyConfig m_proxyConfig;
                    bool m_proxyConfigHasBeenSet;

                    /**
                     * <p>是否自动归档</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul><p>默认值：no</p><p>仅当前集群主实例为SERVERLESS时，该参数生效</p>
                     */
                    std::string m_autoArchive;
                    bool m_autoArchiveHasBeenSet;

                    /**
                     * <p>暂停后的归档处理时间</p><p>单位：时</p><p>默认值：12</p><p>仅当前集群主实例为SERVERLESS时，该参数生效</p>
                     */
                    int64_t m_autoArchiveDelayHours;
                    bool m_autoArchiveDelayHoursHasBeenSet;

                    /**
                     * <p>内核小版本号</p>
                     */
                    std::string m_cynosVersion;
                    bool m_cynosVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERSREQUEST_H_
