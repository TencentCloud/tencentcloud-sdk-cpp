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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_CREATESECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_CREATESECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * CreateSecurityPolicy请求参数结构体
                */
                class CreateSecurityPolicyRequest : public AbstractModel
                {
                public:
                    CreateSecurityPolicyRequest();
                    ~CreateSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全策略支持的加密套件列表。加密套件用于协商客户端与服务端之间的加密算法。

**配置说明：**
- 加密套件的可选范围取决于所选的 TLS 协议版本（TLSVersions 参数）。
- 只要加密套件被任意一个已选 TLS 版本支持，即可添加到列表中。
- 若 TLSVersions 包含 TLSv1.3：可不指定 TLSv1.3 专属加密套件（系统将自动补全全部 TLSv1.3 套件）；若指定，则必须包含全部 TLSv1.3 专属加密套件，不支持仅指定部分。

**获取可用加密套件：**
请调用 [DescribeSecurityPolicyCapabilities](https://cloud.tencent.com/document/api/xxx) 接口查询各 TLS 版本支持的加密套件列表。

                     * @return Ciphers 安全策略支持的加密套件列表。加密套件用于协商客户端与服务端之间的加密算法。

**配置说明：**
- 加密套件的可选范围取决于所选的 TLS 协议版本（TLSVersions 参数）。
- 只要加密套件被任意一个已选 TLS 版本支持，即可添加到列表中。
- 若 TLSVersions 包含 TLSv1.3：可不指定 TLSv1.3 专属加密套件（系统将自动补全全部 TLSv1.3 套件）；若指定，则必须包含全部 TLSv1.3 专属加密套件，不支持仅指定部分。

**获取可用加密套件：**
请调用 [DescribeSecurityPolicyCapabilities](https://cloud.tencent.com/document/api/xxx) 接口查询各 TLS 版本支持的加密套件列表。

                     * 
                     */
                    std::vector<std::string> GetCiphers() const;

                    /**
                     * 设置安全策略支持的加密套件列表。加密套件用于协商客户端与服务端之间的加密算法。

**配置说明：**
- 加密套件的可选范围取决于所选的 TLS 协议版本（TLSVersions 参数）。
- 只要加密套件被任意一个已选 TLS 版本支持，即可添加到列表中。
- 若 TLSVersions 包含 TLSv1.3：可不指定 TLSv1.3 专属加密套件（系统将自动补全全部 TLSv1.3 套件）；若指定，则必须包含全部 TLSv1.3 专属加密套件，不支持仅指定部分。

**获取可用加密套件：**
请调用 [DescribeSecurityPolicyCapabilities](https://cloud.tencent.com/document/api/xxx) 接口查询各 TLS 版本支持的加密套件列表。

                     * @param _ciphers 安全策略支持的加密套件列表。加密套件用于协商客户端与服务端之间的加密算法。

**配置说明：**
- 加密套件的可选范围取决于所选的 TLS 协议版本（TLSVersions 参数）。
- 只要加密套件被任意一个已选 TLS 版本支持，即可添加到列表中。
- 若 TLSVersions 包含 TLSv1.3：可不指定 TLSv1.3 专属加密套件（系统将自动补全全部 TLSv1.3 套件）；若指定，则必须包含全部 TLSv1.3 专属加密套件，不支持仅指定部分。

**获取可用加密套件：**
请调用 [DescribeSecurityPolicyCapabilities](https://cloud.tencent.com/document/api/xxx) 接口查询各 TLS 版本支持的加密套件列表。

                     * 
                     */
                    void SetCiphers(const std::vector<std::string>& _ciphers);

                    /**
                     * 判断参数 Ciphers 是否已赋值
                     * @return Ciphers 是否已赋值
                     * 
                     */
                    bool CiphersHasBeenSet() const;

                    /**
                     * 获取安全策略支持的 TLS 协议版本列表。TLS（Transport Layer Security）协议用于保障客户端与负载均衡之间的通信安全。

**可选值：**
- **TLSv1.0**：兼容性最好，但安全性较低，不推荐在生产环境使用。
- **TLSv1.1**：安全性略优于 TLSv1.0，但仍不推荐。
- **TLSv1.2**：目前主流的安全协议版本，兼顾安全性与兼容性。
- **TLSv1.3**：最新版本，安全性最高，性能更优，推荐优先使用。

**建议：** 生产环境建议至少选择 TLSv1.2，若客户端支持，优先启用 TLSv1.3。

                     * @return TLSVersions 安全策略支持的 TLS 协议版本列表。TLS（Transport Layer Security）协议用于保障客户端与负载均衡之间的通信安全。

**可选值：**
- **TLSv1.0**：兼容性最好，但安全性较低，不推荐在生产环境使用。
- **TLSv1.1**：安全性略优于 TLSv1.0，但仍不推荐。
- **TLSv1.2**：目前主流的安全协议版本，兼顾安全性与兼容性。
- **TLSv1.3**：最新版本，安全性最高，性能更优，推荐优先使用。

**建议：** 生产环境建议至少选择 TLSv1.2，若客户端支持，优先启用 TLSv1.3。

                     * 
                     */
                    std::vector<std::string> GetTLSVersions() const;

                    /**
                     * 设置安全策略支持的 TLS 协议版本列表。TLS（Transport Layer Security）协议用于保障客户端与负载均衡之间的通信安全。

**可选值：**
- **TLSv1.0**：兼容性最好，但安全性较低，不推荐在生产环境使用。
- **TLSv1.1**：安全性略优于 TLSv1.0，但仍不推荐。
- **TLSv1.2**：目前主流的安全协议版本，兼顾安全性与兼容性。
- **TLSv1.3**：最新版本，安全性最高，性能更优，推荐优先使用。

**建议：** 生产环境建议至少选择 TLSv1.2，若客户端支持，优先启用 TLSv1.3。

                     * @param _tLSVersions 安全策略支持的 TLS 协议版本列表。TLS（Transport Layer Security）协议用于保障客户端与负载均衡之间的通信安全。

**可选值：**
- **TLSv1.0**：兼容性最好，但安全性较低，不推荐在生产环境使用。
- **TLSv1.1**：安全性略优于 TLSv1.0，但仍不推荐。
- **TLSv1.2**：目前主流的安全协议版本，兼顾安全性与兼容性。
- **TLSv1.3**：最新版本，安全性最高，性能更优，推荐优先使用。

**建议：** 生产环境建议至少选择 TLSv1.2，若客户端支持，优先启用 TLSv1.3。

                     * 
                     */
                    void SetTLSVersions(const std::vector<std::string>& _tLSVersions);

                    /**
                     * 判断参数 TLSVersions 是否已赋值
                     * @return TLSVersions 是否已赋值
                     * 
                     */
                    bool TLSVersionsHasBeenSet() const;

                    /**
                     * 获取客户端幂等性令牌。

用于保证请求的幂等性，防止因网络超时或客户端重试导致的重复创建。建议使用 UUID 作为令牌值。相同的 ClientToken 在有效期内重复请求时，服务端将返回相同的结果。

                     * @return ClientToken 客户端幂等性令牌。

用于保证请求的幂等性，防止因网络超时或客户端重试导致的重复创建。建议使用 UUID 作为令牌值。相同的 ClientToken 在有效期内重复请求时，服务端将返回相同的结果。

                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端幂等性令牌。

用于保证请求的幂等性，防止因网络超时或客户端重试导致的重复创建。建议使用 UUID 作为令牌值。相同的 ClientToken 在有效期内重复请求时，服务端将返回相同的结果。

                     * @param _clientToken 客户端幂等性令牌。

用于保证请求的幂等性，防止因网络超时或客户端重试导致的重复创建。建议使用 UUID 作为令牌值。相同的 ClientToken 在有效期内重复请求时，服务端将返回相同的结果。

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
                     * 获取是否仅执行预检请求。取值：
- **true**：仅执行预检请求，不实际创建资源。预检请求将验证参数格式、权限及资源配额等，帮助您在正式操作前发现潜在问题。
- **false**（默认）：执行正常请求，通过预检后将直接创建安全策略。

                     * @return DryRun 是否仅执行预检请求。取值：
- **true**：仅执行预检请求，不实际创建资源。预检请求将验证参数格式、权限及资源配额等，帮助您在正式操作前发现潜在问题。
- **false**（默认）：执行正常请求，通过预检后将直接创建安全策略。

                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否仅执行预检请求。取值：
- **true**：仅执行预检请求，不实际创建资源。预检请求将验证参数格式、权限及资源配额等，帮助您在正式操作前发现潜在问题。
- **false**（默认）：执行正常请求，通过预检后将直接创建安全策略。

                     * @param _dryRun 是否仅执行预检请求。取值：
- **true**：仅执行预检请求，不实际创建资源。预检请求将验证参数格式、权限及资源配额等，帮助您在正式操作前发现潜在问题。
- **false**（默认）：执行正常请求，通过预检后将直接创建安全策略。

                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取安全策略名称。用于标识和区分不同的安全策略。

**命名规则：**
- 长度为 2~128 个字符。
- 必须以英文字母或中文开头。
- 可包含英文字母、中文、数字、半角句号（.）、下划线（_）和短划线（-）。

**建议：** 使用具有业务含义的名称，例如 "prod-high-security" 或 "测试环境策略"。

                     * @return SecurityPolicyName 安全策略名称。用于标识和区分不同的安全策略。

**命名规则：**
- 长度为 2~128 个字符。
- 必须以英文字母或中文开头。
- 可包含英文字母、中文、数字、半角句号（.）、下划线（_）和短划线（-）。

**建议：** 使用具有业务含义的名称，例如 "prod-high-security" 或 "测试环境策略"。

                     * 
                     */
                    std::string GetSecurityPolicyName() const;

                    /**
                     * 设置安全策略名称。用于标识和区分不同的安全策略。

**命名规则：**
- 长度为 2~128 个字符。
- 必须以英文字母或中文开头。
- 可包含英文字母、中文、数字、半角句号（.）、下划线（_）和短划线（-）。

**建议：** 使用具有业务含义的名称，例如 "prod-high-security" 或 "测试环境策略"。

                     * @param _securityPolicyName 安全策略名称。用于标识和区分不同的安全策略。

**命名规则：**
- 长度为 2~128 个字符。
- 必须以英文字母或中文开头。
- 可包含英文字母、中文、数字、半角句号（.）、下划线（_）和短划线（-）。

**建议：** 使用具有业务含义的名称，例如 "prod-high-security" 或 "测试环境策略"。

                     * 
                     */
                    void SetSecurityPolicyName(const std::string& _securityPolicyName);

                    /**
                     * 判断参数 SecurityPolicyName 是否已赋值
                     * @return SecurityPolicyName 是否已赋值
                     * 
                     */
                    bool SecurityPolicyNameHasBeenSet() const;

                    /**
                     * 获取安全策略的标签列表。标签用于对资源进行分类和管理，便于按业务、环境、部门等维度筛选和组织资源。

每个标签由键值对（Key-Value）组成，同一资源下标签键不可重复。

                     * @return Tags 安全策略的标签列表。标签用于对资源进行分类和管理，便于按业务、环境、部门等维度筛选和组织资源。

每个标签由键值对（Key-Value）组成，同一资源下标签键不可重复。

                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置安全策略的标签列表。标签用于对资源进行分类和管理，便于按业务、环境、部门等维度筛选和组织资源。

每个标签由键值对（Key-Value）组成，同一资源下标签键不可重复。

                     * @param _tags 安全策略的标签列表。标签用于对资源进行分类和管理，便于按业务、环境、部门等维度筛选和组织资源。

每个标签由键值对（Key-Value）组成，同一资源下标签键不可重复。

                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 安全策略支持的加密套件列表。加密套件用于协商客户端与服务端之间的加密算法。

**配置说明：**
- 加密套件的可选范围取决于所选的 TLS 协议版本（TLSVersions 参数）。
- 只要加密套件被任意一个已选 TLS 版本支持，即可添加到列表中。
- 若 TLSVersions 包含 TLSv1.3：可不指定 TLSv1.3 专属加密套件（系统将自动补全全部 TLSv1.3 套件）；若指定，则必须包含全部 TLSv1.3 专属加密套件，不支持仅指定部分。

**获取可用加密套件：**
请调用 [DescribeSecurityPolicyCapabilities](https://cloud.tencent.com/document/api/xxx) 接口查询各 TLS 版本支持的加密套件列表。

                     */
                    std::vector<std::string> m_ciphers;
                    bool m_ciphersHasBeenSet;

                    /**
                     * 安全策略支持的 TLS 协议版本列表。TLS（Transport Layer Security）协议用于保障客户端与负载均衡之间的通信安全。

**可选值：**
- **TLSv1.0**：兼容性最好，但安全性较低，不推荐在生产环境使用。
- **TLSv1.1**：安全性略优于 TLSv1.0，但仍不推荐。
- **TLSv1.2**：目前主流的安全协议版本，兼顾安全性与兼容性。
- **TLSv1.3**：最新版本，安全性最高，性能更优，推荐优先使用。

**建议：** 生产环境建议至少选择 TLSv1.2，若客户端支持，优先启用 TLSv1.3。

                     */
                    std::vector<std::string> m_tLSVersions;
                    bool m_tLSVersionsHasBeenSet;

                    /**
                     * 客户端幂等性令牌。

用于保证请求的幂等性，防止因网络超时或客户端重试导致的重复创建。建议使用 UUID 作为令牌值。相同的 ClientToken 在有效期内重复请求时，服务端将返回相同的结果。

                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 是否仅执行预检请求。取值：
- **true**：仅执行预检请求，不实际创建资源。预检请求将验证参数格式、权限及资源配额等，帮助您在正式操作前发现潜在问题。
- **false**（默认）：执行正常请求，通过预检后将直接创建安全策略。

                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 安全策略名称。用于标识和区分不同的安全策略。

**命名规则：**
- 长度为 2~128 个字符。
- 必须以英文字母或中文开头。
- 可包含英文字母、中文、数字、半角句号（.）、下划线（_）和短划线（-）。

**建议：** 使用具有业务含义的名称，例如 "prod-high-security" 或 "测试环境策略"。

                     */
                    std::string m_securityPolicyName;
                    bool m_securityPolicyNameHasBeenSet;

                    /**
                     * 安全策略的标签列表。标签用于对资源进行分类和管理，便于按业务、环境、部门等维度筛选和组织资源。

每个标签由键值对（Key-Value）组成，同一资源下标签键不可重复。

                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_CREATESECURITYPOLICYREQUEST_H_
