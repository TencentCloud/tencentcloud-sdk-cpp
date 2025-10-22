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

#ifndef TENCENTCLOUD_APE_V20200513_MODEL_BATCHDESCRIBEORDERCERTIFICATERESPONSE_H_
#define TENCENTCLOUD_APE_V20200513_MODEL_BATCHDESCRIBEORDERCERTIFICATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ape
    {
        namespace V20200513
        {
            namespace Model
            {
                /**
                * BatchDescribeOrderCertificate返回参数结构体
                */
                class BatchDescribeOrderCertificateResponse : public AbstractModel
                {
                public:
                    BatchDescribeOrderCertificateResponse();
                    ~BatchDescribeOrderCertificateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取授权书的下载地址
                     * @return CertificateUrls 授权书的下载地址
                     * 
                     */
                    std::vector<std::string> GetCertificateUrls() const;

                    /**
                     * 判断参数 CertificateUrls 是否已赋值
                     * @return CertificateUrls 是否已赋值
                     * 
                     */
                    bool CertificateUrlsHasBeenSet() const;

                private:

                    /**
                     * 授权书的下载地址
                     */
                    std::vector<std::string> m_certificateUrls;
                    bool m_certificateUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APE_V20200513_MODEL_BATCHDESCRIBEORDERCERTIFICATERESPONSE_H_
