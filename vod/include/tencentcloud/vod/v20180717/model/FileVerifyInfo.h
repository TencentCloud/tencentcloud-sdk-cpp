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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FILEVERIFYINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FILEVERIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 文件验证信息
                */
                class FileVerifyInfo : public AbstractModel
                {
                public:
                    FileVerifyInfo();
                    ~FileVerifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件验证 URL 指引。
                     * @return FileVerifyUrl 文件验证 URL 指引。
                     * 
                     */
                    std::string GetFileVerifyUrl() const;

                    /**
                     * 设置文件验证 URL 指引。
                     * @param _fileVerifyUrl 文件验证 URL 指引。
                     * 
                     */
                    void SetFileVerifyUrl(const std::string& _fileVerifyUrl);

                    /**
                     * 判断参数 FileVerifyUrl 是否已赋值
                     * @return FileVerifyUrl 是否已赋值
                     * 
                     */
                    bool FileVerifyUrlHasBeenSet() const;

                    /**
                     * 获取文件校验域名列表。
                     * @return FileVerifyDomains 文件校验域名列表。
                     * 
                     */
                    std::vector<std::string> GetFileVerifyDomains() const;

                    /**
                     * 设置文件校验域名列表。
                     * @param _fileVerifyDomains 文件校验域名列表。
                     * 
                     */
                    void SetFileVerifyDomains(const std::vector<std::string>& _fileVerifyDomains);

                    /**
                     * 判断参数 FileVerifyDomains 是否已赋值
                     * @return FileVerifyDomains 是否已赋值
                     * 
                     */
                    bool FileVerifyDomainsHasBeenSet() const;

                    /**
                     * 获取文件校验文件名。
                     * @return FileVerifyName 文件校验文件名。
                     * 
                     */
                    std::string GetFileVerifyName() const;

                    /**
                     * 设置文件校验文件名。
                     * @param _fileVerifyName 文件校验文件名。
                     * 
                     */
                    void SetFileVerifyName(const std::string& _fileVerifyName);

                    /**
                     * 判断参数 FileVerifyName 是否已赋值
                     * @return FileVerifyName 是否已赋值
                     * 
                     */
                    bool FileVerifyNameHasBeenSet() const;

                private:

                    /**
                     * 文件验证 URL 指引。
                     */
                    std::string m_fileVerifyUrl;
                    bool m_fileVerifyUrlHasBeenSet;

                    /**
                     * 文件校验域名列表。
                     */
                    std::vector<std::string> m_fileVerifyDomains;
                    bool m_fileVerifyDomainsHasBeenSet;

                    /**
                     * 文件校验文件名。
                     */
                    std::string m_fileVerifyName;
                    bool m_fileVerifyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILEVERIFYINFO_H_
