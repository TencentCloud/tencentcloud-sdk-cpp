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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KNOWLEDGESNIPPETPROFILE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KNOWLEDGESNIPPETPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 知识片段基础信息
                */
                class KnowledgeSnippetProfile : public AbstractModel
                {
                public:
                    KnowledgeSnippetProfile();
                    ~KnowledgeSnippetProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>内容</p>
                     * @return Content <p>内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>内容</p>
                     * @param _content <p>内容</p>
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
                     * 获取<p>关联文档 ID</p>
                     * @return DocId <p>关联文档 ID</p>
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置<p>关联文档 ID</p>
                     * @param _docId <p>关联文档 ID</p>
                     * 
                     */
                    void SetDocId(const std::string& _docId);

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                    /**
                     * 获取<p>文档名</p>
                     * @return DocName <p>文档名</p>
                     * 
                     */
                    std::string GetDocName() const;

                    /**
                     * 设置<p>文档名</p>
                     * @param _docName <p>文档名</p>
                     * 
                     */
                    void SetDocName(const std::string& _docName);

                    /**
                     * 判断参数 DocName 是否已赋值
                     * @return DocName 是否已赋值
                     * 
                     */
                    bool DocNameHasBeenSet() const;

                    /**
                     * 获取<p>知识库 ID</p>
                     * @return KbId <p>知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>知识库 ID</p>
                     * @param _kbId <p>知识库 ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>知识 ID</p>
                     * @return KnowledgeId <p>知识 ID</p>
                     * 
                     */
                    std::string GetKnowledgeId() const;

                    /**
                     * 设置<p>知识 ID</p>
                     * @param _knowledgeId <p>知识 ID</p>
                     * 
                     */
                    void SetKnowledgeId(const std::string& _knowledgeId);

                    /**
                     * 判断参数 KnowledgeId 是否已赋值
                     * @return KnowledgeId 是否已赋值
                     * 
                     */
                    bool KnowledgeIdHasBeenSet() const;

                    /**
                     * 获取<p>问题</p>
                     * @return Question <p>问题</p>
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置<p>问题</p>
                     * @param _question <p>问题</p>
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取<p>文档标题</p>
                     * @return Title <p>文档标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>文档标题</p>
                     * @param _title <p>文档标题</p>
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                private:

                    /**
                     * <p>内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>关联文档 ID</p>
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * <p>文档名</p>
                     */
                    std::string m_docName;
                    bool m_docNameHasBeenSet;

                    /**
                     * <p>知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>知识 ID</p>
                     */
                    std::string m_knowledgeId;
                    bool m_knowledgeIdHasBeenSet;

                    /**
                     * <p>问题</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>文档标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KNOWLEDGESNIPPETPROFILE_H_
