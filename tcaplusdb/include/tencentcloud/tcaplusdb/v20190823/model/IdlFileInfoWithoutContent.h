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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IDLFILEINFOWITHOUTCONTENT_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IDLFILEINFOWITHOUTCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 表定义描述文件详情，不包含文件内容
                */
                class IdlFileInfoWithoutContent : public AbstractModel
                {
                public:
                    IdlFileInfoWithoutContent();
                    ~IdlFileInfoWithoutContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名称，不包含扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 文件名称，不包含扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称，不包含扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName 文件名称，不包含扩展名
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
                     * 获取数据描述语言（IDL）类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileType 数据描述语言（IDL）类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置数据描述语言（IDL）类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileType 数据描述语言（IDL）类型
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
                     * 获取文件扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileExtType 文件扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileExtType() const;

                    /**
                     * 设置文件扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileExtType 文件扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileExtType(const std::string& _fileExtType);

                    /**
                     * 判断参数 FileExtType 是否已赋值
                     * @return FileExtType 是否已赋值
                     * 
                     */
                    bool FileExtTypeHasBeenSet() const;

                    /**
                     * 获取文件大小（Bytes）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 文件大小（Bytes）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小（Bytes）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 文件大小（Bytes）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取文件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileId 文件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileId() const;

                    /**
                     * 设置文件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileId 文件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileId(const int64_t& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 文件名称，不包含扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 数据描述语言（IDL）类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文件扩展名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileExtType;
                    bool m_fileExtTypeHasBeenSet;

                    /**
                     * 文件大小（Bytes）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_IDLFILEINFOWITHOUTCONTENT_H_
