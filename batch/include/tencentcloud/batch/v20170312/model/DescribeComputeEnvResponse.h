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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVRESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Placement.h>
#include <tencentcloud/batch/v20170312/model/ComputeNode.h>
#include <tencentcloud/batch/v20170312/model/ComputeNodeMetrics.h>
#include <tencentcloud/batch/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeComputeEnv返回参数结构体
                */
                class DescribeComputeEnvResponse : public AbstractModel
                {
                public:
                    DescribeComputeEnvResponse();
                    ~DescribeComputeEnvResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取计算环境ID，环境ID通过调用接口 [DescribeComputeEnv](https://cloud.tencent.com/document/api/599/15892)获取。
                     * @return EnvId 计算环境ID，环境ID通过调用接口 [DescribeComputeEnv](https://cloud.tencent.com/document/api/599/15892)获取。
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取计算环境名称
                     * @return EnvName 计算环境名称
                     * 
                     */
                    std::string GetEnvName() const;

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     * 
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取位置信息
                     * @return Placement 位置信息
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取计算环境创建时间
                     * @return CreateTime 计算环境创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取计算节点列表信息
                     * @return ComputeNodeSet 计算节点列表信息
                     * 
                     */
                    std::vector<ComputeNode> GetComputeNodeSet() const;

                    /**
                     * 判断参数 ComputeNodeSet 是否已赋值
                     * @return ComputeNodeSet 是否已赋值
                     * 
                     */
                    bool ComputeNodeSetHasBeenSet() const;

                    /**
                     * 获取计算节点统计指标
                     * @return ComputeNodeMetrics 计算节点统计指标
                     * 
                     */
                    ComputeNodeMetrics GetComputeNodeMetrics() const;

                    /**
                     * 判断参数 ComputeNodeMetrics 是否已赋值
                     * @return ComputeNodeMetrics 是否已赋值
                     * 
                     */
                    bool ComputeNodeMetricsHasBeenSet() const;

                    /**
                     * 获取计算节点期望个数
                     * @return DesiredComputeNodeCount 计算节点期望个数
                     * 
                     */
                    uint64_t GetDesiredComputeNodeCount() const;

                    /**
                     * 判断参数 DesiredComputeNodeCount 是否已赋值
                     * @return DesiredComputeNodeCount 是否已赋值
                     * 
                     */
                    bool DesiredComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取计算环境管理类型，枚举如下： MANAGED: 由客户在Batch平台主动创建； THPC_QUEUE: 由thpc平台创建，关联thpc平台集群队列。
                     * @return EnvType 计算环境管理类型，枚举如下： MANAGED: 由客户在Batch平台主动创建； THPC_QUEUE: 由thpc平台创建，关联thpc平台集群队列。
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取计算环境资源类型，当前为CVM和CPM（黑石）
                     * @return ResourceType 计算环境资源类型，当前为CVM和CPM（黑石）
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取下一步的动作，枚举如下： DELETING: 删除中
                     * @return NextAction 下一步的动作，枚举如下： DELETING: 删除中
                     * 
                     */
                    std::string GetNextAction() const;

                    /**
                     * 判断参数 NextAction 是否已赋值
                     * @return NextAction 是否已赋值
                     * 
                     */
                    bool NextActionHasBeenSet() const;

                    /**
                     * 获取用户添加到计算环境中的计算节点个数
                     * @return AttachedComputeNodeCount 用户添加到计算环境中的计算节点个数
                     * 
                     */
                    uint64_t GetAttachedComputeNodeCount() const;

                    /**
                     * 判断参数 AttachedComputeNodeCount 是否已赋值
                     * @return AttachedComputeNodeCount 是否已赋值
                     * 
                     */
                    bool AttachedComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取计算环境绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 计算环境绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 计算环境ID，环境ID通过调用接口 [DescribeComputeEnv](https://cloud.tencent.com/document/api/599/15892)获取。
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 计算环境名称
                     */
                    std::string m_envName;
                    bool m_envNameHasBeenSet;

                    /**
                     * 位置信息
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 计算环境创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 计算节点列表信息
                     */
                    std::vector<ComputeNode> m_computeNodeSet;
                    bool m_computeNodeSetHasBeenSet;

                    /**
                     * 计算节点统计指标
                     */
                    ComputeNodeMetrics m_computeNodeMetrics;
                    bool m_computeNodeMetricsHasBeenSet;

                    /**
                     * 计算节点期望个数
                     */
                    uint64_t m_desiredComputeNodeCount;
                    bool m_desiredComputeNodeCountHasBeenSet;

                    /**
                     * 计算环境管理类型，枚举如下： MANAGED: 由客户在Batch平台主动创建； THPC_QUEUE: 由thpc平台创建，关联thpc平台集群队列。
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * 计算环境资源类型，当前为CVM和CPM（黑石）
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 下一步的动作，枚举如下： DELETING: 删除中
                     */
                    std::string m_nextAction;
                    bool m_nextActionHasBeenSet;

                    /**
                     * 用户添加到计算环境中的计算节点个数
                     */
                    uint64_t m_attachedComputeNodeCount;
                    bool m_attachedComputeNodeCountHasBeenSet;

                    /**
                     * 计算环境绑定的标签列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVRESPONSE_H_
