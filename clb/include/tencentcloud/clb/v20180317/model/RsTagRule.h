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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RSTAGRULE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RSTAGRULE_H_

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
                * 修改节点标签的数据类型
                */
                class RsTagRule : public AbstractModel
                {
                public:
                    RsTagRule();
                    ~RsTagRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>负载均衡监听器 ID。</p>
                     * @return ListenerId <p>负载均衡监听器 ID。</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>负载均衡监听器 ID。</p>
                     * @param _listenerId <p>负载均衡监听器 ID。</p>
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
                     * 获取<p>要修改标签的后端机器列表。</p>
                     * @return Targets <p>要修改标签的后端机器列表。</p>
                     * 
                     */
                    std::vector<Target> GetTargets() const;

                    /**
                     * 设置<p>要修改标签的后端机器列表。</p>
                     * @param _targets <p>要修改标签的后端机器列表。</p>
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
                     * 获取<p>转发规则的ID，七层规则时需要此参数，4层规则不需要。</p>
                     * @return LocationId <p>转发规则的ID，七层规则时需要此参数，4层规则不需要。</p>
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置<p>转发规则的ID，七层规则时需要此参数，4层规则不需要。</p>
                     * @param _locationId <p>转发规则的ID，七层规则时需要此参数，4层规则不需要。</p>
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
                     * 获取<p>后端服务修改后的标签。此参数的优先级低于前述<a href="https://cloud.tencent.com/document/api/214/30694#Target">Target</a>中的Tag参数，即最终的标签以Target中的Tag参数值为准，仅当Target中的Tag参数为空时，才以RsTagRule中的Tag参数为准。</p>
                     * @return Tag <p>后端服务修改后的标签。此参数的优先级低于前述<a href="https://cloud.tencent.com/document/api/214/30694#Target">Target</a>中的Tag参数，即最终的标签以Target中的Tag参数值为准，仅当Target中的Tag参数为空时，才以RsTagRule中的Tag参数为准。</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>后端服务修改后的标签。此参数的优先级低于前述<a href="https://cloud.tencent.com/document/api/214/30694#Target">Target</a>中的Tag参数，即最终的标签以Target中的Tag参数值为准，仅当Target中的Tag参数为空时，才以RsTagRule中的Tag参数为准。</p>
                     * @param _tag <p>后端服务修改后的标签。此参数的优先级低于前述<a href="https://cloud.tencent.com/document/api/214/30694#Target">Target</a>中的Tag参数，即最终的标签以Target中的Tag参数值为准，仅当Target中的Tag参数为空时，才以RsTagRule中的Tag参数为准。</p>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * <p>负载均衡监听器 ID。</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>要修改标签的后端机器列表。</p>
                     */
                    std::vector<Target> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * <p>转发规则的ID，七层规则时需要此参数，4层规则不需要。</p>
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * <p>后端服务修改后的标签。此参数的优先级低于前述<a href="https://cloud.tencent.com/document/api/214/30694#Target">Target</a>中的Tag参数，即最终的标签以Target中的Tag参数值为准，仅当Target中的Tag参数为空时，才以RsTagRule中的Tag参数为准。</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RSTAGRULE_H_
