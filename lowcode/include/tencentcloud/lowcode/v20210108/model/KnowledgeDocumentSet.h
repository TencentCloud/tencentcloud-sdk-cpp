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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGEDOCUMENTSET_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGEDOCUMENTSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/KnowledgeDocumentSetInfo.h>
#include <tencentcloud/lowcode/v20210108/model/KnowledgeSplitterPreprocess.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 文档信息
                */
                class KnowledgeDocumentSet : public AbstractModel
                {
                public:
                    KnowledgeDocumentSet();
                    ~KnowledgeDocumentSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文档id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocumentSetId 文档id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocumentSetId() const;

                    /**
                     * 设置文档id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _documentSetId 文档id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocumentSetId(const std::string& _documentSetId);

                    /**
                     * 判断参数 DocumentSetId 是否已赋值
                     * @return DocumentSetId 是否已赋值
                     * 
                     */
                    bool DocumentSetIdHasBeenSet() const;

                    /**
                     * 获取文档名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocumentSetName 文档名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocumentSetName() const;

                    /**
                     * 设置文档名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _documentSetName 文档名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocumentSetName(const std::string& _documentSetName);

                    /**
                     * 判断参数 DocumentSetName 是否已赋值
                     * @return DocumentSetName 是否已赋值
                     * 
                     */
                    bool DocumentSetNameHasBeenSet() const;

                    /**
                     * 获取文件完整内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 文件完整内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文件完整内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 文件完整内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取文件内容前 200个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextPrefix 文件内容前 200个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTextPrefix() const;

                    /**
                     * 设置文件内容前 200个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textPrefix 文件内容前 200个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextPrefix(const std::string& _textPrefix);

                    /**
                     * 判断参数 TextPrefix 是否已赋值
                     * @return TextPrefix 是否已赋值
                     * 
                     */
                    bool TextPrefixHasBeenSet() const;

                    /**
                     * 获取文件详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocumentSetInfo 文件详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeDocumentSetInfo GetDocumentSetInfo() const;

                    /**
                     * 设置文件详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _documentSetInfo 文件详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocumentSetInfo(const KnowledgeDocumentSetInfo& _documentSetInfo);

                    /**
                     * 判断参数 DocumentSetInfo 是否已赋值
                     * @return DocumentSetInfo 是否已赋值
                     * 
                     */
                    bool DocumentSetInfoHasBeenSet() const;

                    /**
                     * 获取文件拆分信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SplitterPreprocess 文件拆分信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeSplitterPreprocess GetSplitterPreprocess() const;

                    /**
                     * 设置文件拆分信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _splitterPreprocess 文件拆分信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSplitterPreprocess(const KnowledgeSplitterPreprocess& _splitterPreprocess);

                    /**
                     * 判断参数 SplitterPreprocess 是否已赋值
                     * @return SplitterPreprocess 是否已赋值
                     * 
                     */
                    bool SplitterPreprocessHasBeenSet() const;

                    /**
                     * 获取未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 未使用
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
                     * 获取文档标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileTitle 文档标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileTitle() const;

                    /**
                     * 设置文档标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileTitle 文档标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileTitle(const std::string& _fileTitle);

                    /**
                     * 判断参数 FileTitle 是否已赋值
                     * @return FileTitle 是否已赋值
                     * 
                     */
                    bool FileTitleHasBeenSet() const;

                    /**
                     * 获取文档元信息，必须为jsonstring
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileMetaData 文档元信息，必须为jsonstring
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileMetaData() const;

                    /**
                     * 设置文档元信息，必须为jsonstring
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileMetaData 文档元信息，必须为jsonstring
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileMetaData(const std::string& _fileMetaData);

                    /**
                     * 判断参数 FileMetaData 是否已赋值
                     * @return FileMetaData 是否已赋值
                     * 
                     */
                    bool FileMetaDataHasBeenSet() const;

                    /**
                     * 获取作者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Author 作者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置作者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _author 作者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthor(const std::string& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                private:

                    /**
                     * 文档id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_documentSetId;
                    bool m_documentSetIdHasBeenSet;

                    /**
                     * 文档名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_documentSetName;
                    bool m_documentSetNameHasBeenSet;

                    /**
                     * 文件完整内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 文件内容前 200个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_textPrefix;
                    bool m_textPrefixHasBeenSet;

                    /**
                     * 文件详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeDocumentSetInfo m_documentSetInfo;
                    bool m_documentSetInfoHasBeenSet;

                    /**
                     * 文件拆分信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeSplitterPreprocess m_splitterPreprocess;
                    bool m_splitterPreprocessHasBeenSet;

                    /**
                     * 未使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文档标题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileTitle;
                    bool m_fileTitleHasBeenSet;

                    /**
                     * 文档元信息，必须为jsonstring
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileMetaData;
                    bool m_fileMetaDataHasBeenSet;

                    /**
                     * 作者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGEDOCUMENTSET_H_
