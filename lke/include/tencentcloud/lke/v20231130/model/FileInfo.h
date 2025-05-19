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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_FILEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_FILEINFO_H_

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
                * 实时上传的文件信息
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName 文件名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取文件的URL地址，COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileUrl 文件的URL地址，COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件的URL地址，COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileUrl 文件的URL地址，COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileType 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileType 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取解析后返回的DocID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocId 解析后返回的DocID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置解析后返回的DocID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docId 解析后返回的DocID
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * 文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件的URL地址，COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 解析后返回的DocID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_FILEINFO_H_
