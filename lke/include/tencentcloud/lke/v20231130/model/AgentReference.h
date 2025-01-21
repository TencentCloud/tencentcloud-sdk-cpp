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
                     * 获取来源文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocId 来源文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置来源文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docId 来源文档ID
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
                     * 获取id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id id
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
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
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
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 类型
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
                     * 获取链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 链接
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
                     * 获取文档业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocBizId 文档业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置文档业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docBizId 文档业务ID
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
                     * 获取问答业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QaBizId 问答业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置问答业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qaBizId 问答业务ID
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
                     * 获取搜索引擎索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 搜索引擎索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置搜索引擎索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index 搜索引擎索引
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
                     * 获取标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title 标题
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

                private:

                    /**
                     * 来源文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 文档业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 文档名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docName;
                    bool m_docNameHasBeenSet;

                    /**
                     * 问答业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * 搜索引擎索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 标题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTREFERENCE_H_
