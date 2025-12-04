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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_COSFILEINFO_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_COSFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * cos 文件信息
                */
                class CosFileInfo : public AbstractModel
                {
                public:
                    CosFileInfo();
                    ~CosFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名称，包含后缀
                     * @return FileName 文件名称，包含后缀
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称，包含后缀
                     * @param _fileName 文件名称，包含后缀
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
                     * 获取文件类型，"PDF", "DOC", "DOCX", "XLS", "XLSX", "PPT", "PPTX", "MD", "TXT", "PNG", "JPG", "JPEG", "CSV"
                     * @return FileType 文件类型，"PDF", "DOC", "DOCX", "XLS", "XLSX", "PPT", "PPTX", "MD", "TXT", "PNG", "JPG", "JPEG", "CSV"
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型，"PDF", "DOC", "DOCX", "XLS", "XLSX", "PPT", "PPTX", "MD", "TXT", "PNG", "JPG", "JPEG", "CSV"
                     * @param _fileType 文件类型，"PDF", "DOC", "DOCX", "XLS", "XLSX", "PPT", "PPTX", "MD", "TXT", "PNG", "JPG", "JPEG", "CSV"
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
                     * 获取用户文件的cosurl
                     * @return UserCosUrl 用户文件的cosurl
                     * 
                     */
                    std::string GetUserCosUrl() const;

                    /**
                     * 设置用户文件的cosurl
                     * @param _userCosUrl 用户文件的cosurl
                     * 
                     */
                    void SetUserCosUrl(const std::string& _userCosUrl);

                    /**
                     * 判断参数 UserCosUrl 是否已赋值
                     * @return UserCosUrl 是否已赋值
                     * 
                     */
                    bool UserCosUrlHasBeenSet() const;

                private:

                    /**
                     * 文件名称，包含后缀
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件类型，"PDF", "DOC", "DOCX", "XLS", "XLSX", "PPT", "PPTX", "MD", "TXT", "PNG", "JPG", "JPEG", "CSV"
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 用户文件的cosurl
                     */
                    std::string m_userCosUrl;
                    bool m_userCosUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_COSFILEINFO_H_
