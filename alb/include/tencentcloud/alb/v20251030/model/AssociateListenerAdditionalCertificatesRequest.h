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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_ASSOCIATELISTENERADDITIONALCERTIFICATESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_ASSOCIATELISTENERADDITIONALCERTIFICATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * AssociateListenerAdditionalCertificates请求参数结构体
                */
                class AssociateListenerAdditionalCertificatesRequest : public AbstractModel
                {
                public:
                    AssociateListenerAdditionalCertificatesRequest();
                    ~AssociateListenerAdditionalCertificatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>扩展证书 ID 列表。</p>
                     * @return CertificateIds <p>扩展证书 ID 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 设置<p>扩展证书 ID 列表。</p>
                     * @param _certificateIds <p>扩展证书 ID 列表。</p>
                     * 
                     */
                    void SetCertificateIds(const std::vector<std::string>& _certificateIds);

                    /**
                     * 判断参数 CertificateIds 是否已赋值
                     * @return CertificateIds 是否已赋值
                     * 
                     */
                    bool CertificateIdsHasBeenSet() const;

                    /**
                     * 获取<p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
                     * @return ListenerId <p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
                     * @param _listenerId <p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
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
                     * 获取<p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
                     * @return LoadBalancerId <p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
                     * @param _loadBalancerId <p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>客户端 Token，用于保证请求的幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken 只支持 ASCII 字符。<br>若您未指定，则系统自动使用 API 请求的 RequestId 作为 ClientToken 标识。每次 API 请求的 RequestId 不一样。</p>
                     * @return ClientToken <p>客户端 Token，用于保证请求的幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken 只支持 ASCII 字符。<br>若您未指定，则系统自动使用 API 请求的 RequestId 作为 ClientToken 标识。每次 API 请求的 RequestId 不一样。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>客户端 Token，用于保证请求的幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken 只支持 ASCII 字符。<br>若您未指定，则系统自动使用 API 请求的 RequestId 作为 ClientToken 标识。每次 API 请求的 RequestId 不一样。</p>
                     * @param _clientToken <p>客户端 Token，用于保证请求的幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken 只支持 ASCII 字符。<br>若您未指定，则系统自动使用 API 请求的 RequestId 作为 ClientToken 标识。每次 API 请求的 RequestId 不一样。</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>是否只预检此次请求，取值：true：发送检查请求，不会为HTTPS监听器添加扩展证书。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码DryRunOperation。false（默认值）：发送正常请求，通过检查后返回HTTP2xx状态码并直接进行操作。</p>
                     * @return DryRun <p>是否只预检此次请求，取值：true：发送检查请求，不会为HTTPS监听器添加扩展证书。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码DryRunOperation。false（默认值）：发送正常请求，通过检查后返回HTTP2xx状态码并直接进行操作。</p>
                     * 
                     */
                    std::string GetDryRun() const;

                    /**
                     * 设置<p>是否只预检此次请求，取值：true：发送检查请求，不会为HTTPS监听器添加扩展证书。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码DryRunOperation。false（默认值）：发送正常请求，通过检查后返回HTTP2xx状态码并直接进行操作。</p>
                     * @param _dryRun <p>是否只预检此次请求，取值：true：发送检查请求，不会为HTTPS监听器添加扩展证书。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码DryRunOperation。false（默认值）：发送正常请求，通过检查后返回HTTP2xx状态码并直接进行操作。</p>
                     * 
                     */
                    void SetDryRun(const std::string& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * <p>扩展证书 ID 列表。</p>
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * <p>监听器 ID，格式为 lst- 后接 8 位字母数字。</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>客户端 Token，用于保证请求的幂等性。从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken 只支持 ASCII 字符。<br>若您未指定，则系统自动使用 API 请求的 RequestId 作为 ClientToken 标识。每次 API 请求的 RequestId 不一样。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>是否只预检此次请求，取值：true：发送检查请求，不会为HTTPS监听器添加扩展证书。检查项包括是否填写了必需参数、请求格式、业务限制。如果检查不通过，则返回对应错误。如果检查通过，则返回错误码DryRunOperation。false（默认值）：发送正常请求，通过检查后返回HTTP2xx状态码并直接进行操作。</p>
                     */
                    std::string m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_ASSOCIATELISTENERADDITIONALCERTIFICATESREQUEST_H_
