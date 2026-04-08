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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_FILEINFOCONTENT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_FILEINFOCONTENT_H_

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
                * 文件信息内容
                */
                class FileInfoContent : public AbstractModel
                {
                public:
                    FileInfoContent();
                    ~FileInfoContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实时文档解析接口返回的 DocBizId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocBizId <p>实时文档解析接口返回的 DocBizId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置<p>实时文档解析接口返回的 DocBizId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docBizId <p>实时文档解析接口返回的 DocBizId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * @deprecated
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取<p>文件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName <p>文件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName <p>文件名称</p>
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
                     * 获取<p>文件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileType <p>文件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>文件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileType <p>文件类型</p>
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
                     * 获取<p>文件大小，单位为Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize <p>文件大小，单位为Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置<p>文件大小，单位为Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize <p>文件大小，单位为Byte</p>
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
                     * 获取<p>文件 URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileUrl <p>文件 URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>文件 URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileUrl <p>文件 URL</p>
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
                     * 获取<p>实时文档解析接口返回的 doc_id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocId <p>实时文档解析接口返回的 doc_id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置<p>实时文档解析接口返回的 doc_id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docId <p>实时文档解析接口返回的 doc_id。</p>
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
                     * 获取<p>文件创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>文件创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>文件创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>文件创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实时文档解析接口返回的 DocBizId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * <p>文件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>文件大小，单位为Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>文件 URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>实时文档解析接口返回的 doc_id。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * <p>文件创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_FILEINFOCONTENT_H_
