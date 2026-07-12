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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEAPIKEYREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEAPIKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/BindingItem.h>
#include <tencentcloud/tokenhub/v20260322/model/QuotaCreateItem.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * CreateApiKey请求参数结构体
                */
                class CreateApiKeyRequest : public AbstractModel
                {
                public:
                    CreateApiKeyRequest();
                    ~CreateApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>API 密钥名称，创建后不可修改。</p>
                     * @return ApiKeyName <p>API 密钥名称，创建后不可修改。</p>
                     * 
                     */
                    std::string GetApiKeyName() const;

                    /**
                     * 设置<p>API 密钥名称，创建后不可修改。</p>
                     * @param _apiKeyName <p>API 密钥名称，创建后不可修改。</p>
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
                     * 获取<p>平台类型。取值：maas</p>
                     * @return Platform <p>平台类型。取值：maas</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>平台类型。取值：maas</p>
                     * @param _platform <p>平台类型。取值：maas</p>
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
                     * 获取<p>绑定类型。取值：all（全部模型和接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。</p><p>枚举值：</p><ul><li>all： 全部模型和接入点</li><li>model_custom_endpoint_custom： 自定义模型+自定义接入点</li></ul>
                     * @return BindType <p>绑定类型。取值：all（全部模型和接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。</p><p>枚举值：</p><ul><li>all： 全部模型和接入点</li><li>model_custom_endpoint_custom： 自定义模型+自定义接入点</li></ul>
                     * 
                     */
                    std::string GetBindType() const;

                    /**
                     * 设置<p>绑定类型。取值：all（全部模型和接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。</p><p>枚举值：</p><ul><li>all： 全部模型和接入点</li><li>model_custom_endpoint_custom： 自定义模型+自定义接入点</li></ul>
                     * @param _bindType <p>绑定类型。取值：all（全部模型和接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。</p><p>枚举值：</p><ul><li>all： 全部模型和接入点</li><li>model_custom_endpoint_custom： 自定义模型+自定义接入点</li></ul>
                     * 
                     */
                    void SetBindType(const std::string& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取<p>备注信息</p>
                     * @return Remark <p>备注信息</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息</p>
                     * @param _remark <p>备注信息</p>
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
                     * 获取<p>初始状态。取值：enable（启用）、disable（禁用）。不传默认 enable。</p>
                     * @return Status <p>初始状态。取值：enable（启用）、disable（禁用）。不传默认 enable。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>初始状态。取值：enable（启用）、disable（禁用）。不传默认 enable。</p>
                     * @param _status <p>初始状态。取值：enable（启用）、disable（禁用）。不传默认 enable。</p>
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
                     * 获取<p>资源绑定列表（model 和 endpoint 混合），每项需显式指定 ResourceType。BindType 为 all 时不填；BindType 为model_custom_endpoint_custom时必填。</p>
                     * @return Bindings <p>资源绑定列表（model 和 endpoint 混合），每项需显式指定 ResourceType。BindType 为 all 时不填；BindType 为model_custom_endpoint_custom时必填。</p>
                     * 
                     */
                    std::vector<BindingItem> GetBindings() const;

                    /**
                     * 设置<p>资源绑定列表（model 和 endpoint 混合），每项需显式指定 ResourceType。BindType 为 all 时不填；BindType 为model_custom_endpoint_custom时必填。</p>
                     * @param _bindings <p>资源绑定列表（model 和 endpoint 混合），每项需显式指定 ResourceType。BindType 为 all 时不填；BindType 为model_custom_endpoint_custom时必填。</p>
                     * 
                     */
                    void SetBindings(const std::vector<BindingItem>& _bindings);

                    /**
                     * 判断参数 Bindings 是否已赋值
                     * @return Bindings 是否已赋值
                     * 
                     */
                    bool BindingsHasBeenSet() const;

                    /**
                     * 获取<p>IP 白名单列表。支持 IPv4（如 1.2.3.4）和 CIDR（如 10.0.0.0/24）格式，IPv6暂不支持。最多 50 个条目，不支持重复。不传或传空数组表示不限制 IP。</p>
                     * @return IpWhitelist <p>IP 白名单列表。支持 IPv4（如 1.2.3.4）和 CIDR（如 10.0.0.0/24）格式，IPv6暂不支持。最多 50 个条目，不支持重复。不传或传空数组表示不限制 IP。</p>
                     * 
                     */
                    std::vector<std::string> GetIpWhitelist() const;

                    /**
                     * 设置<p>IP 白名单列表。支持 IPv4（如 1.2.3.4）和 CIDR（如 10.0.0.0/24）格式，IPv6暂不支持。最多 50 个条目，不支持重复。不传或传空数组表示不限制 IP。</p>
                     * @param _ipWhitelist <p>IP 白名单列表。支持 IPv4（如 1.2.3.4）和 CIDR（如 10.0.0.0/24）格式，IPv6暂不支持。最多 50 个条目，不支持重复。不传或传空数组表示不限制 IP。</p>
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
                     * 获取<p>Token 限额配置多维度列表。可选，不传表示不开启限额。</p>
                     * @return Quotas <p>Token 限额配置多维度列表。可选，不传表示不开启限额。</p>
                     * 
                     */
                    std::vector<QuotaCreateItem> GetQuotas() const;

                    /**
                     * 设置<p>Token 限额配置多维度列表。可选，不传表示不开启限额。</p>
                     * @param _quotas <p>Token 限额配置多维度列表。可选，不传表示不开启限额。</p>
                     * 
                     */
                    void SetQuotas(const std::vector<QuotaCreateItem>& _quotas);

                    /**
                     * 判断参数 Quotas 是否已赋值
                     * @return Quotas 是否已赋值
                     * 
                     */
                    bool QuotasHasBeenSet() const;

                private:

                    /**
                     * <p>API 密钥名称，创建后不可修改。</p>
                     */
                    std::string m_apiKeyName;
                    bool m_apiKeyNameHasBeenSet;

                    /**
                     * <p>平台类型。取值：maas</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>绑定类型。取值：all（全部模型和接入点）、model_custom_endpoint_custom（自定义模型+自定义接入点）。</p><p>枚举值：</p><ul><li>all： 全部模型和接入点</li><li>model_custom_endpoint_custom： 自定义模型+自定义接入点</li></ul>
                     */
                    std::string m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * <p>备注信息</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>初始状态。取值：enable（启用）、disable（禁用）。不传默认 enable。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>资源绑定列表（model 和 endpoint 混合），每项需显式指定 ResourceType。BindType 为 all 时不填；BindType 为model_custom_endpoint_custom时必填。</p>
                     */
                    std::vector<BindingItem> m_bindings;
                    bool m_bindingsHasBeenSet;

                    /**
                     * <p>IP 白名单列表。支持 IPv4（如 1.2.3.4）和 CIDR（如 10.0.0.0/24）格式，IPv6暂不支持。最多 50 个条目，不支持重复。不传或传空数组表示不限制 IP。</p>
                     */
                    std::vector<std::string> m_ipWhitelist;
                    bool m_ipWhitelistHasBeenSet;

                    /**
                     * <p>Token 限额配置多维度列表。可选，不传表示不开启限额。</p>
                     */
                    std::vector<QuotaCreateItem> m_quotas;
                    bool m_quotasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEAPIKEYREQUEST_H_
