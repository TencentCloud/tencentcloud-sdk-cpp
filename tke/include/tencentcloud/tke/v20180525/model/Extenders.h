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
                     * 获取过滤阶段接口
                     * @return FilterVerb 过滤阶段接口
                     * 
                     */
                    std::string GetFilterVerb() const;

                    /**
                     * 设置过滤阶段接口
                     * @param _filterVerb 过滤阶段接口
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
                     * 获取打分阶段扩展接口
                     * @return PrioritizeVerb 打分阶段扩展接口
                     * 
                     */
                    std::string GetPrioritizeVerb() const;

                    /**
                     * 设置打分阶段扩展接口
                     * @param _prioritizeVerb 打分阶段扩展接口
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
                     * 获取打分阶段节点分数的权重,取值范围限定(0,2】
                     * @return Weight 打分阶段节点分数的权重,取值范围限定(0,2】
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置打分阶段节点分数的权重,取值范围限定(0,2】
                     * @param _weight 打分阶段节点分数的权重,取值范围限定(0,2】
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
                     * 获取扩展调度器(Extender)管理的扩展资源
                     * @return ManagedResources 扩展调度器(Extender)管理的扩展资源
                     * 
                     */
                    std::vector<ExtenderManagedResource> GetManagedResources() const;

                    /**
                     * 设置扩展调度器(Extender)管理的扩展资源
                     * @param _managedResources 扩展调度器(Extender)管理的扩展资源
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
                     * 获取extender客户端配置
                     * @return ExtenderClientConfig extender客户端配置
                     * 
                     */
                    ExtenderClientConfig GetExtenderClientConfig() const;

                    /**
                     * 设置extender客户端配置
                     * @param _extenderClientConfig extender客户端配置
                     * 
                     */
                    void SetExtenderClientConfig(const ExtenderClientConfig& _extenderClientConfig);

                    /**
                     * 判断参数 ExtenderClientConfig 是否已赋值
                     * @return ExtenderClientConfig 是否已赋值
                     * 
                     */
                    bool ExtenderClientConfigHasBeenSet() const;

                private:

                    /**
                     * 过滤阶段接口
                     */
                    std::string m_filterVerb;
                    bool m_filterVerbHasBeenSet;

                    /**
                     * 打分阶段扩展接口
                     */
                    std::string m_prioritizeVerb;
                    bool m_prioritizeVerbHasBeenSet;

                    /**
                     * 打分阶段节点分数的权重,取值范围限定(0,2】
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 扩展调度器(Extender)管理的扩展资源
                     */
                    std::vector<ExtenderManagedResource> m_managedResources;
                    bool m_managedResourcesHasBeenSet;

                    /**
                     * extender客户端配置
                     */
                    ExtenderClientConfig m_extenderClientConfig;
                    bool m_extenderClientConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXTENDERS_H_
