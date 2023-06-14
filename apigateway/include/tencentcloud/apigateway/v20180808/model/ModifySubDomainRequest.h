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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSUBDOMAINREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSUBDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/PathMapping.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ModifySubDomain请求参数结构体
                */
                class ModifySubDomainRequest : public AbstractModel
                {
                public:
                    ModifySubDomainRequest();
                    ~ModifySubDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务唯一 ID。
                     * @return ServiceId 服务唯一 ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务唯一 ID。
                     * @param _serviceId 服务唯一 ID。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取待修改路径映射的自定义的域名。
                     * @return SubDomain 待修改路径映射的自定义的域名。
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置待修改路径映射的自定义的域名。
                     * @param _subDomain 待修改路径映射的自定义的域名。
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取是否修改为使用默认路径映射。为 true，表示使用默认路径映射，为 false，表示使用自定义路径映射。
                     * @return IsDefaultMapping 是否修改为使用默认路径映射。为 true，表示使用默认路径映射，为 false，表示使用自定义路径映射。
                     * 
                     */
                    bool GetIsDefaultMapping() const;

                    /**
                     * 设置是否修改为使用默认路径映射。为 true，表示使用默认路径映射，为 false，表示使用自定义路径映射。
                     * @param _isDefaultMapping 是否修改为使用默认路径映射。为 true，表示使用默认路径映射，为 false，表示使用自定义路径映射。
                     * 
                     */
                    void SetIsDefaultMapping(const bool& _isDefaultMapping);

                    /**
                     * 判断参数 IsDefaultMapping 是否已赋值
                     * @return IsDefaultMapping 是否已赋值
                     * 
                     */
                    bool IsDefaultMappingHasBeenSet() const;

                    /**
                     * 获取证书 ID，协议包含 HTTPS 的时候要传该字段。
                     * @return CertificateId 证书 ID，协议包含 HTTPS 的时候要传该字段。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书 ID，协议包含 HTTPS 的时候要传该字段。
                     * @param _certificateId 证书 ID，协议包含 HTTPS 的时候要传该字段。
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取修改后的自定义域名协议类型。（http，https 或 http&https)
                     * @return Protocol 修改后的自定义域名协议类型。（http，https 或 http&https)
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置修改后的自定义域名协议类型。（http，https 或 http&https)
                     * @param _protocol 修改后的自定义域名协议类型。（http，https 或 http&https)
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取修改后的路径映射列表。
                     * @return PathMappingSet 修改后的路径映射列表。
                     * 
                     */
                    std::vector<PathMapping> GetPathMappingSet() const;

                    /**
                     * 设置修改后的路径映射列表。
                     * @param _pathMappingSet 修改后的路径映射列表。
                     * 
                     */
                    void SetPathMappingSet(const std::vector<PathMapping>& _pathMappingSet);

                    /**
                     * 判断参数 PathMappingSet 是否已赋值
                     * @return PathMappingSet 是否已赋值
                     * 
                     */
                    bool PathMappingSetHasBeenSet() const;

                    /**
                     * 获取网络类型 （'INNER' 或 'OUTER'）
                     * @return NetType 网络类型 （'INNER' 或 'OUTER'）
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置网络类型 （'INNER' 或 'OUTER'）
                     * @param _netType 网络类型 （'INNER' 或 'OUTER'）
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取是否将HTTP请求强制跳转 HTTPS，默认为false。参数为 true时，API网关会将所有使用该自定义域名的 HTTP 协议的请求重定向至 HTTPS 协议进行转发。
                     * @return IsForcedHttps 是否将HTTP请求强制跳转 HTTPS，默认为false。参数为 true时，API网关会将所有使用该自定义域名的 HTTP 协议的请求重定向至 HTTPS 协议进行转发。
                     * 
                     */
                    bool GetIsForcedHttps() const;

                    /**
                     * 设置是否将HTTP请求强制跳转 HTTPS，默认为false。参数为 true时，API网关会将所有使用该自定义域名的 HTTP 协议的请求重定向至 HTTPS 协议进行转发。
                     * @param _isForcedHttps 是否将HTTP请求强制跳转 HTTPS，默认为false。参数为 true时，API网关会将所有使用该自定义域名的 HTTP 协议的请求重定向至 HTTPS 协议进行转发。
                     * 
                     */
                    void SetIsForcedHttps(const bool& _isForcedHttps);

                    /**
                     * 判断参数 IsForcedHttps 是否已赋值
                     * @return IsForcedHttps 是否已赋值
                     * 
                     */
                    bool IsForcedHttpsHasBeenSet() const;

                private:

                    /**
                     * 服务唯一 ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 待修改路径映射的自定义的域名。
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 是否修改为使用默认路径映射。为 true，表示使用默认路径映射，为 false，表示使用自定义路径映射。
                     */
                    bool m_isDefaultMapping;
                    bool m_isDefaultMappingHasBeenSet;

                    /**
                     * 证书 ID，协议包含 HTTPS 的时候要传该字段。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 修改后的自定义域名协议类型。（http，https 或 http&https)
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 修改后的路径映射列表。
                     */
                    std::vector<PathMapping> m_pathMappingSet;
                    bool m_pathMappingSetHasBeenSet;

                    /**
                     * 网络类型 （'INNER' 或 'OUTER'）
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 是否将HTTP请求强制跳转 HTTPS，默认为false。参数为 true时，API网关会将所有使用该自定义域名的 HTTP 协议的请求重定向至 HTTPS 协议进行转发。
                     */
                    bool m_isForcedHttps;
                    bool m_isForcedHttpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSUBDOMAINREQUEST_H_
