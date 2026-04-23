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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTREFERENCE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTREFERENCE_H_

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
                * Agent中的参考来源
                */
                class AgentReference : public AbstractModel
                {
                public:
                    AgentReference();
                    ~AgentReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>来源文档ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocId <p>来源文档ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置<p>来源文档ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docId <p>来源文档ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>类型</p><p>枚举值：</p><ul><li>1： 问答</li><li>2： 文档片段</li><li>4： 联网检索到的内容</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>类型</p><p>枚举值：</p><ul><li>1： 问答</li><li>2： 文档片段</li><li>4： 联网检索到的内容</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>类型</p><p>枚举值：</p><ul><li>1： 问答</li><li>2： 文档片段</li><li>4： 联网检索到的内容</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>类型</p><p>枚举值：</p><ul><li>1： 问答</li><li>2： 文档片段</li><li>4： 联网检索到的内容</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url <p>链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url <p>链接</p>
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

                    /**
                     * 获取<p>文档业务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocBizId <p>文档业务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置<p>文档业务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docBizId <p>文档业务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取<p>文档名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocName <p>文档名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocName() const;

                    /**
                     * 设置<p>文档名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docName <p>文档名称</p>
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
                     * 获取<p>问答业务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QaBizId <p>问答业务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置<p>问答业务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qaBizId <p>问答业务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQaBizId(const std::string& _qaBizId);

                    /**
                     * 判断参数 QaBizId 是否已赋值
                     * @return QaBizId 是否已赋值
                     * 
                     */
                    bool QaBizIdHasBeenSet() const;

                    /**
                     * 获取<p>搜索引擎索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index <p>搜索引擎索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置<p>搜索引擎索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index <p>搜索引擎索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const uint64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>标题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title <p>标题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>标题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title <p>标题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>知识库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeName <p>知识库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKnowledgeName() const;

                    /**
                     * 设置<p>知识库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeName <p>知识库名称</p>
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
                     * 获取<p>知识库标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeBizId <p>知识库标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKnowledgeBizId() const;

                    /**
                     * 设置<p>知识库标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgeBizId <p>知识库标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledgeBizId(const std::string& _knowledgeBizId);

                    /**
                     * 判断参数 KnowledgeBizId 是否已赋值
                     * @return KnowledgeBizId 是否已赋值
                     * 
                     */
                    bool KnowledgeBizIdHasBeenSet() const;

                private:

                    /**
                     * <p>来源文档ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * <p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>类型</p><p>枚举值：</p><ul><li>1： 问答</li><li>2： 文档片段</li><li>4： 联网检索到的内容</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>文档业务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * <p>文档名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docName;
                    bool m_docNameHasBeenSet;

                    /**
                     * <p>问答业务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * <p>搜索引擎索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>标题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>知识库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_knowledgeName;
                    bool m_knowledgeNameHasBeenSet;

                    /**
                     * <p>知识库标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTREFERENCE_H_
