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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_CHUNKDOCUMENT_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_CHUNKDOCUMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * 切片文档信息
                */
                class ChunkDocument : public AbstractModel
                {
                public:
                    ChunkDocument();
                    ~ChunkDocument() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件类型，支持 MD，TXT 格式。
                     * @return FileType 文件类型，支持 MD，TXT 格式。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型，支持 MD，TXT 格式。
                     * @param _fileType 文件类型，支持 MD，TXT 格式。
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
                     * 获取文本原文，使用字符串格式输入。
                     * @return FileContent 文本原文，使用字符串格式输入。
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置文本原文，使用字符串格式输入。
                     * @param _fileContent 文本原文，使用字符串格式输入。
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                private:

                    /**
                     * 文件类型，支持 MD，TXT 格式。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文本原文，使用字符串格式输入。
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_CHUNKDOCUMENT_H_
