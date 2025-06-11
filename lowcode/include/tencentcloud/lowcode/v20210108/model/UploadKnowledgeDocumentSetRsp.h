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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_UPLOADKNOWLEDGEDOCUMENTSETRSP_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_UPLOADKNOWLEDGEDOCUMENTSETRSP_H_

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
                * 上传知识库文档返回结果
                */
                class UploadKnowledgeDocumentSetRsp : public AbstractModel
                {
                public:
                    UploadKnowledgeDocumentSetRsp();
                    ~UploadKnowledgeDocumentSetRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取给文件分配的 ID 信息。
                     * @return DocumentSetId 给文件分配的 ID 信息。
                     * @deprecated
                     */
                    std::string GetDocumentSetId() const;

                    /**
                     * 设置给文件分配的 ID 信息。
                     * @param _documentSetId 给文件分配的 ID 信息。
                     * @deprecated
                     */
                    void SetDocumentSetId(const std::string& _documentSetId);

                    /**
                     * 判断参数 DocumentSetId 是否已赋值
                     * @return DocumentSetId 是否已赋值
                     * @deprecated
                     */
                    bool DocumentSetIdHasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return DocumentSetName 文件名
                     * 
                     */
                    std::string GetDocumentSetName() const;

                    /**
                     * 设置文件名
                     * @param _documentSetName 文件名
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
                     * 给文件分配的 ID 信息。
                     */
                    std::string m_documentSetId;
                    bool m_documentSetIdHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_documentSetName;
                    bool m_documentSetNameHasBeenSet;

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
                     * Cos存储文件ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_UPLOADKNOWLEDGEDOCUMENTSETRSP_H_
