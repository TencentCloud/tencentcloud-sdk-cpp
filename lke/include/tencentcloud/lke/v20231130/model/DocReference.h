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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DOCREFERENCE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DOCREFERENCE_H_

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
                * 文档类参考来源信息
                */
                class DocReference : public AbstractModel
                {
                public:
                    DocReference();
                    ~DocReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文档业务ID
                     * @return DocBizId 文档业务ID
                     * 
                     */
                    uint64_t GetDocBizId() const;

                    /**
                     * 设置文档业务ID
                     * @param _docBizId 文档业务ID
                     * 
                     */
                    void SetDocBizId(const uint64_t& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

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
                     * 获取文档名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocName 文档名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocName() const;

                    /**
                     * 设置文档名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docName 文档名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取文档所在知识库业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeBizId 文档所在知识库业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetKnowledgeBizId() const;

                    /**
                     * 设置文档所在知识库业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeBizId 文档所在知识库业务ID
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
                     * 获取文档所在知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeName 文档所在知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKnowledgeName() const;

                    /**
                     * 设置文档所在知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeName 文档所在知识库名称
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

                    /**
                     * 获取文档访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 文档访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置文档访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 文档访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 文档业务ID
                     */
                    uint64_t m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 文档片段参考ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_referBizId;
                    bool m_referBizIdHasBeenSet;

                    /**
                     * 文档名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docName;
                    bool m_docNameHasBeenSet;

                    /**
                     * 文档所在知识库业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                    /**
                     * 文档所在知识库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_knowledgeName;
                    bool m_knowledgeNameHasBeenSet;

                    /**
                     * 文档访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DOCREFERENCE_H_
