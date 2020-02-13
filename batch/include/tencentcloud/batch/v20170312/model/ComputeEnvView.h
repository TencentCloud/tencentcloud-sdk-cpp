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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTEENVVIEW_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTEENVVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Placement.h>
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
                * 计算环境信息
                */
                class ComputeEnvView : public AbstractModel
                {
                public:
                    ComputeEnvView();
                    ~ComputeEnvView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计算环境ID
                     * @return EnvId 计算环境ID
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置计算环境ID
                     * @param EnvId 计算环境ID
                     */
                    void SetEnvId(const std::string& _envId);

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
                     * 设置计算环境名称
                     * @param EnvName 计算环境名称
                     */
                    void SetEnvName(const std::string& _envName);

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
                     * 设置位置信息
                     * @param Placement 位置信息
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取计算节点统计指标
                     * @return ComputeNodeMetrics 计算节点统计指标
                     */
                    ComputeNodeMetrics GetComputeNodeMetrics() const;

                    /**
                     * 设置计算节点统计指标
                     * @param ComputeNodeMetrics 计算节点统计指标
                     */
                    void SetComputeNodeMetrics(const ComputeNodeMetrics& _computeNodeMetrics);

                    /**
                     * 判断参数 ComputeNodeMetrics 是否已赋值
                     * @return ComputeNodeMetrics 是否已赋值
                     */
                    bool ComputeNodeMetricsHasBeenSet() const;

                    /**
                     * 获取计算环境类型
                     * @return EnvType 计算环境类型
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置计算环境类型
                     * @param EnvType 计算环境类型
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取计算节点期望个数
                     * @return DesiredComputeNodeCount 计算节点期望个数
                     */
                    uint64_t GetDesiredComputeNodeCount() const;

                    /**
                     * 设置计算节点期望个数
                     * @param DesiredComputeNodeCount 计算节点期望个数
                     */
                    void SetDesiredComputeNodeCount(const uint64_t& _desiredComputeNodeCount);

                    /**
                     * 判断参数 DesiredComputeNodeCount 是否已赋值
                     * @return DesiredComputeNodeCount 是否已赋值
                     */
                    bool DesiredComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取计算环境资源类型，当前为CVM和CPM（黑石）
                     * @return ResourceType 计算环境资源类型，当前为CVM和CPM（黑石）
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置计算环境资源类型，当前为CVM和CPM（黑石）
                     * @param ResourceType 计算环境资源类型，当前为CVM和CPM（黑石）
                     */
                    void SetResourceType(const std::string& _resourceType);

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
                     * 设置下一步动作
                     * @param NextAction 下一步动作
                     */
                    void SetNextAction(const std::string& _nextAction);

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
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 计算节点统计指标
                     */
                    ComputeNodeMetrics m_computeNodeMetrics;
                    bool m_computeNodeMetricsHasBeenSet;

                    /**
                     * 计算环境类型
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * 计算节点期望个数
                     */
                    uint64_t m_desiredComputeNodeCount;
                    bool m_desiredComputeNodeCountHasBeenSet;

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

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTEENVVIEW_H_
