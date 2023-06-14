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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDOWNLOADURLRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDOWNLOADURLRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 云企付-查询对账单文件下载url
                */
                class QueryOpenBankDownLoadUrlResult : public AbstractModel
                {
                public:
                    QueryOpenBankDownLoadUrlResult();
                    ~QueryOpenBankDownLoadUrlResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取供下一步请求账单文件的下载地址。
                     * @return DownloadUrl 供下一步请求账单文件的下载地址。
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置供下一步请求账单文件的下载地址。
                     * @param _downloadUrl 供下一步请求账单文件的下载地址。
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取从 download_url 下载的文件的哈希值，用于校验文件的完整性。
                     * @return HashValue 从 download_url 下载的文件的哈希值，用于校验文件的完整性。
                     * 
                     */
                    std::string GetHashValue() const;

                    /**
                     * 设置从 download_url 下载的文件的哈希值，用于校验文件的完整性。
                     * @param _hashValue 从 download_url 下载的文件的哈希值，用于校验文件的完整性。
                     * 
                     */
                    void SetHashValue(const std::string& _hashValue);

                    /**
                     * 判断参数 HashValue 是否已赋值
                     * @return HashValue 是否已赋值
                     * 
                     */
                    bool HashValueHasBeenSet() const;

                    /**
                     * 获取从 download_url 下载的文件的哈希类型，用于校验文件的完整性。
                     * @return HashType 从 download_url 下载的文件的哈希类型，用于校验文件的完整性。
                     * 
                     */
                    std::string GetHashType() const;

                    /**
                     * 设置从 download_url 下载的文件的哈希类型，用于校验文件的完整性。
                     * @param _hashType 从 download_url 下载的文件的哈希类型，用于校验文件的完整性。
                     * 
                     */
                    void SetHashType(const std::string& _hashType);

                    /**
                     * 判断参数 HashType 是否已赋值
                     * @return HashType 是否已赋值
                     * 
                     */
                    bool HashTypeHasBeenSet() const;

                private:

                    /**
                     * 供下一步请求账单文件的下载地址。
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 从 download_url 下载的文件的哈希值，用于校验文件的完整性。
                     */
                    std::string m_hashValue;
                    bool m_hashValueHasBeenSet;

                    /**
                     * 从 download_url 下载的文件的哈希类型，用于校验文件的完整性。
                     */
                    std::string m_hashType;
                    bool m_hashTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKDOWNLOADURLRESULT_H_
