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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_FILEINFO_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_FILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 用于描述一个文件内容，包括一个下载链接和与文件内容对应的MD5和大小。
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用于下载文件的URL
                     * @return Url 用于下载文件的URL
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置用于下载文件的URL
                     * @param Url 用于下载文件的URL
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取文件的32位MD5
                     * @return MD5 文件的32位MD5
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置文件的32位MD5
                     * @param MD5 文件的32位MD5
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取文件字节数
                     * @return Size 文件字节数
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件字节数
                     * @param Size 文件字节数
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * 用于下载文件的URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 文件的32位MD5
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * 文件字节数
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_FILEINFO_H_
