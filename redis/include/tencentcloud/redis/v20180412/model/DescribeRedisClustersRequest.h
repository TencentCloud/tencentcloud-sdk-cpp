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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREDISCLUSTERSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREDISCLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeRedisClusters请求参数结构体
                */
                class DescribeRedisClustersRequest : public AbstractModel
                {
                public:
                    DescribeRedisClustersRequest();
                    ~DescribeRedisClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Redis独享集群 ID。请登录[专用集群控制台](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1
)切换至**云服务管理**页面，在下拉框选择**云数据库 Redis**，可获取独享集群ID。
                     * @return RedisClusterIds Redis独享集群 ID。请登录[专用集群控制台](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1
)切换至**云服务管理**页面，在下拉框选择**云数据库 Redis**，可获取独享集群ID。
                     * 
                     */
                    std::vector<std::string> GetRedisClusterIds() const;

                    /**
                     * 设置Redis独享集群 ID。请登录[专用集群控制台](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1
)切换至**云服务管理**页面，在下拉框选择**云数据库 Redis**，可获取独享集群ID。
                     * @param _redisClusterIds Redis独享集群 ID。请登录[专用集群控制台](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1
)切换至**云服务管理**页面，在下拉框选择**云数据库 Redis**，可获取独享集群ID。
                     * 
                     */
                    void SetRedisClusterIds(const std::vector<std::string>& _redisClusterIds);

                    /**
                     * 判断参数 RedisClusterIds 是否已赋值
                     * @return RedisClusterIds 是否已赋值
                     * 
                     */
                    bool RedisClusterIdsHasBeenSet() const;

                    /**
                     * 获取集群状态。
- 1：流程。
- 2：运行中。
- 3：已隔离。
                     * @return Status 集群状态。
- 1：流程。
- 2：运行中。
- 3：已隔离。
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置集群状态。
- 1：流程。
- 2：运行中。
- 3：已隔离。
                     * @param _status 集群状态。
- 1：流程。
- 2：运行中。
- 3：已隔离。
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
                     * 获取项目ID数组。请登录[项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     * @return ProjectIds 项目ID数组。请登录[项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置项目ID数组。请登录[项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     * @param _projectIds 项目ID数组。请登录[项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
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
                     * 获取续费模式。
- 0：默认状态，手动续费。
- 1：自动续费。
- 2：明确不自动续费。
                     * @return AutoRenewFlag 续费模式。
- 0：默认状态，手动续费。
- 1：自动续费。
- 2：明确不自动续费。
                     * 
                     */
                    std::vector<int64_t> GetAutoRenewFlag() const;

                    /**
                     * 设置续费模式。
- 0：默认状态，手动续费。
- 1：自动续费。
- 2：明确不自动续费。
                     * @param _autoRenewFlag 续费模式。
- 0：默认状态，手动续费。
- 1：自动续费。
- 2：明确不自动续费。
                     * 
                     */
                    void SetAutoRenewFlag(const std::vector<int64_t>& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Redis 独享集群名称。
                     * @return ClusterName Redis 独享集群名称。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Redis 独享集群名称。
                     * @param _clusterName Redis 独享集群名称。
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
                     * 获取搜索关键词：支持集群 ID、集群名称。
                     * @return SearchKey 搜索关键词：支持集群 ID、集群名称。
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索关键词：支持集群 ID、集群名称。
                     * @param _searchKey 搜索关键词：支持集群 ID、集群名称。
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
                     * 获取分页限制返回大小，不传则默认为20。
                     * @return Limit 分页限制返回大小，不传则默认为20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页限制返回大小，不传则默认为20。
                     * @param _limit 分页限制返回大小，不传则默认为20。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，取Limit整数倍
                     * @return Offset 偏移量，取Limit整数倍
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，取Limit整数倍
                     * @param _offset 偏移量，取Limit整数倍
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取本地专用集群 ID，请登录[专用集群控制台](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1
)实例列表获取集群 ID。
                     * @return DedicatedClusterId 本地专用集群 ID，请登录[专用集群控制台](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1
)实例列表获取集群 ID。
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置本地专用集群 ID，请登录[专用集群控制台](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1
)实例列表获取集群 ID。
                     * @param _dedicatedClusterId 本地专用集群 ID，请登录[专用集群控制台](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1
)实例列表获取集群 ID。
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * Redis独享集群 ID。请登录[专用集群控制台](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1
)切换至**云服务管理**页面，在下拉框选择**云数据库 Redis**，可获取独享集群ID。
                     */
                    std::vector<std::string> m_redisClusterIds;
                    bool m_redisClusterIdsHasBeenSet;

                    /**
                     * 集群状态。
- 1：流程。
- 2：运行中。
- 3：已隔离。
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目ID数组。请登录[项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 续费模式。
- 0：默认状态，手动续费。
- 1：自动续费。
- 2：明确不自动续费。
                     */
                    std::vector<int64_t> m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Redis 独享集群名称。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 搜索关键词：支持集群 ID、集群名称。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 分页限制返回大小，不传则默认为20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，取Limit整数倍
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 本地专用集群 ID，请登录[专用集群控制台](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1
)实例列表获取集群 ID。
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREDISCLUSTERSREQUEST_H_
