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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_SECURITYPOLICYINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_SECURITYPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 安全策略信息。
                */
                class SecurityPolicyInfo : public AbstractModel
                {
                public:
                    SecurityPolicyInfo();
                    ~SecurityPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支持的加密套件列表。
支持的加密套件，具体依赖 TLSVersions 的取值。
Cipher 只要被任何一个传入的 TLSVersions 支持即可。

说明：若选择了 TLSv1.3，那么 Cipher 列表必须包含 TLSv1.3 支持的 Cipher。

请调用 DescribeSecurityPolicyCapabilities 接口获取支持的加密套件列表。
                     * @return Ciphers 支持的加密套件列表。
支持的加密套件，具体依赖 TLSVersions 的取值。
Cipher 只要被任何一个传入的 TLSVersions 支持即可。

说明：若选择了 TLSv1.3，那么 Cipher 列表必须包含 TLSv1.3 支持的 Cipher。

请调用 DescribeSecurityPolicyCapabilities 接口获取支持的加密套件列表。
                     * 
                     */
                    std::vector<std::string> GetCiphers() const;

                    /**
                     * 设置支持的加密套件列表。
支持的加密套件，具体依赖 TLSVersions 的取值。
Cipher 只要被任何一个传入的 TLSVersions 支持即可。

说明：若选择了 TLSv1.3，那么 Cipher 列表必须包含 TLSv1.3 支持的 Cipher。

请调用 DescribeSecurityPolicyCapabilities 接口获取支持的加密套件列表。
                     * @param _ciphers 支持的加密套件列表。
支持的加密套件，具体依赖 TLSVersions 的取值。
Cipher 只要被任何一个传入的 TLSVersions 支持即可。

说明：若选择了 TLSv1.3，那么 Cipher 列表必须包含 TLSv1.3 支持的 Cipher。

请调用 DescribeSecurityPolicyCapabilities 接口获取支持的加密套件列表。
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
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     * @return SecurityPolicyId 安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetSecurityPolicyId() const;

                    /**
                     * 设置安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     * @param _securityPolicyId 安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     * 
                     */
                    void SetSecurityPolicyId(const std::string& _securityPolicyId);

                    /**
                     * 判断参数 SecurityPolicyId 是否已赋值
                     * @return SecurityPolicyId 是否已赋值
                     * 
                     */
                    bool SecurityPolicyIdHasBeenSet() const;

                    /**
                     * 获取安全策略名称。长度为2~128个英文或中文字符，必须以字母或中文开头，可包含数字、半角句号（.）、下划线（_）和短划线（-）。
                     * @return SecurityPolicyName 安全策略名称。长度为2~128个英文或中文字符，必须以字母或中文开头，可包含数字、半角句号（.）、下划线（_）和短划线（-）。
                     * 
                     */
                    std::string GetSecurityPolicyName() const;

                    /**
                     * 设置安全策略名称。长度为2~128个英文或中文字符，必须以字母或中文开头，可包含数字、半角句号（.）、下划线（_）和短划线（-）。
                     * @param _securityPolicyName 安全策略名称。长度为2~128个英文或中文字符，必须以字母或中文开头，可包含数字、半角句号（.）、下划线（_）和短划线（-）。
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
                     * 获取安全策略状态。当前接口最常返回 Active，表示安全策略处于可用状态。
                     * @return Status 安全策略状态。当前接口最常返回 Active，表示安全策略处于可用状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置安全策略状态。当前接口最常返回 Active，表示安全策略处于可用状态。
                     * @param _status 安全策略状态。当前接口最常返回 Active，表示安全策略处于可用状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取支持的 TLS 协议版本列表。可选值包括：TLSv1.0、TLSv1.1、TLSv1.2、TLSv1.3。
                     * @return TLSVersions 支持的 TLS 协议版本列表。可选值包括：TLSv1.0、TLSv1.1、TLSv1.2、TLSv1.3。
                     * 
                     */
                    std::vector<std::string> GetTLSVersions() const;

                    /**
                     * 设置支持的 TLS 协议版本列表。可选值包括：TLSv1.0、TLSv1.1、TLSv1.2、TLSv1.3。
                     * @param _tLSVersions 支持的 TLS 协议版本列表。可选值包括：TLSv1.0、TLSv1.1、TLSv1.2、TLSv1.3。
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
                     * 获取标签信息。
                     * @return Tags 标签信息。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签信息。
                     * @param _tags 标签信息。
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
                     * 支持的加密套件列表。
支持的加密套件，具体依赖 TLSVersions 的取值。
Cipher 只要被任何一个传入的 TLSVersions 支持即可。

说明：若选择了 TLSv1.3，那么 Cipher 列表必须包含 TLSv1.3 支持的 Cipher。

请调用 DescribeSecurityPolicyCapabilities 接口获取支持的加密套件列表。
                     */
                    std::vector<std::string> m_ciphers;
                    bool m_ciphersHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     */
                    std::string m_securityPolicyId;
                    bool m_securityPolicyIdHasBeenSet;

                    /**
                     * 安全策略名称。长度为2~128个英文或中文字符，必须以字母或中文开头，可包含数字、半角句号（.）、下划线（_）和短划线（-）。
                     */
                    std::string m_securityPolicyName;
                    bool m_securityPolicyNameHasBeenSet;

                    /**
                     * 安全策略状态。当前接口最常返回 Active，表示安全策略处于可用状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 支持的 TLS 协议版本列表。可选值包括：TLSv1.0、TLSv1.1、TLSv1.2、TLSv1.3。
                     */
                    std::vector<std::string> m_tLSVersions;
                    bool m_tLSVersionsHasBeenSet;

                    /**
                     * 标签信息。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_SECURITYPOLICYINFO_H_
