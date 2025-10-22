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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERGROUP_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * kafka协议消费组信息
                */
                class ConsumerGroup : public AbstractModel
                {
                public:
                    ConsumerGroup();
                    ~ConsumerGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消费组名称
                     * @return Group 消费组名称
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置消费组名称
                     * @param _group 消费组名称
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取状态。

- Empty：组内没有成员，但存在已提交的偏移量。所有消费者都离开但保留了偏移量
- Dead：组内没有成员，且没有已提交的偏移量。组被删除或长时间无活动
- Stable：组内成员正常消费，分区分配平衡。正常运行状态
- PreparingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开
- CompletingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开

                     * @return State 状态。

- Empty：组内没有成员，但存在已提交的偏移量。所有消费者都离开但保留了偏移量
- Dead：组内没有成员，且没有已提交的偏移量。组被删除或长时间无活动
- Stable：组内成员正常消费，分区分配平衡。正常运行状态
- PreparingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开
- CompletingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开

                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态。

- Empty：组内没有成员，但存在已提交的偏移量。所有消费者都离开但保留了偏移量
- Dead：组内没有成员，且没有已提交的偏移量。组被删除或长时间无活动
- Stable：组内成员正常消费，分区分配平衡。正常运行状态
- PreparingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开
- CompletingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开

                     * @param _state 状态。

- Empty：组内没有成员，但存在已提交的偏移量。所有消费者都离开但保留了偏移量
- Dead：组内没有成员，且没有已提交的偏移量。组被删除或长时间无活动
- Stable：组内成员正常消费，分区分配平衡。正常运行状态
- PreparingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开
- CompletingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开

                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取分区分配策略均衡算法名称。

- 常见均衡算法如下：
    - range:按分区范围分配
    - roundrobin:轮询式分配
    - sticky:粘性分配（避免不必要的重平衡）
                     * @return ProtocolName 分区分配策略均衡算法名称。

- 常见均衡算法如下：
    - range:按分区范围分配
    - roundrobin:轮询式分配
    - sticky:粘性分配（避免不必要的重平衡）
                     * 
                     */
                    std::string GetProtocolName() const;

                    /**
                     * 设置分区分配策略均衡算法名称。

- 常见均衡算法如下：
    - range:按分区范围分配
    - roundrobin:轮询式分配
    - sticky:粘性分配（避免不必要的重平衡）
                     * @param _protocolName 分区分配策略均衡算法名称。

- 常见均衡算法如下：
    - range:按分区范围分配
    - roundrobin:轮询式分配
    - sticky:粘性分配（避免不必要的重平衡）
                     * 
                     */
                    void SetProtocolName(const std::string& _protocolName);

                    /**
                     * 判断参数 ProtocolName 是否已赋值
                     * @return ProtocolName 是否已赋值
                     * 
                     */
                    bool ProtocolNameHasBeenSet() const;

                private:

                    /**
                     * 消费组名称
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 状态。

- Empty：组内没有成员，但存在已提交的偏移量。所有消费者都离开但保留了偏移量
- Dead：组内没有成员，且没有已提交的偏移量。组被删除或长时间无活动
- Stable：组内成员正常消费，分区分配平衡。正常运行状态
- PreparingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开
- CompletingRebalance：组正在准备重新平衡。有新成员加入或现有成员离开

                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 分区分配策略均衡算法名称。

- 常见均衡算法如下：
    - range:按分区范围分配
    - roundrobin:轮询式分配
    - sticky:粘性分配（避免不必要的重平衡）
                     */
                    std::string m_protocolName;
                    bool m_protocolNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERGROUP_H_
