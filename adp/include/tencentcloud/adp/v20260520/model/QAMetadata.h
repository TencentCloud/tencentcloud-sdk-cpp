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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_QAMETADATA_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_QAMETADATA_H_

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
                * QA 元信息
                */
                class QAMetadata : public AbstractModel
                {
                public:
                    QAMetadata();
                    ~QAMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>答案</p>
                     * @return Answer <p>答案</p>
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置<p>答案</p>
                     * @param _answer <p>答案</p>
                     * 
                     */
                    void SetAnswer(const std::string& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取<p>问答字符数</p>
                     * @return QaCharCount <p>问答字符数</p>
                     * 
                     */
                    std::string GetQaCharCount() const;

                    /**
                     * 设置<p>问答字符数</p>
                     * @param _qaCharCount <p>问答字符数</p>
                     * 
                     */
                    void SetQaCharCount(const std::string& _qaCharCount);

                    /**
                     * 判断参数 QaCharCount 是否已赋值
                     * @return QaCharCount 是否已赋值
                     * 
                     */
                    bool QaCharCountHasBeenSet() const;

                    /**
                     * 获取<p>问答大小（字节，含相似问）</p>
                     * @return QaSize <p>问答大小（字节，含相似问）</p>
                     * 
                     */
                    std::string GetQaSize() const;

                    /**
                     * 设置<p>问答大小（字节，含相似问）</p>
                     * @param _qaSize <p>问答大小（字节，含相似问）</p>
                     * 
                     */
                    void SetQaSize(const std::string& _qaSize);

                    /**
                     * 判断参数 QaSize 是否已赋值
                     * @return QaSize 是否已赋值
                     * 
                     */
                    bool QaSizeHasBeenSet() const;

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
                     * 获取<p>元数据引用字段名列表（用于显示问答哪些分类和属性被设置为元数据）</p>
                     * @return RefFieldNameList <p>元数据引用字段名列表（用于显示问答哪些分类和属性被设置为元数据）</p>
                     * 
                     */
                    std::vector<std::string> GetRefFieldNameList() const;

                    /**
                     * 设置<p>元数据引用字段名列表（用于显示问答哪些分类和属性被设置为元数据）</p>
                     * @param _refFieldNameList <p>元数据引用字段名列表（用于显示问答哪些分类和属性被设置为元数据）</p>
                     * 
                     */
                    void SetRefFieldNameList(const std::vector<std::string>& _refFieldNameList);

                    /**
                     * 判断参数 RefFieldNameList 是否已赋值
                     * @return RefFieldNameList 是否已赋值
                     * 
                     */
                    bool RefFieldNameListHasBeenSet() const;

                private:

                    /**
                     * <p>答案</p>
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * <p>问答字符数</p>
                     */
                    std::string m_qaCharCount;
                    bool m_qaCharCountHasBeenSet;

                    /**
                     * <p>问答大小（字节，含相似问）</p>
                     */
                    std::string m_qaSize;
                    bool m_qaSizeHasBeenSet;

                    /**
                     * <p>问题</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>元数据引用字段名列表（用于显示问答哪些分类和属性被设置为元数据）</p>
                     */
                    std::vector<std::string> m_refFieldNameList;
                    bool m_refFieldNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_QAMETADATA_H_
