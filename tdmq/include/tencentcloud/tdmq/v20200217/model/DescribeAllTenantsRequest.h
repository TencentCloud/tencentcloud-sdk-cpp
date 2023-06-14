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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEALLTENANTSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEALLTENANTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeAllTenants请求参数结构体
                */
                class DescribeAllTenantsRequest : public AbstractModel
                {
                public:
                    DescribeAllTenantsRequest();
                    ~DescribeAllTenantsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询偏移量
                     * @return Offset 查询偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询偏移量
                     * @param _offset 查询偏移量
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
                     * 获取查询限制条数
                     * @return Limit 查询限制条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询限制条数
                     * @param _limit 查询限制条数
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
                     * 获取物理集群名称
                     * @return ClusterName 物理集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置物理集群名称
                     * @param _clusterName 物理集群名称
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
                     * 获取虚拟集群ID
                     * @return TenantId 虚拟集群ID
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置虚拟集群ID
                     * @param _tenantId 虚拟集群ID
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取虚拟集群名称
                     * @return TenantName 虚拟集群名称
                     * 
                     */
                    std::string GetTenantName() const;

                    /**
                     * 设置虚拟集群名称
                     * @param _tenantName 虚拟集群名称
                     * 
                     */
                    void SetTenantName(const std::string& _tenantName);

                    /**
                     * 判断参数 TenantName 是否已赋值
                     * @return TenantName 是否已赋值
                     * 
                     */
                    bool TenantNameHasBeenSet() const;

                    /**
                     * 获取协议类型数组
                     * @return Types 协议类型数组
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置协议类型数组
                     * @param _types 协议类型数组
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取排序字段名，支持createTime，updateTime
                     * @return SortBy 排序字段名，支持createTime，updateTime
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段名，支持createTime，updateTime
                     * @param _sortBy 排序字段名，支持createTime，updateTime
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取升序排列ASC，降序排列DESC
                     * @return SortOrder 升序排列ASC，降序排列DESC
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置升序排列ASC，降序排列DESC
                     * @param _sortOrder 升序排列ASC，降序排列DESC
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * 查询偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询限制条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 物理集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 虚拟集群ID
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 虚拟集群名称
                     */
                    std::string m_tenantName;
                    bool m_tenantNameHasBeenSet;

                    /**
                     * 协议类型数组
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * 排序字段名，支持createTime，updateTime
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 升序排列ASC，降序排列DESC
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEALLTENANTSREQUEST_H_
