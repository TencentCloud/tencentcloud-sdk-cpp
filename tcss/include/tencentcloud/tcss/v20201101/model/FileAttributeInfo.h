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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_FILEATTRIBUTEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_FILEATTRIBUTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器安全运行时，文件属性信息
                */
                class FileAttributeInfo : public AbstractModel
                {
                public:
                    FileAttributeInfo();
                    ~FileAttributeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取文件大小(字节)
                     * @return FileSize 文件大小(字节)
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置文件大小(字节)
                     * @param _fileSize 文件大小(字节)
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
                     * 获取文件路径
                     * @return FilePath 文件路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件路径
                     * @param _filePath 文件路径
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
                     * 获取文件创建时间
                     * @return FileCreateTime 文件创建时间
                     * 
                     */
                    std::string GetFileCreateTime() const;

                    /**
                     * 设置文件创建时间
                     * @param _fileCreateTime 文件创建时间
                     * 
                     */
                    void SetFileCreateTime(const std::string& _fileCreateTime);

                    /**
                     * 判断参数 FileCreateTime 是否已赋值
                     * @return FileCreateTime 是否已赋值
                     * 
                     */
                    bool FileCreateTimeHasBeenSet() const;

                    /**
                     * 获取最近被篡改文件创建时间
                     * @return LatestTamperedFileMTime 最近被篡改文件创建时间
                     * 
                     */
                    std::string GetLatestTamperedFileMTime() const;

                    /**
                     * 设置最近被篡改文件创建时间
                     * @param _latestTamperedFileMTime 最近被篡改文件创建时间
                     * 
                     */
                    void SetLatestTamperedFileMTime(const std::string& _latestTamperedFileMTime);

                    /**
                     * 判断参数 LatestTamperedFileMTime 是否已赋值
                     * @return LatestTamperedFileMTime 是否已赋值
                     * 
                     */
                    bool LatestTamperedFileMTimeHasBeenSet() const;

                    /**
                     * 获取新文件内容
                     * @return NewFile 新文件内容
                     * 
                     */
                    std::string GetNewFile() const;

                    /**
                     * 设置新文件内容
                     * @param _newFile 新文件内容
                     * 
                     */
                    void SetNewFile(const std::string& _newFile);

                    /**
                     * 判断参数 NewFile 是否已赋值
                     * @return NewFile 是否已赋值
                     * 
                     */
                    bool NewFileHasBeenSet() const;

                    /**
                     * 获取新旧文件的差异
                     * @return FileDiff 新旧文件的差异
                     * 
                     */
                    std::string GetFileDiff() const;

                    /**
                     * 设置新旧文件的差异
                     * @param _fileDiff 新旧文件的差异
                     * 
                     */
                    void SetFileDiff(const std::string& _fileDiff);

                    /**
                     * 判断参数 FileDiff 是否已赋值
                     * @return FileDiff 是否已赋值
                     * 
                     */
                    bool FileDiffHasBeenSet() const;

                private:

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文件大小(字节)
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 文件创建时间
                     */
                    std::string m_fileCreateTime;
                    bool m_fileCreateTimeHasBeenSet;

                    /**
                     * 最近被篡改文件创建时间
                     */
                    std::string m_latestTamperedFileMTime;
                    bool m_latestTamperedFileMTimeHasBeenSet;

                    /**
                     * 新文件内容
                     */
                    std::string m_newFile;
                    bool m_newFileHasBeenSet;

                    /**
                     * 新旧文件的差异
                     */
                    std::string m_fileDiff;
                    bool m_fileDiffHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_FILEATTRIBUTEINFO_H_
