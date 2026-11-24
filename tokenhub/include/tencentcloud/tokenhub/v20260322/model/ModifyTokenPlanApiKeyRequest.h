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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYTOKENPLANAPIKEYREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYTOKENPLANAPIKEYREQUEST_H_

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
                * ModifyTokenPlanApiKey请求参数结构体
                */
                class ModifyTokenPlanApiKeyRequest : public AbstractModel
                {
                public:
                    ModifyTokenPlanApiKeyRequest();
                    ~ModifyTokenPlanApiKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>API Key ID。</p>
                     * @return ApiKeyId <p>API Key ID。</p>
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置<p>API Key ID。</p>
                     * @param _apiKeyId <p>API Key ID。</p>
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
                     * 获取<p>可用模型列表。不传则不修改。</p><ul><li><p>如果套餐类型为企业版专业套餐：<br>1）传入“all“ ：使用套餐支持的所有模型<br>2）传入 Model ID：指定具体模型。“all“和具体的 Model ID 不能同时传入。</p></li><li><p>如果套餐类型为企业版轻享套餐，不允许传该参数。</p></li></ul>
                     * @return AllowedModels <p>可用模型列表。不传则不修改。</p><ul><li><p>如果套餐类型为企业版专业套餐：<br>1）传入“all“ ：使用套餐支持的所有模型<br>2）传入 Model ID：指定具体模型。“all“和具体的 Model ID 不能同时传入。</p></li><li><p>如果套餐类型为企业版轻享套餐，不允许传该参数。</p></li></ul>
                     * 
                     */
                    std::vector<std::string> GetAllowedModels() const;

                    /**
                     * 设置<p>可用模型列表。不传则不修改。</p><ul><li><p>如果套餐类型为企业版专业套餐：<br>1）传入“all“ ：使用套餐支持的所有模型<br>2）传入 Model ID：指定具体模型。“all“和具体的 Model ID 不能同时传入。</p></li><li><p>如果套餐类型为企业版轻享套餐，不允许传该参数。</p></li></ul>
                     * @param _allowedModels <p>可用模型列表。不传则不修改。</p><ul><li><p>如果套餐类型为企业版专业套餐：<br>1）传入“all“ ：使用套餐支持的所有模型<br>2）传入 Model ID：指定具体模型。“all“和具体的 Model ID 不能同时传入。</p></li><li><p>如果套餐类型为企业版轻享套餐，不允许传该参数。</p></li></ul>
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
                     * 获取<p>独占额度，不传则不修改。单位说明：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @return ExclusiveQuota <p>独占额度，不传则不修改。单位说明：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    int64_t GetExclusiveQuota() const;

                    /**
                     * 设置<p>独占额度，不传则不修改。单位说明：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @param _exclusiveQuota <p>独占额度，不传则不修改。单位说明：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
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
                     * 获取<p>总额度上限。-1 表示不限，必须为 -1 或 &gt;= API Key 当前的 ExclusiveQuota（独占额度），不传则不修改。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @return TotalQuota <p>总额度上限。-1 表示不限，必须为 -1 或 &gt;= API Key 当前的 ExclusiveQuota（独占额度），不传则不修改。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    int64_t GetTotalQuota() const;

                    /**
                     * 设置<p>总额度上限。-1 表示不限，必须为 -1 或 &gt;= API Key 当前的 ExclusiveQuota（独占额度），不传则不修改。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @param _totalQuota <p>总额度上限。-1 表示不限，必须为 -1 或 &gt;= API Key 当前的 ExclusiveQuota（独占额度），不传则不修改。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
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
                     * 获取<p>是否启用该 API Key。取值：enable（启用）、disable（停用），不传则不修改。</p>
                     * @return UseStatus <p>是否启用该 API Key。取值：enable（启用）、disable（停用），不传则不修改。</p>
                     * 
                     */
                    std::string GetUseStatus() const;

                    /**
                     * 设置<p>是否启用该 API Key。取值：enable（启用）、disable（停用），不传则不修改。</p>
                     * @param _useStatus <p>是否启用该 API Key。取值：enable（启用）、disable（停用），不传则不修改。</p>
                     * 
                     */
                    void SetUseStatus(const std::string& _useStatus);

                    /**
                     * 判断参数 UseStatus 是否已赋值
                     * @return UseStatus 是否已赋值
                     * 
                     */
                    bool UseStatusHasBeenSet() const;

                    /**
                     * 获取<p>TPM（Tokens Per Minute）限制。不传则不修改。必须 &gt;= 0 且 &lt;= 套餐 TPM。</p>
                     * @return TPM <p>TPM（Tokens Per Minute）限制。不传则不修改。必须 &gt;= 0 且 &lt;= 套餐 TPM。</p>
                     * 
                     */
                    int64_t GetTPM() const;

                    /**
                     * 设置<p>TPM（Tokens Per Minute）限制。不传则不修改。必须 &gt;= 0 且 &lt;= 套餐 TPM。</p>
                     * @param _tPM <p>TPM（Tokens Per Minute）限制。不传则不修改。必须 &gt;= 0 且 &lt;= 套餐 TPM。</p>
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
                     * 获取<p>IP 白名单列表。不传则不修改；传空数组表示清空（不限制 IP）；传非空数组表示覆盖。支持 IPv4 单地址（如 1.2.3.4）和 IPv4 CIDR（如 10.0.0.0/24）格式，最多 50 个条目，不允许重复；不支持 IPv6 与 IP 范围。</p>
                     * @return IpWhitelist <p>IP 白名单列表。不传则不修改；传空数组表示清空（不限制 IP）；传非空数组表示覆盖。支持 IPv4 单地址（如 1.2.3.4）和 IPv4 CIDR（如 10.0.0.0/24）格式，最多 50 个条目，不允许重复；不支持 IPv6 与 IP 范围。</p>
                     * 
                     */
                    std::vector<std::string> GetIpWhitelist() const;

                    /**
                     * 设置<p>IP 白名单列表。不传则不修改；传空数组表示清空（不限制 IP）；传非空数组表示覆盖。支持 IPv4 单地址（如 1.2.3.4）和 IPv4 CIDR（如 10.0.0.0/24）格式，最多 50 个条目，不允许重复；不支持 IPv6 与 IP 范围。</p>
                     * @param _ipWhitelist <p>IP 白名单列表。不传则不修改；传空数组表示清空（不限制 IP）；传非空数组表示覆盖。支持 IPv4 单地址（如 1.2.3.4）和 IPv4 CIDR（如 10.0.0.0/24）格式，最多 50 个条目，不允许重复；不支持 IPv6 与 IP 范围。</p>
                     * 
                     */
                    void SetIpWhitelist(const std::vector<std::string>& _ipWhitelist);

                    /**
                     * 判断参数 IpWhitelist 是否已赋值
                     * @return IpWhitelist 是否已赋值
                     * 
                     */
                    bool IpWhitelistHasBeenSet() const;

                private:

                    /**
                     * <p>API Key ID。</p>
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * <p>可用模型列表。不传则不修改。</p><ul><li><p>如果套餐类型为企业版专业套餐：<br>1）传入“all“ ：使用套餐支持的所有模型<br>2）传入 Model ID：指定具体模型。“all“和具体的 Model ID 不能同时传入。</p></li><li><p>如果套餐类型为企业版轻享套餐，不允许传该参数。</p></li></ul>
                     */
                    std::vector<std::string> m_allowedModels;
                    bool m_allowedModelsHasBeenSet;

                    /**
                     * <p>独占额度，不传则不修改。单位说明：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     */
                    int64_t m_exclusiveQuota;
                    bool m_exclusiveQuotaHasBeenSet;

                    /**
                     * <p>总额度上限。-1 表示不限，必须为 -1 或 &gt;= API Key 当前的 ExclusiveQuota（独占额度），不传则不修改。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     */
                    int64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * <p>是否启用该 API Key。取值：enable（启用）、disable（停用），不传则不修改。</p>
                     */
                    std::string m_useStatus;
                    bool m_useStatusHasBeenSet;

                    /**
                     * <p>TPM（Tokens Per Minute）限制。不传则不修改。必须 &gt;= 0 且 &lt;= 套餐 TPM。</p>
                     */
                    int64_t m_tPM;
                    bool m_tPMHasBeenSet;

                    /**
                     * <p>IP 白名单列表。不传则不修改；传空数组表示清空（不限制 IP）；传非空数组表示覆盖。支持 IPv4 单地址（如 1.2.3.4）和 IPv4 CIDR（如 10.0.0.0/24）格式，最多 50 个条目，不允许重复；不支持 IPv6 与 IP 范围。</p>
                     */
                    std::vector<std::string> m_ipWhitelist;
                    bool m_ipWhitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODIFYTOKENPLANAPIKEYREQUEST_H_
