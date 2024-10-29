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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_SETTLSVERSIONREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_SETTLSVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * SetTlsVersion请求参数结构体
                */
                class SetTlsVersionRequest : public AbstractModel
                {
                public:
                    SetTlsVersionRequest();
                    ~SetTlsVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器ID
                     * @return ListenerId 监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param _listenerId 监听器ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取TLS版本,可选TLSv1、TLSv1.1、TLSv1.2、TLSv1.3
                     * @return TLSSupportVersion TLS版本,可选TLSv1、TLSv1.1、TLSv1.2、TLSv1.3
                     * 
                     */
                    std::vector<std::string> GetTLSSupportVersion() const;

                    /**
                     * 设置TLS版本,可选TLSv1、TLSv1.1、TLSv1.2、TLSv1.3
                     * @param _tLSSupportVersion TLS版本,可选TLSv1、TLSv1.1、TLSv1.2、TLSv1.3
                     * 
                     */
                    void SetTLSSupportVersion(const std::vector<std::string>& _tLSSupportVersion);

                    /**
                     * 判断参数 TLSSupportVersion 是否已赋值
                     * @return TLSSupportVersion 是否已赋值
                     * 
                     */
                    bool TLSSupportVersionHasBeenSet() const;

                    /**
                     * 获取密码套件包,可选 GAAP_TLS_CIPHERS_STRICT，GAAP_TLS_CIPHERS_GENERAL，GAAP_TLS_CIPHERS_WIDE(默认)
                     * @return TLSCiphers 密码套件包,可选 GAAP_TLS_CIPHERS_STRICT，GAAP_TLS_CIPHERS_GENERAL，GAAP_TLS_CIPHERS_WIDE(默认)
                     * 
                     */
                    std::string GetTLSCiphers() const;

                    /**
                     * 设置密码套件包,可选 GAAP_TLS_CIPHERS_STRICT，GAAP_TLS_CIPHERS_GENERAL，GAAP_TLS_CIPHERS_WIDE(默认)
                     * @param _tLSCiphers 密码套件包,可选 GAAP_TLS_CIPHERS_STRICT，GAAP_TLS_CIPHERS_GENERAL，GAAP_TLS_CIPHERS_WIDE(默认)
                     * 
                     */
                    void SetTLSCiphers(const std::string& _tLSCiphers);

                    /**
                     * 判断参数 TLSCiphers 是否已赋值
                     * @return TLSCiphers 是否已赋值
                     * 
                     */
                    bool TLSCiphersHasBeenSet() const;

                private:

                    /**
                     * 监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * TLS版本,可选TLSv1、TLSv1.1、TLSv1.2、TLSv1.3
                     */
                    std::vector<std::string> m_tLSSupportVersion;
                    bool m_tLSSupportVersionHasBeenSet;

                    /**
                     * 密码套件包,可选 GAAP_TLS_CIPHERS_STRICT，GAAP_TLS_CIPHERS_GENERAL，GAAP_TLS_CIPHERS_WIDE(默认)
                     */
                    std::string m_tLSCiphers;
                    bool m_tLSCiphersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_SETTLSVERSIONREQUEST_H_
