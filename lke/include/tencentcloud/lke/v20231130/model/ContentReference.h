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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CONTENTREFERENCE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CONTENTREFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/DocReference.h>
#include <tencentcloud/lke/v20231130/model/QaReference.h>
#include <tencentcloud/lke/v20231130/model/WebSearchReference.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 会话内容参考文献信息
                */
                class ContentReference : public AbstractModel
                {
                public:
                    ContentReference();
                    ~ContentReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引用来源索引ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 引用来源索引ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置引用来源索引ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index 引用来源索引ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取参考来源名称
                     * @return Name 参考来源名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参考来源名称
                     * @param _name 参考来源名称
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
                     * 获取参考来源类型
1：问答
2：文档片段
4：联网检索到的内容
                     * @return Type 参考来源类型
1：问答
2：文档片段
4：联网检索到的内容
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置参考来源类型
1：问答
2：文档片段
4：联网检索到的内容
                     * @param _type 参考来源类型
1：问答
2：文档片段
4：联网检索到的内容
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取文档片段参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocRefer 文档片段参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocReference GetDocRefer() const;

                    /**
                     * 设置文档片段参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docRefer 文档片段参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocRefer(const DocReference& _docRefer);

                    /**
                     * 判断参数 DocRefer 是否已赋值
                     * @return DocRefer 是否已赋值
                     * 
                     */
                    bool DocReferHasBeenSet() const;

                    /**
                     * 获取问答参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QaRefer 问答参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QaReference GetQaRefer() const;

                    /**
                     * 设置问答参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qaRefer 问答参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQaRefer(const QaReference& _qaRefer);

                    /**
                     * 判断参数 QaRefer 是否已赋值
                     * @return QaRefer 是否已赋值
                     * 
                     */
                    bool QaReferHasBeenSet() const;

                    /**
                     * 获取联网检索内容参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebSearchRefer 联网检索内容参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebSearchReference GetWebSearchRefer() const;

                    /**
                     * 设置联网检索内容参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webSearchRefer 联网检索内容参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebSearchRefer(const WebSearchReference& _webSearchRefer);

                    /**
                     * 判断参数 WebSearchRefer 是否已赋值
                     * @return WebSearchRefer 是否已赋值
                     * 
                     */
                    bool WebSearchReferHasBeenSet() const;

                private:

                    /**
                     * 引用来源索引ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 参考来源名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参考来源类型
1：问答
2：文档片段
4：联网检索到的内容
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 文档片段参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocReference m_docRefer;
                    bool m_docReferHasBeenSet;

                    /**
                     * 问答参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QaReference m_qaRefer;
                    bool m_qaReferHasBeenSet;

                    /**
                     * 联网检索内容参考信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebSearchReference m_webSearchRefer;
                    bool m_webSearchReferHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CONTENTREFERENCE_H_
