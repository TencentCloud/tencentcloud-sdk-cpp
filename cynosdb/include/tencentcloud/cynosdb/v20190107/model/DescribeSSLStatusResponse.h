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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESSLSTATUSRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESSLSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/CertDetail.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeSSLStatus返回参数结构体
                */
                class DescribeSSLStatusResponse : public AbstractModel
                {
                public:
                    DescribeSSLStatusResponse();
                    ~DescribeSSLStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>yes-开启，no-关闭</p>
                     * @return IsOpenSSL <p>yes-开启，no-关闭</p>
                     * 
                     */
                    std::string GetIsOpenSSL() const;

                    /**
                     * 判断参数 IsOpenSSL 是否已赋值
                     * @return IsOpenSSL 是否已赋值
                     * 
                     */
                    bool IsOpenSSLHasBeenSet() const;

                    /**
                     * 获取<p>证书下载地址</p>
                     * @return DownloadUrl <p>证书下载地址</p>
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取<p>证书类型</p><p>枚举值：</p><ul><li>platform： 云端证书</li><li>custom： 自定义证书</li></ul>
                     * @return CertType <p>证书类型</p><p>枚举值：</p><ul><li>platform： 云端证书</li><li>custom： 自定义证书</li></ul>
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取<p>自定义证书详情，仅 CertType=custom 时有值。</p>
                     * @return CertDetail <p>自定义证书详情，仅 CertType=custom 时有值。</p>
                     * 
                     */
                    CertDetail GetCertDetail() const;

                    /**
                     * 判断参数 CertDetail 是否已赋值
                     * @return CertDetail 是否已赋值
                     * 
                     */
                    bool CertDetailHasBeenSet() const;

                private:

                    /**
                     * <p>yes-开启，no-关闭</p>
                     */
                    std::string m_isOpenSSL;
                    bool m_isOpenSSLHasBeenSet;

                    /**
                     * <p>证书下载地址</p>
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * <p>证书类型</p><p>枚举值：</p><ul><li>platform： 云端证书</li><li>custom： 自定义证书</li></ul>
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * <p>自定义证书详情，仅 CertType=custom 时有值。</p>
                     */
                    CertDetail m_certDetail;
                    bool m_certDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESSLSTATUSRESPONSE_H_
