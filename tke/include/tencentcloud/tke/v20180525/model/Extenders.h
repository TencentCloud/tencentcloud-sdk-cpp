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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EXTENDERS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EXTENDERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ExtenderManagedResource.h>
#include <tencentcloud/tke/v20180525/model/ExtenderClientConfig.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 扩展调度器(Extenders)
                */
                class Extenders : public AbstractModel
                {
                public:
                    Extenders();
                    ~Extenders() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>过滤阶段接口</p>
                     * @return FilterVerb <p>过滤阶段接口</p>
                     * 
                     */
                    std::string GetFilterVerb() const;

                    /**
                     * 设置<p>过滤阶段接口</p>
                     * @param _filterVerb <p>过滤阶段接口</p>
                     * 
                     */
                    void SetFilterVerb(const std::string& _filterVerb);

                    /**
                     * 判断参数 FilterVerb 是否已赋值
                     * @return FilterVerb 是否已赋值
                     * 
                     */
                    bool FilterVerbHasBeenSet() const;

                    /**
                     * 获取<p>打分阶段扩展接口</p>
                     * @return PrioritizeVerb <p>打分阶段扩展接口</p>
                     * 
                     */
                    std::string GetPrioritizeVerb() const;

                    /**
                     * 设置<p>打分阶段扩展接口</p>
                     * @param _prioritizeVerb <p>打分阶段扩展接口</p>
                     * 
                     */
                    void SetPrioritizeVerb(const std::string& _prioritizeVerb);

                    /**
                     * 判断参数 PrioritizeVerb 是否已赋值
                     * @return PrioritizeVerb 是否已赋值
                     * 
                     */
                    bool PrioritizeVerbHasBeenSet() const;

                    /**
                     * 获取<p>打分阶段节点分数的权重,取值范围限定(0,2】</p>
                     * @return Weight <p>打分阶段节点分数的权重,取值范围限定(0,2】</p>
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置<p>打分阶段节点分数的权重,取值范围限定(0,2】</p>
                     * @param _weight <p>打分阶段节点分数的权重,取值范围限定(0,2】</p>
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取<p>扩展调度器(Extender)管理的扩展资源</p>
                     * @return ManagedResources <p>扩展调度器(Extender)管理的扩展资源</p>
                     * 
                     */
                    std::vector<ExtenderManagedResource> GetManagedResources() const;

                    /**
                     * 设置<p>扩展调度器(Extender)管理的扩展资源</p>
                     * @param _managedResources <p>扩展调度器(Extender)管理的扩展资源</p>
                     * 
                     */
                    void SetManagedResources(const std::vector<ExtenderManagedResource>& _managedResources);

                    /**
                     * 判断参数 ManagedResources 是否已赋值
                     * @return ManagedResources 是否已赋值
                     * 
                     */
                    bool ManagedResourcesHasBeenSet() const;

                    /**
                     * 获取<p>extender客户端配置</p>
                     * @return ExtenderClientConfig <p>extender客户端配置</p>
                     * 
                     */
                    ExtenderClientConfig GetExtenderClientConfig() const;

                    /**
                     * 设置<p>extender客户端配置</p>
                     * @param _extenderClientConfig <p>extender客户端配置</p>
                     * 
                     */
                    void SetExtenderClientConfig(const ExtenderClientConfig& _extenderClientConfig);

                    /**
                     * 判断参数 ExtenderClientConfig 是否已赋值
                     * @return ExtenderClientConfig 是否已赋值
                     * 
                     */
                    bool ExtenderClientConfigHasBeenSet() const;

                    /**
                     * 获取<p>抢占接口</p>
                     * @return PreemptVerb <p>抢占接口</p>
                     * 
                     */
                    std::string GetPreemptVerb() const;

                    /**
                     * 设置<p>抢占接口</p>
                     * @param _preemptVerb <p>抢占接口</p>
                     * 
                     */
                    void SetPreemptVerb(const std::string& _preemptVerb);

                    /**
                     * 判断参数 PreemptVerb 是否已赋值
                     * @return PreemptVerb 是否已赋值
                     * 
                     */
                    bool PreemptVerbHasBeenSet() const;

                    /**
                     * 获取<p>节点缓存能力</p>
                     * @return NodeCacheCapable <p>节点缓存能力</p>
                     * 
                     */
                    bool GetNodeCacheCapable() const;

                    /**
                     * 设置<p>节点缓存能力</p>
                     * @param _nodeCacheCapable <p>节点缓存能力</p>
                     * 
                     */
                    void SetNodeCacheCapable(const bool& _nodeCacheCapable);

                    /**
                     * 判断参数 NodeCacheCapable 是否已赋值
                     * @return NodeCacheCapable 是否已赋值
                     * 
                     */
                    bool NodeCacheCapableHasBeenSet() const;

                private:

                    /**
                     * <p>过滤阶段接口</p>
                     */
                    std::string m_filterVerb;
                    bool m_filterVerbHasBeenSet;

                    /**
                     * <p>打分阶段扩展接口</p>
                     */
                    std::string m_prioritizeVerb;
                    bool m_prioritizeVerbHasBeenSet;

                    /**
                     * <p>打分阶段节点分数的权重,取值范围限定(0,2】</p>
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>扩展调度器(Extender)管理的扩展资源</p>
                     */
                    std::vector<ExtenderManagedResource> m_managedResources;
                    bool m_managedResourcesHasBeenSet;

                    /**
                     * <p>extender客户端配置</p>
                     */
                    ExtenderClientConfig m_extenderClientConfig;
                    bool m_extenderClientConfigHasBeenSet;

                    /**
                     * <p>抢占接口</p>
                     */
                    std::string m_preemptVerb;
                    bool m_preemptVerbHasBeenSet;

                    /**
                     * <p>节点缓存能力</p>
                     */
                    bool m_nodeCacheCapable;
                    bool m_nodeCacheCapableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXTENDERS_H_
