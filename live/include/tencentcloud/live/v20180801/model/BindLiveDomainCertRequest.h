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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_BINDLIVEDOMAINCERTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_BINDLIVEDOMAINCERTREQUEST_H_

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
                * BindLiveDomainCert请求参数结构体
                */
                class BindLiveDomainCertRequest : public AbstractModel
                {
                public:
                    BindLiveDomainCertRequest();
                    ~BindLiveDomainCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书Id。使用添加证书接口获取证书Id。
                     * @return CertId 证书Id。使用添加证书接口获取证书Id。
                     */
                    int64_t GetCertId() const;

                    /**
                     * 设置证书Id。使用添加证书接口获取证书Id。
                     * @param CertId 证书Id。使用添加证书接口获取证书Id。
                     */
                    void SetCertId(const int64_t& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取播放域名。
                     * @return DomainName 播放域名。
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置播放域名。
                     * @param DomainName 播放域名。
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取HTTPS开启状态，0： 关闭  1：打开。
                     * @return Status HTTPS开启状态，0： 关闭  1：打开。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置HTTPS开启状态，0： 关闭  1：打开。
                     * @param Status HTTPS开启状态，0： 关闭  1：打开。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 证书Id。使用添加证书接口获取证书Id。
                     */
                    int64_t m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 播放域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * HTTPS开启状态，0： 关闭  1：打开。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_BINDLIVEDOMAINCERTREQUEST_H_
