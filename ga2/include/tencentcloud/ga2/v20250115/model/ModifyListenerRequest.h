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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYLISTENERREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYLISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * ModifyListener请求参数结构体
                */
                class ModifyListenerRequest : public AbstractModel
                {
                public:
                    ModifyListenerRequest();
                    ~ModifyListenerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取全球加速实例ID。
                     * @return GlobalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置全球加速实例ID。
                     * @param _globalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取监听器ID。
                     * @return ListenerId 监听器ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID。
                     * @param _listenerId 监听器ID。
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
                     * 获取名称，最大长度不能超过60个字节。
                     * @return Name 名称，最大长度不能超过60个字节。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称，最大长度不能超过60个字节。
                     * @param _name 名称，最大长度不能超过60个字节。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取描述信息，最大长度不能超过100个字节。
                     * @return Description 描述信息，最大长度不能超过100个字节。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息，最大长度不能超过100个字节。
                     * @param _description 描述信息，最大长度不能超过100个字节。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取连接空闲等待时间。
                     * @return IdleTimeout 连接空闲等待时间。
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 设置连接空闲等待时间。
                     * @param _idleTimeout 连接空闲等待时间。
                     * 
                     */
                    void SetIdleTimeout(const uint64_t& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                    /**
                     * 获取是否开启会话保持。
                     * @return ClientAffinity 是否开启会话保持。
                     * 
                     */
                    std::string GetClientAffinity() const;

                    /**
                     * 设置是否开启会话保持。
                     * @param _clientAffinity 是否开启会话保持。
                     * 
                     */
                    void SetClientAffinity(const std::string& _clientAffinity);

                    /**
                     * 判断参数 ClientAffinity 是否已赋值
                     * @return ClientAffinity 是否已赋值
                     * 
                     */
                    bool ClientAffinityHasBeenSet() const;

                    /**
                     * 获取会话保持时间。
                     * @return ClientAffinityTime 会话保持时间。
                     * 
                     */
                    uint64_t GetClientAffinityTime() const;

                    /**
                     * 设置会话保持时间。
                     * @param _clientAffinityTime 会话保持时间。
                     * 
                     */
                    void SetClientAffinityTime(const uint64_t& _clientAffinityTime);

                    /**
                     * 判断参数 ClientAffinityTime 是否已赋值
                     * @return ClientAffinityTime 是否已赋值
                     * 
                     */
                    bool ClientAffinityTimeHasBeenSet() const;

                    /**
                     * 获取请求超时时间。
                     * @return RequestTimeout 请求超时时间。
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 设置请求超时时间。
                     * @param _requestTimeout 请求超时时间。
                     * 
                     */
                    void SetRequestTimeout(const uint64_t& _requestTimeout);

                    /**
                     * 判断参数 RequestTimeout 是否已赋值
                     * @return RequestTimeout 是否已赋值
                     * 
                     */
                    bool RequestTimeoutHasBeenSet() const;

                    /**
                     * 获取是否打开七层获取源IP方式。
                     * @return XForwardedForRealIp 是否打开七层获取源IP方式。
                     * 
                     */
                    bool GetXForwardedForRealIp() const;

                    /**
                     * 设置是否打开七层获取源IP方式。
                     * @param _xForwardedForRealIp 是否打开七层获取源IP方式。
                     * 
                     */
                    void SetXForwardedForRealIp(const bool& _xForwardedForRealIp);

                    /**
                     * 判断参数 XForwardedForRealIp 是否已赋值
                     * @return XForwardedForRealIp 是否已赋值
                     * 
                     */
                    bool XForwardedForRealIpHasBeenSet() const;

                    /**
                     * 获取解析方式。UNIDIRECTIONAL：双向。MUTUAL：单向。
                     * @return CertificationType 解析方式。UNIDIRECTIONAL：双向。MUTUAL：单向。
                     * 
                     */
                    std::string GetCertificationType() const;

                    /**
                     * 设置解析方式。UNIDIRECTIONAL：双向。MUTUAL：单向。
                     * @param _certificationType 解析方式。UNIDIRECTIONAL：双向。MUTUAL：单向。
                     * 
                     */
                    void SetCertificationType(const std::string& _certificationType);

                    /**
                     * 判断参数 CertificationType 是否已赋值
                     * @return CertificationType 是否已赋值
                     * 
                     */
                    bool CertificationTypeHasBeenSet() const;

                    /**
                     * 获取加密算法套件。
                     * @return CipherPolicyId 加密算法套件。
                     * 
                     */
                    std::string GetCipherPolicyId() const;

                    /**
                     * 设置加密算法套件。
                     * @param _cipherPolicyId 加密算法套件。
                     * 
                     */
                    void SetCipherPolicyId(const std::string& _cipherPolicyId);

                    /**
                     * 判断参数 CipherPolicyId 是否已赋值
                     * @return CipherPolicyId 是否已赋值
                     * 
                     */
                    bool CipherPolicyIdHasBeenSet() const;

                    /**
                     * 获取服务器证书。
                     * @return ServerCertificates 服务器证书。
                     * 
                     */
                    std::vector<std::string> GetServerCertificates() const;

                    /**
                     * 设置服务器证书。
                     * @param _serverCertificates 服务器证书。
                     * 
                     */
                    void SetServerCertificates(const std::vector<std::string>& _serverCertificates);

                    /**
                     * 判断参数 ServerCertificates 是否已赋值
                     * @return ServerCertificates 是否已赋值
                     * 
                     */
                    bool ServerCertificatesHasBeenSet() const;

                    /**
                     * 获取客户端证书。
                     * @return ClientCaCertificates 客户端证书。
                     * 
                     */
                    std::vector<std::string> GetClientCaCertificates() const;

                    /**
                     * 设置客户端证书。
                     * @param _clientCaCertificates 客户端证书。
                     * 
                     */
                    void SetClientCaCertificates(const std::vector<std::string>& _clientCaCertificates);

                    /**
                     * 判断参数 ClientCaCertificates 是否已赋值
                     * @return ClientCaCertificates 是否已赋值
                     * 
                     */
                    bool ClientCaCertificatesHasBeenSet() const;

                    /**
                     * 获取四层获取源IP方式。
                     * @return GetRealIpType 四层获取源IP方式。
                     * 
                     */
                    std::string GetGetRealIpType() const;

                    /**
                     * 设置四层获取源IP方式。
                     * @param _getRealIpType 四层获取源IP方式。
                     * 
                     */
                    void SetGetRealIpType(const std::string& _getRealIpType);

                    /**
                     * 判断参数 GetRealIpType 是否已赋值
                     * @return GetRealIpType 是否已赋值
                     * 
                     */
                    bool GetRealIpTypeHasBeenSet() const;

                private:

                    /**
                     * 全球加速实例ID。
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * 监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 名称，最大长度不能超过60个字节。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述信息，最大长度不能超过100个字节。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 连接空闲等待时间。
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * 是否开启会话保持。
                     */
                    std::string m_clientAffinity;
                    bool m_clientAffinityHasBeenSet;

                    /**
                     * 会话保持时间。
                     */
                    uint64_t m_clientAffinityTime;
                    bool m_clientAffinityTimeHasBeenSet;

                    /**
                     * 请求超时时间。
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * 是否打开七层获取源IP方式。
                     */
                    bool m_xForwardedForRealIp;
                    bool m_xForwardedForRealIpHasBeenSet;

                    /**
                     * 解析方式。UNIDIRECTIONAL：双向。MUTUAL：单向。
                     */
                    std::string m_certificationType;
                    bool m_certificationTypeHasBeenSet;

                    /**
                     * 加密算法套件。
                     */
                    std::string m_cipherPolicyId;
                    bool m_cipherPolicyIdHasBeenSet;

                    /**
                     * 服务器证书。
                     */
                    std::vector<std::string> m_serverCertificates;
                    bool m_serverCertificatesHasBeenSet;

                    /**
                     * 客户端证书。
                     */
                    std::vector<std::string> m_clientCaCertificates;
                    bool m_clientCaCertificatesHasBeenSet;

                    /**
                     * 四层获取源IP方式。
                     */
                    std::string m_getRealIpType;
                    bool m_getRealIpTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYLISTENERREQUEST_H_
