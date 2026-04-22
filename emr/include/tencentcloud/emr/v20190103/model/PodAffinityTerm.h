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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PODAFFINITYTERM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PODAFFINITYTERM_H_

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
                * Pod亲和性项
                */
                class PodAffinityTerm : public AbstractModel
                {
                public:
                    PodAffinityTerm();
                    ~PodAffinityTerm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>命名空间列表</p>
                     * @return Namespaces <p>命名空间列表</p>
                     * 
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置<p>命名空间列表</p>
                     * @param _namespaces <p>命名空间列表</p>
                     * 
                     */
                    void SetNamespaces(const std::vector<std::string>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     * 
                     */
                    bool NamespacesHasBeenSet() const;

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
                     * 获取<p>命名空间选择器</p>
                     * @return NamespaceSelector <p>命名空间选择器</p>
                     * 
                     */
                    LabelSelector GetNamespaceSelector() const;

                    /**
                     * 设置<p>命名空间选择器</p>
                     * @param _namespaceSelector <p>命名空间选择器</p>
                     * 
                     */
                    void SetNamespaceSelector(const LabelSelector& _namespaceSelector);

                    /**
                     * 判断参数 NamespaceSelector 是否已赋值
                     * @return NamespaceSelector 是否已赋值
                     * 
                     */
                    bool NamespaceSelectorHasBeenSet() const;

                private:

                    /**
                     * <p>标签选择器</p>
                     */
                    LabelSelector m_labelSelector;
                    bool m_labelSelectorHasBeenSet;

                    /**
                     * <p>命名空间列表</p>
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * <p>拓扑域键</p>
                     */
                    std::string m_topologyKey;
                    bool m_topologyKeyHasBeenSet;

                    /**
                     * <p>命名空间选择器</p>
                     */
                    LabelSelector m_namespaceSelector;
                    bool m_namespaceSelectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODAFFINITYTERM_H_
