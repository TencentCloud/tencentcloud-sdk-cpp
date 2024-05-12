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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDOWNLOADCERTIFICATEURLRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDOWNLOADCERTIFICATEURLRESPONSE_H_

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
                * DescribeDownloadCertificateUrl返回参数结构体
                */
                class DescribeDownloadCertificateUrlResponse : public AbstractModel
                {
                public:
                    DescribeDownloadCertificateUrlResponse();
                    ~DescribeDownloadCertificateUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取下载链接
                     * @return DownloadCertificateUrl 下载链接
                     * 
                     */
                    std::string GetDownloadCertificateUrl() const;

                    /**
                     * 判断参数 DownloadCertificateUrl 是否已赋值
                     * @return DownloadCertificateUrl 是否已赋值
                     * 
                     */
                    bool DownloadCertificateUrlHasBeenSet() const;

                    /**
                     * 获取下载文件的名称
                     * @return DownloadFilename 下载文件的名称
                     * 
                     */
                    std::string GetDownloadFilename() const;

                    /**
                     * 判断参数 DownloadFilename 是否已赋值
                     * @return DownloadFilename 是否已赋值
                     * 
                     */
                    bool DownloadFilenameHasBeenSet() const;

                private:

                    /**
                     * 下载链接
                     */
                    std::string m_downloadCertificateUrl;
                    bool m_downloadCertificateUrlHasBeenSet;

                    /**
                     * 下载文件的名称
                     */
                    std::string m_downloadFilename;
                    bool m_downloadFilenameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDOWNLOADCERTIFICATEURLRESPONSE_H_
