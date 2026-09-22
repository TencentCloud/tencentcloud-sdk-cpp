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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYHEADERSTOORIGIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYHEADERSTOORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 回源请求携带安全头部配置，配置生效后将携带对应 keyname 的请求头部回源。
                */
                class SecurityHeadersToOrigin : public AbstractModel
                {
                public:
                    SecurityHeadersToOrigin();
                    ~SecurityHeadersToOrigin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Bot 标识信息回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Botnet-ID： 基于 Bot 请求特征生成的识别标识。</li></ul>
                     * @return BotIdentificationHeaders <p>Bot 标识信息回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Botnet-ID： 基于 Bot 请求特征生成的识别标识。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetBotIdentificationHeaders() const;

                    /**
                     * 设置<p>Bot 标识信息回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Botnet-ID： 基于 Bot 请求特征生成的识别标识。</li></ul>
                     * @param _botIdentificationHeaders <p>Bot 标识信息回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Botnet-ID： 基于 Bot 请求特征生成的识别标识。</li></ul>
                     * 
                     */
                    void SetBotIdentificationHeaders(const std::vector<std::string>& _botIdentificationHeaders);

                    /**
                     * 判断参数 BotIdentificationHeaders 是否已赋值
                     * @return BotIdentificationHeaders 是否已赋值
                     * 
                     */
                    bool BotIdentificationHeadersHasBeenSet() const;

                    /**
                     * 获取<p>高级 Bot 管理模块识别结果回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Client-Attestation： 高级 Bot 管理 - 客户端认证模块认证票据校验结果；</li><li>EO-Bot-Client-Risk： 高级 Bot 管理 - 客户端认证模块设备风险评估结果；</li><li>EO-Bot-Intelligence： 高级 Bot 管理 - Bot 智能分析模块识别结果；</li><li>EO-Bot-IP-Reputation： 高级 Bot 管理 - 客户端画像分析识别结果；</li><li>EO-Bot-Known-Tool： 高级 Bot 管理 - 基础特征管理 - UA 特征规则模块识别结果；</li><li>EO-Bot-Search-Engine： 高级 Bot 管理 - 基础特征管理 - 搜索引擎规则模块识别结果；</li><li>EO-Bot-Source-IDC： 高级 Bot 管理 - 基础特征管理 - IDC 规则模块识别结果；</li><li>EO-Bot-User-Risk： 高级 Bot 管理 - 客户端认证模块账号风险评估结果。</li></ul>
                     * @return BotManagementHeaders <p>高级 Bot 管理模块识别结果回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Client-Attestation： 高级 Bot 管理 - 客户端认证模块认证票据校验结果；</li><li>EO-Bot-Client-Risk： 高级 Bot 管理 - 客户端认证模块设备风险评估结果；</li><li>EO-Bot-Intelligence： 高级 Bot 管理 - Bot 智能分析模块识别结果；</li><li>EO-Bot-IP-Reputation： 高级 Bot 管理 - 客户端画像分析识别结果；</li><li>EO-Bot-Known-Tool： 高级 Bot 管理 - 基础特征管理 - UA 特征规则模块识别结果；</li><li>EO-Bot-Search-Engine： 高级 Bot 管理 - 基础特征管理 - 搜索引擎规则模块识别结果；</li><li>EO-Bot-Source-IDC： 高级 Bot 管理 - 基础特征管理 - IDC 规则模块识别结果；</li><li>EO-Bot-User-Risk： 高级 Bot 管理 - 客户端认证模块账号风险评估结果。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetBotManagementHeaders() const;

                    /**
                     * 设置<p>高级 Bot 管理模块识别结果回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Client-Attestation： 高级 Bot 管理 - 客户端认证模块认证票据校验结果；</li><li>EO-Bot-Client-Risk： 高级 Bot 管理 - 客户端认证模块设备风险评估结果；</li><li>EO-Bot-Intelligence： 高级 Bot 管理 - Bot 智能分析模块识别结果；</li><li>EO-Bot-IP-Reputation： 高级 Bot 管理 - 客户端画像分析识别结果；</li><li>EO-Bot-Known-Tool： 高级 Bot 管理 - 基础特征管理 - UA 特征规则模块识别结果；</li><li>EO-Bot-Search-Engine： 高级 Bot 管理 - 基础特征管理 - 搜索引擎规则模块识别结果；</li><li>EO-Bot-Source-IDC： 高级 Bot 管理 - 基础特征管理 - IDC 规则模块识别结果；</li><li>EO-Bot-User-Risk： 高级 Bot 管理 - 客户端认证模块账号风险评估结果。</li></ul>
                     * @param _botManagementHeaders <p>高级 Bot 管理模块识别结果回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Client-Attestation： 高级 Bot 管理 - 客户端认证模块认证票据校验结果；</li><li>EO-Bot-Client-Risk： 高级 Bot 管理 - 客户端认证模块设备风险评估结果；</li><li>EO-Bot-Intelligence： 高级 Bot 管理 - Bot 智能分析模块识别结果；</li><li>EO-Bot-IP-Reputation： 高级 Bot 管理 - 客户端画像分析识别结果；</li><li>EO-Bot-Known-Tool： 高级 Bot 管理 - 基础特征管理 - UA 特征规则模块识别结果；</li><li>EO-Bot-Search-Engine： 高级 Bot 管理 - 基础特征管理 - 搜索引擎规则模块识别结果；</li><li>EO-Bot-Source-IDC： 高级 Bot 管理 - 基础特征管理 - IDC 规则模块识别结果；</li><li>EO-Bot-User-Risk： 高级 Bot 管理 - 客户端认证模块账号风险评估结果。</li></ul>
                     * 
                     */
                    void SetBotManagementHeaders(const std::vector<std::string>& _botManagementHeaders);

                    /**
                     * 判断参数 BotManagementHeaders 是否已赋值
                     * @return BotManagementHeaders 是否已赋值
                     * 
                     */
                    bool BotManagementHeadersHasBeenSet() const;

                    /**
                     * 获取<p>客户端指纹信息回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Fingerprint： 客户端指纹信息。</li></ul>
                     * @return ClientFingerprintHeaders <p>客户端指纹信息回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Fingerprint： 客户端指纹信息。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetClientFingerprintHeaders() const;

                    /**
                     * 设置<p>客户端指纹信息回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Fingerprint： 客户端指纹信息。</li></ul>
                     * @param _clientFingerprintHeaders <p>客户端指纹信息回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Fingerprint： 客户端指纹信息。</li></ul>
                     * 
                     */
                    void SetClientFingerprintHeaders(const std::vector<std::string>& _clientFingerprintHeaders);

                    /**
                     * 判断参数 ClientFingerprintHeaders 是否已赋值
                     * @return ClientFingerprintHeaders 是否已赋值
                     * 
                     */
                    bool ClientFingerprintHeadersHasBeenSet() const;

                private:

                    /**
                     * <p>Bot 标识信息回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Botnet-ID： 基于 Bot 请求特征生成的识别标识。</li></ul>
                     */
                    std::vector<std::string> m_botIdentificationHeaders;
                    bool m_botIdentificationHeadersHasBeenSet;

                    /**
                     * <p>高级 Bot 管理模块识别结果回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Client-Attestation： 高级 Bot 管理 - 客户端认证模块认证票据校验结果；</li><li>EO-Bot-Client-Risk： 高级 Bot 管理 - 客户端认证模块设备风险评估结果；</li><li>EO-Bot-Intelligence： 高级 Bot 管理 - Bot 智能分析模块识别结果；</li><li>EO-Bot-IP-Reputation： 高级 Bot 管理 - 客户端画像分析识别结果；</li><li>EO-Bot-Known-Tool： 高级 Bot 管理 - 基础特征管理 - UA 特征规则模块识别结果；</li><li>EO-Bot-Search-Engine： 高级 Bot 管理 - 基础特征管理 - 搜索引擎规则模块识别结果；</li><li>EO-Bot-Source-IDC： 高级 Bot 管理 - 基础特征管理 - IDC 规则模块识别结果；</li><li>EO-Bot-User-Risk： 高级 Bot 管理 - 客户端认证模块账号风险评估结果。</li></ul>
                     */
                    std::vector<std::string> m_botManagementHeaders;
                    bool m_botManagementHeadersHasBeenSet;

                    /**
                     * <p>客户端指纹信息回源头部配置。</p><p>枚举值：</p><ul><li>EO-Bot-Fingerprint： 客户端指纹信息。</li></ul>
                     */
                    std::vector<std::string> m_clientFingerprintHeaders;
                    bool m_clientFingerprintHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYHEADERSTOORIGIN_H_
