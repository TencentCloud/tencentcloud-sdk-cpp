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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWTAGFILTER_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWTAGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * AI网关标签过滤
                */
                class AIGWTagFilter : public AbstractModel
                {
                public:
                    AIGWTagFilter();
                    ~AIGWTagFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>匹配策略</p><p>枚举值：</p><ul><li>AND： 并</li><li>OR： 或</li></ul>
                     * @return MatchStrategy <p>匹配策略</p><p>枚举值：</p><ul><li>AND： 并</li><li>OR： 或</li></ul>
                     * 
                     */
                    std::string GetMatchStrategy() const;

                    /**
                     * 设置<p>匹配策略</p><p>枚举值：</p><ul><li>AND： 并</li><li>OR： 或</li></ul>
                     * @param _matchStrategy <p>匹配策略</p><p>枚举值：</p><ul><li>AND： 并</li><li>OR： 或</li></ul>
                     * 
                     */
                    void SetMatchStrategy(const std::string& _matchStrategy);

                    /**
                     * 判断参数 MatchStrategy 是否已赋值
                     * @return MatchStrategy 是否已赋值
                     * 
                     */
                    bool MatchStrategyHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>匹配策略</p><p>枚举值：</p><ul><li>AND： 并</li><li>OR： 或</li></ul>
                     */
                    std::string m_matchStrategy;
                    bool m_matchStrategyHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWTAGFILTER_H_
