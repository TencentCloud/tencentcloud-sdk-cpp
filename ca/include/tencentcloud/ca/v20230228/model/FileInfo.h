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

#ifndef TENCENTCLOUD_CA_V20230228_MODEL_FILEINFO_H_
#define TENCENTCLOUD_CA_V20230228_MODEL_FILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ca
    {
        namespace V20230228
        {
            namespace Model
            {
                /**
                * 文件列表信息
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取BASE64编码后的文件内容
                     * @return FileBody BASE64编码后的文件内容
                     * 
                     */
                    std::string GetFileBody() const;

                    /**
                     * 设置BASE64编码后的文件内容
                     * @param _fileBody BASE64编码后的文件内容
                     * 
                     */
                    void SetFileBody(const std::string& _fileBody);

                    /**
                     * 判断参数 FileBody 是否已赋值
                     * @return FileBody 是否已赋值
                     * 
                     */
                    bool FileBodyHasBeenSet() const;

                    /**
                     * 获取文件名及类型，最大长度不超过200字符
                     * @return FileName 文件名及类型，最大长度不超过200字符
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名及类型，最大长度不超过200字符
                     * @param _fileName 文件名及类型，最大长度不超过200字符
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * BASE64编码后的文件内容
                     */
                    std::string m_fileBody;
                    bool m_fileBodyHasBeenSet;

                    /**
                     * 文件名及类型，最大长度不超过200字符
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CA_V20230228_MODEL_FILEINFO_H_
