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
                     * 获取<p>id</p>
                     * @return Id <p>id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>id</p>
                     * @param _id <p>id</p>
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
                     * 获取<p>链接</p>
                     * @return Url <p>链接</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>链接</p>
                     * @param _url <p>链接</p>
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
                     * 获取<p>类型</p><p>枚举值：</p><ul><li>1： 问答</li><li>2： 文档片段</li><li>4： 联网检索到的内容</li></ul>
                     * @return Type <p>类型</p><p>枚举值：</p><ul><li>1： 问答</li><li>2： 文档片段</li><li>4： 联网检索到的内容</li></ul>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>类型</p><p>枚举值：</p><ul><li>1： 问答</li><li>2： 文档片段</li><li>4： 联网检索到的内容</li></ul>
                     * @param _type <p>类型</p><p>枚举值：</p><ul><li>1： 问答</li><li>2： 文档片段</li><li>4： 联网检索到的内容</li></ul>
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
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
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
                     * 获取<p>来源文档ID</p>
                     * @return DocId <p>来源文档ID</p>
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置<p>来源文档ID</p>
                     * @param _docId <p>来源文档ID</p>
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
                     * 获取<p>知识库名称</p>
                     * @return KnowledgeName <p>知识库名称</p>
                     * 
                     */
                    std::string GetKnowledgeName() const;

                    /**
                     * 设置<p>知识库名称</p>
                     * @param _knowledgeName <p>知识库名称</p>
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
                     * 获取<p>知识库业务id</p>
                     * @return KnowledgeBizId <p>知识库业务id</p>
                     * 
                     */
                    std::string GetKnowledgeBizId() const;

                    /**
                     * 设置<p>知识库业务id</p>
                     * @param _knowledgeBizId <p>知识库业务id</p>
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
                     * 获取<p>文档业务id</p>
                     * @return DocBizId <p>文档业务id</p>
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置<p>文档业务id</p>
                     * @param _docBizId <p>文档业务id</p>
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
                     * 获取<p>问答业务id</p>
                     * @return QaBizId <p>问答业务id</p>
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置<p>问答业务id</p>
                     * @param _qaBizId <p>问答业务id</p>
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
                     * 获取<p>文档索引id</p>
                     * @return Index <p>文档索引id</p>
                     * 
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置<p>文档索引id</p>
                     * @param _index <p>文档索引id</p>
                     * 
                     */
                    void SetIndex(const uint64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * <p>id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>链接</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>类型</p><p>枚举值：</p><ul><li>1： 问答</li><li>2： 文档片段</li><li>4： 联网检索到的内容</li></ul>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>来源文档ID</p>
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * <p>知识库名称</p>
                     */
                    std::string m_knowledgeName;
                    bool m_knowledgeNameHasBeenSet;

                    /**
                     * <p>知识库业务id</p>
                     */
                    std::string m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                    /**
                     * <p>文档业务id</p>
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * <p>问答业务id</p>
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * <p>文档索引id</p>
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MSGRECORDREFERENCE_H_
