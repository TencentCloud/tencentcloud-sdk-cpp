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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUPOPTION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUPOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群弹性伸缩配置
                */
                class ClusterAsGroupOption : public AbstractModel
                {
                public:
                    ClusterAsGroupOption();
                    ~ClusterAsGroupOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启缩容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsScaleDownEnabled 是否开启缩容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsScaleDownEnabled() const;

                    /**
                     * 设置是否开启缩容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isScaleDownEnabled 是否开启缩容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsScaleDownEnabled(const bool& _isScaleDownEnabled);

                    /**
                     * 判断参数 IsScaleDownEnabled 是否已赋值
                     * @return IsScaleDownEnabled 是否已赋值
                     * 
                     */
                    bool IsScaleDownEnabledHasBeenSet() const;

                    /**
                     * 获取多伸缩组情况下扩容选择算法(random 随机选择，most-pods 最多类型的Pod least-waste 最少的资源浪费，默认为random)
                     * @return Expander 多伸缩组情况下扩容选择算法(random 随机选择，most-pods 最多类型的Pod least-waste 最少的资源浪费，默认为random)
                     * 
                     */
                    std::string GetExpander() const;

                    /**
                     * 设置多伸缩组情况下扩容选择算法(random 随机选择，most-pods 最多类型的Pod least-waste 最少的资源浪费，默认为random)
                     * @param _expander 多伸缩组情况下扩容选择算法(random 随机选择，most-pods 最多类型的Pod least-waste 最少的资源浪费，默认为random)
                     * 
                     */
                    void SetExpander(const std::string& _expander);

                    /**
                     * 判断参数 Expander 是否已赋值
                     * @return Expander 是否已赋值
                     * 
                     */
                    bool ExpanderHasBeenSet() const;

                    /**
                     * 获取最大并发缩容数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxEmptyBulkDelete 最大并发缩容数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxEmptyBulkDelete() const;

                    /**
                     * 设置最大并发缩容数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxEmptyBulkDelete 最大并发缩容数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxEmptyBulkDelete(const int64_t& _maxEmptyBulkDelete);

                    /**
                     * 判断参数 MaxEmptyBulkDelete 是否已赋值
                     * @return MaxEmptyBulkDelete 是否已赋值
                     * 
                     */
                    bool MaxEmptyBulkDeleteHasBeenSet() const;

                    /**
                     * 获取集群扩容后多少分钟开始判断缩容（默认为10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaleDownDelay 集群扩容后多少分钟开始判断缩容（默认为10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScaleDownDelay() const;

                    /**
                     * 设置集群扩容后多少分钟开始判断缩容（默认为10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaleDownDelay 集群扩容后多少分钟开始判断缩容（默认为10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScaleDownDelay(const int64_t& _scaleDownDelay);

                    /**
                     * 判断参数 ScaleDownDelay 是否已赋值
                     * @return ScaleDownDelay 是否已赋值
                     * 
                     */
                    bool ScaleDownDelayHasBeenSet() const;

                    /**
                     * 获取节点连续空闲多少分钟后被缩容（默认为 10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaleDownUnneededTime 节点连续空闲多少分钟后被缩容（默认为 10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScaleDownUnneededTime() const;

                    /**
                     * 设置节点连续空闲多少分钟后被缩容（默认为 10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaleDownUnneededTime 节点连续空闲多少分钟后被缩容（默认为 10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScaleDownUnneededTime(const int64_t& _scaleDownUnneededTime);

                    /**
                     * 判断参数 ScaleDownUnneededTime 是否已赋值
                     * @return ScaleDownUnneededTime 是否已赋值
                     * 
                     */
                    bool ScaleDownUnneededTimeHasBeenSet() const;

                    /**
                     * 获取节点资源使用量低于多少(百分比)时认为空闲(默认: 50(百分比))
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaleDownUtilizationThreshold 节点资源使用量低于多少(百分比)时认为空闲(默认: 50(百分比))
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScaleDownUtilizationThreshold() const;

                    /**
                     * 设置节点资源使用量低于多少(百分比)时认为空闲(默认: 50(百分比))
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaleDownUtilizationThreshold 节点资源使用量低于多少(百分比)时认为空闲(默认: 50(百分比))
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScaleDownUtilizationThreshold(const int64_t& _scaleDownUtilizationThreshold);

                    /**
                     * 判断参数 ScaleDownUtilizationThreshold 是否已赋值
                     * @return ScaleDownUtilizationThreshold 是否已赋值
                     * 
                     */
                    bool ScaleDownUtilizationThresholdHasBeenSet() const;

                    /**
                     * 获取含有本地存储Pod的节点是否不缩容(默认： true)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkipNodesWithLocalStorage 含有本地存储Pod的节点是否不缩容(默认： true)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSkipNodesWithLocalStorage() const;

                    /**
                     * 设置含有本地存储Pod的节点是否不缩容(默认： true)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skipNodesWithLocalStorage 含有本地存储Pod的节点是否不缩容(默认： true)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSkipNodesWithLocalStorage(const bool& _skipNodesWithLocalStorage);

                    /**
                     * 判断参数 SkipNodesWithLocalStorage 是否已赋值
                     * @return SkipNodesWithLocalStorage 是否已赋值
                     * 
                     */
                    bool SkipNodesWithLocalStorageHasBeenSet() const;

                    /**
                     * 获取含有kube-system namespace下非DaemonSet管理的Pod的节点是否不缩容 (默认： true)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkipNodesWithSystemPods 含有kube-system namespace下非DaemonSet管理的Pod的节点是否不缩容 (默认： true)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSkipNodesWithSystemPods() const;

                    /**
                     * 设置含有kube-system namespace下非DaemonSet管理的Pod的节点是否不缩容 (默认： true)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skipNodesWithSystemPods 含有kube-system namespace下非DaemonSet管理的Pod的节点是否不缩容 (默认： true)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSkipNodesWithSystemPods(const bool& _skipNodesWithSystemPods);

                    /**
                     * 判断参数 SkipNodesWithSystemPods 是否已赋值
                     * @return SkipNodesWithSystemPods 是否已赋值
                     * 
                     */
                    bool SkipNodesWithSystemPodsHasBeenSet() const;

                    /**
                     * 获取计算资源使用量时是否默认忽略DaemonSet的实例(默认值: False，不忽略)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreDaemonSetsUtilization 计算资源使用量时是否默认忽略DaemonSet的实例(默认值: False，不忽略)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIgnoreDaemonSetsUtilization() const;

                    /**
                     * 设置计算资源使用量时是否默认忽略DaemonSet的实例(默认值: False，不忽略)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreDaemonSetsUtilization 计算资源使用量时是否默认忽略DaemonSet的实例(默认值: False，不忽略)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIgnoreDaemonSetsUtilization(const bool& _ignoreDaemonSetsUtilization);

                    /**
                     * 判断参数 IgnoreDaemonSetsUtilization 是否已赋值
                     * @return IgnoreDaemonSetsUtilization 是否已赋值
                     * 
                     */
                    bool IgnoreDaemonSetsUtilizationHasBeenSet() const;

                    /**
                     * 获取CA做健康性判断的个数，默认3，即超过OkTotalUnreadyCount个数后，CA会进行健康性判断。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OkTotalUnreadyCount CA做健康性判断的个数，默认3，即超过OkTotalUnreadyCount个数后，CA会进行健康性判断。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOkTotalUnreadyCount() const;

                    /**
                     * 设置CA做健康性判断的个数，默认3，即超过OkTotalUnreadyCount个数后，CA会进行健康性判断。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _okTotalUnreadyCount CA做健康性判断的个数，默认3，即超过OkTotalUnreadyCount个数后，CA会进行健康性判断。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOkTotalUnreadyCount(const int64_t& _okTotalUnreadyCount);

                    /**
                     * 判断参数 OkTotalUnreadyCount 是否已赋值
                     * @return OkTotalUnreadyCount 是否已赋值
                     * 
                     */
                    bool OkTotalUnreadyCountHasBeenSet() const;

                    /**
                     * 获取未就绪节点的最大百分比，此后CA会停止操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxTotalUnreadyPercentage 未就绪节点的最大百分比，此后CA会停止操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxTotalUnreadyPercentage() const;

                    /**
                     * 设置未就绪节点的最大百分比，此后CA会停止操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxTotalUnreadyPercentage 未就绪节点的最大百分比，此后CA会停止操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxTotalUnreadyPercentage(const int64_t& _maxTotalUnreadyPercentage);

                    /**
                     * 判断参数 MaxTotalUnreadyPercentage 是否已赋值
                     * @return MaxTotalUnreadyPercentage 是否已赋值
                     * 
                     */
                    bool MaxTotalUnreadyPercentageHasBeenSet() const;

                    /**
                     * 获取表示未准备就绪的节点在有资格进行缩减之前应该停留多长时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScaleDownUnreadyTime 表示未准备就绪的节点在有资格进行缩减之前应该停留多长时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScaleDownUnreadyTime() const;

                    /**
                     * 设置表示未准备就绪的节点在有资格进行缩减之前应该停留多长时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scaleDownUnreadyTime 表示未准备就绪的节点在有资格进行缩减之前应该停留多长时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScaleDownUnreadyTime(const int64_t& _scaleDownUnreadyTime);

                    /**
                     * 判断参数 ScaleDownUnreadyTime 是否已赋值
                     * @return ScaleDownUnreadyTime 是否已赋值
                     * 
                     */
                    bool ScaleDownUnreadyTimeHasBeenSet() const;

                    /**
                     * 获取CA删除未在Kubernetes中注册的节点之前等待的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnregisteredNodeRemovalTime CA删除未在Kubernetes中注册的节点之前等待的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUnregisteredNodeRemovalTime() const;

                    /**
                     * 设置CA删除未在Kubernetes中注册的节点之前等待的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unregisteredNodeRemovalTime CA删除未在Kubernetes中注册的节点之前等待的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnregisteredNodeRemovalTime(const int64_t& _unregisteredNodeRemovalTime);

                    /**
                     * 判断参数 UnregisteredNodeRemovalTime 是否已赋值
                     * @return UnregisteredNodeRemovalTime 是否已赋值
                     * 
                     */
                    bool UnregisteredNodeRemovalTimeHasBeenSet() const;

                private:

                    /**
                     * 是否开启缩容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isScaleDownEnabled;
                    bool m_isScaleDownEnabledHasBeenSet;

                    /**
                     * 多伸缩组情况下扩容选择算法(random 随机选择，most-pods 最多类型的Pod least-waste 最少的资源浪费，默认为random)
                     */
                    std::string m_expander;
                    bool m_expanderHasBeenSet;

                    /**
                     * 最大并发缩容数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxEmptyBulkDelete;
                    bool m_maxEmptyBulkDeleteHasBeenSet;

                    /**
                     * 集群扩容后多少分钟开始判断缩容（默认为10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scaleDownDelay;
                    bool m_scaleDownDelayHasBeenSet;

                    /**
                     * 节点连续空闲多少分钟后被缩容（默认为 10分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scaleDownUnneededTime;
                    bool m_scaleDownUnneededTimeHasBeenSet;

                    /**
                     * 节点资源使用量低于多少(百分比)时认为空闲(默认: 50(百分比))
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scaleDownUtilizationThreshold;
                    bool m_scaleDownUtilizationThresholdHasBeenSet;

                    /**
                     * 含有本地存储Pod的节点是否不缩容(默认： true)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_skipNodesWithLocalStorage;
                    bool m_skipNodesWithLocalStorageHasBeenSet;

                    /**
                     * 含有kube-system namespace下非DaemonSet管理的Pod的节点是否不缩容 (默认： true)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_skipNodesWithSystemPods;
                    bool m_skipNodesWithSystemPodsHasBeenSet;

                    /**
                     * 计算资源使用量时是否默认忽略DaemonSet的实例(默认值: False，不忽略)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ignoreDaemonSetsUtilization;
                    bool m_ignoreDaemonSetsUtilizationHasBeenSet;

                    /**
                     * CA做健康性判断的个数，默认3，即超过OkTotalUnreadyCount个数后，CA会进行健康性判断。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_okTotalUnreadyCount;
                    bool m_okTotalUnreadyCountHasBeenSet;

                    /**
                     * 未就绪节点的最大百分比，此后CA会停止操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxTotalUnreadyPercentage;
                    bool m_maxTotalUnreadyPercentageHasBeenSet;

                    /**
                     * 表示未准备就绪的节点在有资格进行缩减之前应该停留多长时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scaleDownUnreadyTime;
                    bool m_scaleDownUnreadyTimeHasBeenSet;

                    /**
                     * CA删除未在Kubernetes中注册的节点之前等待的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_unregisteredNodeRemovalTime;
                    bool m_unregisteredNodeRemovalTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUPOPTION_H_
