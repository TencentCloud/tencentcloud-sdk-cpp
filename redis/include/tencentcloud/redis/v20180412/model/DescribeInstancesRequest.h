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
                     * 获取<p>每页输出实例的数量，参数默认值20，最大值为1000。</p>
                     * @return Limit <p>每页输出实例的数量，参数默认值20，最大值为1000。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页输出实例的数量，参数默认值20，最大值为1000。</p>
                     * @param _limit <p>每页输出实例的数量，参数默认值20，最大值为1000。</p>
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
                     * 获取<p>分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。</p>
                     * @return Offset <p>分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。</p>
                     * @param _offset <p>分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。</p>
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
                     * 获取<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>实例列表排序依据，枚举值如下所示：</p><ul><li>projectId：依据项目ID排序。</li><li>createtime：依据实例创建时间排序。</li><li>instancename：依据实例名称排序。</li><li>type：依据实例类型排序。</li><li>curDeadline：依据实例到期时间排序。</li></ul>
                     * @return OrderBy <p>实例列表排序依据，枚举值如下所示：</p><ul><li>projectId：依据项目ID排序。</li><li>createtime：依据实例创建时间排序。</li><li>instancename：依据实例名称排序。</li><li>type：依据实例类型排序。</li><li>curDeadline：依据实例到期时间排序。</li></ul>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>实例列表排序依据，枚举值如下所示：</p><ul><li>projectId：依据项目ID排序。</li><li>createtime：依据实例创建时间排序。</li><li>instancename：依据实例名称排序。</li><li>type：依据实例类型排序。</li><li>curDeadline：依据实例到期时间排序。</li></ul>
                     * @param _orderBy <p>实例列表排序依据，枚举值如下所示：</p><ul><li>projectId：依据项目ID排序。</li><li>createtime：依据实例创建时间排序。</li><li>instancename：依据实例名称排序。</li><li>type：依据实例类型排序。</li><li>curDeadline：依据实例到期时间排序。</li></ul>
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
                     * 获取<p>实例排序方式，默认为倒序排序。</p><ul><li>1：倒序。</li><li>0：顺序。</li></ul>
                     * @return OrderType <p>实例排序方式，默认为倒序排序。</p><ul><li>1：倒序。</li><li>0：顺序。</li></ul>
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置<p>实例排序方式，默认为倒序排序。</p><ul><li>1：倒序。</li><li>0：顺序。</li></ul>
                     * @param _orderType <p>实例排序方式，默认为倒序排序。</p><ul><li>1：倒序。</li><li>0：顺序。</li></ul>
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
                     * 获取<p>私有网络 ID 数组。如果不配置该参数或设置数组为空则默认选择基础网络。例如47525。该参数暂时保留，可忽略。请根据 UniqVpcIds 参数格式设置私有网络ID数组。</p>
                     * @return VpcIds <p>私有网络 ID 数组。如果不配置该参数或设置数组为空则默认选择基础网络。例如47525。该参数暂时保留，可忽略。请根据 UniqVpcIds 参数格式设置私有网络ID数组。</p>
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置<p>私有网络 ID 数组。如果不配置该参数或设置数组为空则默认选择基础网络。例如47525。该参数暂时保留，可忽略。请根据 UniqVpcIds 参数格式设置私有网络ID数组。</p>
                     * @param _vpcIds <p>私有网络 ID 数组。如果不配置该参数或设置数组为空则默认选择基础网络。例如47525。该参数暂时保留，可忽略。请根据 UniqVpcIds 参数格式设置私有网络ID数组。</p>
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
                     * 获取<p>私有网络所属子网 ID 数组，例如：56854。该参数暂时保留，可忽略。请根据 UniqSubnetIds 参数格式设置私有网络子网 ID 数组。</p>
                     * @return SubnetIds <p>私有网络所属子网 ID 数组，例如：56854。该参数暂时保留，可忽略。请根据 UniqSubnetIds 参数格式设置私有网络子网 ID 数组。</p>
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置<p>私有网络所属子网 ID 数组，例如：56854。该参数暂时保留，可忽略。请根据 UniqSubnetIds 参数格式设置私有网络子网 ID 数组。</p>
                     * @param _subnetIds <p>私有网络所属子网 ID 数组，例如：56854。该参数暂时保留，可忽略。请根据 UniqSubnetIds 参数格式设置私有网络子网 ID 数组。</p>
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
                     * 获取<p>设置模糊查询关键字段，仅实例名称支持模糊查询。</p>
                     * @return SearchKey <p>设置模糊查询关键字段，仅实例名称支持模糊查询。</p>
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>设置模糊查询关键字段，仅实例名称支持模糊查询。</p>
                     * @param _searchKey <p>设置模糊查询关键字段，仅实例名称支持模糊查询。</p>
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
                     * 获取<p>项目 ID 组成的数组。</p>
                     * @return ProjectIds <p>项目 ID 组成的数组。</p>
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置<p>项目 ID 组成的数组。</p>
                     * @param _projectIds <p>项目 ID 组成的数组。</p>
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
                     * 获取<p>实例名称。</p>
                     * @return InstanceName <p>实例名称。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p>
                     * @param _instanceName <p>实例名称。</p>
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
                     * 获取<p>私有网络 ID 数组。如果不配置该参数或者设置数组为空则默认选择基础网络，如：vpc-sad23jfdfk。</p>
                     * @return UniqVpcIds <p>私有网络 ID 数组。如果不配置该参数或者设置数组为空则默认选择基础网络，如：vpc-sad23jfdfk。</p>
                     * 
                     */
                    std::vector<std::string> GetUniqVpcIds() const;

                    /**
                     * 设置<p>私有网络 ID 数组。如果不配置该参数或者设置数组为空则默认选择基础网络，如：vpc-sad23jfdfk。</p>
                     * @param _uniqVpcIds <p>私有网络 ID 数组。如果不配置该参数或者设置数组为空则默认选择基础网络，如：vpc-sad23jfdfk。</p>
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
                     * 获取<p>私有网络所属子网 ID 数组，如：subnet-fdj24n34j2。</p>
                     * @return UniqSubnetIds <p>私有网络所属子网 ID 数组，如：subnet-fdj24n34j2。</p>
                     * 
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置<p>私有网络所属子网 ID 数组，如：subnet-fdj24n34j2。</p>
                     * @param _uniqSubnetIds <p>私有网络所属子网 ID 数组，如：subnet-fdj24n34j2。</p>
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
                     * 获取<p>地域 ID 数组，该参数已经弃用，可通过公共参数Region查询对应地域。</p>
                     * @return RegionIds <p>地域 ID 数组，该参数已经弃用，可通过公共参数Region查询对应地域。</p>
                     * 
                     */
                    std::vector<int64_t> GetRegionIds() const;

                    /**
                     * 设置<p>地域 ID 数组，该参数已经弃用，可通过公共参数Region查询对应地域。</p>
                     * @param _regionIds <p>地域 ID 数组，该参数已经弃用，可通过公共参数Region查询对应地域。</p>
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
                     * 获取<p>实例状态。</p><ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * @return Status <p>实例状态。</p><ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置<p>实例状态。</p><ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     * @param _status <p>实例状态。</p><ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
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
                     * 获取<p>实例架构版本。</p><ul><li>1：单机版。</li><li>2：主从版。</li><li>3：集群版。</li></ul>
                     * @return TypeVersion <p>实例架构版本。</p><ul><li>1：单机版。</li><li>2：主从版。</li><li>3：集群版。</li></ul>
                     * 
                     */
                    int64_t GetTypeVersion() const;

                    /**
                     * 设置<p>实例架构版本。</p><ul><li>1：单机版。</li><li>2：主从版。</li><li>3：集群版。</li></ul>
                     * @param _typeVersion <p>实例架构版本。</p><ul><li>1：单机版。</li><li>2：主从版。</li><li>3：集群版。</li></ul>
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
                     * 获取<p>存储引擎信息。可设置为Redis-2.8、Redis-4.0、Redis-5.0、Redis-6.0 或者 CKV。</p>
                     * @return EngineName <p>存储引擎信息。可设置为Redis-2.8、Redis-4.0、Redis-5.0、Redis-6.0 或者 CKV。</p>
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置<p>存储引擎信息。可设置为Redis-2.8、Redis-4.0、Redis-5.0、Redis-6.0 或者 CKV。</p>
                     * @param _engineName <p>存储引擎信息。可设置为Redis-2.8、Redis-4.0、Redis-5.0、Redis-6.0 或者 CKV。</p>
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
                     * 获取<p>续费模式。</p><ul><li>0：手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul>
                     * @return AutoRenew <p>续费模式。</p><ul><li>0：手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetAutoRenew() const;

                    /**
                     * 设置<p>续费模式。</p><ul><li>0：手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul>
                     * @param _autoRenew <p>续费模式。</p><ul><li>0：手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul>
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
                     * 获取<p>计费模式。</p><ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     * @return BillingMode <p>计费模式。</p><ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     * 
                     */
                    std::string GetBillingMode() const;

                    /**
                     * 设置<p>计费模式。</p><ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     * @param _billingMode <p>计费模式。</p><ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
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
                     * 获取<p>实例类型。</p><ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>5：Redis 2.8 内存版（单机）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li><li>200:Memcached 1.6 内存版（集群架构）。</li></ul>
                     * @return Type <p>实例类型。</p><ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>5：Redis 2.8 内存版（单机）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li><li>200:Memcached 1.6 内存版（集群架构）。</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>实例类型。</p><ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>5：Redis 2.8 内存版（单机）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li><li>200:Memcached 1.6 内存版（集群架构）。</li></ul>
                     * @param _type <p>实例类型。</p><ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>5：Redis 2.8 内存版（单机）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li><li>200:Memcached 1.6 内存版（集群架构）。</li></ul>
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
                     * 获取<p>该参数为数组类型，支持配置实例名称、实例 ID、IP地址，其中实例名称为模糊匹配，实例 ID 和 IP 地址精确匹配。</p><ul><li>数组中每一个元素取并集进行匹配查询。</li><li><strong>InstanceId</strong> 与 <strong>SearchKeys</strong> 同时配置，则取二者交集进行匹配查询。</li></ul>
                     * @return SearchKeys <p>该参数为数组类型，支持配置实例名称、实例 ID、IP地址，其中实例名称为模糊匹配，实例 ID 和 IP 地址精确匹配。</p><ul><li>数组中每一个元素取并集进行匹配查询。</li><li><strong>InstanceId</strong> 与 <strong>SearchKeys</strong> 同时配置，则取二者交集进行匹配查询。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetSearchKeys() const;

                    /**
                     * 设置<p>该参数为数组类型，支持配置实例名称、实例 ID、IP地址，其中实例名称为模糊匹配，实例 ID 和 IP 地址精确匹配。</p><ul><li>数组中每一个元素取并集进行匹配查询。</li><li><strong>InstanceId</strong> 与 <strong>SearchKeys</strong> 同时配置，则取二者交集进行匹配查询。</li></ul>
                     * @param _searchKeys <p>该参数为数组类型，支持配置实例名称、实例 ID、IP地址，其中实例名称为模糊匹配，实例 ID 和 IP 地址精确匹配。</p><ul><li>数组中每一个元素取并集进行匹配查询。</li><li><strong>InstanceId</strong> 与 <strong>SearchKeys</strong> 同时配置，则取二者交集进行匹配查询。</li></ul>
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
                     * 获取<p>内部参数，用户可忽略。</p>
                     * @return TypeList <p>内部参数，用户可忽略。</p>
                     * 
                     */
                    std::vector<int64_t> GetTypeList() const;

                    /**
                     * 设置<p>内部参数，用户可忽略。</p>
                     * @param _typeList <p>内部参数，用户可忽略。</p>
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
                     * 获取<p>内部参数，用户可忽略。</p>
                     * @return MonitorVersion <p>内部参数，用户可忽略。</p>
                     * 
                     */
                    std::string GetMonitorVersion() const;

                    /**
                     * 设置<p>内部参数，用户可忽略。</p>
                     * @param _monitorVersion <p>内部参数，用户可忽略。</p>
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
                     * 获取<p>根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。</p>
                     * @return InstanceTags <p>根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。</p>
                     * 
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置<p>根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。</p>
                     * @param _instanceTags <p>根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。</p>
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
                     * 获取<p>根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。</p>
                     * @return TagKeys <p>根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。</p>
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置<p>根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。</p>
                     * @param _tagKeys <p>根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。</p>
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
                     * 获取<p>实例的部署类型。如果该参数不配置或者数组设置为空值，则默认不依据此参数过滤实例。</p><p>枚举值：</p><ul><li>local： 通用 I 型。</li><li>localv2： 通用 II 型。</li><li>cdc： 独享集群型。</li></ul>
                     * @return ProductVersions <p>实例的部署类型。如果该参数不配置或者数组设置为空值，则默认不依据此参数过滤实例。</p><p>枚举值：</p><ul><li>local： 通用 I 型。</li><li>localv2： 通用 II 型。</li><li>cdc： 独享集群型。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetProductVersions() const;

                    /**
                     * 设置<p>实例的部署类型。如果该参数不配置或者数组设置为空值，则默认不依据此参数过滤实例。</p><p>枚举值：</p><ul><li>local： 通用 I 型。</li><li>localv2： 通用 II 型。</li><li>cdc： 独享集群型。</li></ul>
                     * @param _productVersions <p>实例的部署类型。如果该参数不配置或者数组设置为空值，则默认不依据此参数过滤实例。</p><p>枚举值：</p><ul><li>local： 通用 I 型。</li><li>localv2： 通用 II 型。</li><li>cdc： 独享集群型。</li></ul>
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
                     * 获取<p>批量查询指定的实例 ID，返回结果已 Limit 限制为主。</p>
                     * @return InstanceIds <p>批量查询指定的实例 ID，返回结果已 Limit 限制为主。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>批量查询指定的实例 ID，返回结果已 Limit 限制为主。</p>
                     * @param _instanceIds <p>批量查询指定的实例 ID，返回结果已 Limit 限制为主。</p>
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
                     * 获取<p>可用区模式。</p><ul><li>singleaz：单可用区。</li><li>multiaz：多可用区。</li></ul>
                     * @return AzMode <p>可用区模式。</p><ul><li>singleaz：单可用区。</li><li>multiaz：多可用区。</li></ul>
                     * 
                     */
                    std::string GetAzMode() const;

                    /**
                     * 设置<p>可用区模式。</p><ul><li>singleaz：单可用区。</li><li>multiaz：多可用区。</li></ul>
                     * @param _azMode <p>可用区模式。</p><ul><li>singleaz：单可用区。</li><li>multiaz：多可用区。</li></ul>
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
                     * <p>每页输出实例的数量，参数默认值20，最大值为1000。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例列表排序依据，枚举值如下所示：</p><ul><li>projectId：依据项目ID排序。</li><li>createtime：依据实例创建时间排序。</li><li>instancename：依据实例名称排序。</li><li>type：依据实例类型排序。</li><li>curDeadline：依据实例到期时间排序。</li></ul>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>实例排序方式，默认为倒序排序。</p><ul><li>1：倒序。</li><li>0：顺序。</li></ul>
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>私有网络 ID 数组。如果不配置该参数或设置数组为空则默认选择基础网络。例如47525。该参数暂时保留，可忽略。请根据 UniqVpcIds 参数格式设置私有网络ID数组。</p>
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * <p>私有网络所属子网 ID 数组，例如：56854。该参数暂时保留，可忽略。请根据 UniqSubnetIds 参数格式设置私有网络子网 ID 数组。</p>
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * <p>设置模糊查询关键字段，仅实例名称支持模糊查询。</p>
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * <p>项目 ID 组成的数组。</p>
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>实例名称。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>私有网络 ID 数组。如果不配置该参数或者设置数组为空则默认选择基础网络，如：vpc-sad23jfdfk。</p>
                     */
                    std::vector<std::string> m_uniqVpcIds;
                    bool m_uniqVpcIdsHasBeenSet;

                    /**
                     * <p>私有网络所属子网 ID 数组，如：subnet-fdj24n34j2。</p>
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * <p>地域 ID 数组，该参数已经弃用，可通过公共参数Region查询对应地域。</p>
                     */
                    std::vector<int64_t> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * <p>实例状态。</p><ul><li>0：待初始化。</li><li>1：流程中。</li><li>2：运行中。</li><li>-2：已隔离。</li><li>-3：待删除。</li></ul>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例架构版本。</p><ul><li>1：单机版。</li><li>2：主从版。</li><li>3：集群版。</li></ul>
                     */
                    int64_t m_typeVersion;
                    bool m_typeVersionHasBeenSet;

                    /**
                     * <p>存储引擎信息。可设置为Redis-2.8、Redis-4.0、Redis-5.0、Redis-6.0 或者 CKV。</p>
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * <p>续费模式。</p><ul><li>0：手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul>
                     */
                    std::vector<int64_t> m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>计费模式。</p><ul><li>postpaid：按量计费。</li><li>prepaid：包年包月。</li></ul>
                     */
                    std::string m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>实例类型。</p><ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>5：Redis 2.8 内存版（单机）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li><li>200:Memcached 1.6 内存版（集群架构）。</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>该参数为数组类型，支持配置实例名称、实例 ID、IP地址，其中实例名称为模糊匹配，实例 ID 和 IP 地址精确匹配。</p><ul><li>数组中每一个元素取并集进行匹配查询。</li><li><strong>InstanceId</strong> 与 <strong>SearchKeys</strong> 同时配置，则取二者交集进行匹配查询。</li></ul>
                     */
                    std::vector<std::string> m_searchKeys;
                    bool m_searchKeysHasBeenSet;

                    /**
                     * <p>内部参数，用户可忽略。</p>
                     */
                    std::vector<int64_t> m_typeList;
                    bool m_typeListHasBeenSet;

                    /**
                     * <p>内部参数，用户可忽略。</p>
                     */
                    std::string m_monitorVersion;
                    bool m_monitorVersionHasBeenSet;

                    /**
                     * <p>根据标签的 Key 和 Value 筛选资源。该参数不配置或者数组设置为空值，则不根据标签进行过滤。</p>
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>根据标签的 Key 筛选资源，该参数不配置或者数组设置为空值，则不根据标签Key进行过滤。</p>
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * <p>实例的部署类型。如果该参数不配置或者数组设置为空值，则默认不依据此参数过滤实例。</p><p>枚举值：</p><ul><li>local： 通用 I 型。</li><li>localv2： 通用 II 型。</li><li>cdc： 独享集群型。</li></ul>
                     */
                    std::vector<std::string> m_productVersions;
                    bool m_productVersionsHasBeenSet;

                    /**
                     * <p>批量查询指定的实例 ID，返回结果已 Limit 限制为主。</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>可用区模式。</p><ul><li>singleaz：单可用区。</li><li>multiaz：多可用区。</li></ul>
                     */
                    std::string m_azMode;
                    bool m_azModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESREQUEST_H_
