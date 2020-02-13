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


                    /**
                     * 获取计算环境ID
                     * @return EnvId 计算环境ID
                     */
                    std::string GetEnvId() const;

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取计算环境名称
                     * @return EnvName 计算环境名称
                     */
                    std::string GetEnvName() const;

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取位置信息
                     * @return Placement 位置信息
                     */
                    Placement GetPlacement() const;

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取计算环境创建时间
                     * @return CreateTime 计算环境创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取计算节点列表信息
                     * @return ComputeNodeSet 计算节点列表信息
                     */
                    std::vector<ComputeNode> GetComputeNodeSet() const;

                    /**
                     * 判断参数 ComputeNodeSet 是否已赋值
                     * @return ComputeNodeSet 是否已赋值
                     */
                    bool ComputeNodeSetHasBeenSet() const;

                    /**
                     * 获取计算节点统计指标
                     * @return ComputeNodeMetrics 计算节点统计指标
                     */
                    ComputeNodeMetrics GetComputeNodeMetrics() const;

                    /**
                     * 判断参数 ComputeNodeMetrics 是否已赋值
                     * @return ComputeNodeMetrics 是否已赋值
                     */
                    bool ComputeNodeMetricsHasBeenSet() const;

                    /**
                     * 获取计算节点期望个数
                     * @return DesiredComputeNodeCount 计算节点期望个数
                     */
                    uint64_t GetDesiredComputeNodeCount() const;

                    /**
                     * 判断参数 DesiredComputeNodeCount 是否已赋值
                     * @return DesiredComputeNodeCount 是否已赋值
                     */
                    bool DesiredComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取计算环境类型
                     * @return EnvType 计算环境类型
                     */
                    std::string GetEnvType() const;

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取计算环境资源类型，当前为CVM和CPM（黑石）
                     * @return ResourceType 计算环境资源类型，当前为CVM和CPM（黑石）
                     */
                    std::string GetResourceType() const;

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取下一步动作
                     * @return NextAction 下一步动作
                     */
                    std::string GetNextAction() const;

                    /**
                     * 判断参数 NextAction 是否已赋值
                     * @return NextAction 是否已赋值
                     */
                    bool NextActionHasBeenSet() const;

                private:

                    /**
                     * 计算环境ID
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
                     * 计算环境类型
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * 计算环境资源类型，当前为CVM和CPM（黑石）
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 下一步动作
                     */
                    std::string m_nextAction;
                    bool m_nextActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVRESPONSE_H_
