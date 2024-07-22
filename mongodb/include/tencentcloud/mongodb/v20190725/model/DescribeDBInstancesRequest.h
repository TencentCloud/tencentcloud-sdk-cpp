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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/TagInfo.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
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
                     * 获取实例 ID 列表。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @return InstanceIds 实例 ID 列表。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID 列表。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @param _instanceIds 实例 ID 列表。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
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
                     * 获取指定查询的实例类型。取值范围如下：<ul><li>0：所有实例。</li><li>1：正式实例。</li><li>3：只读实例。</li><li>4：灾备实例。</li></ul>
                     * @return InstanceType 指定查询的实例类型。取值范围如下：<ul><li>0：所有实例。</li><li>1：正式实例。</li><li>3：只读实例。</li><li>4：灾备实例。</li></ul>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置指定查询的实例类型。取值范围如下：<ul><li>0：所有实例。</li><li>1：正式实例。</li><li>3：只读实例。</li><li>4：灾备实例。</li></ul>
                     * @param _instanceType 指定查询的实例类型。取值范围如下：<ul><li>0：所有实例。</li><li>1：正式实例。</li><li>3：只读实例。</li><li>4：灾备实例。</li></ul>
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取指定所查询实例的集群类型，取值范围如下：<ul><li>0：副本集实例。</li><li>1：分片实例。</li><li>-1：副本集与分片实例。</li></ul>
                     * @return ClusterType 指定所查询实例的集群类型，取值范围如下：<ul><li>0：副本集实例。</li><li>1：分片实例。</li><li>-1：副本集与分片实例。</li></ul>
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置指定所查询实例的集群类型，取值范围如下：<ul><li>0：副本集实例。</li><li>1：分片实例。</li><li>-1：副本集与分片实例。</li></ul>
                     * @param _clusterType 指定所查询实例的集群类型，取值范围如下：<ul><li>0：副本集实例。</li><li>1：分片实例。</li><li>-1：副本集与分片实例。</li></ul>
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取指定所查询实例的当前状态，取值范围如下所示：<ul><li>0：待初始化。</li><li>1：流程处理中，例如：变更规格、参数修改等。</li><li>2：实例正常运行中。</li><li>-2：实例已过期。</li></ul>
                     * @return Status 指定所查询实例的当前状态，取值范围如下所示：<ul><li>0：待初始化。</li><li>1：流程处理中，例如：变更规格、参数修改等。</li><li>2：实例正常运行中。</li><li>-2：实例已过期。</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置指定所查询实例的当前状态，取值范围如下所示：<ul><li>0：待初始化。</li><li>1：流程处理中，例如：变更规格、参数修改等。</li><li>2：实例正常运行中。</li><li>-2：实例已过期。</li></ul>
                     * @param _status 指定所查询实例的当前状态，取值范围如下所示：<ul><li>0：待初始化。</li><li>1：流程处理中，例如：变更规格、参数修改等。</li><li>2：实例正常运行中。</li><li>-2：实例已过期。</li></ul>
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
                     * 获取私有网络的 ID。
- 基础网络则无需配置该参数。
- 请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表中，单击私有网络名称，在**私有网络**页面获取其 ID。
                     * @return VpcId 私有网络的 ID。
- 基础网络则无需配置该参数。
- 请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表中，单击私有网络名称，在**私有网络**页面获取其 ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络的 ID。
- 基础网络则无需配置该参数。
- 请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表中，单击私有网络名称，在**私有网络**页面获取其 ID。
                     * @param _vpcId 私有网络的 ID。
- 基础网络则无需配置该参数。
- 请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表中，单击私有网络名称，在**私有网络**页面获取其 ID。
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
                     * 获取私有网络的子网ID。
- 基础网络则无需配置该参数。
- 请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表中，单击私有网络名称，在**私有网络**页面获取其子网 ID。
                     * @return SubnetId 私有网络的子网ID。
- 基础网络则无需配置该参数。
- 请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表中，单击私有网络名称，在**私有网络**页面获取其子网 ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络的子网ID。
- 基础网络则无需配置该参数。
- 请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表中，单击私有网络名称，在**私有网络**页面获取其子网 ID。
                     * @param _subnetId 私有网络的子网ID。
