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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeInstanceList请求参数结构体
                */
                class DescribeInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeInstanceListRequest();
                    ~DescribeInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页返回数量
                     * @return Limit 分页返回数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回数量
                     * @param _limit 分页返回数量
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
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
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
                     * 获取排序字段，createTime,instancename两者之一
                     * @return OrderBy 排序字段，createTime,instancename两者之一
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，createTime,instancename两者之一
                     * @param _orderBy 排序字段，createTime,instancename两者之一
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
                     * 获取排序规则，desc,asc两者之一
                     * @return SortBy 排序规则，desc,asc两者之一
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序规则，desc,asc两者之一
                     * @param _sortBy 排序规则，desc,asc两者之一
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
                     * 获取按产品过滤，0:CDB, 1:TDSQL
                     * @return ProductId 按产品过滤，0:CDB, 1:TDSQL
                     * 
                     */
                    std::vector<int64_t> GetProductId() const;

                    /**
                     * 设置按产品过滤，0:CDB, 1:TDSQL
                     * @param _productId 按产品过滤，0:CDB, 1:TDSQL
                     * 
                     */
                    void SetProductId(const std::vector<int64_t>& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取按实例ID过滤
                     * @return InstanceId 按实例ID过滤
                     * 
                     */
                    std::vector<std::string> GetInstanceId() const;

                    /**
                     * 设置按实例ID过滤
                     * @param _instanceId 按实例ID过滤
                     * 
                     */
                    void SetInstanceId(const std::vector<std::string>& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取按实例名称过滤
                     * @return InstanceName 按实例名称过滤
                     * 
                     */
                    std::vector<std::string> GetInstanceName() const;

                    /**
                     * 设置按实例名称过滤
                     * @param _instanceName 按实例名称过滤
                     * 
                     */
                    void SetInstanceName(const std::vector<std::string>& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取按金融围笼ID过滤
                     * @return FenceId 按金融围笼ID过滤
                     * 
                     */
                    std::vector<std::string> GetFenceId() const;

                    /**
                     * 设置按金融围笼ID过滤
                     * @param _fenceId 按金融围笼ID过滤
                     * 
                     */
                    void SetFenceId(const std::vector<std::string>& _fenceId);

                    /**
                     * 判断参数 FenceId 是否已赋值
                     * @return FenceId 是否已赋值
                     * 
                     */
                    bool FenceIdHasBeenSet() const;

                    /**
                     * 获取按实例状态过滤, -1:已隔离, 0:创建中, 1:运行中, 2:扩容中, 3:删除中
                     * @return Status 按实例状态过滤, -1:已隔离, 0:创建中, 1:运行中, 2:扩容中, 3:删除中
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置按实例状态过滤, -1:已隔离, 0:创建中, 1:运行中, 2:扩容中, 3:删除中
                     * @param _status 按实例状态过滤, -1:已隔离, 0:创建中, 1:运行中, 2:扩容中, 3:删除中
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
                     * 获取按所属集群ID过滤
                     * @return ClusterId 按所属集群ID过滤
                     * 
                     */
                    std::vector<std::string> GetClusterId() const;

                    /**
                     * 设置按所属集群ID过滤
                     * @param _clusterId 按所属集群ID过滤
                     * 
                     */
                    void SetClusterId(const std::vector<std::string>& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 分页返回数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段，createTime,instancename两者之一
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序规则，desc,asc两者之一
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 按产品过滤，0:CDB, 1:TDSQL
                     */
                    std::vector<int64_t> m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 按实例ID过滤
                     */
                    std::vector<std::string> m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 按实例名称过滤
                     */
                    std::vector<std::string> m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 按金融围笼ID过滤
                     */
                    std::vector<std::string> m_fenceId;
                    bool m_fenceIdHasBeenSet;

                    /**
                     * 按实例状态过滤, -1:已隔离, 0:创建中, 1:运行中, 2:扩容中, 3:删除中
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 按所属集群ID过滤
                     */
                    std::vector<std::string> m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
