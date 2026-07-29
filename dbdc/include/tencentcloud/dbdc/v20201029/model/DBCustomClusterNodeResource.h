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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DBCUSTOMCLUSTERNODERESOURCE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DBCUSTOMCLUSTERNODERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * DB Custom 集群内节点资源信息。
                */
                class DBCustomClusterNodeResource : public AbstractModel
                {
                public:
                    DBCustomClusterNodeResource();
                    ~DBCustomClusterNodeResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点ID</p>
                     * @return NodeId <p>节点ID</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点ID</p>
                     * @param _nodeId <p>节点ID</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>节点物理资源总容量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Capacity <p>节点物理资源总容量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MetaResource GetCapacity() const;

                    /**
                     * 设置<p>节点物理资源总容量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _capacity <p>节点物理资源总容量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCapacity(const MetaResource& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取<p>节点可分配容量= Capacity - 系统预留</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Allocatable <p>节点可分配容量= Capacity - 系统预留</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MetaResource GetAllocatable() const;

                    /**
                     * 设置<p>节点可分配容量= Capacity - 系统预留</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allocatable <p>节点可分配容量= Capacity - 系统预留</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllocatable(const MetaResource& _allocatable);

                    /**
                     * 判断参数 Allocatable 是否已赋值
                     * @return Allocatable 是否已赋值
                     * 
                     */
                    bool AllocatableHasBeenSet() const;

                    /**
                     * 获取<p>节点上所有非终态 Pod 的 requests 申请量之和（含系统 Pod）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Requests <p>节点上所有非终态 Pod 的 requests 申请量之和（含系统 Pod）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MetaResource GetRequests() const;

                    /**
                     * 设置<p>节点上所有非终态 Pod 的 requests 申请量之和（含系统 Pod）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requests <p>节点上所有非终态 Pod 的 requests 申请量之和（含系统 Pod）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequests(const MetaResource& _requests);

                    /**
                     * 判断参数 Requests 是否已赋值
                     * @return Requests 是否已赋值
                     * 
                     */
                    bool RequestsHasBeenSet() const;

                    /**
                     * 获取<p>节点上所有非终态 Pod 的 limits 上限之和（含系统 Pod）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Limits <p>节点上所有非终态 Pod 的 limits 上限之和（含系统 Pod）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MetaResource GetLimits() const;

                    /**
                     * 设置<p>节点上所有非终态 Pod 的 limits 上限之和（含系统 Pod）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limits <p>节点上所有非终态 Pod 的 limits 上限之和（含系统 Pod）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimits(const MetaResource& _limits);

                    /**
                     * 判断参数 Limits 是否已赋值
                     * @return Limits 是否已赋值
                     * 
                     */
                    bool LimitsHasBeenSet() const;

                    /**
                     * 获取<p>节点可再调度余量 = max(0, Allocatable - Requests)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Available <p>节点可再调度余量 = max(0, Allocatable - Requests)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MetaResource GetAvailable() const;

                    /**
                     * 设置<p>节点可再调度余量 = max(0, Allocatable - Requests)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _available <p>节点可再调度余量 = max(0, Allocatable - Requests)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailable(const MetaResource& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * <p>节点ID</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>节点物理资源总容量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MetaResource m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * <p>节点可分配容量= Capacity - 系统预留</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MetaResource m_allocatable;
                    bool m_allocatableHasBeenSet;

                    /**
                     * <p>节点上所有非终态 Pod 的 requests 申请量之和（含系统 Pod）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MetaResource m_requests;
                    bool m_requestsHasBeenSet;

                    /**
                     * <p>节点上所有非终态 Pod 的 limits 上限之和（含系统 Pod）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MetaResource m_limits;
                    bool m_limitsHasBeenSet;

                    /**
                     * <p>节点可再调度余量 = max(0, Allocatable - Requests)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MetaResource m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DBCUSTOMCLUSTERNODERESOURCE_H_
