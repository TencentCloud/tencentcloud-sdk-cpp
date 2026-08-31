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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_SETQUEUEAUTOSCALINGREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_SETQUEUEAUTOSCALINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/ScalingPolicy.h>
#include <tencentcloud/thpc/v20230321/model/ExpansionPolicy.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * SetQueueAutoScaling请求参数结构体
                */
                class SetQueueAutoScalingRequest : public AbstractModel
                {
                public:
                    SetQueueAutoScalingRequest();
                    ~SetQueueAutoScalingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID。
                     * @return ClusterId 集群 ID。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID。
                     * @param _clusterId 集群 ID。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取队列名称。
                     * @return QueueName 队列名称。
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列名称。
                     * @param _queueName 队列名称。
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取<p>伸缩容量策略，用于设置目标容量及容量单位。单独传入时仅更新容量相关配置，未传字段保持原值。</p>
                     * @return ScalingPolicy <p>伸缩容量策略，用于设置目标容量及容量单位。单独传入时仅更新容量相关配置，未传字段保持原值。</p>
                     * 
                     */
                    ScalingPolicy GetScalingPolicy() const;

                    /**
                     * 设置<p>伸缩容量策略，用于设置目标容量及容量单位。单独传入时仅更新容量相关配置，未传字段保持原值。</p>
                     * @param _scalingPolicy <p>伸缩容量策略，用于设置目标容量及容量单位。单独传入时仅更新容量相关配置，未传字段保持原值。</p>
                     * 
                     */
                    void SetScalingPolicy(const ScalingPolicy& _scalingPolicy);

                    /**
                     * 判断参数 ScalingPolicy 是否已赋值
                     * @return ScalingPolicy 是否已赋值
                     * 
                     */
                    bool ScalingPolicyHasBeenSet() const;

                    /**
                     * 获取<p>扩容策略，用于配置启动模板、机型族、GPU 卡数、规格优先级和多可用区等扩容方式。单独传入时仅更新扩容相关配置，未传字段保持原值。</p>
                     * @return ExpansionPolicy <p>扩容策略，用于配置启动模板、机型族、GPU 卡数、规格优先级和多可用区等扩容方式。单独传入时仅更新扩容相关配置，未传字段保持原值。</p>
                     * 
                     */
                    ExpansionPolicy GetExpansionPolicy() const;

                    /**
                     * 设置<p>扩容策略，用于配置启动模板、机型族、GPU 卡数、规格优先级和多可用区等扩容方式。单独传入时仅更新扩容相关配置，未传字段保持原值。</p>
                     * @param _expansionPolicy <p>扩容策略，用于配置启动模板、机型族、GPU 卡数、规格优先级和多可用区等扩容方式。单独传入时仅更新扩容相关配置，未传字段保持原值。</p>
                     * 
                     */
                    void SetExpansionPolicy(const ExpansionPolicy& _expansionPolicy);

                    /**
                     * 判断参数 ExpansionPolicy 是否已赋值
                     * @return ExpansionPolicy 是否已赋值
                     * 
                     */
                    bool ExpansionPolicyHasBeenSet() const;

                private:

                    /**
                     * 集群 ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 队列名称。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>伸缩容量策略，用于设置目标容量及容量单位。单独传入时仅更新容量相关配置，未传字段保持原值。</p>
                     */
                    ScalingPolicy m_scalingPolicy;
                    bool m_scalingPolicyHasBeenSet;

                    /**
                     * <p>扩容策略，用于配置启动模板、机型族、GPU 卡数、规格优先级和多可用区等扩容方式。单独传入时仅更新扩容相关配置，未传字段保持原值。</p>
                     */
                    ExpansionPolicy m_expansionPolicy;
                    bool m_expansionPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_SETQUEUEAUTOSCALINGREQUEST_H_
