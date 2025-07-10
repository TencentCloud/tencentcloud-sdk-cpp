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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Agent 知识库检索插件支持多知识库搜索
                */
                class AgentKnowledge : public AbstractModel
                {
                public:
                    AgentKnowledge();
                    ~AgentKnowledge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取知识库id
                     * @return KnowledgeBizId 知识库id
                     * 
                     */
                    std::string GetKnowledgeBizId() const;

                    /**
                     * 设置知识库id
                     * @param _knowledgeBizId 知识库id
                     * 
                     */
                    void SetKnowledgeBizId(const std::string& _knowledgeBizId);

                    /**
                     * 判断参数 KnowledgeBizId 是否已赋值
                     * @return KnowledgeBizId 是否已赋值
                     * 
                     */
                    bool KnowledgeBizIdHasBeenSet() const;

                    /**
                     * 获取0-应用内知识库
1-共享知识库
                     * @return KnowledgeType 0-应用内知识库
1-共享知识库
                     * 
                     */
                    int64_t GetKnowledgeType() const;

                    /**
                     * 设置0-应用内知识库
1-共享知识库
                     * @param _knowledgeType 0-应用内知识库
1-共享知识库
                     * 
                     */
                    void SetKnowledgeType(const int64_t& _knowledgeType);

                    /**
                     * 判断参数 KnowledgeType 是否已赋值
                     * @return KnowledgeType 是否已赋值
                     * 
                     */
                    bool KnowledgeTypeHasBeenSet() const;

                    /**
                     * 获取0-全部知识
1-按文档和问答
2-按标签
                     * @return Filter 0-全部知识
1-按文档和问答
2-按标签
                     * 
                     */
                    int64_t GetFilter() const;

                    /**
                     * 设置0-全部知识
1-按文档和问答
2-按标签
                     * @param _filter 0-全部知识
1-按文档和问答
2-按标签
                     * 
                     */
                    void SetFilter(const int64_t& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取文档id
                     * @return DocBizIds 文档id
                     * 
                     */
                    std::vector<std::string> GetDocBizIds() const;

                    /**
                     * 设置文档id
                     * @param _docBizIds 文档id
                     * 
                     */
                    void SetDocBizIds(const std::vector<std::string>& _docBizIds);

                    /**
                     * 判断参数 DocBizIds 是否已赋值
                     * @return DocBizIds 是否已赋值
                     * 
                     */
                    bool DocBizIdsHasBeenSet() const;

                    /**
                     * 获取true:包含所有问答
false:不包含问答
                     * @return AllQa true:包含所有问答
false:不包含问答
                     * 
                     */
                    bool GetAllQa() const;

                    /**
                     * 设置true:包含所有问答
false:不包含问答
                     * @param _allQa true:包含所有问答
false:不包含问答
                     * 
                     */
                    void SetAllQa(const bool& _allQa);

                    /**
                     * 判断参数 AllQa 是否已赋值
                     * @return AllQa 是否已赋值
                     * 
                     */
                    bool AllQaHasBeenSet() const;

                    /**
                     * 获取文档标签过滤器
                     * @return Tag 文档标签过滤器
                     * 
                     */
                    AgentKnowledgeFilterTag GetTag() const;

                    /**
                     * 设置文档标签过滤器
                     * @param _tag 文档标签过滤器
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
                     * 知识库id
                     */
                    std::string m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                    /**
                     * 0-应用内知识库
1-共享知识库
                     */
                    int64_t m_knowledgeType;
                    bool m_knowledgeTypeHasBeenSet;

                    /**
                     * 0-全部知识
1-按文档和问答
2-按标签
                     */
                    int64_t m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 文档id
                     */
                    std::vector<std::string> m_docBizIds;
                    bool m_docBizIdsHasBeenSet;

                    /**
                     * true:包含所有问答
false:不包含问答
                     */
                    bool m_allQa;
                    bool m_allQaHasBeenSet;

                    /**
                     * 文档标签过滤器
                     */
                    AgentKnowledgeFilterTag m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGE_H_
