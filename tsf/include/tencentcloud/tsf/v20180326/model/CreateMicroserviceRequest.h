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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATEMICROSERVICEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATEMICROSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreateMicroservice请求参数结构体
                */
                class CreateMicroserviceRequest : public AbstractModel
                {
                public:
                    CreateMicroserviceRequest();
                    ~CreateMicroserviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>命名空间ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/649/36096">DescribeSimpleNamespaces</a> 的返回值中的 NamespaceId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tsf/resource?tab=namespace">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36098">CreateNamespace</a>创建新的命名空间。</p>
                     * @return NamespaceId <p>命名空间ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/649/36096">DescribeSimpleNamespaces</a> 的返回值中的 NamespaceId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tsf/resource?tab=namespace">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36098">CreateNamespace</a>创建新的命名空间。</p>
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置<p>命名空间ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/649/36096">DescribeSimpleNamespaces</a> 的返回值中的 NamespaceId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tsf/resource?tab=namespace">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36098">CreateNamespace</a>创建新的命名空间。</p>
                     * @param _namespaceId <p>命名空间ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/649/36096">DescribeSimpleNamespaces</a> 的返回值中的 NamespaceId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tsf/resource?tab=namespace">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36098">CreateNamespace</a>创建新的命名空间。</p>
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取<p>微服务名称。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/36084">DescribeMicroservices</a> 的返回值中的 MicroserviceName 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=service">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/85860">CreateMicroserviceWithDetailResp</a>创建新的微服务。</p>
                     * @return MicroserviceName <p>微服务名称。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/36084">DescribeMicroservices</a> 的返回值中的 MicroserviceName 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=service">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/85860">CreateMicroserviceWithDetailResp</a>创建新的微服务。</p>
                     * 
                     */
                    std::string GetMicroserviceName() const;

                    /**
                     * 设置<p>微服务名称。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/36084">DescribeMicroservices</a> 的返回值中的 MicroserviceName 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=service">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/85860">CreateMicroserviceWithDetailResp</a>创建新的微服务。</p>
                     * @param _microserviceName <p>微服务名称。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/36084">DescribeMicroservices</a> 的返回值中的 MicroserviceName 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=service">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/85860">CreateMicroserviceWithDetailResp</a>创建新的微服务。</p>
                     * 
                     */
                    void SetMicroserviceName(const std::string& _microserviceName);

                    /**
                     * 判断参数 MicroserviceName 是否已赋值
                     * @return MicroserviceName 是否已赋值
                     * 
                     */
                    bool MicroserviceNameHasBeenSet() const;

                    /**
                     * 获取<p>微服务备注信息，最多支持200个字符。</p>
                     * @return MicroserviceDesc <p>微服务备注信息，最多支持200个字符。</p>
                     * 
                     */
                    std::string GetMicroserviceDesc() const;

                    /**
                     * 设置<p>微服务备注信息，最多支持200个字符。</p>
                     * @param _microserviceDesc <p>微服务备注信息，最多支持200个字符。</p>
                     * 
                     */
                    void SetMicroserviceDesc(const std::string& _microserviceDesc);

                    /**
                     * 判断参数 MicroserviceDesc 是否已赋值
                     * @return MicroserviceDesc 是否已赋值
                     * 
                     */
                    bool MicroserviceDescHasBeenSet() const;

                    /**
                     * 获取<p>服务类型，默认SDK</p><p>枚举值：</p><ul><li>SDK： sdk服务</li><li>MESH_EXTERNAL： mesh外部服务</li></ul>
                     * @return ServiceType <p>服务类型，默认SDK</p><p>枚举值：</p><ul><li>SDK： sdk服务</li><li>MESH_EXTERNAL： mesh外部服务</li></ul>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>服务类型，默认SDK</p><p>枚举值：</p><ul><li>SDK： sdk服务</li><li>MESH_EXTERNAL： mesh外部服务</li></ul>
                     * @param _serviceType <p>服务类型，默认SDK</p><p>枚举值：</p><ul><li>SDK： sdk服务</li><li>MESH_EXTERNAL： mesh外部服务</li></ul>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>域名+端口，或者是纯域名方式，其他的不允许配置，不支持 IP</p>
                     * @return ServiceUrl <p>域名+端口，或者是纯域名方式，其他的不允许配置，不支持 IP</p>
                     * 
                     */
                    std::string GetServiceUrl() const;

                    /**
                     * 设置<p>域名+端口，或者是纯域名方式，其他的不允许配置，不支持 IP</p>
                     * @param _serviceUrl <p>域名+端口，或者是纯域名方式，其他的不允许配置，不支持 IP</p>
                     * 
                     */
                    void SetServiceUrl(const std::string& _serviceUrl);

                    /**
                     * 判断参数 ServiceUrl 是否已赋值
                     * @return ServiceUrl 是否已赋值
                     * 
                     */
                    bool ServiceUrlHasBeenSet() const;

                    /**
                     * 获取<p>协议类型</p>
                     * @return Protocol <p>协议类型</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议类型</p>
                     * @param _protocol <p>协议类型</p>
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
                     * 获取<p>服务发现方式</p><p>枚举值：</p><ul><li>DNS： DNS方式</li></ul>
                     * @return ServiceDiscovery <p>服务发现方式</p><p>枚举值：</p><ul><li>DNS： DNS方式</li></ul>
                     * 
                     */
                    std::string GetServiceDiscovery() const;

                    /**
                     * 设置<p>服务发现方式</p><p>枚举值：</p><ul><li>DNS： DNS方式</li></ul>
                     * @param _serviceDiscovery <p>服务发现方式</p><p>枚举值：</p><ul><li>DNS： DNS方式</li></ul>
                     * 
                     */
                    void SetServiceDiscovery(const std::string& _serviceDiscovery);

                    /**
                     * 判断参数 ServiceDiscovery 是否已赋值
                     * @return ServiceDiscovery 是否已赋值
                     * 
                     */
                    bool ServiceDiscoveryHasBeenSet() const;

                private:

                    /**
                     * <p>命名空间ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/649/36096">DescribeSimpleNamespaces</a> 的返回值中的 NamespaceId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tsf/resource?tab=namespace">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/36098">CreateNamespace</a>创建新的命名空间。</p>
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * <p>微服务名称。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/36084">DescribeMicroservices</a> 的返回值中的 MicroserviceName 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=service">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/85860">CreateMicroserviceWithDetailResp</a>创建新的微服务。</p>
                     */
                    std::string m_microserviceName;
                    bool m_microserviceNameHasBeenSet;

                    /**
                     * <p>微服务备注信息，最多支持200个字符。</p>
                     */
                    std::string m_microserviceDesc;
                    bool m_microserviceDescHasBeenSet;

                    /**
                     * <p>服务类型，默认SDK</p><p>枚举值：</p><ul><li>SDK： sdk服务</li><li>MESH_EXTERNAL： mesh外部服务</li></ul>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>域名+端口，或者是纯域名方式，其他的不允许配置，不支持 IP</p>
                     */
                    std::string m_serviceUrl;
                    bool m_serviceUrlHasBeenSet;

                    /**
                     * <p>协议类型</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>服务发现方式</p><p>枚举值：</p><ul><li>DNS： DNS方式</li></ul>
                     */
                    std::string m_serviceDiscovery;
                    bool m_serviceDiscoveryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEMICROSERVICEREQUEST_H_
