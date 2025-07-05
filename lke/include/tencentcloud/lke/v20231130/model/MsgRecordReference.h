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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORDREFERENCE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORDREFERENCE_H_

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
                * 聊天详情Refer
                */
                class MsgRecordReference : public AbstractModel
                {
                public:
                    MsgRecordReference();
                    ~MsgRecordReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return Id id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置id
                     * @param _id id
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
                     * 获取链接
                     * @return Url 链接
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置链接
                     * @param _url 链接
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
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
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
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取来源文档ID
                     * @return DocId 来源文档ID
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置来源文档ID
                     * @param _docId 来源文档ID
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
                     * 获取知识库名称
                     * @return KnowledgeName 知识库名称
                     * 
                     */
                    std::string GetKnowledgeName() const;

                    /**
                     * 设置知识库名称
                     * @param _knowledgeName 知识库名称
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
                     * 获取知识库业务id
                     * @return KnowledgeBizId 知识库业务id
                     * 
                     */
                    std::string GetKnowledgeBizId() const;

                    /**
                     * 设置知识库业务id
                     * @param _knowledgeBizId 知识库业务id
                     * 
                     */
                    void SetKnowledgeBizId(const std::string& _knowledgeBizId);

                    /**
                     * 判断参数 KnowledgeBizId 是否已赋值
                     * @return KnowledgeBizId 是否已赋值
                     * 
                     */
                    bool KnowledgeBizIdHasBeenSet() const;

                    /**
                     * 获取文档业务id
                     * @return DocBizId 文档业务id
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置文档业务id
                     * @param _docBizId 文档业务id
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
                     * 获取问答业务id
                     * @return QaBizId 问答业务id
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置问答业务id
                     * @param _qaBizId 问答业务id
                     * 
                     */
                    void SetQaBizId(const std::string& _qaBizId);

                    /**
                     * 判断参数 QaBizId 是否已赋值
                     * @return QaBizId 是否已赋值
                     * 
                     */
                    bool QaBizIdHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 链接
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 类型
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 来源文档ID
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * 知识库名称
                     */
                    std::string m_knowledgeName;
                    bool m_knowledgeNameHasBeenSet;

                    /**
                     * 知识库业务id
                     */
                    std::string m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                    /**
                     * 文档业务id
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 问答业务id
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORDREFERENCE_H_
