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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QAREFERENCE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QAREFERENCE_H_

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
                * 问答对参考信息
                */
                class QaReference : public AbstractModel
                {
                public:
                    QaReference();
                    ~QaReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取问答业务ID
                     * @return QaBizId 问答业务ID
                     * 
                     */
                    uint64_t GetQaBizId() const;

                    /**
                     * 设置问答业务ID
                     * @param _qaBizId 问答业务ID
                     * 
                     */
                    void SetQaBizId(const uint64_t& _qaBizId);

                    /**
                     * 判断参数 QaBizId 是否已赋值
                     * @return QaBizId 是否已赋值
                     * 
                     */
                    bool QaBizIdHasBeenSet() const;

                    /**
                     * 获取文档片段参考ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReferBizId 文档片段参考ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReferBizId() const;

                    /**
                     * 设置文档片段参考ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _referBizId 文档片段参考ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReferBizId(const uint64_t& _referBizId);

                    /**
                     * 判断参数 ReferBizId 是否已赋值
                     * @return ReferBizId 是否已赋值
                     * 
                     */
                    bool ReferBizIdHasBeenSet() const;

                    /**
                     * 获取问答所在知识库业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeBizId 问答所在知识库业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetKnowledgeBizId() const;

                    /**
                     * 设置问答所在知识库业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeBizId 问答所在知识库业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledgeBizId(const uint64_t& _knowledgeBizId);

                    /**
                     * 判断参数 KnowledgeBizId 是否已赋值
                     * @return KnowledgeBizId 是否已赋值
                     * 
                     */
                    bool KnowledgeBizIdHasBeenSet() const;

                    /**
                     * 获取问答所在知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeName 问答所在知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKnowledgeName() const;

                    /**
                     * 设置问答所在知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeName 问答所在知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledgeName(const std::string& _knowledgeName);

                    /**
                     * 判断参数 KnowledgeName 是否已赋值
                     * @return KnowledgeName 是否已赋值
                     * 
                     */
                    bool KnowledgeNameHasBeenSet() const;

                private:

                    /**
                     * 问答业务ID
                     */
                    uint64_t m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * 文档片段参考ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_referBizId;
                    bool m_referBizIdHasBeenSet;

                    /**
                     * 问答所在知识库业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                    /**
                     * 问答所在知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_knowledgeName;
                    bool m_knowledgeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QAREFERENCE_H_
