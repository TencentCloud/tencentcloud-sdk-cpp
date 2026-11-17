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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETFILECONTENTRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETFILECONTENTRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 获取文件内容响应
                */
                class GetFileContentRsp : public AbstractModel
                {
                public:
                    GetFileContentRsp();
                    ~GetFileContentRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件ID；按 FilePath 查询时回显解析结果，便于调用方缓存
                     * @return FileId 文件ID；按 FilePath 查询时回显解析结果，便于调用方缓存
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件ID；按 FilePath 查询时回显解析结果，便于调用方缓存
                     * @param _fileId 文件ID；按 FilePath 查询时回显解析结果，便于调用方缓存
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取文件名，不含路径
                     * @return FileName 文件名，不含路径
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名，不含路径
                     * @param _fileName 文件名，不含路径
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
                     * 获取文件全路径
                     * @return FilePath 文件全路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件全路径
                     * @param _filePath 文件全路径
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取文件类型，参考 ListEntityTypeMetas 返回值为准
                     * @return FileType 文件类型，参考 ListEntityTypeMetas 返回值为准
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型，参考 ListEntityTypeMetas 返回值为准
                     * @param _fileType 文件类型，参考 ListEntityTypeMetas 返回值为准
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
                     * 获取文件大小，字节
                     * @return FileSize 文件大小，字节
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置文件大小，字节
                     * @param _fileSize 文件大小，字节
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
                     * 获取文件内容，base64 编码
                     * @return Content 文件内容，base64 编码
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置文件内容，base64 编码
                     * @param _content 文件内容，base64 编码
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取内容编码方式，当前固定 base64
                     * @return ContentEncoding 内容编码方式，当前固定 base64
                     * 
                     */
                    std::string GetContentEncoding() const;

                    /**
                     * 设置内容编码方式，当前固定 base64
                     * @param _contentEncoding 内容编码方式，当前固定 base64
                     * 
                     */
                    void SetContentEncoding(const std::string& _contentEncoding);

                    /**
                     * 判断参数 ContentEncoding 是否已赋值
                     * @return ContentEncoding 是否已赋值
                     * 
                     */
                    bool ContentEncodingHasBeenSet() const;

                private:

                    /**
                     * 文件ID；按 FilePath 查询时回显解析结果，便于调用方缓存
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 文件名，不含路径
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件全路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 文件类型，参考 ListEntityTypeMetas 返回值为准
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文件大小，字节
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件内容，base64 编码
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 内容编码方式，当前固定 base64
                     */
                    std::string m_contentEncoding;
                    bool m_contentEncodingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETFILECONTENTRSP_H_
