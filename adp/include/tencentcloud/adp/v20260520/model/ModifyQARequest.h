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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYQAREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYQAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/QAModifyFields.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyQA请求参数结构体
                */
                class ModifyQARequest : public AbstractModel
                {
                public:
                    ModifyQARequest();
                    ~ModifyQARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>修改字段内容（与 update_mask 配合使用）</p>
                     * @return Fields <p>修改字段内容（与 update_mask 配合使用）</p>
                     * 
                     */
                    QAModifyFields GetFields() const;

                    /**
                     * 设置<p>修改字段内容（与 update_mask 配合使用）</p>
                     * @param _fields <p>修改字段内容（与 update_mask 配合使用）</p>
                     * 
                     */
                    void SetFields(const QAModifyFields& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取<p>所属知识库 ID</p>
                     * @return KbId <p>所属知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>所属知识库 ID</p>
                     * @param _kbId <p>所属知识库 ID</p>
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
                     * 获取<p>QA ID</p>
                     * @return QaId <p>QA ID</p>
                     * 
                     */
                    std::string GetQaId() const;

                    /**
                     * 设置<p>QA ID</p>
                     * @param _qaId <p>QA ID</p>
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
                     * 获取<p>字段掩码：指定要修改的字段（支持的 Paths：Question, Answer, CategoryId, DocId, LabelRefList, QuestionDescription, ExpirationPolicy, SimilarQuestionList, EffectiveDomain, IsAccepted）</p>
                     * @return UpdateMask <p>字段掩码：指定要修改的字段（支持的 Paths：Question, Answer, CategoryId, DocId, LabelRefList, QuestionDescription, ExpirationPolicy, SimilarQuestionList, EffectiveDomain, IsAccepted）</p>
                     * 
                     */
                    FieldMask GetUpdateMask() const;

                    /**
                     * 设置<p>字段掩码：指定要修改的字段（支持的 Paths：Question, Answer, CategoryId, DocId, LabelRefList, QuestionDescription, ExpirationPolicy, SimilarQuestionList, EffectiveDomain, IsAccepted）</p>
                     * @param _updateMask <p>字段掩码：指定要修改的字段（支持的 Paths：Question, Answer, CategoryId, DocId, LabelRefList, QuestionDescription, ExpirationPolicy, SimilarQuestionList, EffectiveDomain, IsAccepted）</p>
                     * 
                     */
                    void SetUpdateMask(const FieldMask& _updateMask);

                    /**
                     * 判断参数 UpdateMask 是否已赋值
                     * @return UpdateMask 是否已赋值
                     * 
                     */
                    bool UpdateMaskHasBeenSet() const;

                private:

                    /**
                     * <p>修改字段内容（与 update_mask 配合使用）</p>
                     */
                    QAModifyFields m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * <p>所属知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>QA ID</p>
                     */
                    std::string m_qaId;
                    bool m_qaIdHasBeenSet;

                    /**
                     * <p>字段掩码：指定要修改的字段（支持的 Paths：Question, Answer, CategoryId, DocId, LabelRefList, QuestionDescription, ExpirationPolicy, SimilarQuestionList, EffectiveDomain, IsAccepted）</p>
                     */
                    FieldMask m_updateMask;
                    bool m_updateMaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYQAREQUEST_H_
