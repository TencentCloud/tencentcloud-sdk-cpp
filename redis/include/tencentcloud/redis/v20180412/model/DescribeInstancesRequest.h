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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceTagInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstances请求参数结构体
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页输出实例的数量，参数默认值20，最大值为1000。
                     * @return Limit 每页输出实例的数量，参数默认值20，最大值为1000。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页输出实例的数量，参数默认值20，最大值为1000。
                     * @param _limit 每页输出实例的数量，参数默认值20，最大值为1000。
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
                     * 获取分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @return Offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     * @param _offset 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
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
                     * 获取指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。


                     * @return InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。


                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。


                     * @param _instanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。


                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例列表排序依据，枚举值如下所示：<ul><li>projectId：依据项目ID排序。</li><li>createtime：依据实例创建时间排序。</li><li>instancename：依据实例名称排序。</li><li>type：依据实例类型排序。</li><li>curDeadline：依据实例到期时间排序。</li></ul>
                     * @return OrderBy 实例列表排序依据，枚举值如下所示：<ul><li>projectId：依据项目ID排序。</li><li>createtime：依据实例创建时间排序。</li><li>instancename：依据实例名称排序。</li><li>type：依据实例类型排序。</li><li>curDeadline：依据实例到期时间排序。</li></ul>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置实例列表排序依据，枚举值如下所示：<ul><li>projectId：依据项目ID排序。</li><li>createtime：依据实例创建时间排序。</li><li>instancename：依据实例名称排序。</li><li>type：依据实例类型排序。</li><li>curDeadline：依据实例到期时间排序。</li></ul>
                     * @param _orderBy 实例列表排序依据，枚举值如下所示：<ul><li>projectId：依据项目ID排序。</li><li>createtime：依据实例创建时间排序。</li><li>instancename：依据实例名称排序。</li><li>type：依据实例类型排序。</li><li>curDeadline：依据实例到期时间排序。</li></ul>
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
                     * 获取实例排序方式，默认为倒序排序。<ul><li>1：倒序。</li><li>0：顺序。</li></ul>
                     * @return OrderType 实例排序方式，默认为倒序排序。<ul><li>1：倒序。</li><li>0：顺序。</li></ul>
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置实例排序方式，默认为倒序排序。<ul><li>1：倒序。</li><li>0：顺序。</li></ul>
                     * @param _orderType 实例排序方式，默认为倒序排序。<ul><li>1：倒序。</li><li>0：顺序。</li></ul>
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取私有网络 ID 数组。如果不配置该参数或设置数组为空则默认选择基础网络。例如47525。该参数暂时保留，可忽略。请根据 UniqVpcIds 参数格式设置私有网络ID数组。
                     * @return VpcIds 私有网络 ID 数组。如果不配置该参数或设置数组为空则默认选择基础网络。例如47525。该参数暂时保留，可忽略。请根据 UniqVpcIds 参数格式设置私有网络ID数组。
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置私有网络 ID 数组。如果不配置该参数或设置数组为空则默认选择基础网络。例如47525。该参数暂时保留，可忽略。请根据 UniqVpcIds 参数格式设置私有网络ID数组。
                     * @param _vpcIds 私有网络 ID 数组。如果不配置该参数或设置数组为空则默认选择基础网络。例如47525。该参数暂时保留，可忽略。请根据 UniqVpcIds 参数格式设置私有网络ID数组。
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取私有网络所属子网 ID 数组，例如：56854。该参数暂时保留，可忽略。请根据 UniqSubnetIds 参数格式设置私有网络子网 ID 数组。
                     * @return SubnetIds 私有网络所属子网 ID 数组，例如：56854。该参数暂时保留，可忽略。请根据 UniqSubnetIds 参数格式设置私有网络子网 ID 数组。
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置私有网络所属子网 ID 数组，例如：56854。该参数暂时保留，可忽略。请根据 UniqSubnetIds 参数格式设置私有网络子网 ID 数组。
                     * @param _subnetIds 私有网络所属子网 ID 数组，例如：56854。该参数暂时保留，可忽略。请根据 UniqSubnetIds 参数格式设置私有网络子网 ID 数组。
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取设置模糊查询关键字，支持根据实例名称或实例ID模糊查询实例。
                     * @return SearchKey 设置模糊查询关键字，支持根据实例名称或实例ID模糊查询实例。
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置设置模糊查询关键字，支持根据实例名称或实例ID模糊查询实例。
                     * @param _searchKey 设置模糊查询关键字，支持根据实例名称或实例ID模糊查询实例。
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取项目 ID 组成的数组。
                     * @return ProjectIds 项目 ID 组成的数组。
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置项目 ID 组成的数组。
                     * @param _projectIds 项目 ID 组成的数组。
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
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
                     * 获取私有网络 ID 数组。如果不配置该参数或者设置数组为空则默认选择基础网络，如：vpc-sad23jfdfk。
                     * @return UniqVpcIds 私有网络 ID 数组。如果不配置该参数或者设置数组为空则默认选择基础网络，如：vpc-sad23jfdfk。
                     * 
                     */
                    std::vector<std::string> GetUniqVpcIds() const;

                    /**
                     * 设置私有网络 ID 数组。如果不配置该参数或者设置数组为空则默认选择基础网络，如：vpc-sad23jfdfk。
                     * @param _uniqVpcIds 私有网络 ID 数组。如果不配置该参数或者设置数组为空则默认选择基础网络，如：vpc-sad23jfdfk。
                     * 
                     */
                    void SetUniqVpcIds(const std::vector<std::string>& _uniqVpcIds);

                    /**
                     * 判断参数 UniqVpcIds 是否已赋值
                     * @return UniqVpcIds 是否已赋值
                     * 
                     */
                    bool UniqVpcIdsHasBeenSet() const;

                    /**
                     * 获取私有网络所属子网 ID 数组，如：subnet-fdj24n34j2。
                     * @return UniqSubnetIds 私有网络所属子网 ID 数组，如：subnet-fdj24n34j2。
                     * 
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置私有网络所属子网 ID 数组，如：subnet-fdj24n34j2。
                     * @param _uniqSubnetIds 私有网络所属子网 ID 数组，如：subnet-fdj24n34j2。
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
                     * 获取地域 ID 数组，该参数已经弃用，可通过公共参数Region查询对应地域。
                     * @return RegionIds 地域 ID 数组，该参数已经弃用，可通过公共参数Region查询对应地域。
                     * 
                     */
                    std::vector<int64_t> GetRegionIds() const;

                    /**
                     * 设置地域 ID 数组，该参数已经弃用，可通过公共参数Region查询对应地域。
                     * @param _regionIds 地域 ID 数组，该参数已经弃用，可通过公共参数Region查询对应地域。
                     * 
                     */
                    void SetRegionIds(const std::vector<int64_t>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * @return Status 实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * @param _status 实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例架构版本。<ul><li>1：单机版。</li><li>2：主从版。</li><li>3：集群版。</li></ul>
                     * @return TypeVersion 实例架构版本。<ul><li>1：单机版。</li><li>2：主从版。</li><li>3：集群版。</li></ul>
                     * 
                     */
                    int64_t GetTypeVersion() const;

                    /**
                     * 设置实例架构版本。<ul><li>1：单机版。</li><li>2：主从版。</li><li>3：集群版。</li></ul>
                     * @param _typeVersion 实例架构版本。<ul><li>1：单机版。</li><li>2：主从版。</li><li>3：集群版。</li></ul>
                     * 
                     */
                    void SetTypeVersion(const int64_t& _typeVersion);

                    /**
                     * 判断参数 TypeVersion 是否已赋值
                     * @return TypeVersion 是否已赋值
                     * 
                     */
                    bool TypeVersionHasBeenSet() const;

                    /**
                     * 获取存储引擎信息。可设置为Redis-2.8、Redis-4.0、Redis-5.0、Redis-6.0 或者 CKV。
                     * @return EngineName 存储引擎信息。可设置为Redis-2.8、Redis-4.0、Redis-5.0、Redis-6.0 或者 CKV。
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置存储引擎信息。可设置为Redis-2.8、Redis-4.0、Redis-5.0、Redis-6.0 或者 CKV。
                     * @param _engineName 存储引擎信息。可设置为Redis-2.8、Redis-4.0、Redis-5.0、Redis-6.0 或者 CKV。
                     * 
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * 
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取续费模式。<ul><li>0：手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</ul>
                     * @return AutoRenew 续费模式。<ul><li>0：手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</ul>
                     * 
                     */
                    std::vector<int64_t> GetAutoRenew() const;

                    /**
                     * 设置续费模式。<ul><li>0：手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</ul>
                     * @param _autoRenew 续费模式。<ul><li>0：手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</ul>
                     * 
                     */
                    void SetAutoRenew(const std::vector<int64_t>& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     * @return BillingMode 计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     * 
                     */
                    std::string GetBillingMode() const;

                    /**
                     * 设置计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     * @param _billingMode 计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     * 
                     */
                    void SetBillingMode(const std::string& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取实例类型。
- 2：Redis 2.8内存版（标准架构）。
- 3：CKV 3.2内存版（标准架构）。
- 4：CKV 3.2内存版（集群架构）。
- 5：Redis 2.8内存版（单机）。
- 6：Redis 4.0内存版（标准架构）。
- 7：Redis 4.0内存版（集群架构）。
- 8：Redis 5.0内存版（标准架构）。
- 9：Redis 5.0内存版（集群架构）。
- 15：Redis 6.2内存版（标准架构）。
- 16：Redis 6.2内存版（集群架构）。
                     * @return Type 实例类型。
- 2：Redis 2.8内存版（标准架构）。
- 3：CKV 3.2内存版（标准架构）。
- 4：CKV 3.2内存版（集群架构）。
- 5：Redis 2.8内存版（单机）。
- 6：Redis 4.0内存版（标准架构）。
- 7：Redis 4.0内存版（集群架构）。
- 8：Redis 5.0内存版（标准架构）。
- 9：Redis 5.0内存版（集群架构）。
- 15：Redis 6.2内存版（标准架构）。
- 16：Redis 6.2内存版（集群架构）。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置实例类型。
- 2：Redis 2.8内存版（标准架构）。
- 3：CKV 3.2内存版（标准架构）。
- 4：CKV 3.2内存版（集群架构）。
- 5：Redis 2.8内存版（单机）。
- 6：Redis 4.0内存版（标准架构）。
- 7：Redis 4.0内存版（集群架构）。
- 8：Redis 5.0内存版（标准架构）。
- 9：Redis 5.0内存版（集群架构）。
- 15：Redis 6.2内存版（标准架构）。
- 16：Redis 6.2内存版（集群架构）。
                     * @param _type 实例类型。
- 2：Redis 2.8内存版（标准架构）。
- 3：CKV 3.2内存版（标准架构）。
- 4：CKV 3.2内存版（集群架构）。
- 5：Redis 2.8内存版（单机）。
- 6：Redis 4.0内存版（标准架构）。
- 7：Redis 4.0内存版（集群架构）。
- 8：Redis 5.0内存版（标准架构）。
- 9：Redis 5.0内存版（集群架构）。
- 15：Redis 6.2内存版（标准架构）。
- 16：Redis 6.2内存版（集群架构）。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取设置搜索关键字数组，可根据实例ID、实例名称、完整IP地址查询实例。
                     * @return SearchKeys 设置搜索关键字数组，可根据实例ID、实例名称、完整IP地址查询实例。
                     * 
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置设置搜索关键字数组，可根据实例ID、实例名称、完整IP地址查询实例。
                     * @param _searchKeys 设置搜索关键字数组，可根据实例ID、实例名称、完整IP地址查询实例。
                     * 
                     */
                    void SetSearchKeys(const std::vector<std::string>& _searchKeys);

                    /**
                     * 判断参数 SearchKeys 是否已赋值
                     * @return SearchKeys 是否已赋值
                     * 
                     */
                    bool SearchKeysHasBeenSet() const;

                    /**
                     * 获取内部参数，用户可忽略。
                     * @return TypeList 内部参数，用户可忽略。
                     * 
                     */
                    std::vector<int64_t> GetTypeList() const;

                    /**
                     * 设置内部参数，用户可忽略。
                     * @param _typeList 内部参数，用户可忽略。
                     * 
                     */
                    void SetTypeList(const std::vector<int64_t>& _typeList);

                    /**
                     * 判断参数 TypeList 是否已赋值
                     * @return TypeList 是否已赋值
                     * 
                     */
                    bool TypeListHasBeenSet() const;

                    /**
                     * 获取内部参数，用户可忽略。
                     * @return MonitorVersion 内部参数，用户可忽略。
                     * 
                     */
                    std::string GetMonitorVersion() const;

                    /**
                     * 设置内部参数，用户可忽略。
                     * @param _monitorVersion 内部参数，用户可忽略。
                     * 
                     */
                    void SetMonitorVersion(const std::string& _monitorVersion);

                    /**
                     * 判断参数 MonitorVersion 是否已赋值
                     * @return MonitorVersion 是否已赋值
                     * 
                     */
                    bool MonitorVersionHasBeenSet() const;

                    /**
                     * 获取根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。
                     * @return InstanceTags 根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。
                     * 
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。
                     * @param _instanceTags 根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。
                     * 
                     */
                    void SetInstanceTags(const std::vector<InstanceTagInfo>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * 
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。
                     * @return TagKeys 根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。
                     * @param _tagKeys 根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。
                     * 
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     * 
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取实例的产品版本。如果该参数不配置或者数组设置为空值，则默认不依据此参数过滤实例。<ul><li>local：本地盘版。</li><li>cdc：独享集群版。</li></ul>
                     * @return ProductVersions 实例的产品版本。如果该参数不配置或者数组设置为空值，则默认不依据此参数过滤实例。<ul><li>local：本地盘版。</li><li>cdc：独享集群版。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetProductVersions() const;

                    /**
                     * 设置实例的产品版本。如果该参数不配置或者数组设置为空值，则默认不依据此参数过滤实例。<ul><li>local：本地盘版。</li><li>cdc：独享集群版。</li></ul>
                     * @param _productVersions 实例的产品版本。如果该参数不配置或者数组设置为空值，则默认不依据此参数过滤实例。<ul><li>local：本地盘版。</li><li>cdc：独享集群版。</li></ul>
                     * 
                     */
                    void SetProductVersions(const std::vector<std::string>& _productVersions);

                    /**
                     * 判断参数 ProductVersions 是否已赋值
                     * @return ProductVersions 是否已赋值
                     * 
                     */
                    bool ProductVersionsHasBeenSet() const;

                    /**
                     * 获取批量查询指定的实例 ID，返回结果已 Limit 限制为主。
                     * @return InstanceIds 批量查询指定的实例 ID，返回结果已 Limit 限制为主。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置批量查询指定的实例 ID，返回结果已 Limit 限制为主。
                     * @param _instanceIds 批量查询指定的实例 ID，返回结果已 Limit 限制为主。
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
                     * 获取可用区模式。<ul><li>singleaz：单可用区。</li><li>multiaz：多可用区。</li></ul>
                     * @return AzMode 可用区模式。<ul><li>singleaz：单可用区。</li><li>multiaz：多可用区。</li></ul>
                     * 
                     */
                    std::string GetAzMode() const;

                    /**
                     * 设置可用区模式。<ul><li>singleaz：单可用区。</li><li>multiaz：多可用区。</li></ul>
                     * @param _azMode 可用区模式。<ul><li>singleaz：单可用区。</li><li>multiaz：多可用区。</li></ul>
                     * 
                     */
                    void SetAzMode(const std::string& _azMode);

                    /**
                     * 判断参数 AzMode 是否已赋值
                     * @return AzMode 是否已赋值
                     * 
                     */
                    bool AzModeHasBeenSet() const;

                private:

                    /**
                     * 每页输出实例的数量，参数默认值20，最大值为1000。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。


                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例列表排序依据，枚举值如下所示：<ul><li>projectId：依据项目ID排序。</li><li>createtime：依据实例创建时间排序。</li><li>instancename：依据实例名称排序。</li><li>type：依据实例类型排序。</li><li>curDeadline：依据实例到期时间排序。</li></ul>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 实例排序方式，默认为倒序排序。<ul><li>1：倒序。</li><li>0：顺序。</li></ul>
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 私有网络 ID 数组。如果不配置该参数或设置数组为空则默认选择基础网络。例如47525。该参数暂时保留，可忽略。请根据 UniqVpcIds 参数格式设置私有网络ID数组。
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * 私有网络所属子网 ID 数组，例如：56854。该参数暂时保留，可忽略。请根据 UniqSubnetIds 参数格式设置私有网络子网 ID 数组。
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 设置模糊查询关键字，支持根据实例名称或实例ID模糊查询实例。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 项目 ID 组成的数组。
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 私有网络 ID 数组。如果不配置该参数或者设置数组为空则默认选择基础网络，如：vpc-sad23jfdfk。
                     */
                    std::vector<std::string> m_uniqVpcIds;
                    bool m_uniqVpcIdsHasBeenSet;

                    /**
                     * 私有网络所属子网 ID 数组，如：subnet-fdj24n34j2。
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * 地域 ID 数组，该参数已经弃用，可通过公共参数Region查询对应地域。
                     */
                    std::vector<int64_t> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * 实例状态。<ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例架构版本。<ul><li>1：单机版。</li><li>2：主从版。</li><li>3：集群版。</li></ul>
                     */
                    int64_t m_typeVersion;
                    bool m_typeVersionHasBeenSet;

                    /**
                     * 存储引擎信息。可设置为Redis-2.8、Redis-4.0、Redis-5.0、Redis-6.0 或者 CKV。
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * 续费模式。<ul><li>0：手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</ul>
                     */
                    std::vector<int64_t> m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 计费模式。<ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     */
                    std::string m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * 实例类型。
- 2：Redis 2.8内存版（标准架构）。
- 3：CKV 3.2内存版（标准架构）。
- 4：CKV 3.2内存版（集群架构）。
- 5：Redis 2.8内存版（单机）。
- 6：Redis 4.0内存版（标准架构）。
- 7：Redis 4.0内存版（集群架构）。
- 8：Redis 5.0内存版（标准架构）。
- 9：Redis 5.0内存版（集群架构）。
- 15：Redis 6.2内存版（标准架构）。
- 16：Redis 6.2内存版（集群架构）。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 设置搜索关键字数组，可根据实例ID、实例名称、完整IP地址查询实例。
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * 内部参数，用户可忽略。
                     */
                    std::vector<int64_t> m_typeList;
                    bool m_typeListHasBeenSet;

                    /**
                     * 内部参数，用户可忽略。
                     */
                    std::string m_monitorVersion;
                    bool m_monitorVersionHasBeenSet;

                    /**
                     * 根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * 根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * 实例的产品版本。如果该参数不配置或者数组设置为空值，则默认不依据此参数过滤实例。<ul><li>local：本地盘版。</li><li>cdc：独享集群版。</li></ul>
                     */
                    std::vector<std::string> m_productVersions;
                    bool m_productVersionsHasBeenSet;

                    /**
                     * 批量查询指定的实例 ID，返回结果已 Limit 限制为主。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 可用区模式。<ul><li>singleaz：单可用区。</li><li>multiaz：多可用区。</li></ul>
                     */
                    std::string m_azMode;
                    bool m_azModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_
