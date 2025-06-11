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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_SEARCHDOCINFO_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_SEARCHDOCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 知识库搜索文档信息
                */
                class SearchDocInfo : public AbstractModel
                {
                public:
                    SearchDocInfo();
                    ~SearchDocInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取知识库名称
                     * @return CollectionViewName 知识库名称
                     * 
                     */
                    std::string GetCollectionViewName() const;

                    /**
                     * 设置知识库名称
                     * @param _collectionViewName 知识库名称
                     * 
                     */
                    void SetCollectionViewName(const std::string& _collectionViewName);

                    /**
                     * 判断参数 CollectionViewName 是否已赋值
                     * @return CollectionViewName 是否已赋值
                     * 
                     */
                    bool CollectionViewNameHasBeenSet() const;

                    /**
                     * 获取文档Id
                     * @return DocSetId 文档Id
                     * 
                     */
                    std::string GetDocSetId() const;

                    /**
                     * 设置文档Id
                     * @param _docSetId 文档Id
                     * 
                     */
                    void SetDocSetId(const std::string& _docSetId);

                    /**
                     * 判断参数 DocSetId 是否已赋值
                     * @return DocSetId 是否已赋值
                     * 
                     */
                    bool DocSetIdHasBeenSet() const;

                    /**
                     * 获取文档Name
                     * @return DocSetName 文档Name
                     * 
                     */
                    std::string GetDocSetName() const;

                    /**
                     * 设置文档Name
                     * @param _docSetName 文档Name
                     * 
                     */
                    void SetDocSetName(const std::string& _docSetName);

                    /**
                     * 判断参数 DocSetName 是否已赋值
                     * @return DocSetName 是否已赋值
                     * 
                     */
                    bool DocSetNameHasBeenSet() const;

                    /**
                     * 获取文档类型
                     * @return DocType 文档类型
                     * 
                     */
                    std::string GetDocType() const;

                    /**
                     * 设置文档类型
                     * @param _docType 文档类型
                     * 
                     */
                    void SetDocType(const std::string& _docType);

                    /**
                     * 判断参数 DocType 是否已赋值
                     * @return DocType 是否已赋值
                     * 
                     */
                    bool DocTypeHasBeenSet() const;

                    /**
                     * 获取文档标题
                     * @return FileTitle 文档标题
                     * 
                     */
                    std::string GetFileTitle() const;

                    /**
                     * 设置文档标题
                     * @param _fileTitle 文档标题
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
                     * 获取文档元信息
                     * @return FileMetaData 文档元信息
                     * 
                     */
                    std::string GetFileMetaData() const;

                    /**
                     * 设置文档元信息
                     * @param _fileMetaData 文档元信息
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
                     * 获取文档描述
                     * @return DocDesc 文档描述
                     * 
                     */
                    std::string GetDocDesc() const;

                    /**
                     * 设置文档描述
                     * @param _docDesc 文档描述
                     * 
                     */
                    void SetDocDesc(const std::string& _docDesc);

                    /**
                     * 判断参数 DocDesc 是否已赋值
                     * @return DocDesc 是否已赋值
                     * 
                     */
                    bool DocDescHasBeenSet() const;

                    /**
                     * 获取文档大小
                     * @return FileSize 文档大小
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置文档大小
                     * @param _fileSize 文档大小
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

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
                     * 知识库名称
                     */
                    std::string m_collectionViewName;
                    bool m_collectionViewNameHasBeenSet;

                    /**
                     * 文档Id
                     */
                    std::string m_docSetId;
                    bool m_docSetIdHasBeenSet;

                    /**
                     * 文档Name
                     */
                    std::string m_docSetName;
                    bool m_docSetNameHasBeenSet;

                    /**
                     * 文档类型
                     */
                    std::string m_docType;
                    bool m_docTypeHasBeenSet;

                    /**
                     * 文档标题
                     */
                    std::string m_fileTitle;
                    bool m_fileTitleHasBeenSet;

                    /**
                     * 文档元信息
                     */
                    std::string m_fileMetaData;
                    bool m_fileMetaDataHasBeenSet;

                    /**
                     * 文档描述
                     */
                    std::string m_docDesc;
                    bool m_docDescHasBeenSet;

                    /**
                     * 文档大小
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

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

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_SEARCHDOCINFO_H_
