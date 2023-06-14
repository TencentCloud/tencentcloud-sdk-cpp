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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINCERTBINDINGSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINCERTBINDINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/LiveCertDomainInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyLiveDomainCertBindings请求参数结构体
                */
                class ModifyLiveDomainCertBindingsRequest : public AbstractModel
                {
                public:
                    ModifyLiveDomainCertBindingsRequest();
                    ~ModifyLiveDomainCertBindingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要绑定证书的播放域名/状态 信息列表。
如果CloudCertId和证书公钥私钥对均不传，且域名列表已有绑定规则，只批量更新域名https规则的启用状态，并把未上传至腾讯云ssl的已有自有证书上传。
                     * @return DomainInfos 要绑定证书的播放域名/状态 信息列表。
如果CloudCertId和证书公钥私钥对均不传，且域名列表已有绑定规则，只批量更新域名https规则的启用状态，并把未上传至腾讯云ssl的已有自有证书上传。
                     * 
                     */
                    std::vector<LiveCertDomainInfo> GetDomainInfos() const;

                    /**
                     * 设置要绑定证书的播放域名/状态 信息列表。
如果CloudCertId和证书公钥私钥对均不传，且域名列表已有绑定规则，只批量更新域名https规则的启用状态，并把未上传至腾讯云ssl的已有自有证书上传。
                     * @param _domainInfos 要绑定证书的播放域名/状态 信息列表。
如果CloudCertId和证书公钥私钥对均不传，且域名列表已有绑定规则，只批量更新域名https规则的启用状态，并把未上传至腾讯云ssl的已有自有证书上传。
                     * 
                     */
                    void SetDomainInfos(const std::vector<LiveCertDomainInfo>& _domainInfos);

                    /**
                     * 判断参数 DomainInfos 是否已赋值
                     * @return DomainInfos 是否已赋值
                     * 
                     */
                    bool DomainInfosHasBeenSet() const;

                    /**
                     * 获取腾讯云ssl的证书Id。
见 https://cloud.tencent.com/document/api/400/41665
                     * @return CloudCertId 腾讯云ssl的证书Id。
见 https://cloud.tencent.com/document/api/400/41665
                     * 
                     */
                    std::string GetCloudCertId() const;

                    /**
                     * 设置腾讯云ssl的证书Id。
见 https://cloud.tencent.com/document/api/400/41665
                     * @param _cloudCertId 腾讯云ssl的证书Id。
见 https://cloud.tencent.com/document/api/400/41665
                     * 
                     */
                    void SetCloudCertId(const std::string& _cloudCertId);

                    /**
                     * 判断参数 CloudCertId 是否已赋值
                     * @return CloudCertId 是否已赋值
                     * 
                     */
                    bool CloudCertIdHasBeenSet() const;

                    /**
                     * 获取证书公钥。
CloudCertId和公钥私钥对二选一，若CloudCertId将会舍弃公钥和私钥参数，否则将自动先把公钥私钥对上传至ssl新建证书，并使用上传成功后返回的CloudCertId。
                     * @return CertificatePublicKey 证书公钥。
CloudCertId和公钥私钥对二选一，若CloudCertId将会舍弃公钥和私钥参数，否则将自动先把公钥私钥对上传至ssl新建证书，并使用上传成功后返回的CloudCertId。
                     * 
                     */
                    std::string GetCertificatePublicKey() const;

                    /**
                     * 设置证书公钥。
CloudCertId和公钥私钥对二选一，若CloudCertId将会舍弃公钥和私钥参数，否则将自动先把公钥私钥对上传至ssl新建证书，并使用上传成功后返回的CloudCertId。
                     * @param _certificatePublicKey 证书公钥。
CloudCertId和公钥私钥对二选一，若CloudCertId将会舍弃公钥和私钥参数，否则将自动先把公钥私钥对上传至ssl新建证书，并使用上传成功后返回的CloudCertId。
                     * 
                     */
                    void SetCertificatePublicKey(const std::string& _certificatePublicKey);

                    /**
                     * 判断参数 CertificatePublicKey 是否已赋值
                     * @return CertificatePublicKey 是否已赋值
                     * 
                     */
                    bool CertificatePublicKeyHasBeenSet() const;

                    /**
                     * 获取证书私钥。
CloudCertId和公钥私钥对二选一，若传CloudCertId将会舍弃公钥和私钥参数，否则将自动先把公钥私钥对上传至ssl新建证书，并使用上传成功后返回的CloudCertId。
                     * @return CertificatePrivateKey 证书私钥。
CloudCertId和公钥私钥对二选一，若传CloudCertId将会舍弃公钥和私钥参数，否则将自动先把公钥私钥对上传至ssl新建证书，并使用上传成功后返回的CloudCertId。
                     * 
                     */
                    std::string GetCertificatePrivateKey() const;

                    /**
                     * 设置证书私钥。
CloudCertId和公钥私钥对二选一，若传CloudCertId将会舍弃公钥和私钥参数，否则将自动先把公钥私钥对上传至ssl新建证书，并使用上传成功后返回的CloudCertId。
                     * @param _certificatePrivateKey 证书私钥。
CloudCertId和公钥私钥对二选一，若传CloudCertId将会舍弃公钥和私钥参数，否则将自动先把公钥私钥对上传至ssl新建证书，并使用上传成功后返回的CloudCertId。
                     * 
                     */
                    void SetCertificatePrivateKey(const std::string& _certificatePrivateKey);

                    /**
                     * 判断参数 CertificatePrivateKey 是否已赋值
                     * @return CertificatePrivateKey 是否已赋值
                     * 
                     */
                    bool CertificatePrivateKeyHasBeenSet() const;

                    /**
                     * 获取上传至ssl证书中心的备注信息，只有新建证书时有效。传CloudCertId时会忽略。
                     * @return CertificateAlias 上传至ssl证书中心的备注信息，只有新建证书时有效。传CloudCertId时会忽略。
                     * 
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置上传至ssl证书中心的备注信息，只有新建证书时有效。传CloudCertId时会忽略。
                     * @param _certificateAlias 上传至ssl证书中心的备注信息，只有新建证书时有效。传CloudCertId时会忽略。
                     * 
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     * 
                     */
                    bool CertificateAliasHasBeenSet() const;

                private:

                    /**
                     * 要绑定证书的播放域名/状态 信息列表。
如果CloudCertId和证书公钥私钥对均不传，且域名列表已有绑定规则，只批量更新域名https规则的启用状态，并把未上传至腾讯云ssl的已有自有证书上传。
                     */
                    std::vector<LiveCertDomainInfo> m_domainInfos;
                    bool m_domainInfosHasBeenSet;

                    /**
                     * 腾讯云ssl的证书Id。
见 https://cloud.tencent.com/document/api/400/41665
                     */
                    std::string m_cloudCertId;
                    bool m_cloudCertIdHasBeenSet;

                    /**
                     * 证书公钥。
CloudCertId和公钥私钥对二选一，若CloudCertId将会舍弃公钥和私钥参数，否则将自动先把公钥私钥对上传至ssl新建证书，并使用上传成功后返回的CloudCertId。
                     */
                    std::string m_certificatePublicKey;
                    bool m_certificatePublicKeyHasBeenSet;

                    /**
                     * 证书私钥。
CloudCertId和公钥私钥对二选一，若传CloudCertId将会舍弃公钥和私钥参数，否则将自动先把公钥私钥对上传至ssl新建证书，并使用上传成功后返回的CloudCertId。
                     */
                    std::string m_certificatePrivateKey;
                    bool m_certificatePrivateKeyHasBeenSet;

                    /**
                     * 上传至ssl证书中心的备注信息，只有新建证书时有效。传CloudCertId时会忽略。
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINCERTBINDINGSREQUEST_H_
