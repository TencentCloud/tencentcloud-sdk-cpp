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
                     * 获取项目 ID。
                     * @return ProjectId 项目 ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 ID。
                     * @param _projectId 项目 ID。
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
                     * 获取实例类型，可取值：1 - 主实例，2 - 灾备实例，3 - 只读实例。
                     * @return InstanceTypes 实例类型，可取值：1 - 主实例，2 - 灾备实例，3 - 只读实例。
                     * 
                     */
                    std::vector<uint64_t> GetInstanceTypes() const;

                    /**
                     * 设置实例类型，可取值：1 - 主实例，2 - 灾备实例，3 - 只读实例。
                     * @param _instanceTypes 实例类型，可取值：1 - 主实例，2 - 灾备实例，3 - 只读实例。
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
                     * 获取实例的内网 IP 地址。
                     * @return Vips 实例的内网 IP 地址。
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置实例的内网 IP 地址。
                     * @param _vips 实例的内网 IP 地址。
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
                     * 获取实例状态，可取值：<br>0 - 创建中<br>1 - 运行中<br>4 - 正在进行隔离操作<br>5 - 已隔离（可在回收站恢复开机）
                     * @return Status 实例状态，可取值：<br>0 - 创建中<br>1 - 运行中<br>4 - 正在进行隔离操作<br>5 - 已隔离（可在回收站恢复开机）
                     * 
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置实例状态，可取值：<br>0 - 创建中<br>1 - 运行中<br>4 - 正在进行隔离操作<br>5 - 已隔离（可在回收站恢复开机）
                     * @param _status 实例状态，可取值：<br>0 - 创建中<br>1 - 运行中<br>4 - 正在进行隔离操作<br>5 - 已隔离（可在回收站恢复开机）
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
                     * 获取偏移量，默认值为 0。
                     * @return Offset 偏移量，默认值为 0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为 0。
                     * @param _offset 偏移量，默认值为 0。
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
                     * 获取单次请求返回的数量，默认值为 20，最大值为 2000。
                     * @return Limit 单次请求返回的数量，默认值为 20，最大值为 2000。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次请求返回的数量，默认值为 20，最大值为 2000。
                     * @param _limit 单次请求返回的数量，默认值为 20，最大值为 2000。
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
                     * 获取安全组 ID。当使用安全组 ID 为过滤条件时，需指定 WithSecurityGroup 参数为 1。
                     * @return SecurityGroupId 安全组 ID。当使用安全组 ID 为过滤条件时，需指定 WithSecurityGroup 参数为 1。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组 ID。当使用安全组 ID 为过滤条件时，需指定 WithSecurityGroup 参数为 1。
                     * @param _securityGroupId 安全组 ID。当使用安全组 ID 为过滤条件时，需指定 WithSecurityGroup 参数为 1。
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
                     * 获取付费类型，可取值：0 - 包年包月，1 - 小时计费。
                     * @return PayTypes 付费类型，可取值：0 - 包年包月，1 - 小时计费。
                     * 
                     */
                    std::vector<uint64_t> GetPayTypes() const;

                    /**
                     * 设置付费类型，可取值：0 - 包年包月，1 - 小时计费。
                     * @param _payTypes 付费类型，可取值：0 - 包年包月，1 - 小时计费。
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
                     * 获取实例名称。
                     * @return InstanceNames 实例名称。
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceNames 实例名称。
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
                     * 获取实例任务状态，可能取值：<br>0 - 没有任务<br>1 - 升级中<br>2 - 数据导入中<br>3 - 开放Slave中<br>4 - 外网访问开通中<br>5 - 批量操作执行中<br>6 - 回档中<br>7 - 外网访问关闭中<br>8 - 密码修改中<br>9 - 实例名修改中<br>10 - 重启中<br>12 - 自建迁移中<br>13 - 删除库表中<br>14 - 灾备实例创建同步中<br>15 - 升级待切换<br>16 - 升级切换中<br>17 - 升级切换完成<br>19 - 参数设置待执行<br>34 - 原地升级待执行
                     * @return TaskStatus 实例任务状态，可能取值：<br>0 - 没有任务<br>1 - 升级中<br>2 - 数据导入中<br>3 - 开放Slave中<br>4 - 外网访问开通中<br>5 - 批量操作执行中<br>6 - 回档中<br>7 - 外网访问关闭中<br>8 - 密码修改中<br>9 - 实例名修改中<br>10 - 重启中<br>12 - 自建迁移中<br>13 - 删除库表中<br>14 - 灾备实例创建同步中<br>15 - 升级待切换<br>16 - 升级切换中<br>17 - 升级切换完成<br>19 - 参数设置待执行<br>34 - 原地升级待执行
                     * 
                     */
                    std::vector<uint64_t> GetTaskStatus() const;

                    /**
                     * 设置实例任务状态，可能取值：<br>0 - 没有任务<br>1 - 升级中<br>2 - 数据导入中<br>3 - 开放Slave中<br>4 - 外网访问开通中<br>5 - 批量操作执行中<br>6 - 回档中<br>7 - 外网访问关闭中<br>8 - 密码修改中<br>9 - 实例名修改中<br>10 - 重启中<br>12 - 自建迁移中<br>13 - 删除库表中<br>14 - 灾备实例创建同步中<br>15 - 升级待切换<br>16 - 升级切换中<br>17 - 升级切换完成<br>19 - 参数设置待执行<br>34 - 原地升级待执行
                     * @param _taskStatus 实例任务状态，可能取值：<br>0 - 没有任务<br>1 - 升级中<br>2 - 数据导入中<br>3 - 开放Slave中<br>4 - 外网访问开通中<br>5 - 批量操作执行中<br>6 - 回档中<br>7 - 外网访问关闭中<br>8 - 密码修改中<br>9 - 实例名修改中<br>10 - 重启中<br>12 - 自建迁移中<br>13 - 删除库表中<br>14 - 灾备实例创建同步中<br>15 - 升级待切换<br>16 - 升级切换中<br>17 - 升级切换完成<br>19 - 参数设置待执行<br>34 - 原地升级待执行
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
                     * 获取实例数据库引擎版本，可能取值：5.1、5.5、5.6 和 5.7。
                     * @return EngineVersions 实例数据库引擎版本，可能取值：5.1、5.5、5.6 和 5.7。
                     * 
                     */
                    std::vector<std::string> GetEngineVersions() const;

                    /**
                     * 设置实例数据库引擎版本，可能取值：5.1、5.5、5.6 和 5.7。
                     * @param _engineVersions 实例数据库引擎版本，可能取值：5.1、5.5、5.6 和 5.7。
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
                     * 获取私有网络的 ID。
                     * @return VpcIds 私有网络的 ID。
                     * 
                     */
                    std::vector<uint64_t> GetVpcIds() const;

                    /**
                     * 设置私有网络的 ID。
                     * @param _vpcIds 私有网络的 ID。
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
                     * 获取可用区的 ID。
                     * @return ZoneIds 可用区的 ID。
                     * 
                     */
                    std::vector<uint64_t> GetZoneIds() const;

                    /**
                     * 设置可用区的 ID。
                     * @param _zoneIds 可用区的 ID。
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
                     * 获取子网 ID。
                     * @return SubnetIds 子网 ID。
                     * 
                     */
                    std::vector<uint64_t> GetSubnetIds() const;

                    /**
                     * 设置子网 ID。
                     * @param _subnetIds 子网 ID。
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
                     * 获取是否锁定标记，可选值：0 - 不锁定，1 - 锁定，默认为0。
                     * @return CdbErrors 是否锁定标记，可选值：0 - 不锁定，1 - 锁定，默认为0。
                     * 
                     */
                    std::vector<int64_t> GetCdbErrors() const;

                    /**
                     * 设置是否锁定标记，可选值：0 - 不锁定，1 - 锁定，默认为0。
                     * @param _cdbErrors 是否锁定标记，可选值：0 - 不锁定，1 - 锁定，默认为0。
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
                     * 获取返回结果集排序的字段，目前支持："InstanceId"，"InstanceName"，"CreateTime"，"DeadlineTime"。
                     * @return OrderBy 返回结果集排序的字段，目前支持："InstanceId"，"InstanceName"，"CreateTime"，"DeadlineTime"。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置返回结果集排序的字段，目前支持："InstanceId"，"InstanceName"，"CreateTime"，"DeadlineTime"。
                     * @param _orderBy 返回结果集排序的字段，目前支持："InstanceId"，"InstanceName"，"CreateTime"，"DeadlineTime"。
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
                     * 获取返回结果集排序方式，目前支持："ASC" 或者 "DESC"。
                     * @return OrderDirection 返回结果集排序方式，目前支持："ASC" 或者 "DESC"。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置返回结果集排序方式，目前支持："ASC" 或者 "DESC"。
                     * @param _orderDirection 返回结果集排序方式，目前支持："ASC" 或者 "DESC"。
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
                     * 获取是否以安全组 ID 为过滤条件。
                     * @return WithSecurityGroup 是否以安全组 ID 为过滤条件。
                     * 
                     */
                    int64_t GetWithSecurityGroup() const;

                    /**
                     * 设置是否以安全组 ID 为过滤条件。
                     * @param _withSecurityGroup 是否以安全组 ID 为过滤条件。
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
                     * 获取是否包含独享集群详细信息，可取值：0 - 不包含，1 - 包含。
                     * @return WithExCluster 是否包含独享集群详细信息，可取值：0 - 不包含，1 - 包含。
                     * 
                     */
                    int64_t GetWithExCluster() const;

                    /**
                     * 设置是否包含独享集群详细信息，可取值：0 - 不包含，1 - 包含。
                     * @param _withExCluster 是否包含独享集群详细信息，可取值：0 - 不包含，1 - 包含。
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
                     * 获取独享集群 ID。
                     * @return ExClusterId 独享集群 ID。
                     * 
                     */
                    std::string GetExClusterId() const;

                    /**
                     * 设置独享集群 ID。
                     * @param _exClusterId 独享集群 ID。
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
                     * 获取实例 ID。
                     * @return InstanceIds 实例 ID。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceIds 实例 ID。
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
                     * 获取初始化标记，可取值：0 - 未初始化，1 - 初始化。
                     * @return InitFlag 初始化标记，可取值：0 - 未初始化，1 - 初始化。
                     * 
                     */
                    int64_t GetInitFlag() const;

                    /**
                     * 设置初始化标记，可取值：0 - 未初始化，1 - 初始化。
                     * @param _initFlag 初始化标记，可取值：0 - 未初始化，1 - 初始化。
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
                     * 获取是否包含灾备关系对应的实例，可取值：0 - 不包含，1 - 包含。默认取值为1。如果拉取主实例，则灾备关系的数据在DrInfo字段中， 如果拉取灾备实例， 则灾备关系的数据在MasterInfo字段中。灾备关系中只包含部分基本的数据，详细的数据需要自行调接口拉取。
                     * @return WithDr 是否包含灾备关系对应的实例，可取值：0 - 不包含，1 - 包含。默认取值为1。如果拉取主实例，则灾备关系的数据在DrInfo字段中， 如果拉取灾备实例， 则灾备关系的数据在MasterInfo字段中。灾备关系中只包含部分基本的数据，详细的数据需要自行调接口拉取。
                     * 
                     */
                    int64_t GetWithDr() const;

                    /**
                     * 设置是否包含灾备关系对应的实例，可取值：0 - 不包含，1 - 包含。默认取值为1。如果拉取主实例，则灾备关系的数据在DrInfo字段中， 如果拉取灾备实例， 则灾备关系的数据在MasterInfo字段中。灾备关系中只包含部分基本的数据，详细的数据需要自行调接口拉取。
                     * @param _withDr 是否包含灾备关系对应的实例，可取值：0 - 不包含，1 - 包含。默认取值为1。如果拉取主实例，则灾备关系的数据在DrInfo字段中， 如果拉取灾备实例， 则灾备关系的数据在MasterInfo字段中。灾备关系中只包含部分基本的数据，详细的数据需要自行调接口拉取。
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
                     * 获取是否包含只读实例，可取值：0 - 不包含，1 - 包含。默认取值为1。
                     * @return WithRo 是否包含只读实例，可取值：0 - 不包含，1 - 包含。默认取值为1。
                     * 
                     */
                    int64_t GetWithRo() const;

                    /**
                     * 设置是否包含只读实例，可取值：0 - 不包含，1 - 包含。默认取值为1。
                     * @param _withRo 是否包含只读实例，可取值：0 - 不包含，1 - 包含。默认取值为1。
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
                     * 获取是否包含主实例，可取值：0 - 不包含，1 - 包含。默认取值为1。
                     * @return WithMaster 是否包含主实例，可取值：0 - 不包含，1 - 包含。默认取值为1。
                     * 
                     */
                    int64_t GetWithMaster() const;

                    /**
                     * 设置是否包含主实例，可取值：0 - 不包含，1 - 包含。默认取值为1。
                     * @param _withMaster 是否包含主实例，可取值：0 - 不包含，1 - 包含。默认取值为1。
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
                     * 获取置放群组ID列表。
                     * @return DeployGroupIds 置放群组ID列表。
                     * 
                     */
                    std::vector<std::string> GetDeployGroupIds() const;

                    /**
                     * 设置置放群组ID列表。
                     * @param _deployGroupIds 置放群组ID列表。
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
                     * 获取是否以标签键为过滤条件。
                     * @return TagKeysForSearch 是否以标签键为过滤条件。
                     * 
                     */
                    std::vector<std::string> GetTagKeysForSearch() const;

                    /**
                     * 设置是否以标签键为过滤条件。
                     * @param _tagKeysForSearch 是否以标签键为过滤条件。
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
                     * 获取金融围拢 ID 。
                     * @return CageIds 金融围拢 ID 。
                     * 
                     */
                    std::vector<std::string> GetCageIds() const;

                    /**
                     * 设置金融围拢 ID 。
                     * @param _cageIds 金融围拢 ID 。
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
                     * 获取标签值
                     * @return TagValues 标签值
                     * 
                     */
                    std::vector<std::string> GetTagValues() const;

                    /**
                     * 设置标签值
                     * @param _tagValues 标签值
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
                     * 获取私有网络字符型vpcId
                     * @return UniqueVpcIds 私有网络字符型vpcId
                     * 
                     */
                    std::vector<std::string> GetUniqueVpcIds() const;

                    /**
                     * 设置私有网络字符型vpcId
                     * @param _uniqueVpcIds 私有网络字符型vpcId
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
                     * 获取私有网络字符型subnetId
                     * @return UniqSubnetIds 私有网络字符型subnetId
                     * 
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置私有网络字符型subnetId
                     * @param _uniqSubnetIds 私有网络字符型subnetId
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
                     * 获取标签键值
请注意，创建中的实例无法查询到标签。
                     * @return Tags 标签键值
请注意，创建中的实例无法查询到标签。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签键值
请注意，创建中的实例无法查询到标签。
                     * @param _tags 标签键值
请注意，创建中的实例无法查询到标签。
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
                     * 获取数据库代理 IP 。
                     * @return ProxyVips 数据库代理 IP 。
                     * 
                     */
                    std::vector<std::string> GetProxyVips() const;

                    /**
                     * 设置数据库代理 IP 。
                     * @param _proxyVips 数据库代理 IP 。
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
                     * 获取数据库代理 ID 。
                     * @return ProxyIds 数据库代理 ID 。
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置数据库代理 ID 。
                     * @param _proxyIds 数据库代理 ID 。
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
                     * 获取数据库引擎类型。
                     * @return EngineTypes 数据库引擎类型。
                     * 
                     */
                    std::vector<std::string> GetEngineTypes() const;

                    /**
                     * 设置数据库引擎类型。
                     * @param _engineTypes 数据库引擎类型。
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
                     * 获取是否获取集群版实例节点信息，可填：true或false
                     * @return QueryClusterInfo 是否获取集群版实例节点信息，可填：true或false
                     * 
                     */
                    bool GetQueryClusterInfo() const;

                    /**
                     * 设置是否获取集群版实例节点信息，可填：true或false
                     * @param _queryClusterInfo 是否获取集群版实例节点信息，可填：true或false
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
                     * 项目 ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例类型，可取值：1 - 主实例，2 - 灾备实例，3 - 只读实例。
                     */
                    std::vector<uint64_t> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * 实例的内网 IP 地址。
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * 实例状态，可取值：<br>0 - 创建中<br>1 - 运行中<br>4 - 正在进行隔离操作<br>5 - 已隔离（可在回收站恢复开机）
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 偏移量，默认值为 0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次请求返回的数量，默认值为 20，最大值为 2000。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 安全组 ID。当使用安全组 ID 为过滤条件时，需指定 WithSecurityGroup 参数为 1。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 付费类型，可取值：0 - 包年包月，1 - 小时计费。
                     */
                    std::vector<uint64_t> m_payTypes;
                    bool m_payTypesHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * 实例任务状态，可能取值：<br>0 - 没有任务<br>1 - 升级中<br>2 - 数据导入中<br>3 - 开放Slave中<br>4 - 外网访问开通中<br>5 - 批量操作执行中<br>6 - 回档中<br>7 - 外网访问关闭中<br>8 - 密码修改中<br>9 - 实例名修改中<br>10 - 重启中<br>12 - 自建迁移中<br>13 - 删除库表中<br>14 - 灾备实例创建同步中<br>15 - 升级待切换<br>16 - 升级切换中<br>17 - 升级切换完成<br>19 - 参数设置待执行<br>34 - 原地升级待执行
                     */
                    std::vector<uint64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 实例数据库引擎版本，可能取值：5.1、5.5、5.6 和 5.7。
                     */
                    std::vector<std::string> m_engineVersions;
                    bool m_engineVersionsHasBeenSet;

                    /**
                     * 私有网络的 ID。
                     */
                    std::vector<uint64_t> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * 可用区的 ID。
                     */
                    std::vector<uint64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 子网 ID。
                     */
                    std::vector<uint64_t> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 是否锁定标记，可选值：0 - 不锁定，1 - 锁定，默认为0。
                     */
                    std::vector<int64_t> m_cdbErrors;
                    bool m_cdbErrorsHasBeenSet;

                    /**
                     * 返回结果集排序的字段，目前支持："InstanceId"，"InstanceName"，"CreateTime"，"DeadlineTime"。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 返回结果集排序方式，目前支持："ASC" 或者 "DESC"。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * 是否以安全组 ID 为过滤条件。
                     */
                    int64_t m_withSecurityGroup;
                    bool m_withSecurityGroupHasBeenSet;

                    /**
                     * 是否包含独享集群详细信息，可取值：0 - 不包含，1 - 包含。
                     */
                    int64_t m_withExCluster;
                    bool m_withExClusterHasBeenSet;

                    /**
                     * 独享集群 ID。
                     */
                    std::string m_exClusterId;
                    bool m_exClusterIdHasBeenSet;

                    /**
                     * 实例 ID。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 初始化标记，可取值：0 - 未初始化，1 - 初始化。
                     */
                    int64_t m_initFlag;
                    bool m_initFlagHasBeenSet;

                    /**
                     * 是否包含灾备关系对应的实例，可取值：0 - 不包含，1 - 包含。默认取值为1。如果拉取主实例，则灾备关系的数据在DrInfo字段中， 如果拉取灾备实例， 则灾备关系的数据在MasterInfo字段中。灾备关系中只包含部分基本的数据，详细的数据需要自行调接口拉取。
                     */
                    int64_t m_withDr;
                    bool m_withDrHasBeenSet;

                    /**
                     * 是否包含只读实例，可取值：0 - 不包含，1 - 包含。默认取值为1。
                     */
                    int64_t m_withRo;
                    bool m_withRoHasBeenSet;

                    /**
                     * 是否包含主实例，可取值：0 - 不包含，1 - 包含。默认取值为1。
                     */
                    int64_t m_withMaster;
                    bool m_withMasterHasBeenSet;

                    /**
                     * 置放群组ID列表。
                     */
                    std::vector<std::string> m_deployGroupIds;
                    bool m_deployGroupIdsHasBeenSet;

                    /**
                     * 是否以标签键为过滤条件。
                     */
                    std::vector<std::string> m_tagKeysForSearch;
                    bool m_tagKeysForSearchHasBeenSet;

                    /**
                     * 金融围拢 ID 。
                     */
                    std::vector<std::string> m_cageIds;
                    bool m_cageIdsHasBeenSet;

                    /**
                     * 标签值
                     */
                    std::vector<std::string> m_tagValues;
                    bool m_tagValuesHasBeenSet;

                    /**
                     * 私有网络字符型vpcId
                     */
                    std::vector<std::string> m_uniqueVpcIds;
                    bool m_uniqueVpcIdsHasBeenSet;

                    /**
                     * 私有网络字符型subnetId
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * 标签键值
请注意，创建中的实例无法查询到标签。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 数据库代理 IP 。
                     */
                    std::vector<std::string> m_proxyVips;
                    bool m_proxyVipsHasBeenSet;

                    /**
                     * 数据库代理 ID 。
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                    /**
                     * 数据库引擎类型。
                     */
                    std::vector<std::string> m_engineTypes;
                    bool m_engineTypesHasBeenSet;

                    /**
                     * 是否获取集群版实例节点信息，可填：true或false
                     */
                    bool m_queryClusterInfo;
                    bool m_queryClusterInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
