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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_KEYFILE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_KEYFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 部分key导入快照数据时所需要的key文件
                */
                class KeyFile : public AbstractModel
                {
                public:
                    KeyFile();
                    ~KeyFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取key文件名称
                     * @return FileName key文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置key文件名称
                     * @param _fileName key文件名称
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
                     * 获取key文件扩展名
                     * @return FileExtType key文件扩展名
                     * 
                     */
                    std::string GetFileExtType() const;

                    /**
                     * 设置key文件扩展名
                     * @param _fileExtType key文件扩展名
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
                     * 获取key文件内容
                     * @return FileContent key文件内容
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置key文件内容
                     * @param _fileContent key文件内容
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取key文件大小
                     * @return FileSize key文件大小
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置key文件大小
                     * @param _fileSize key文件大小
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                private:

                    /**
                     * key文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * key文件扩展名
                     */
                    std::string m_fileExtType;
                    bool m_fileExtTypeHasBeenSet;

                    /**
                     * key文件内容
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * key文件大小
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_KEYFILE_H_
