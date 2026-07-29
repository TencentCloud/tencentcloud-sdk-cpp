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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMCLUSTERRESOURCESRESPONSE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMCLUSTERRESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/MetaResource.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeDBCustomClusterResources返回参数结构体
                */
                class DescribeDBCustomClusterResourcesResponse : public AbstractModel
                {
                public:
                    DescribeDBCustomClusterResourcesResponse();
                    ~DescribeDBCustomClusterResourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>参与汇总的工作节点总数（不含控制面节点）</p><p>单位：台</p>
                     * @return NodeCount <p>参与汇总的工作节点总数（不含控制面节点）</p><p>单位：台</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取<p>集群所有节点的资源物理总容量之和</p>
                     * @return Capacity <p>集群所有节点的资源物理总容量之和</p>
                     * 
                     */
                    MetaResource GetCapacity() const;

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取<p>集群所有节点的可分配容量之和（= Capacity - 系统预留）</p>
                     * @return Allocatable <p>集群所有节点的可分配容量之和（= Capacity - 系统预留）</p>
                     * 
                     */
                    MetaResource GetAllocatable() const;

                    /**
                     * 判断参数 Allocatable 是否已赋值
                     * @return Allocatable 是否已赋值
                     * 
                     */
                    bool AllocatableHasBeenSet() const;

                    /**
                     * 获取<p>集群所有非终态 Pod 的 requests 申请量之和（含系统 Pod）</p>
                     * @return Requests <p>集群所有非终态 Pod 的 requests 申请量之和（含系统 Pod）</p>
                     * 
                     */
                    MetaResource GetRequests() const;

                    /**
                     * 判断参数 Requests 是否已赋值
                     * @return Requests 是否已赋值
                     * 
                     */
                    bool RequestsHasBeenSet() const;

                    /**
                     * 获取<p>集群所有非终态 Pod 的 limits 上限之和（含系统 Pod，Pods 字段无语义，固定为 0）</p>
                     * @return Limits <p>集群所有非终态 Pod 的 limits 上限之和（含系统 Pod，Pods 字段无语义，固定为 0）</p>
                     * 
                     */
                    MetaResource GetLimits() const;

                    /**
                     * 判断参数 Limits 是否已赋值
                     * @return Limits 是否已赋值
                     * 
                     */
                    bool LimitsHasBeenSet() const;

                    /**
                     * 获取<p>集群可再调度余量（所有节点 max(0, Allocatable - Requests) 累加求和）</p>
                     * @return Available <p>集群可再调度余量（所有节点 max(0, Allocatable - Requests) 累加求和）</p>
                     * 
                     */
                    MetaResource GetAvailable() const;

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * <p>参与汇总的工作节点总数（不含控制面节点）</p><p>单位：台</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>集群所有节点的资源物理总容量之和</p>
                     */
                    MetaResource m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * <p>集群所有节点的可分配容量之和（= Capacity - 系统预留）</p>
                     */
                    MetaResource m_allocatable;
                    bool m_allocatableHasBeenSet;

                    /**
                     * <p>集群所有非终态 Pod 的 requests 申请量之和（含系统 Pod）</p>
                     */
                    MetaResource m_requests;
                    bool m_requestsHasBeenSet;

                    /**
                     * <p>集群所有非终态 Pod 的 limits 上限之和（含系统 Pod，Pods 字段无语义，固定为 0）</p>
                     */
                    MetaResource m_limits;
                    bool m_limitsHasBeenSet;

                    /**
                     * <p>集群可再调度余量（所有节点 max(0, Allocatable - Requests) 累加求和）</p>
                     */
                    MetaResource m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMCLUSTERRESOURCESRESPONSE_H_
