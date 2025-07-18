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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_DOWNLOADUSERCERTRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_DOWNLOADUSERCERTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DownloadUserCert返回参数结构体
                */
                class DownloadUserCertResponse : public AbstractModel
                {
                public:
                    DownloadUserCertResponse();
                    ~DownloadUserCertResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取证书名称
                     * @return CertName 证书名称
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取证书内容
                     * @return CertCtx 证书内容
                     * @deprecated
                     */
                    std::string GetCertCtx() const;

                    /**
                     * 判断参数 CertCtx 是否已赋值
                     * @return CertCtx 是否已赋值
                     * @deprecated
                     */
                    bool CertCtxHasBeenSet() const;

                    /**
                     * 获取证书内容
                     * @return Cert 证书内容
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                private:

                    /**
                     * 证书名称
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * 证书内容
                     */
                    std::string m_certCtx;
                    bool m_certCtxHasBeenSet;

                    /**
                     * 证书内容
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_DOWNLOADUSERCERTRESPONSE_H_
