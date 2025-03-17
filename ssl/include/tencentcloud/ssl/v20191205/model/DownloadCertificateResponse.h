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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DOWNLOADCERTIFICATERESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DOWNLOADCERTIFICATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DownloadCertificate返回参数结构体
                */
                class DownloadCertificateResponse : public AbstractModel
                {
                public:
                    DownloadCertificateResponse();
                    ~DownloadCertificateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ZIP base64 编码内容，base64 解码后可保存为 ZIP 文件。
                     * @return Content ZIP base64 编码内容，base64 解码后可保存为 ZIP 文件。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取MIME 类型：application/zip = ZIP 压缩文件。
                     * @return ContentType MIME 类型：application/zip = ZIP 压缩文件。
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                private:

                    /**
                     * ZIP base64 编码内容，base64 解码后可保存为 ZIP 文件。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * MIME 类型：application/zip = ZIP 压缩文件。
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DOWNLOADCERTIFICATERESPONSE_H_
