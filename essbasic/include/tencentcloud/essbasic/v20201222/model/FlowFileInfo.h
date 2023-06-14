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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FLOWFILEINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FLOWFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 此结构体 (FlowFileInfo) 用于描述流程文档信息。
                */
                class FlowFileInfo : public AbstractModel
                {
                public:
                    FlowFileInfo();
                    ~FlowFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件序号
                     * @return FileIndex 文件序号
                     * 
                     */
                    int64_t GetFileIndex() const;

                    /**
                     * 设置文件序号
                     * @param _fileIndex 文件序号
                     * 
                     */
                    void SetFileIndex(const int64_t& _fileIndex);

                    /**
                     * 判断参数 FileIndex 是否已赋值
                     * @return FileIndex 是否已赋值
                     * 
                     */
                    bool FileIndexHasBeenSet() const;

                    /**
                     * 获取文件类型
                     * @return FileType 文件类型
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型
                     * @param _fileType 文件类型
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
                     * 获取文件的MD5码
                     * @return FileMd5 文件的MD5码
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置文件的MD5码
                     * @param _fileMd5 文件的MD5码
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
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
                     * 获取文件大小，单位为Byte
                     * @return FileSize 文件大小，单位为Byte
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小，单位为Byte
                     * @param _fileSize 文件大小，单位为Byte
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
                     * 获取文件创建时间戳
                     * @return CreatedOn 文件创建时间戳
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置文件创建时间戳
                     * @param _createdOn 文件创建时间戳
                     * 
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取文件的下载地址
                     * @return Url 文件的下载地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置文件的下载地址
                     * @param _url 文件的下载地址
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 文件序号
                     */
                    int64_t m_fileIndex;
                    bool m_fileIndexHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文件的MD5码
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小，单位为Byte
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件创建时间戳
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 文件的下载地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FLOWFILEINFO_H_