- 基础网络则无需配置该参数。
- 请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表中，单击私有网络名称，在**私有网络**页面获取其子网 ID。
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
                     * 获取指定所查询实例的付费类型，取值范围如下：<ul><li>0：查询按量计费实例。</li><li>1：查询包年包月实例。</li><li>-1：查询按量计费与包年包月实例。</li></ul>
                     * @return PayMode 指定所查询实例的付费类型，取值范围如下：<ul><li>0：查询按量计费实例。</li><li>1：查询包年包月实例。</li><li>-1：查询按量计费与包年包月实例。</li></ul>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置指定所查询实例的付费类型，取值范围如下：<ul><li>0：查询按量计费实例。</li><li>1：查询包年包月实例。</li><li>-1：查询按量计费与包年包月实例。</li></ul>
                     * @param _payMode 指定所查询实例的付费类型，取值范围如下：<ul><li>0：查询按量计费实例。</li><li>1：查询包年包月实例。</li><li>-1：查询按量计费与包年包月实例。</li></ul>
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
                     * 获取单次请求返回的数量。默认值为20，取值范围为[1,100]。
                     * @return Limit 单次请求返回的数量。默认值为20，取值范围为[1,100]。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次请求返回的数量。默认值为20，取值范围为[1,100]。
                     * @param _limit 单次请求返回的数量。默认值为20，取值范围为[1,100]。
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
                     * 获取偏移量，默认值为0。
                     * @return Offset 偏移量，默认值为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0。
                     * @param _offset 偏移量，默认值为0。
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
                     * 获取配置返回结果排序依据的字段。目前支持依据"ProjectId"、"InstanceName"、"CreateTime"排序。
                     * @return OrderBy 配置返回结果排序依据的字段。目前支持依据"ProjectId"、"InstanceName"、"CreateTime"排序。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置配置返回结果排序依据的字段。目前支持依据"ProjectId"、"InstanceName"、"CreateTime"排序。
                     * @param _orderBy 配置返回结果排序依据的字段。目前支持依据"ProjectId"、"InstanceName"、"CreateTime"排序。
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
                     * 获取配置返回结果的排序方式。
- ASC：升序。
- DESC：降序。
                     * @return OrderByType 配置返回结果的排序方式。
- ASC：升序。
- DESC：降序。
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置配置返回结果的排序方式。
- ASC：升序。
- DESC：降序。
                     * @param _orderByType 配置返回结果的排序方式。
- ASC：升序。
- DESC：降序。
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取项目 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在右上角的账户信息下拉菜单中，选择项目管理查询项目。
                     * @return ProjectIds 项目 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在右上角的账户信息下拉菜单中，选择项目管理查询项目。
                     * 
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置项目 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在右上角的账户信息下拉菜单中，选择项目管理查询项目。
                     * @param _projectIds 项目 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在右上角的账户信息下拉菜单中，选择项目管理查询项目。
                     * 
                     */
                    void SetProjectIds(const std::vector<uint64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取指定查询搜索的关键词。支持设置为具体的实例ID、实例名称或者内网 IP 地址。
                     * @return SearchKey 指定查询搜索的关键词。支持设置为具体的实例ID、实例名称或者内网 IP 地址。
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置指定查询搜索的关键词。支持设置为具体的实例ID、实例名称或者内网 IP 地址。
                     * @param _searchKey 指定查询搜索的关键词。支持设置为具体的实例ID、实例名称或者内网 IP 地址。
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
                     * 获取标签信息，包含标签键与标签值。
                     * @return Tags 标签信息，包含标签键与标签值。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签信息，包含标签键与标签值。
                     * @param _tags 标签信息，包含标签键与标签值。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 列表。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 指定查询的实例类型。取值范围如下：<ul><li>0：所有实例。</li><li>1：正式实例。</li><li>3：只读实例。</li><li>4：灾备实例。</li></ul>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 指定所查询实例的集群类型，取值范围如下：<ul><li>0：副本集实例。</li><li>1：分片实例。</li><li>-1：副本集与分片实例。</li></ul>
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 指定所查询实例的当前状态，取值范围如下所示：<ul><li>0：待初始化。</li><li>1：流程处理中，例如：变更规格、参数修改等。</li><li>2：实例正常运行中。</li><li>-2：实例已过期。</li></ul>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 私有网络的 ID。
- 基础网络则无需配置该参数。
- 请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表中，单击私有网络名称，在**私有网络**页面获取其 ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络的子网ID。
- 基础网络则无需配置该参数。
- 请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表中，单击私有网络名称，在**私有网络**页面获取其子网 ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 指定所查询实例的付费类型，取值范围如下：<ul><li>0：查询按量计费实例。</li><li>1：查询包年包月实例。</li><li>-1：查询按量计费与包年包月实例。</li></ul>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 单次请求返回的数量。默认值为20，取值范围为[1,100]。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认值为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 配置返回结果排序依据的字段。目前支持依据"ProjectId"、"InstanceName"、"CreateTime"排序。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 配置返回结果的排序方式。
- ASC：升序。
- DESC：降序。
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 项目 ID。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)，在右上角的账户信息下拉菜单中，选择项目管理查询项目。
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 指定查询搜索的关键词。支持设置为具体的实例ID、实例名称或者内网 IP 地址。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 标签信息，包含标签键与标签值。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
