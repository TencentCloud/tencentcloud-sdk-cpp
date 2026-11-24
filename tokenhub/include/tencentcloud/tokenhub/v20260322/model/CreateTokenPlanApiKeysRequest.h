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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANAPIKEYSREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANAPIKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * CreateTokenPlanApiKeys请求参数结构体
                */
                class CreateTokenPlanApiKeysRequest : public AbstractModel
                {
                public:
                    CreateTokenPlanApiKeysRequest();
                    ~CreateTokenPlanApiKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>套餐 ID。可通过DescribeTokenPlanList接口获取。</p>
                     * @return TeamId <p>套餐 ID。可通过DescribeTokenPlanList接口获取。</p>
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置<p>套餐 ID。可通过DescribeTokenPlanList接口获取。</p>
                     * @param _teamId <p>套餐 ID。可通过DescribeTokenPlanList接口获取。</p>
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取<p>API Key 名称，最大 128 字符。如果创建 API Key 的数量超过1个，实际名称格式为 {ApiKeyName}-{序号}（如 mykey-1, mykey-2）。</p>
                     * @return ApiKeyName <p>API Key 名称，最大 128 字符。如果创建 API Key 的数量超过1个，实际名称格式为 {ApiKeyName}-{序号}（如 mykey-1, mykey-2）。</p>
                     * 
                     */
                    std::string GetApiKeyName() const;

                    /**
                     * 设置<p>API Key 名称，最大 128 字符。如果创建 API Key 的数量超过1个，实际名称格式为 {ApiKeyName}-{序号}（如 mykey-1, mykey-2）。</p>
                     * @param _apiKeyName <p>API Key 名称，最大 128 字符。如果创建 API Key 的数量超过1个，实际名称格式为 {ApiKeyName}-{序号}（如 mykey-1, mykey-2）。</p>
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
                     * 获取<p>创建数量。取值范围：1 ~ 10。</p>
                     * @return Count <p>创建数量。取值范围：1 ~ 10。</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>创建数量。取值范围：1 ~ 10。</p>
                     * @param _count <p>创建数量。取值范围：1 ~ 10。</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>可用模型列表。如果套餐类型为企业版专业套餐，该字段必传！可以指定模型，也可以传入“all”，传入 “all“表示可以使用套餐支持的所有模型，如果要指定具体模型，传入 Model ID，“all“和具体的 Model ID 不能同时传入。如果套餐类型为企业版轻享套餐，则无论是否传入该字段，以及该字段传入什么值，都会被强制覆盖为[&quot;auto&quot;]。</p>
                     * @return AllowedModels <p>可用模型列表。如果套餐类型为企业版专业套餐，该字段必传！可以指定模型，也可以传入“all”，传入 “all“表示可以使用套餐支持的所有模型，如果要指定具体模型，传入 Model ID，“all“和具体的 Model ID 不能同时传入。如果套餐类型为企业版轻享套餐，则无论是否传入该字段，以及该字段传入什么值，都会被强制覆盖为[&quot;auto&quot;]。</p>
                     * 
                     */
                    std::vector<std::string> GetAllowedModels() const;

                    /**
                     * 设置<p>可用模型列表。如果套餐类型为企业版专业套餐，该字段必传！可以指定模型，也可以传入“all”，传入 “all“表示可以使用套餐支持的所有模型，如果要指定具体模型，传入 Model ID，“all“和具体的 Model ID 不能同时传入。如果套餐类型为企业版轻享套餐，则无论是否传入该字段，以及该字段传入什么值，都会被强制覆盖为[&quot;auto&quot;]。</p>
                     * @param _allowedModels <p>可用模型列表。如果套餐类型为企业版专业套餐，该字段必传！可以指定模型，也可以传入“all”，传入 “all“表示可以使用套餐支持的所有模型，如果要指定具体模型，传入 Model ID，“all“和具体的 Model ID 不能同时传入。如果套餐类型为企业版轻享套餐，则无论是否传入该字段，以及该字段传入什么值，都会被强制覆盖为[&quot;auto&quot;]。</p>
                     * 
                     */
                    void SetAllowedModels(const std::vector<std::string>& _allowedModels);

                    /**
                     * 判断参数 AllowedModels 是否已赋值
                     * @return AllowedModels 是否已赋值
                     * 
                     */
                    bool AllowedModelsHasBeenSet() const;

                    /**
                     * 获取<p>独占额度。不传则为0，代表该 API Key 不被分配任何独占配额。单位说明如下：</p><ul><li>套餐类型为专业，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @return ExclusiveQuota <p>独占额度。不传则为0，代表该 API Key 不被分配任何独占配额。单位说明如下：</p><ul><li>套餐类型为专业，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    int64_t GetExclusiveQuota() const;

                    /**
                     * 设置<p>独占额度。不传则为0，代表该 API Key 不被分配任何独占配额。单位说明如下：</p><ul><li>套餐类型为专业，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @param _exclusiveQuota <p>独占额度。不传则为0，代表该 API Key 不被分配任何独占配额。单位说明如下：</p><ul><li>套餐类型为专业，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    void SetExclusiveQuota(const int64_t& _exclusiveQuota);

                    /**
                     * 判断参数 ExclusiveQuota 是否已赋值
                     * @return ExclusiveQuota 是否已赋值
                     * 
                     */
                    bool ExclusiveQuotaHasBeenSet() const;

                    /**
                     * 获取<p>总额度上限。-1 表示不限，必须为 -1 或 &gt;= API Key 当前的 ExclusiveQuota（独占额度）。不传表示不设置上限。单位说明如下：</p><ul><li>套餐类型为专业，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @return TotalQuota <p>总额度上限。-1 表示不限，必须为 -1 或 &gt;= API Key 当前的 ExclusiveQuota（独占额度）。不传表示不设置上限。单位说明如下：</p><ul><li>套餐类型为专业，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    int64_t GetTotalQuota() const;

                    /**
                     * 设置<p>总额度上限。-1 表示不限，必须为 -1 或 &gt;= API Key 当前的 ExclusiveQuota（独占额度）。不传表示不设置上限。单位说明如下：</p><ul><li>套餐类型为专业，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @param _totalQuota <p>总额度上限。-1 表示不限，必须为 -1 或 &gt;= API Key 当前的 ExclusiveQuota（独占额度）。不传表示不设置上限。单位说明如下：</p><ul><li>套餐类型为专业，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    void SetTotalQuota(const int64_t& _totalQuota);

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取<p>TPM（Tokens Per Minute）限制。不传使用套餐级别 TPM。必须 &gt;= 0 且 &lt;= 套餐 TPM。</p>
                     * @return TPM <p>TPM（Tokens Per Minute）限制。不传使用套餐级别 TPM。必须 &gt;= 0 且 &lt;= 套餐 TPM。</p>
                     * 
                     */
                    int64_t GetTPM() const;

                    /**
                     * 设置<p>TPM（Tokens Per Minute）限制。不传使用套餐级别 TPM。必须 &gt;= 0 且 &lt;= 套餐 TPM。</p>
                     * @param _tPM <p>TPM（Tokens Per Minute）限制。不传使用套餐级别 TPM。必须 &gt;= 0 且 &lt;= 套餐 TPM。</p>
                     * 
                     */
                    void SetTPM(const int64_t& _tPM);

                    /**
                     * 判断参数 TPM 是否已赋值
                     * @return TPM 是否已赋值
                     * 
                     */
                    bool TPMHasBeenSet() const;

                    /**
                     * 获取<p>IP 白名单列表。支持 IPv4 单地址（如 1.2.3.4）和 IPv4 CIDR（如 10.0.0.0/24）格式。最多 50 个条目，不允许重复；不支持 IPv6 与 IP 范围。不传或传空数组表示不限制。批量创建时所有 APIKey 共用同一份白名单。</p>
                     * @return IpWhitelist <p>IP 白名单列表。支持 IPv4 单地址（如 1.2.3.4）和 IPv4 CIDR（如 10.0.0.0/24）格式。最多 50 个条目，不允许重复；不支持 IPv6 与 IP 范围。不传或传空数组表示不限制。批量创建时所有 APIKey 共用同一份白名单。</p>
                     * 
                     */
                    std::vector<std::string> GetIpWhitelist() const;

                    /**
                     * 设置<p>IP 白名单列表。支持 IPv4 单地址（如 1.2.3.4）和 IPv4 CIDR（如 10.0.0.0/24）格式。最多 50 个条目，不允许重复；不支持 IPv6 与 IP 范围。不传或传空数组表示不限制。批量创建时所有 APIKey 共用同一份白名单。</p>
                     * @param _ipWhitelist <p>IP 白名单列表。支持 IPv4 单地址（如 1.2.3.4）和 IPv4 CIDR（如 10.0.0.0/24）格式。最多 50 个条目，不允许重复；不支持 IPv6 与 IP 范围。不传或传空数组表示不限制。批量创建时所有 APIKey 共用同一份白名单。</p>
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
                     * 获取<p>是否开启超额按量计费。默认值为 false。开启后，若 APIKey 用量达到总额度上限，并且使用的模型已开启按量计费，将自动切换至按量计费模式，该部分将按所用模型的按量计费定价额外计费；未开启时用量达上限后调用报错。</p>
                     * @return OverageEnabled <p>是否开启超额按量计费。默认值为 false。开启后，若 APIKey 用量达到总额度上限，并且使用的模型已开启按量计费，将自动切换至按量计费模式，该部分将按所用模型的按量计费定价额外计费；未开启时用量达上限后调用报错。</p>
                     * 
                     */
                    bool GetOverageEnabled() const;

                    /**
                     * 设置<p>是否开启超额按量计费。默认值为 false。开启后，若 APIKey 用量达到总额度上限，并且使用的模型已开启按量计费，将自动切换至按量计费模式，该部分将按所用模型的按量计费定价额外计费；未开启时用量达上限后调用报错。</p>
                     * @param _overageEnabled <p>是否开启超额按量计费。默认值为 false。开启后，若 APIKey 用量达到总额度上限，并且使用的模型已开启按量计费，将自动切换至按量计费模式，该部分将按所用模型的按量计费定价额外计费；未开启时用量达上限后调用报错。</p>
                     * 
                     */
                    void SetOverageEnabled(const bool& _overageEnabled);

                    /**
                     * 判断参数 OverageEnabled 是否已赋值
                     * @return OverageEnabled 是否已赋值
                     * 
                     */
                    bool OverageEnabledHasBeenSet() const;

                private:

                    /**
                     * <p>套餐 ID。可通过DescribeTokenPlanList接口获取。</p>
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * <p>API Key 名称，最大 128 字符。如果创建 API Key 的数量超过1个，实际名称格式为 {ApiKeyName}-{序号}（如 mykey-1, mykey-2）。</p>
                     */
                    std::string m_apiKeyName;
                    bool m_apiKeyNameHasBeenSet;

                    /**
                     * <p>创建数量。取值范围：1 ~ 10。</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>可用模型列表。如果套餐类型为企业版专业套餐，该字段必传！可以指定模型，也可以传入“all”，传入 “all“表示可以使用套餐支持的所有模型，如果要指定具体模型，传入 Model ID，“all“和具体的 Model ID 不能同时传入。如果套餐类型为企业版轻享套餐，则无论是否传入该字段，以及该字段传入什么值，都会被强制覆盖为[&quot;auto&quot;]。</p>
                     */
                    std::vector<std::string> m_allowedModels;
                    bool m_allowedModelsHasBeenSet;

                    /**
                     * <p>独占额度。不传则为0，代表该 API Key 不被分配任何独占配额。单位说明如下：</p><ul><li>套餐类型为专业，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     */
                    int64_t m_exclusiveQuota;
                    bool m_exclusiveQuotaHasBeenSet;

                    /**
                     * <p>总额度上限。-1 表示不限，必须为 -1 或 &gt;= API Key 当前的 ExclusiveQuota（独占额度）。不传表示不设置上限。单位说明如下：</p><ul><li>套餐类型为专业，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     */
                    int64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * <p>TPM（Tokens Per Minute）限制。不传使用套餐级别 TPM。必须 &gt;= 0 且 &lt;= 套餐 TPM。</p>
                     */
                    int64_t m_tPM;
                    bool m_tPMHasBeenSet;

                    /**
                     * <p>IP 白名单列表。支持 IPv4 单地址（如 1.2.3.4）和 IPv4 CIDR（如 10.0.0.0/24）格式。最多 50 个条目，不允许重复；不支持 IPv6 与 IP 范围。不传或传空数组表示不限制。批量创建时所有 APIKey 共用同一份白名单。</p>
                     */
                    std::vector<std::string> m_ipWhitelist;
                    bool m_ipWhitelistHasBeenSet;

                    /**
                     * <p>是否开启超额按量计费。默认值为 false。开启后，若 APIKey 用量达到总额度上限，并且使用的模型已开启按量计费，将自动切换至按量计费模式，该部分将按所用模型的按量计费定价额外计费；未开启时用量达上限后调用报错。</p>
                     */
                    bool m_overageEnabled;
                    bool m_overageEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANAPIKEYSREQUEST_H_
