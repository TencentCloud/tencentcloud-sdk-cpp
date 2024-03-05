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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RSWEIGHTRULE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RSWEIGHTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Target.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 修改节点权重的数据类型
                */
                class RsWeightRule : public AbstractModel
                {
                public:
                    RsWeightRule();
                    ~RsWeightRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡监听器 ID。
                     * @return ListenerId 负载均衡监听器 ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器 ID。
                     * @param _listenerId 负载均衡监听器 ID。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取要修改权重的后端机器列表。
                     * @return Targets 要修改权重的后端机器列表。
                     * 
                     */
                    std::vector<Target> GetTargets() const;

                    /**
                     * 设置要修改权重的后端机器列表。
                     * @param _targets 要修改权重的后端机器列表。
                     * 
                     */
                    void SetTargets(const std::vector<Target>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取转发规则的ID，七层规则时需要此参数，4层规则不需要。
                     * @return LocationId 转发规则的ID，七层规则时需要此参数，4层规则不需要。
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置转发规则的ID，七层规则时需要此参数，4层规则不需要。
                     * @param _locationId 转发规则的ID，七层规则时需要此参数，4层规则不需要。
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取目标规则的域名，提供LocationId参数时本参数不生效。
                     * @return Domain 目标规则的域名，提供LocationId参数时本参数不生效。
                     * @deprecated
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置目标规则的域名，提供LocationId参数时本参数不生效。
                     * @param _domain 目标规则的域名，提供LocationId参数时本参数不生效。
                     * @deprecated
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * @deprecated
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取目标规则的URL，提供LocationId参数时本参数不生效。
                     * @return Url 目标规则的URL，提供LocationId参数时本参数不生效。
                     * @deprecated
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置目标规则的URL，提供LocationId参数时本参数不生效。
                     * @param _url 目标规则的URL，提供LocationId参数时本参数不生效。
                     * @deprecated
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * @deprecated
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取后端服务修改后的转发权重，取值范围：[0，100]。此参数的优先级低于前述[Target](https://cloud.tencent.com/document/api/214/30694#Target)中的Weight参数，即最终的权重值以Target中的Weight参数值为准，仅当Target中的Weight参数为空时，才以RsWeightRule中的Weight参数为准。
                     * @return Weight 后端服务修改后的转发权重，取值范围：[0，100]。此参数的优先级低于前述[Target](https://cloud.tencent.com/document/api/214/30694#Target)中的Weight参数，即最终的权重值以Target中的Weight参数值为准，仅当Target中的Weight参数为空时，才以RsWeightRule中的Weight参数为准。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置后端服务修改后的转发权重，取值范围：[0，100]。此参数的优先级低于前述[Target](https://cloud.tencent.com/document/api/214/30694#Target)中的Weight参数，即最终的权重值以Target中的Weight参数值为准，仅当Target中的Weight参数为空时，才以RsWeightRule中的Weight参数为准。
                     * @param _weight 后端服务修改后的转发权重，取值范围：[0，100]。此参数的优先级低于前述[Target](https://cloud.tencent.com/document/api/214/30694#Target)中的Weight参数，即最终的权重值以Target中的Weight参数值为准，仅当Target中的Weight参数为空时，才以RsWeightRule中的Weight参数为准。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 负载均衡监听器 ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 要修改权重的后端机器列表。
                     */
                    std::vector<Target> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 转发规则的ID，七层规则时需要此参数，4层规则不需要。
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 目标规则的域名，提供LocationId参数时本参数不生效。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 目标规则的URL，提供LocationId参数时本参数不生效。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 后端服务修改后的转发权重，取值范围：[0，100]。此参数的优先级低于前述[Target](https://cloud.tencent.com/document/api/214/30694#Target)中的Weight参数，即最终的权重值以Target中的Weight参数值为准，仅当Target中的Weight参数为空时，才以RsWeightRule中的Weight参数为准。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RSWEIGHTRULE_H_
