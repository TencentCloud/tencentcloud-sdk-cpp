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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_FILTERSELECTOR_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_FILTERSELECTOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 过滤选择器
                */
                class FilterSelector : public AbstractModel
                {
                public:
                    FilterSelector();
                    ~FilterSelector() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>过滤规则类型，在tag过滤中，可选值为matches（匹配），excludes(排除)，在仓库过滤中，可选值为repoMatches（仓库匹配），repoExcludes（仓库排除）</p>
                     * @return Decoration <p>过滤规则类型，在tag过滤中，可选值为matches（匹配），excludes(排除)，在仓库过滤中，可选值为repoMatches（仓库匹配），repoExcludes（仓库排除）</p>
                     * 
                     */
                    std::string GetDecoration() const;

                    /**
                     * 设置<p>过滤规则类型，在tag过滤中，可选值为matches（匹配），excludes(排除)，在仓库过滤中，可选值为repoMatches（仓库匹配），repoExcludes（仓库排除）</p>
                     * @param _decoration <p>过滤规则类型，在tag过滤中，可选值为matches（匹配），excludes(排除)，在仓库过滤中，可选值为repoMatches（仓库匹配），repoExcludes（仓库排除）</p>
                     * 
                     */
                    void SetDecoration(const std::string& _decoration);

                    /**
                     * 判断参数 Decoration 是否已赋值
                     * @return Decoration 是否已赋值
                     * 
                     */
                    bool DecorationHasBeenSet() const;

                    /**
                     * 获取<p>过滤表达式</p>
                     * @return Pattern <p>过滤表达式</p>
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置<p>过滤表达式</p>
                     * @param _pattern <p>过滤表达式</p>
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                private:

                    /**
                     * <p>过滤规则类型，在tag过滤中，可选值为matches（匹配），excludes(排除)，在仓库过滤中，可选值为repoMatches（仓库匹配），repoExcludes（仓库排除）</p>
                     */
                    std::string m_decoration;
                    bool m_decorationHasBeenSet;

                    /**
                     * <p>过滤表达式</p>
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_FILTERSELECTOR_H_
