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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FILEINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 模板中文件的信息结构
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件ID
                     * @return FileId 文件ID
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件ID
                     * @param _fileId 文件ID
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
                     * 获取文件上传时间，格式为Unix标准时间戳（秒）
                     * @return CreatedOn 文件上传时间，格式为Unix标准时间戳（秒）
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置文件上传时间，格式为Unix标准时间戳（秒）
                     * @param _createdOn 文件上传时间，格式为Unix标准时间戳（秒）
                     * 
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                private:

                    /**
                     * 文件ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

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
                     * 文件上传时间，格式为Unix标准时间戳（秒）
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FILEINFO_H_
