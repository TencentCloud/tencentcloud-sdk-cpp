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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_QAITEM_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_QAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/AttributeLabelReferItem.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 问答对信息
                */
                class QaItem : public AbstractModel
                {
                public:
                    QaItem();
                    ~QaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取问答id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QaId 问答id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQaId() const;

                    /**
                     * 设置问答id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qaId 问答id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQaId(const std::string& _qaId);

                    /**
                     * 判断参数 QaId 是否已赋值
                     * @return QaId 是否已赋值
                     * 
                     */
                    bool QaIdHasBeenSet() const;

                    /**
                     * 获取问题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Question 问题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置问题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _question 问题
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取答案
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Answer 答案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置答案
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _answer 答案
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取属性标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttributeLabels 属性标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AttributeLabelReferItem> GetAttributeLabels() const;

                    /**
                     * 设置属性标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attributeLabels 属性标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttributeLabels(const std::vector<AttributeLabelReferItem>& _attributeLabels);

                    /**
                     * 判断参数 AttributeLabels 是否已赋值
                     * @return AttributeLabels 是否已赋值
                     * 
                     */
                    bool AttributeLabelsHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 问答id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qaId;
                    bool m_qaIdHasBeenSet;

                    /**
                     * 问题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 答案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * 属性标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AttributeLabelReferItem> m_attributeLabels;
                    bool m_attributeLabelsHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_QAITEM_H_
