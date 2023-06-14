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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_UPLOADCERTREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_UPLOADCERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * UploadCert请求参数结构体
                */
                class UploadCertRequest : public AbstractModel
                {
                public:
                    UploadCertRequest();
                    ~UploadCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书类型，可选值：CA，SVR。
                     * @return CertType 证书类型，可选值：CA，SVR。
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置证书类型，可选值：CA，SVR。
                     * @param _certType 证书类型，可选值：CA，SVR。
                     * 
                     */
                    void SetCertType(const std::string& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取证书内容。
                     * @return Cert 证书内容。
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置证书内容。
                     * @param _cert 证书内容。
                     * 
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取证书别名。
                     * @return Alias 证书别名。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置证书别名。
                     * @param _alias 证书别名。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取私钥内容，证书类型为SVR时不需要传递。
                     * @return Key 私钥内容，证书类型为SVR时不需要传递。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置私钥内容，证书类型为SVR时不需要传递。
                     * @param _key 私钥内容，证书类型为SVR时不需要传递。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * 证书类型，可选值：CA，SVR。
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 证书内容。
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * 证书别名。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 私钥内容，证书类型为SVR时不需要传递。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_UPLOADCERTREQUEST_H_
