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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYAPIKEYINFOREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYAPIKEYINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/QuotasDesired.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * ModifyApiKeyInfo请求参数结构体
                */
                class ModifyApiKeyInfoRequest : public AbstractModel
                {
                public:
                    ModifyApiKeyInfoRequest();
                    ~ModifyApiKeyInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>API 密钥 ID。</p>
                     * @return ApiKeyId <p>API 密钥 ID。</p>
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置<p>API 密钥 ID。</p>
                     * @param _apiKeyId <p>API 密钥 ID。</p>
                     * 
                     */
                    void SetApiKeyId(const std::string& _apiKeyId);

                    /**
                     * 判断参数 ApiKeyId 是否已赋值
                     * @return ApiKeyId 是否已赋值
                     * 
                     */
                    bool ApiKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>平台类型。取值：maas。</p>
                     * @return Platform <p>平台类型。取值：maas。</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>平台类型。取值：maas。</p>
                     * @param _platform <p>平台类型。取值：maas。</p>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取<p>API 密钥名称。最大 128 字符。不传表示不修改。</p>
                     * @return ApiKeyName <p>API 密钥名称。最大 128 字符。不传表示不修改。</p>
                     * 
                     */
                    std::string GetApiKeyName() const;

                    /**
                     * 设置<p>API 密钥名称。最大 128 字符。不传表示不修改。</p>
                     * @param _apiKeyName <p>API 密钥名称。最大 128 字符。不传表示不修改。</p>
                     * 
                     */
                    void SetApiKeyName(const std::string& _apiKeyName);

                    /**
                     * 判断参数 ApiKeyName 是否已赋值
                     * @return ApiKeyName 是否已赋值
                     * 
                     */
                    bool ApiKeyNameHasBeenSet() const;

                    /**
                     * 获取<p>备注。</p>
                     * @return Remark <p>备注。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注。</p>
                     * @param _remark <p>备注。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>IP 白名单列表。支持 IPv4（如 1.2.3.4）、CIDR（如 10.0.0.0/24）格式，IPv6暂不支持。最多 50 个，不支持重复。传入空数组表示清空白名单（不限制 IP）。不传表示不修改。</p>
                     * @return IpWhitelist <p>IP 白名单列表。支持 IPv4（如 1.2.3.4）、CIDR（如 10.0.0.0/24）格式，IPv6暂不支持。最多 50 个，不支持重复。传入空数组表示清空白名单（不限制 IP）。不传表示不修改。</p>
                     * 
                     */
                    std::vector<std::string> GetIpWhitelist() const;

                    /**
                     * 设置<p>IP 白名单列表。支持 IPv4（如 1.2.3.4）、CIDR（如 10.0.0.0/24）格式，IPv6暂不支持。最多 50 个，不支持重复。传入空数组表示清空白名单（不限制 IP）。不传表示不修改。</p>
                     * @param _ipWhitelist <p>IP 白名单列表。支持 IPv4（如 1.2.3.4）、CIDR（如 10.0.0.0/24）格式，IPv6暂不支持。最多 50 个，不支持重复。传入空数组表示清空白名单（不限制 IP）。不传表示不修改。</p>
                     * 
                     */
                    void SetIpWhitelist(const std::vector<std::string>& _ipWhitelist);

                    /**
                     * 判断参数 IpWhitelist 是否已赋值
                     * @return IpWhitelist 是否已赋值
                     * 
                     */
                    bool IpWhitelistHasBeenSet() const;

                    /**
                     * 获取<p>【修改限额推荐使用QuotaDesired参数】Token 限额期望状态。可选，不传表示不修改，传入空数组表示清空。和 Quotas（Token限额配置）字段互斥，不支持同时传入</p>
                     * @return QuotasDesired <p>【修改限额推荐使用QuotaDesired参数】Token 限额期望状态。可选，不传表示不修改，传入空数组表示清空。和 Quotas（Token限额配置）字段互斥，不支持同时传入</p>
                     * 
                     */
                    std::vector<QuotasDesired> GetQuotasDesired() const;

                    /**
                     * 设置<p>【修改限额推荐使用QuotaDesired参数】Token 限额期望状态。可选，不传表示不修改，传入空数组表示清空。和 Quotas（Token限额配置）字段互斥，不支持同时传入</p>
                     * @param _quotasDesired <p>【修改限额推荐使用QuotaDesired参数】Token 限额期望状态。可选，不传表示不修改，传入空数组表示清空。和 Quotas（Token限额配置）字段互斥，不支持同时传入</p>
                     * 
                     */
                    void SetQuotasDesired(const std::vector<QuotasDesired>& _quotasDesired);

                    /**
                     * 判断参数 QuotasDesired 是否已赋值
                     * @return QuotasDesired 是否已赋值
                     * 
                     */
                    bool QuotasDesiredHasBeenSet() const;

                private:

                    /**
                     * <p>API 密钥 ID。</p>
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * <p>平台类型。取值：maas。</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>API 密钥名称。最大 128 字符。不传表示不修改。</p>
                     */
                    std::string m_apiKeyName;
                    bool m_apiKeyNameHasBeenSet;

                    /**
                     * <p>备注。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>IP 白名单列表。支持 IPv4（如 1.2.3.4）、CIDR（如 10.0.0.0/24）格式，IPv6暂不支持。最多 50 个，不支持重复。传入空数组表示清空白名单（不限制 IP）。不传表示不修改。</p>
                     */
                    std::vector<std::string> m_ipWhitelist;
                    bool m_ipWhitelistHasBeenSet;

                    /**
                     * <p>【修改限额推荐使用QuotaDesired参数】Token 限额期望状态。可选，不传表示不修改，传入空数组表示清空。和 Quotas（Token限额配置）字段互斥，不支持同时传入</p>
                     */
                    std::vector<QuotasDesired> m_quotasDesired;
                    bool m_quotasDesiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYAPIKEYINFOREQUEST_H_
