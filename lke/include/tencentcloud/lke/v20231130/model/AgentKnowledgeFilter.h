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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEFILTER_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentKnowledgeFilterDocAndAnswer.h>
#include <tencentcloud/lke/v20231130/model/AgentKnowledgeFilterTag.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 知识检索筛选范围
                */
                class AgentKnowledgeFilter : public AbstractModel
                {
                public:
                    AgentKnowledgeFilter();
                    ~AgentKnowledgeFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取知识检索筛选方式; 0: 全部知识; 1:按文档和问答; 2: 按标签
                     * @return FilterType 知识检索筛选方式; 0: 全部知识; 1:按文档和问答; 2: 按标签
                     * 
                     */
                    uint64_t GetFilterType() const;

                    /**
                     * 设置知识检索筛选方式; 0: 全部知识; 1:按文档和问答; 2: 按标签
                     * @param _filterType 知识检索筛选方式; 0: 全部知识; 1:按文档和问答; 2: 按标签
                     * 
                     */
                    void SetFilterType(const uint64_t& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取文档和问答过滤器
                     * @return DocAndAnswer 文档和问答过滤器
                     * 
                     */
                    AgentKnowledgeFilterDocAndAnswer GetDocAndAnswer() const;

                    /**
                     * 设置文档和问答过滤器
                     * @param _docAndAnswer 文档和问答过滤器
                     * 
                     */
                    void SetDocAndAnswer(const AgentKnowledgeFilterDocAndAnswer& _docAndAnswer);

                    /**
                     * 判断参数 DocAndAnswer 是否已赋值
                     * @return DocAndAnswer 是否已赋值
                     * 
                     */
                    bool DocAndAnswerHasBeenSet() const;

                    /**
                     * 获取标签过滤器
                     * @return Tag 标签过滤器
                     * 
                     */
                    AgentKnowledgeFilterTag GetTag() const;

                    /**
                     * 设置标签过滤器
                     * @param _tag 标签过滤器
                     * 
                     */
                    void SetTag(const AgentKnowledgeFilterTag& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 知识检索筛选方式; 0: 全部知识; 1:按文档和问答; 2: 按标签
                     */
                    uint64_t m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * 文档和问答过滤器
                     */
                    AgentKnowledgeFilterDocAndAnswer m_docAndAnswer;
                    bool m_docAndAnswerHasBeenSet;

                    /**
                     * 标签过滤器
                     */
                    AgentKnowledgeFilterTag m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEFILTER_H_
