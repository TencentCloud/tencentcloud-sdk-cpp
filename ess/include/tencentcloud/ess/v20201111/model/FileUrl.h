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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FILEURL_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FILEURL_H_

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
                * 下载文件的URL信息
                */
                class FileUrl : public AbstractModel
                {
                public:
                    FileUrl();
                    ~FileUrl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取下载文件的URL，有效期为输入的UrlTtl，默认5分钟
                     * @return Url 下载文件的URL，有效期为输入的UrlTtl，默认5分钟
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置下载文件的URL，有效期为输入的UrlTtl，默认5分钟
                     * @param _url 下载文件的URL，有效期为输入的UrlTtl，默认5分钟
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取下载文件的附加信息。如果是pdf文件，会返回pdf文件每页的有效高宽
                     * @return Option 下载文件的附加信息。如果是pdf文件，会返回pdf文件每页的有效高宽
                     * 
                     */
                    std::string GetOption() const;

                    /**
                     * 设置下载文件的附加信息。如果是pdf文件，会返回pdf文件每页的有效高宽
                     * @param _option 下载文件的附加信息。如果是pdf文件，会返回pdf文件每页的有效高宽
                     * 
                     */
                    void SetOption(const std::string& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                private:

                    /**
                     * 下载文件的URL，有效期为输入的UrlTtl，默认5分钟
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 下载文件的附加信息。如果是pdf文件，会返回pdf文件每页的有效高宽
                     */
                    std::string m_option;
                    bool m_optionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FILEURL_H_
