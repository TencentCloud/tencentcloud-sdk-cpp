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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_UPLOADKNOWLEDGEDOCUMENTSETREQUEST_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_UPLOADKNOWLEDGEDOCUMENTSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * UploadKnowledgeDocumentSet请求参数结构体
                */
                class UploadKnowledgeDocumentSetRequest : public AbstractModel
                {
                public:
                    UploadKnowledgeDocumentSetRequest();
                    ~UploadKnowledgeDocumentSetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取知识库标识
                     * @return CollectionView 知识库标识
                     * 
                     */
                    std::string GetCollectionView() const;

                    /**
                     * 设置知识库标识
                     * @param _collectionView 知识库标识
                     * 
                     */
                    void SetCollectionView(const std::string& _collectionView);

                    /**
                     * 判断参数 CollectionView 是否已赋值
                     * @return CollectionView 是否已赋值
                     * 
                     */
                    bool CollectionViewHasBeenSet() const;

                    /**
                     * 获取状态;ENABLED启用；NOT_ENABLED不启用
                     * @return FileName 状态;ENABLED启用；NOT_ENABLED不启用
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置状态;ENABLED启用；NOT_ENABLED不启用
                     * @param _fileName 状态;ENABLED启用；NOT_ENABLED不启用
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取腾讯云文件存储位置的可读地址
                     * @return CosUrl 腾讯云文件存储位置的可读地址
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置腾讯云文件存储位置的可读地址
                     * @param _cosUrl 腾讯云文件存储位置的可读地址
                     * 
                     */
                    void SetCosUrl(const std::string& _cosUrl);

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                    /**
                     * 获取文件类型，例如: .docx, .md
                     * @return DocumentType 文件类型，例如: .docx, .md
                     * 
                     */
                    std::string GetDocumentType() const;

                    /**
                     * 设置文件类型，例如: .docx, .md
                     * @param _documentType 文件类型，例如: .docx, .md
                     * 
                     */
                    void SetDocumentType(const std::string& _documentType);

                    /**
                     * 判断参数 DocumentType 是否已赋值
                     * @return DocumentType 是否已赋值
                     * 
                     */
                    bool DocumentTypeHasBeenSet() const;

                    /**
                     * 获取对文件的描述
                     * @return DocumentDesc 对文件的描述
                     * 
                     */
                    std::string GetDocumentDesc() const;

                    /**
                     * 设置对文件的描述
                     * @param _documentDesc 对文件的描述
                     * 
                     */
                    void SetDocumentDesc(const std::string& _documentDesc);

                    /**
                     * 判断参数 DocumentDesc 是否已赋值
                     * @return DocumentDesc 是否已赋值
                     * 
                     */
                    bool DocumentDescHasBeenSet() const;

                    /**
                     * 获取文件标题
                     * @return FileTitle 文件标题
                     * 
                     */
                    std::string GetFileTitle() const;

                    /**
                     * 设置文件标题
                     * @param _fileTitle 文件标题
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
                     * 获取文件元信息，为jsonstring
                     * @return FileMetaData 文件元信息，为jsonstring
                     * 
                     */
                    std::string GetFileMetaData() const;

                    /**
                     * 设置文件元信息，为jsonstring
                     * @param _fileMetaData 文件元信息，为jsonstring
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
                     * 获取文件id
                     * @return DocumentSetId 文件id
                     * 
                     */
                    std::string GetDocumentSetId() const;

                    /**
                     * 设置文件id
                     * @param _documentSetId 文件id
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
                     * 获取使用 regex 分割文档
                     * @return Delimiter 使用 regex 分割文档
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置使用 regex 分割文档
                     * @param _delimiter 使用 regex 分割文档
                     * 
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     * 
                     */
                    bool DelimiterHasBeenSet() const;

                    /**
                     * 获取Cos存储文件ID
                     * @return FileId Cos存储文件ID
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Cos存储文件ID
                     * @param _fileId Cos存储文件ID
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 知识库标识
                     */
                    std::string m_collectionView;
                    bool m_collectionViewHasBeenSet;

                    /**
                     * 状态;ENABLED启用；NOT_ENABLED不启用
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 腾讯云文件存储位置的可读地址
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * 文件类型，例如: .docx, .md
                     */
                    std::string m_documentType;
                    bool m_documentTypeHasBeenSet;

                    /**
                     * 对文件的描述
                     */
                    std::string m_documentDesc;
                    bool m_documentDescHasBeenSet;

                    /**
                     * 文件标题
                     */
                    std::string m_fileTitle;
                    bool m_fileTitleHasBeenSet;

                    /**
                     * 文件元信息，为jsonstring
                     */
                    std::string m_fileMetaData;
                    bool m_fileMetaDataHasBeenSet;

                    /**
                     * 文件id
                     */
                    std::string m_documentSetId;
                    bool m_documentSetIdHasBeenSet;

                    /**
                     * 使用 regex 分割文档
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * Cos存储文件ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_UPLOADKNOWLEDGEDOCUMENTSETREQUEST_H_
