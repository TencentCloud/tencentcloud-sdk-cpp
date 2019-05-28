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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVECERTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVECERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyLiveCert请求参数结构体
                */
                class ModifyLiveCertRequest : public AbstractModel
                {
                public:
                    ModifyLiveCertRequest();
                    ~ModifyLiveCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书Id。
                     * @return CertId 证书Id。
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书Id。
                     * @param CertId 证书Id。
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取证书类型。0-用户添加证书；1-腾讯云托管证书。
                     * @return CertType 证书类型。0-用户添加证书；1-腾讯云托管证书。
                     */
                    uint64_t GetCertType() const;

                    /**
                     * 设置证书类型。0-用户添加证书；1-腾讯云托管证书。
                     * @param CertType 证书类型。0-用户添加证书；1-腾讯云托管证书。
                     */
                    void SetCertType(const uint64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取证书名称。
                     * @return CertName 证书名称。
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置证书名称。
                     * @param CertName 证书名称。
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取证书内容，即公钥。
                     * @return HttpsCrt 证书内容，即公钥。
                     */
                    std::string GetHttpsCrt() const;

                    /**
                     * 设置证书内容，即公钥。
                     * @param HttpsCrt 证书内容，即公钥。
                     */
                    void SetHttpsCrt(const std::string& _httpsCrt);

                    /**
                     * 判断参数 HttpsCrt 是否已赋值
                     * @return HttpsCrt 是否已赋值
                     */
                    bool HttpsCrtHasBeenSet() const;

                    /**
                     * 获取私钥。
                     * @return HttpsKey 私钥。
                     */
                    std::string GetHttpsKey() const;

                    /**
                     * 设置私钥。
                     * @param HttpsKey 私钥。
                     */
                    void SetHttpsKey(const std::string& _httpsKey);

                    /**
                     * 判断参数 HttpsKey 是否已赋值
                     * @return HttpsKey 是否已赋值
                     */
                    bool HttpsKeyHasBeenSet() const;

                    /**
                     * 获取描述信息。
                     * @return Description 描述信息。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
                     * @param Description 描述信息。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 证书Id。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 证书类型。0-用户添加证书；1-腾讯云托管证书。
                     */
                    uint64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 证书名称。
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * 证书内容，即公钥。
                     */
                    std::string m_httpsCrt;
                    bool m_httpsCrtHasBeenSet;

                    /**
                     * 私钥。
                     */
                    std::string m_httpsKey;
                    bool m_httpsKeyHasBeenSet;

                    /**
                     * 描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVECERTREQUEST_H_
