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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEFILTERDOCANDANSWER_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEFILTERDOCANDANSWER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 文档和问答过滤器
                */
                class AgentKnowledgeFilterDocAndAnswer : public AbstractModel
                {
                public:
                    AgentKnowledgeFilterDocAndAnswer();
                    ~AgentKnowledgeFilterDocAndAnswer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文档ID列表
                     * @return DocBizIds 文档ID列表
                     * 
                     */
                    std::vector<std::string> GetDocBizIds() const;

                    /**
                     * 设置文档ID列表
                     * @param _docBizIds 文档ID列表
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
                     * 获取问答
                     * @return AllQa 问答
                     * 
                     */
                    bool GetAllQa() const;

                    /**
                     * 设置问答
                     * @param _allQa 问答
                     * 
                     */
                    void SetAllQa(const bool& _allQa);

                    /**
                     * 判断参数 AllQa 是否已赋值
                     * @return AllQa 是否已赋值
                     * 
                     */
                    bool AllQaHasBeenSet() const;

                private:

                    /**
                     * 文档ID列表
                     */
                    std::vector<std::string> m_docBizIds;
                    bool m_docBizIdsHasBeenSet;

                    /**
                     * 问答
                     */
                    bool m_allQa;
                    bool m_allQaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEFILTERDOCANDANSWER_H_
