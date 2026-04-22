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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TOPOLOGYSPREADCONSTRAINT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TOPOLOGYSPREADCONSTRAINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/LabelSelector.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 调度拓扑分布
                */
                class TopologySpreadConstraint : public AbstractModel
                {
                public:
                    TopologySpreadConstraint();
                    ~TopologySpreadConstraint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>最大偏差值</p>
                     * @return MaxSkew <p>最大偏差值</p>
                     * 
                     */
                    int64_t GetMaxSkew() const;

                    /**
                     * 设置<p>最大偏差值</p>
                     * @param _maxSkew <p>最大偏差值</p>
                     * 
                     */
                    void SetMaxSkew(const int64_t& _maxSkew);

                    /**
                     * 判断参数 MaxSkew 是否已赋值
                     * @return MaxSkew 是否已赋值
                     * 
                     */
                    bool MaxSkewHasBeenSet() const;

                    /**
                     * 获取<p>拓扑域键</p>
                     * @return TopologyKey <p>拓扑域键</p>
                     * 
                     */
                    std::string GetTopologyKey() const;

                    /**
                     * 设置<p>拓扑域键</p>
                     * @param _topologyKey <p>拓扑域键</p>
                     * 
                     */
                    void SetTopologyKey(const std::string& _topologyKey);

                    /**
                     * 判断参数 TopologyKey 是否已赋值
                     * @return TopologyKey 是否已赋值
                     * 
                     */
                    bool TopologyKeyHasBeenSet() const;

                    /**
                     * 获取<p>不满足约束时的处理策略</p>
                     * @return WhenUnsatisfiable <p>不满足约束时的处理策略</p>
                     * 
                     */
                    std::string GetWhenUnsatisfiable() const;

                    /**
                     * 设置<p>不满足约束时的处理策略</p>
                     * @param _whenUnsatisfiable <p>不满足约束时的处理策略</p>
                     * 
                     */
                    void SetWhenUnsatisfiable(const std::string& _whenUnsatisfiable);

                    /**
                     * 判断参数 WhenUnsatisfiable 是否已赋值
                     * @return WhenUnsatisfiable 是否已赋值
                     * 
                     */
                    bool WhenUnsatisfiableHasBeenSet() const;

                    /**
                     * 获取<p>标签选择器</p>
                     * @return LabelSelector <p>标签选择器</p>
                     * 
                     */
                    LabelSelector GetLabelSelector() const;

                    /**
                     * 设置<p>标签选择器</p>
                     * @param _labelSelector <p>标签选择器</p>
                     * 
                     */
                    void SetLabelSelector(const LabelSelector& _labelSelector);

                    /**
                     * 判断参数 LabelSelector 是否已赋值
                     * @return LabelSelector 是否已赋值
                     * 
                     */
                    bool LabelSelectorHasBeenSet() const;

                    /**
                     * 获取<p>最小拓扑域数量</p>
                     * @return MinDomains <p>最小拓扑域数量</p>
                     * 
                     */
                    int64_t GetMinDomains() const;

                    /**
                     * 设置<p>最小拓扑域数量</p>
                     * @param _minDomains <p>最小拓扑域数量</p>
                     * 
                     */
                    void SetMinDomains(const int64_t& _minDomains);

                    /**
                     * 判断参数 MinDomains 是否已赋值
                     * @return MinDomains 是否已赋值
                     * 
                     */
                    bool MinDomainsHasBeenSet() const;

                    /**
                     * 获取<p>节点亲和性策略</p>
                     * @return NodeAffinityPolicy <p>节点亲和性策略</p>
                     * 
                     */
                    std::string GetNodeAffinityPolicy() const;

                    /**
                     * 设置<p>节点亲和性策略</p>
                     * @param _nodeAffinityPolicy <p>节点亲和性策略</p>
                     * 
                     */
                    void SetNodeAffinityPolicy(const std::string& _nodeAffinityPolicy);

                    /**
                     * 判断参数 NodeAffinityPolicy 是否已赋值
                     * @return NodeAffinityPolicy 是否已赋值
                     * 
                     */
                    bool NodeAffinityPolicyHasBeenSet() const;

                    /**
                     * 获取<p>节点污点策略</p>
                     * @return NodeTaintsPolicy <p>节点污点策略</p>
                     * 
                     */
                    std::string GetNodeTaintsPolicy() const;

                    /**
                     * 设置<p>节点污点策略</p>
                     * @param _nodeTaintsPolicy <p>节点污点策略</p>
                     * 
                     */
                    void SetNodeTaintsPolicy(const std::string& _nodeTaintsPolicy);

                    /**
                     * 判断参数 NodeTaintsPolicy 是否已赋值
                     * @return NodeTaintsPolicy 是否已赋值
                     * 
                     */
                    bool NodeTaintsPolicyHasBeenSet() const;

                    /**
                     * 获取<p>匹配标签键列表</p>
                     * @return MatchLabelKeys <p>匹配标签键列表</p>
                     * 
                     */
                    std::vector<std::string> GetMatchLabelKeys() const;

                    /**
                     * 设置<p>匹配标签键列表</p>
                     * @param _matchLabelKeys <p>匹配标签键列表</p>
                     * 
                     */
                    void SetMatchLabelKeys(const std::vector<std::string>& _matchLabelKeys);

                    /**
                     * 判断参数 MatchLabelKeys 是否已赋值
                     * @return MatchLabelKeys 是否已赋值
                     * 
                     */
                    bool MatchLabelKeysHasBeenSet() const;

                private:

                    /**
                     * <p>最大偏差值</p>
                     */
                    int64_t m_maxSkew;
                    bool m_maxSkewHasBeenSet;

                    /**
                     * <p>拓扑域键</p>
                     */
                    std::string m_topologyKey;
                    bool m_topologyKeyHasBeenSet;

                    /**
                     * <p>不满足约束时的处理策略</p>
                     */
                    std::string m_whenUnsatisfiable;
                    bool m_whenUnsatisfiableHasBeenSet;

                    /**
                     * <p>标签选择器</p>
                     */
                    LabelSelector m_labelSelector;
                    bool m_labelSelectorHasBeenSet;

                    /**
                     * <p>最小拓扑域数量</p>
                     */
                    int64_t m_minDomains;
                    bool m_minDomainsHasBeenSet;

                    /**
                     * <p>节点亲和性策略</p>
                     */
                    std::string m_nodeAffinityPolicy;
                    bool m_nodeAffinityPolicyHasBeenSet;

                    /**
                     * <p>节点污点策略</p>
                     */
                    std::string m_nodeTaintsPolicy;
                    bool m_nodeTaintsPolicyHasBeenSet;

                    /**
                     * <p>匹配标签键列表</p>
                     */
                    std::vector<std::string> m_matchLabelKeys;
                    bool m_matchLabelKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TOPOLOGYSPREADCONSTRAINT_H_
