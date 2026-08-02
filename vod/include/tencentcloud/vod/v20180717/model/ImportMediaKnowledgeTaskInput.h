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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMPORTMEDIAKNOWLEDGETASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMPORTMEDIAKNOWLEDGETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 任务流模板导入智能媒资知识库输入参数类型。
                */
                class ImportMediaKnowledgeTaskInput : public AbstractModel
                {
                public:
                    ImportMediaKnowledgeTaskInput();
                    ~ImportMediaKnowledgeTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>大模型理解模板</p>
                     * @return Definition <p>大模型理解模板</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>大模型理解模板</p>
                     * @param _definition <p>大模型理解模板</p>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>知识库ID列表，留空时将使用默认知识库</p>
                     * @return KnowledgeBaseIds <p>知识库ID列表，留空时将使用默认知识库</p>
                     * 
                     */
                    std::vector<std::string> GetKnowledgeBaseIds() const;

                    /**
                     * 设置<p>知识库ID列表，留空时将使用默认知识库</p>
                     * @param _knowledgeBaseIds <p>知识库ID列表，留空时将使用默认知识库</p>
                     * 
                     */
                    void SetKnowledgeBaseIds(const std::vector<std::string>& _knowledgeBaseIds);

                    /**
                     * 判断参数 KnowledgeBaseIds 是否已赋值
                     * @return KnowledgeBaseIds 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdsHasBeenSet() const;

                private:

                    /**
                     * <p>大模型理解模板</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>知识库ID列表，留空时将使用默认知识库</p>
                     */
                    std::vector<std::string> m_knowledgeBaseIds;
                    bool m_knowledgeBaseIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMPORTMEDIAKNOWLEDGETASKINPUT_H_
