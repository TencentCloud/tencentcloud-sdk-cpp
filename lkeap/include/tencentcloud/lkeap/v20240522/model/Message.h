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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_MESSAGE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_MESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/SearchResult.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 会话内容
                */
                class Message : public AbstractModel
                {
                public:
                    Message();
                    ~Message() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色
                     * @return Role 角色
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色
                     * @param _role 角色
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取内容
                     * @return Content 内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置内容
                     * @param _content 内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取思维链内容。
ReasoningConent参数仅支持出参，且只有deepseek-r1模型会返回。
                     * @return ReasoningContent 思维链内容。
ReasoningConent参数仅支持出参，且只有deepseek-r1模型会返回。
                     * 
                     */
                    std::string GetReasoningContent() const;

                    /**
                     * 设置思维链内容。
ReasoningConent参数仅支持出参，且只有deepseek-r1模型会返回。
                     * @param _reasoningContent 思维链内容。
ReasoningConent参数仅支持出参，且只有deepseek-r1模型会返回。
                     * 
                     */
                    void SetReasoningContent(const std::string& _reasoningContent);

                    /**
                     * 判断参数 ReasoningContent 是否已赋值
                     * @return ReasoningContent 是否已赋值
                     * 
                     */
                    bool ReasoningContentHasBeenSet() const;

                    /**
                     * 获取搜索结果
                     * @return SearchResults 搜索结果
                     * 
                     */
                    std::vector<SearchResult> GetSearchResults() const;

                    /**
                     * 设置搜索结果
                     * @param _searchResults 搜索结果
                     * 
                     */
                    void SetSearchResults(const std::vector<SearchResult>& _searchResults);

                    /**
                     * 判断参数 SearchResults 是否已赋值
                     * @return SearchResults 是否已赋值
                     * 
                     */
                    bool SearchResultsHasBeenSet() const;

                private:

                    /**
                     * 角色
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 思维链内容。
ReasoningConent参数仅支持出参，且只有deepseek-r1模型会返回。
                     */
                    std::string m_reasoningContent;
                    bool m_reasoningContentHasBeenSet;

                    /**
                     * 搜索结果
                     */
                    std::vector<SearchResult> m_searchResults;
                    bool m_searchResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_MESSAGE_H_
