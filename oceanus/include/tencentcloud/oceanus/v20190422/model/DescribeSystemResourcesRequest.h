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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBESYSTEMRESOURCESREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBESYSTEMRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/Filter.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeSystemResources请求参数结构体
                */
                class DescribeSystemResourcesRequest : public AbstractModel
                {
                public:
                    DescribeSystemResourcesRequest();
                    ~DescribeSystemResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的资源ID数组
                     * @return ResourceIds 需要查询的资源ID数组
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置需要查询的资源ID数组
                     * @param ResourceIds 需要查询的资源ID数组
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取偏移量，仅当设置 Limit 参数时有效
                     * @return Offset 偏移量，仅当设置 Limit 参数时有效
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，仅当设置 Limit 参数时有效
                     * @param Offset 偏移量，仅当设置 Limit 参数时有效
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取条数限制，默认返回 20 条
                     * @return Limit 条数限制，默认返回 20 条
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置条数限制，默认返回 20 条
                     * @param Limit 条数限制，默认返回 20 条
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询资源配置列表， 如果不填写，返回该 ResourceIds.N 下所有作业配置列表
                     * @return Filters 查询资源配置列表， 如果不填写，返回该 ResourceIds.N 下所有作业配置列表
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询资源配置列表， 如果不填写，返回该 ResourceIds.N 下所有作业配置列表
                     * @param Filters 查询资源配置列表， 如果不填写，返回该 ResourceIds.N 下所有作业配置列表
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 需要查询的资源ID数组
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 偏移量，仅当设置 Limit 参数时有效
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 条数限制，默认返回 20 条
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询资源配置列表， 如果不填写，返回该 ResourceIds.N 下所有作业配置列表
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBESYSTEMRESOURCESREQUEST_H_
