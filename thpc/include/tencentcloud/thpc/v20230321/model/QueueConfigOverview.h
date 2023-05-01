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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_QUEUECONFIGOVERVIEW_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_QUEUECONFIGOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/ExpansionNodeConfigOverview.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 扩容队列配置概览。
                */
                class QueueConfigOverview : public AbstractModel
                {
                public:
                    QueueConfigOverview();
                    ~QueueConfigOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取队列名称。
                     * @return QueueName 队列名称。
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列名称。
                     * @param QueueName 队列名称。
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取队列中弹性节点数量最小值。取值范围0～200。
                     * @return MinSize 队列中弹性节点数量最小值。取值范围0～200。
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置队列中弹性节点数量最小值。取值范围0～200。
                     * @param MinSize 队列中弹性节点数量最小值。取值范围0～200。
                     */
                    void SetMinSize(const int64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取队列中弹性节点数量最大值。取值范围0～200。
                     * @return MaxSize 队列中弹性节点数量最大值。取值范围0～200。
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置队列中弹性节点数量最大值。取值范围0～200。
                     * @param MaxSize 队列中弹性节点数量最大值。取值范围0～200。
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取是否开启自动扩容。
                     * @return EnableAutoExpansion 是否开启自动扩容。
                     */
                    bool GetEnableAutoExpansion() const;

                    /**
                     * 设置是否开启自动扩容。
                     * @param EnableAutoExpansion 是否开启自动扩容。
                     */
                    void SetEnableAutoExpansion(const bool& _enableAutoExpansion);

                    /**
                     * 判断参数 EnableAutoExpansion 是否已赋值
                     * @return EnableAutoExpansion 是否已赋值
                     */
                    bool EnableAutoExpansionHasBeenSet() const;

                    /**
                     * 获取是否开启自动缩容。
                     * @return EnableAutoShrink 是否开启自动缩容。
                     */
                    bool GetEnableAutoShrink() const;

                    /**
                     * 设置是否开启自动缩容。
                     * @param EnableAutoShrink 是否开启自动缩容。
                     */
                    void SetEnableAutoShrink(const bool& _enableAutoShrink);

                    /**
                     * 判断参数 EnableAutoShrink 是否已赋值
                     * @return EnableAutoShrink 是否已赋值
                     */
                    bool EnableAutoShrinkHasBeenSet() const;

                    /**
                     * 获取扩容节点配置信息。
                     * @return ExpansionNodeConfigs 扩容节点配置信息。
                     */
                    std::vector<ExpansionNodeConfigOverview> GetExpansionNodeConfigs() const;

                    /**
                     * 设置扩容节点配置信息。
                     * @param ExpansionNodeConfigs 扩容节点配置信息。
                     */
                    void SetExpansionNodeConfigs(const std::vector<ExpansionNodeConfigOverview>& _expansionNodeConfigs);

                    /**
                     * 判断参数 ExpansionNodeConfigs 是否已赋值
                     * @return ExpansionNodeConfigs 是否已赋值
                     */
                    bool ExpansionNodeConfigsHasBeenSet() const;

                    /**
                     * 获取队列中期望的空闲节点数量（包含弹性节点和静态节点）。默认值：0。队列中，处于空闲状态的节点小于此值，集群会扩容弹性节点；处于空闲状态的节点大于此值，集群会缩容弹性节点。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DesiredIdleNodeCapacity 队列中期望的空闲节点数量（包含弹性节点和静态节点）。默认值：0。队列中，处于空闲状态的节点小于此值，集群会扩容弹性节点；处于空闲状态的节点大于此值，集群会缩容弹性节点。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDesiredIdleNodeCapacity() const;

                    /**
                     * 设置队列中期望的空闲节点数量（包含弹性节点和静态节点）。默认值：0。队列中，处于空闲状态的节点小于此值，集群会扩容弹性节点；处于空闲状态的节点大于此值，集群会缩容弹性节点。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DesiredIdleNodeCapacity 队列中期望的空闲节点数量（包含弹性节点和静态节点）。默认值：0。队列中，处于空闲状态的节点小于此值，集群会扩容弹性节点；处于空闲状态的节点大于此值，集群会缩容弹性节点。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDesiredIdleNodeCapacity(const int64_t& _desiredIdleNodeCapacity);

                    /**
                     * 判断参数 DesiredIdleNodeCapacity 是否已赋值
                     * @return DesiredIdleNodeCapacity 是否已赋值
                     */
                    bool DesiredIdleNodeCapacityHasBeenSet() const;

                private:

                    /**
                     * 队列名称。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 队列中弹性节点数量最小值。取值范围0～200。
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 队列中弹性节点数量最大值。取值范围0～200。
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 是否开启自动扩容。
                     */
                    bool m_enableAutoExpansion;
                    bool m_enableAutoExpansionHasBeenSet;

                    /**
                     * 是否开启自动缩容。
                     */
                    bool m_enableAutoShrink;
                    bool m_enableAutoShrinkHasBeenSet;

                    /**
                     * 扩容节点配置信息。
                     */
                    std::vector<ExpansionNodeConfigOverview> m_expansionNodeConfigs;
                    bool m_expansionNodeConfigsHasBeenSet;

                    /**
                     * 队列中期望的空闲节点数量（包含弹性节点和静态节点）。默认值：0。队列中，处于空闲状态的节点小于此值，集群会扩容弹性节点；处于空闲状态的节点大于此值，集群会缩容弹性节点。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_desiredIdleNodeCapacity;
                    bool m_desiredIdleNodeCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_QUEUECONFIGOVERVIEW_H_
