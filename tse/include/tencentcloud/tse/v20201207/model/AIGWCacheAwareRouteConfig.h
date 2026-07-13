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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWCACHEAWAREROUTECONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWCACHEAWAREROUTECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/AIGWCacheAwareRouteCandidate.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 缓存感知路由
                */
                class AIGWCacheAwareRouteConfig : public AbstractModel
                {
                public:
                    AIGWCacheAwareRouteConfig();
                    ~AIGWCacheAwareRouteConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>前缀缓存感知路由模型服务候选列表</p>
                     * @return Candidates <p>前缀缓存感知路由模型服务候选列表</p>
                     * 
                     */
                    std::vector<AIGWCacheAwareRouteCandidate> GetCandidates() const;

                    /**
                     * 设置<p>前缀缓存感知路由模型服务候选列表</p>
                     * @param _candidates <p>前缀缓存感知路由模型服务候选列表</p>
                     * 
                     */
                    void SetCandidates(const std::vector<AIGWCacheAwareRouteCandidate>& _candidates);

                    /**
                     * 判断参数 Candidates 是否已赋值
                     * @return Candidates 是否已赋值
                     * 
                     */
                    bool CandidatesHasBeenSet() const;

                private:

                    /**
                     * <p>前缀缓存感知路由模型服务候选列表</p>
                     */
                    std::vector<AIGWCacheAwareRouteCandidate> m_candidates;
                    bool m_candidatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWCACHEAWAREROUTECONFIG_H_
