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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Tag.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDBInstances请求参数结构体
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目 ID。</p>
                     * @return ProjectId <p>项目 ID。</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目 ID。</p>
                     * @param _projectId <p>项目 ID。</p>
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
                     * 获取<p>实例类型，可取值：1 - 主实例，2 - 灾备实例，3 - 只读实例。</p>
                     * @return InstanceTypes <p>实例类型，可取值：1 - 主实例，2 - 灾备实例，3 - 只读实例。</p>
                     * 
                     */
                    std::vector<uint64_t> GetInstanceTypes() const;

                    /**
                     * 设置<p>实例类型，可取值：1 - 主实例，2 - 灾备实例，3 - 只读实例。</p>
                     * @param _instanceTypes <p>实例类型，可取值：1 - 主实例，2 - 灾备实例，3 - 只读实例。</p>
                     * 
                     */
                    void SetInstanceTypes(const std::vector<uint64_t>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取<p>实例的内网 IP 地址。</p>
                     * @return Vips <p>实例的内网 IP 地址。</p>
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置<p>实例的内网 IP 地址。</p>
                     * @param _vips <p>实例的内网 IP 地址。</p>
                     * 
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     * 
                     */
                    bool VipsHasBeenSet() const;

                    /**
                     * 获取<p>实例状态，可取值：<br>0 - 创建中<br>1 - 运行中<br>4 - 正在进行隔离操作<br>5 - 已隔离（可在回收站恢复开机）</p>
                     * @return Status <p>实例状态，可取值：<br>0 - 创建中<br>1 - 运行中<br>4 - 正在进行隔离操作<br>5 - 已隔离（可在回收站恢复开机）</p>
                     * 
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置<p>实例状态，可取值：<br>0 - 创建中<br>1 - 运行中<br>4 - 正在进行隔离操作<br>5 - 已隔离（可在回收站恢复开机）</p>
                     * @param _status <p>实例状态，可取值：<br>0 - 创建中<br>1 - 运行中<br>4 - 正在进行隔离操作<br>5 - 已隔离（可在回收站恢复开机）</p>
                     * 
                     */
                    void SetStatus(const std::vector<uint64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认值为 0。</p>
                     * @return Offset <p>偏移量，默认值为 0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认值为 0。</p>
                     * @param _offset <p>偏移量，默认值为 0。</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>单次请求返回的数量，默认值为 20，最大值为 2000。</p>
                     * @return Limit <p>单次请求返回的数量，默认值为 20，最大值为 2000。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>单次请求返回的数量，默认值为 20，最大值为 2000。</p>
                     * @param _limit <p>单次请求返回的数量，默认值为 20，最大值为 2000。</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>安全组 ID。当使用安全组 ID 为过滤条件时，需指定 WithSecurityGroup 参数为 1。</p>
                     * @return SecurityGroupId <p>安全组 ID。当使用安全组 ID 为过滤条件时，需指定 WithSecurityGroup 参数为 1。</p>
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置<p>安全组 ID。当使用安全组 ID 为过滤条件时，需指定 WithSecurityGroup 参数为 1。</p>
                     * @param _securityGroupId <p>安全组 ID。当使用安全组 ID 为过滤条件时，需指定 WithSecurityGroup 参数为 1。</p>
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>付费类型，可取值：0 - 包年包月，1 - 小时计费。</p>
                     * @return PayTypes <p>付费类型，可取值：0 - 包年包月，1 - 小时计费。</p>
                     * 
                     */
                    std::vector<uint64_t> GetPayTypes() const;

                    /**
                     * 设置<p>付费类型，可取值：0 - 包年包月，1 - 小时计费。</p>
                     * @param _payTypes <p>付费类型，可取值：0 - 包年包月，1 - 小时计费。</p>
                     * 
                     */
                    void SetPayTypes(const std::vector<uint64_t>& _payTypes);

                    /**
                     * 判断参数 PayTypes 是否已赋值
                     * @return PayTypes 是否已赋值
                     * 
                     */
                    bool PayTypesHasBeenSet() const;

                    /**
                     * 获取<p>实例名称。</p>
                     * @return InstanceNames <p>实例名称。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置<p>实例名称。</p>
                     * @param _instanceNames <p>实例名称。</p>
                     * 
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     * 
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取<p>实例任务状态，可能取值：<br>0 - 没有任务<br>1 - 升级中<br>2 - 数据导入中<br>3 - 开放Slave中<br>4 - 外网访问开通中<br>5 - 批量操作执行中<br>6 - 回档中<br>7 - 外网访问关闭中<br>8 - 密码修改中<br>9 - 实例名修改中<br>10 - 重启中<br>12 - 自建迁移中<br>13 - 删除库表中<br>14 - 灾备实例创建同步中<br>15 - 升级待切换<br>16 - 升级切换中<br>17 - 升级切换完成<br>19 - 参数设置待执行<br>34 - 原地升级待执行</p>
                     * @return TaskStatus <p>实例任务状态，可能取值：<br>0 - 没有任务<br>1 - 升级中<br>2 - 数据导入中<br>3 - 开放Slave中<br>4 - 外网访问开通中<br>5 - 批量操作执行中<br>6 - 回档中<br>7 - 外网访问关闭中<br>8 - 密码修改中<br>9 - 实例名修改中<br>10 - 重启中<br>12 - 自建迁移中<br>13 - 删除库表中<br>14 - 灾备实例创建同步中<br>15 - 升级待切换<br>16 - 升级切换中<br>17 - 升级切换完成<br>19 - 参数设置待执行<br>34 - 原地升级待执行</p>
                     * 
                     */
                    std::vector<uint64_t> GetTaskStatus() const;

                    /**
                     * 设置<p>实例任务状态，可能取值：<br>0 - 没有任务<br>1 - 升级中<br>2 - 数据导入中<br>3 - 开放Slave中<br>4 - 外网访问开通中<br>5 - 批量操作执行中<br>6 - 回档中<br>7 - 外网访问关闭中<br>8 - 密码修改中<br>9 - 实例名修改中<br>10 - 重启中<br>12 - 自建迁移中<br>13 - 删除库表中<br>14 - 灾备实例创建同步中<br>15 - 升级待切换<br>16 - 升级切换中<br>17 - 升级切换完成<br>19 - 参数设置待执行<br>34 - 原地升级待执行</p>
                     * @param _taskStatus <p>实例任务状态，可能取值：<br>0 - 没有任务<br>1 - 升级中<br>2 - 数据导入中<br>3 - 开放Slave中<br>4 - 外网访问开通中<br>5 - 批量操作执行中<br>6 - 回档中<br>7 - 外网访问关闭中<br>8 - 密码修改中<br>9 - 实例名修改中<br>10 - 重启中<br>12 - 自建迁移中<br>13 - 删除库表中<br>14 - 灾备实例创建同步中<br>15 - 升级待切换<br>16 - 升级切换中<br>17 - 升级切换完成<br>19 - 参数设置待执行<br>34 - 原地升级待执行</p>
                     * 
                     */
                    void SetTaskStatus(const std::vector<uint64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>实例数据库引擎版本，可能取值：5.1、5.5、5.6 和 5.7。</p>
                     * @return EngineVersions <p>实例数据库引擎版本，可能取值：5.1、5.5、5.6 和 5.7。</p>
                     * 
                     */
                    std::vector<std::string> GetEngineVersions() const;

                    /**
                     * 设置<p>实例数据库引擎版本，可能取值：5.1、5.5、5.6 和 5.7。</p>
                     * @param _engineVersions <p>实例数据库引擎版本，可能取值：5.1、5.5、5.6 和 5.7。</p>
                     * 
                     */
                    void SetEngineVersions(const std::vector<std::string>& _engineVersions);

                    /**
                     * 判断参数 EngineVersions 是否已赋值
                     * @return EngineVersions 是否已赋值
                     * 
                     */
                    bool EngineVersionsHasBeenSet() const;

                    /**
                     * 获取<p>私有网络的 ID。</p>
                     * @return VpcIds <p>私有网络的 ID。</p>
                     * 
                     */
                    std::vector<uint64_t> GetVpcIds() const;

                    /**
                     * 设置<p>私有网络的 ID。</p>
                     * @param _vpcIds <p>私有网络的 ID。</p>
                     * 
                     */
                    void SetVpcIds(const std::vector<uint64_t>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取<p>可用区的 ID。</p>
                     * @return ZoneIds <p>可用区的 ID。</p>
                     * 
                     */
                    std::vector<uint64_t> GetZoneIds() const;

                    /**
                     * 设置<p>可用区的 ID。</p>
                     * @param _zoneIds <p>可用区的 ID。</p>
                     * 
                     */
                    void SetZoneIds(const std::vector<uint64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取<p>子网 ID。</p>
                     * @return SubnetIds <p>子网 ID。</p>
                     * 
                     */
                    std::vector<uint64_t> GetSubnetIds() const;

                    /**
                     * 设置<p>子网 ID。</p>
                     * @param _subnetIds <p>子网 ID。</p>
                     * 
                     */
                    void SetSubnetIds(const std::vector<uint64_t>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否锁定标记，可选值：0 - 不锁定，1 - 锁定，默认为0。</p>
                     * @return CdbErrors <p>是否锁定标记，可选值：0 - 不锁定，1 - 锁定，默认为0。</p>
                     * 
                     */
                    std::vector<int64_t> GetCdbErrors() const;

                    /**
                     * 设置<p>是否锁定标记，可选值：0 - 不锁定，1 - 锁定，默认为0。</p>
                     * @param _cdbErrors <p>是否锁定标记，可选值：0 - 不锁定，1 - 锁定，默认为0。</p>
                     * 
                     */
                    void SetCdbErrors(const std::vector<int64_t>& _cdbErrors);

                    /**
                     * 判断参数 CdbErrors 是否已赋值
                     * @return CdbErrors 是否已赋值
                     * 
                     */
                    bool CdbErrorsHasBeenSet() const;

                    /**
                     * 获取<p>返回结果集排序的字段，目前支持：&quot;instanceId&quot;，&quot;instanceName&quot;，&quot;createTime&quot;，&quot;deadlineTime&quot;。</p>
                     * @return OrderBy <p>返回结果集排序的字段，目前支持：&quot;instanceId&quot;，&quot;instanceName&quot;，&quot;createTime&quot;，&quot;deadlineTime&quot;。</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>返回结果集排序的字段，目前支持：&quot;instanceId&quot;，&quot;instanceName&quot;，&quot;createTime&quot;，&quot;deadlineTime&quot;。</p>
                     * @param _orderBy <p>返回结果集排序的字段，目前支持：&quot;instanceId&quot;，&quot;instanceName&quot;，&quot;createTime&quot;，&quot;deadlineTime&quot;。</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>返回结果集排序方式。目前支持值：&quot;ASC&quot; - 表示升序，&quot;DESC&quot; - 表示降序，默认为 &quot;DESC&quot;。</p>
                     * @return OrderDirection <p>返回结果集排序方式。目前支持值：&quot;ASC&quot; - 表示升序，&quot;DESC&quot; - 表示降序，默认为 &quot;DESC&quot;。</p>
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置<p>返回结果集排序方式。目前支持值：&quot;ASC&quot; - 表示升序，&quot;DESC&quot; - 表示降序，默认为 &quot;DESC&quot;。</p>
                     * @param _orderDirection <p>返回结果集排序方式。目前支持值：&quot;ASC&quot; - 表示升序，&quot;DESC&quot; - 表示降序，默认为 &quot;DESC&quot;。</p>
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取<p>是否以安全组 ID 为过滤条件。<br>说明：0表示否，1表示是。</p>
                     * @return WithSecurityGroup <p>是否以安全组 ID 为过滤条件。<br>说明：0表示否，1表示是。</p>
                     * 
                     */
                    int64_t GetWithSecurityGroup() const;

                    /**
                     * 设置<p>是否以安全组 ID 为过滤条件。<br>说明：0表示否，1表示是。</p>
                     * @param _withSecurityGroup <p>是否以安全组 ID 为过滤条件。<br>说明：0表示否，1表示是。</p>
                     * 
                     */
                    void SetWithSecurityGroup(const int64_t& _withSecurityGroup);

                    /**
                     * 判断参数 WithSecurityGroup 是否已赋值
                     * @return WithSecurityGroup 是否已赋值
                     * 
                     */
                    bool WithSecurityGroupHasBeenSet() const;

                    /**
                     * 获取<p>是否包含独享集群详细信息，可取值：0 - 不包含，1 - 包含。</p>
                     * @return WithExCluster <p>是否包含独享集群详细信息，可取值：0 - 不包含，1 - 包含。</p>
                     * 
                     */
                    int64_t GetWithExCluster() const;

                    /**
                     * 设置<p>是否包含独享集群详细信息，可取值：0 - 不包含，1 - 包含。</p>
                     * @param _withExCluster <p>是否包含独享集群详细信息，可取值：0 - 不包含，1 - 包含。</p>
                     * 
                     */
                    void SetWithExCluster(const int64_t& _withExCluster);

                    /**
                     * 判断参数 WithExCluster 是否已赋值
                     * @return WithExCluster 是否已赋值
                     * 
                     */
                    bool WithExClusterHasBeenSet() const;

                    /**
                     * 获取<p>独享集群 ID。</p>
                     * @return ExClusterId <p>独享集群 ID。</p>
                     * 
                     */
                    std::string GetExClusterId() const;

                    /**
                     * 设置<p>独享集群 ID。</p>
                     * @param _exClusterId <p>独享集群 ID。</p>
                     * 
                     */
                    void SetExClusterId(const std::string& _exClusterId);

                    /**
                     * 判断参数 ExClusterId 是否已赋值
                     * @return ExClusterId 是否已赋值
                     * 
                     */
                    bool ExClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID。</p>
                     * @return InstanceIds <p>实例 ID。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>实例 ID。</p>
                     * @param _instanceIds <p>实例 ID。</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>初始化标记，可取值：0 - 未初始化，1 - 初始化。</p>
                     * @return InitFlag <p>初始化标记，可取值：0 - 未初始化，1 - 初始化。</p>
                     * 
                     */
                    int64_t GetInitFlag() const;

                    /**
                     * 设置<p>初始化标记，可取值：0 - 未初始化，1 - 初始化。</p>
                     * @param _initFlag <p>初始化标记，可取值：0 - 未初始化，1 - 初始化。</p>
                     * 
                     */
                    void SetInitFlag(const int64_t& _initFlag);

                    /**
                     * 判断参数 InitFlag 是否已赋值
                     * @return InitFlag 是否已赋值
                     * 
                     */
                    bool InitFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否包含灾备关系对应的实例，可取值：0 - 不包含，1 - 包含。默认取值为1。如果拉取主实例，则灾备关系的数据在DrInfo字段中， 如果拉取灾备实例， 则灾备关系的数据在MasterInfo字段中。灾备关系中只包含部分基本的数据，详细的数据需要自行调接口拉取。</p>
                     * @return WithDr <p>是否包含灾备关系对应的实例，可取值：0 - 不包含，1 - 包含。默认取值为1。如果拉取主实例，则灾备关系的数据在DrInfo字段中， 如果拉取灾备实例， 则灾备关系的数据在MasterInfo字段中。灾备关系中只包含部分基本的数据，详细的数据需要自行调接口拉取。</p>
                     * 
                     */
                    int64_t GetWithDr() const;

                    /**
                     * 设置<p>是否包含灾备关系对应的实例，可取值：0 - 不包含，1 - 包含。默认取值为1。如果拉取主实例，则灾备关系的数据在DrInfo字段中， 如果拉取灾备实例， 则灾备关系的数据在MasterInfo字段中。灾备关系中只包含部分基本的数据，详细的数据需要自行调接口拉取。</p>
                     * @param _withDr <p>是否包含灾备关系对应的实例，可取值：0 - 不包含，1 - 包含。默认取值为1。如果拉取主实例，则灾备关系的数据在DrInfo字段中， 如果拉取灾备实例， 则灾备关系的数据在MasterInfo字段中。灾备关系中只包含部分基本的数据，详细的数据需要自行调接口拉取。</p>
                     * 
                     */
                    void SetWithDr(const int64_t& _withDr);

                    /**
                     * 判断参数 WithDr 是否已赋值
                     * @return WithDr 是否已赋值
                     * 
                     */
                    bool WithDrHasBeenSet() const;

                    /**
                     * 获取<p>是否包含只读实例，可取值：0 - 不包含，1 - 包含。默认取值为1。</p>
                     * @return WithRo <p>是否包含只读实例，可取值：0 - 不包含，1 - 包含。默认取值为1。</p>
                     * 
                     */
                    int64_t GetWithRo() const;

                    /**
                     * 设置<p>是否包含只读实例，可取值：0 - 不包含，1 - 包含。默认取值为1。</p>
                     * @param _withRo <p>是否包含只读实例，可取值：0 - 不包含，1 - 包含。默认取值为1。</p>
                     * 
                     */
                    void SetWithRo(const int64_t& _withRo);

                    /**
                     * 判断参数 WithRo 是否已赋值
                     * @return WithRo 是否已赋值
                     * 
                     */
                    bool WithRoHasBeenSet() const;

                    /**
                     * 获取<p>是否包含主实例，可取值：0 - 不包含，1 - 包含。默认取值为1。</p>
                     * @return WithMaster <p>是否包含主实例，可取值：0 - 不包含，1 - 包含。默认取值为1。</p>
                     * 
                     */
                    int64_t GetWithMaster() const;

                    /**
                     * 设置<p>是否包含主实例，可取值：0 - 不包含，1 - 包含。默认取值为1。</p>
                     * @param _withMaster <p>是否包含主实例，可取值：0 - 不包含，1 - 包含。默认取值为1。</p>
                     * 
                     */
                    void SetWithMaster(const int64_t& _withMaster);

                    /**
                     * 判断参数 WithMaster 是否已赋值
                     * @return WithMaster 是否已赋值
                     * 
                     */
                    bool WithMasterHasBeenSet() const;

                    /**
                     * 获取<p>置放群组ID列表。</p>
                     * @return DeployGroupIds <p>置放群组ID列表。</p>
                     * 
                     */
                    std::vector<std::string> GetDeployGroupIds() const;

                    /**
                     * 设置<p>置放群组ID列表。</p>
                     * @param _deployGroupIds <p>置放群组ID列表。</p>
                     * 
                     */
                    void SetDeployGroupIds(const std::vector<std::string>& _deployGroupIds);

                    /**
                     * 判断参数 DeployGroupIds 是否已赋值
                     * @return DeployGroupIds 是否已赋值
                     * 
                     */
                    bool DeployGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否以标签键为过滤条件。</p>
                     * @return TagKeysForSearch <p>是否以标签键为过滤条件。</p>
                     * 
                     */
                    std::vector<std::string> GetTagKeysForSearch() const;

                    /**
                     * 设置<p>是否以标签键为过滤条件。</p>
                     * @param _tagKeysForSearch <p>是否以标签键为过滤条件。</p>
                     * 
                     */
                    void SetTagKeysForSearch(const std::vector<std::string>& _tagKeysForSearch);

                    /**
                     * 判断参数 TagKeysForSearch 是否已赋值
                     * @return TagKeysForSearch 是否已赋值
                     * 
                     */
                    bool TagKeysForSearchHasBeenSet() const;

                    /**
                     * 获取<p>金融围拢 ID 。</p>
                     * @return CageIds <p>金融围拢 ID 。</p>
                     * 
                     */
                    std::vector<std::string> GetCageIds() const;

                    /**
                     * 设置<p>金融围拢 ID 。</p>
                     * @param _cageIds <p>金融围拢 ID 。</p>
                     * 
                     */
                    void SetCageIds(const std::vector<std::string>& _cageIds);

                    /**
                     * 判断参数 CageIds 是否已赋值
                     * @return CageIds 是否已赋值
                     * 
                     */
                    bool CageIdsHasBeenSet() const;

                    /**
                     * 获取<p>标签值</p>
                     * @return TagValues <p>标签值</p>
                     * 
                     */
                    std::vector<std::string> GetTagValues() const;

                    /**
                     * 设置<p>标签值</p>
                     * @param _tagValues <p>标签值</p>
                     * 
                     */
                    void SetTagValues(const std::vector<std::string>& _tagValues);

                    /**
                     * 判断参数 TagValues 是否已赋值
                     * @return TagValues 是否已赋值
                     * 
                     */
                    bool TagValuesHasBeenSet() const;

                    /**
                     * 获取<p>私有网络字符型vpcId</p>
                     * @return UniqueVpcIds <p>私有网络字符型vpcId</p>
                     * 
                     */
                    std::vector<std::string> GetUniqueVpcIds() const;

                    /**
                     * 设置<p>私有网络字符型vpcId</p>
                     * @param _uniqueVpcIds <p>私有网络字符型vpcId</p>
                     * 
                     */
                    void SetUniqueVpcIds(const std::vector<std::string>& _uniqueVpcIds);

                    /**
                     * 判断参数 UniqueVpcIds 是否已赋值
                     * @return UniqueVpcIds 是否已赋值
                     * 
                     */
                    bool UniqueVpcIdsHasBeenSet() const;

                    /**
                     * 获取<p>私有网络字符型subnetId</p>
                     * @return UniqSubnetIds <p>私有网络字符型subnetId</p>
                     * 
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置<p>私有网络字符型subnetId</p>
                     * @param _uniqSubnetIds <p>私有网络字符型subnetId</p>
                     * 
                     */
                    void SetUniqSubnetIds(const std::vector<std::string>& _uniqSubnetIds);

                    /**
                     * 判断参数 UniqSubnetIds 是否已赋值
                     * @return UniqSubnetIds 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdsHasBeenSet() const;

                    /**
                     * 获取<p>标签键值<br>请注意，创建中的实例无法查询到标签。</p>
                     * @return Tags <p>标签键值<br>请注意，创建中的实例无法查询到标签。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签键值<br>请注意，创建中的实例无法查询到标签。</p>
                     * @param _tags <p>标签键值<br>请注意，创建中的实例无法查询到标签。</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>数据库代理 IP 。</p>
                     * @return ProxyVips <p>数据库代理 IP 。</p>
                     * 
                     */
                    std::vector<std::string> GetProxyVips() const;

                    /**
                     * 设置<p>数据库代理 IP 。</p>
                     * @param _proxyVips <p>数据库代理 IP 。</p>
                     * 
                     */
                    void SetProxyVips(const std::vector<std::string>& _proxyVips);

                    /**
                     * 判断参数 ProxyVips 是否已赋值
                     * @return ProxyVips 是否已赋值
                     * 
                     */
                    bool ProxyVipsHasBeenSet() const;

                    /**
                     * 获取<p>数据库代理 ID 。</p>
                     * @return ProxyIds <p>数据库代理 ID 。</p>
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置<p>数据库代理 ID 。</p>
                     * @param _proxyIds <p>数据库代理 ID 。</p>
                     * 
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     * 
                     */
                    bool ProxyIdsHasBeenSet() const;

                    /**
                     * 获取<p>数据库引擎类型。可选值为：InnoDB、RocksDB。</p>
                     * @return EngineTypes <p>数据库引擎类型。可选值为：InnoDB、RocksDB。</p>
                     * 
                     */
                    std::vector<std::string> GetEngineTypes() const;

                    /**
                     * 设置<p>数据库引擎类型。可选值为：InnoDB、RocksDB。</p>
                     * @param _engineTypes <p>数据库引擎类型。可选值为：InnoDB、RocksDB。</p>
                     * 
                     */
                    void SetEngineTypes(const std::vector<std::string>& _engineTypes);

                    /**
                     * 判断参数 EngineTypes 是否已赋值
                     * @return EngineTypes 是否已赋值
                     * 
                     */
                    bool EngineTypesHasBeenSet() const;

                    /**
                     * 获取<p>是否获取云盘版实例节点信息，可填：true 或 false。默认为 false。</p>
                     * @return QueryClusterInfo <p>是否获取云盘版实例节点信息，可填：true 或 false。默认为 false。</p>
                     * 
                     */
                    bool GetQueryClusterInfo() const;

                    /**
                     * 设置<p>是否获取云盘版实例节点信息，可填：true 或 false。默认为 false。</p>
                     * @param _queryClusterInfo <p>是否获取云盘版实例节点信息，可填：true 或 false。默认为 false。</p>
                     * 
                     */
                    void SetQueryClusterInfo(const bool& _queryClusterInfo);

                    /**
                     * 判断参数 QueryClusterInfo 是否已赋值
                     * @return QueryClusterInfo 是否已赋值
                     * 
                     */
                    bool QueryClusterInfoHasBeenSet() const;

                private:

                    /**
                     * <p>项目 ID。</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>实例类型，可取值：1 - 主实例，2 - 灾备实例，3 - 只读实例。</p>
                     */
                    std::vector<uint64_t> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * <p>实例的内网 IP 地址。</p>
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * <p>实例状态，可取值：<br>0 - 创建中<br>1 - 运行中<br>4 - 正在进行隔离操作<br>5 - 已隔离（可在回收站恢复开机）</p>
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>偏移量，默认值为 0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>单次请求返回的数量，默认值为 20，最大值为 2000。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>安全组 ID。当使用安全组 ID 为过滤条件时，需指定 WithSecurityGroup 参数为 1。</p>
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * <p>付费类型，可取值：0 - 包年包月，1 - 小时计费。</p>
                     */
                    std::vector<uint64_t> m_payTypes;
                    bool m_payTypesHasBeenSet;

                    /**
                     * <p>实例名称。</p>
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * <p>实例任务状态，可能取值：<br>0 - 没有任务<br>1 - 升级中<br>2 - 数据导入中<br>3 - 开放Slave中<br>4 - 外网访问开通中<br>5 - 批量操作执行中<br>6 - 回档中<br>7 - 外网访问关闭中<br>8 - 密码修改中<br>9 - 实例名修改中<br>10 - 重启中<br>12 - 自建迁移中<br>13 - 删除库表中<br>14 - 灾备实例创建同步中<br>15 - 升级待切换<br>16 - 升级切换中<br>17 - 升级切换完成<br>19 - 参数设置待执行<br>34 - 原地升级待执行</p>
                     */
                    std::vector<uint64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>实例数据库引擎版本，可能取值：5.1、5.5、5.6 和 5.7。</p>
                     */
                    std::vector<std::string> m_engineVersions;
                    bool m_engineVersionsHasBeenSet;

                    /**
                     * <p>私有网络的 ID。</p>
                     */
                    std::vector<uint64_t> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * <p>可用区的 ID。</p>
                     */
                    std::vector<uint64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>子网 ID。</p>
                     */
                    std::vector<uint64_t> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>是否锁定标记，可选值：0 - 不锁定，1 - 锁定，默认为0。</p>
                     */
                    std::vector<int64_t> m_cdbErrors;
                    bool m_cdbErrorsHasBeenSet;

                    /**
                     * <p>返回结果集排序的字段，目前支持：&quot;instanceId&quot;，&quot;instanceName&quot;，&quot;createTime&quot;，&quot;deadlineTime&quot;。</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>返回结果集排序方式。目前支持值：&quot;ASC&quot; - 表示升序，&quot;DESC&quot; - 表示降序，默认为 &quot;DESC&quot;。</p>
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * <p>是否以安全组 ID 为过滤条件。<br>说明：0表示否，1表示是。</p>
                     */
                    int64_t m_withSecurityGroup;
                    bool m_withSecurityGroupHasBeenSet;

                    /**
                     * <p>是否包含独享集群详细信息，可取值：0 - 不包含，1 - 包含。</p>
                     */
                    int64_t m_withExCluster;
                    bool m_withExClusterHasBeenSet;

                    /**
                     * <p>独享集群 ID。</p>
                     */
                    std::string m_exClusterId;
                    bool m_exClusterIdHasBeenSet;

                    /**
                     * <p>实例 ID。</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>初始化标记，可取值：0 - 未初始化，1 - 初始化。</p>
                     */
                    int64_t m_initFlag;
                    bool m_initFlagHasBeenSet;

                    /**
                     * <p>是否包含灾备关系对应的实例，可取值：0 - 不包含，1 - 包含。默认取值为1。如果拉取主实例，则灾备关系的数据在DrInfo字段中， 如果拉取灾备实例， 则灾备关系的数据在MasterInfo字段中。灾备关系中只包含部分基本的数据，详细的数据需要自行调接口拉取。</p>
                     */
                    int64_t m_withDr;
                    bool m_withDrHasBeenSet;

                    /**
                     * <p>是否包含只读实例，可取值：0 - 不包含，1 - 包含。默认取值为1。</p>
                     */
                    int64_t m_withRo;
                    bool m_withRoHasBeenSet;

                    /**
                     * <p>是否包含主实例，可取值：0 - 不包含，1 - 包含。默认取值为1。</p>
                     */
                    int64_t m_withMaster;
                    bool m_withMasterHasBeenSet;

                    /**
                     * <p>置放群组ID列表。</p>
                     */
                    std::vector<std::string> m_deployGroupIds;
                    bool m_deployGroupIdsHasBeenSet;

                    /**
                     * <p>是否以标签键为过滤条件。</p>
                     */
                    std::vector<std::string> m_tagKeysForSearch;
                    bool m_tagKeysForSearchHasBeenSet;

                    /**
                     * <p>金融围拢 ID 。</p>
                     */
                    std::vector<std::string> m_cageIds;
                    bool m_cageIdsHasBeenSet;

                    /**
                     * <p>标签值</p>
                     */
                    std::vector<std::string> m_tagValues;
                    bool m_tagValuesHasBeenSet;

                    /**
                     * <p>私有网络字符型vpcId</p>
                     */
                    std::vector<std::string> m_uniqueVpcIds;
                    bool m_uniqueVpcIdsHasBeenSet;

                    /**
                     * <p>私有网络字符型subnetId</p>
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * <p>标签键值<br>请注意，创建中的实例无法查询到标签。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>数据库代理 IP 。</p>
                     */
                    std::vector<std::string> m_proxyVips;
                    bool m_proxyVipsHasBeenSet;

                    /**
                     * <p>数据库代理 ID 。</p>
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                    /**
                     * <p>数据库引擎类型。可选值为：InnoDB、RocksDB。</p>
                     */
                    std::vector<std::string> m_engineTypes;
                    bool m_engineTypesHasBeenSet;

                    /**
                     * <p>是否获取云盘版实例节点信息，可填：true 或 false。默认为 false。</p>
                     */
                    bool m_queryClusterInfo;
                    bool m_queryClusterInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
