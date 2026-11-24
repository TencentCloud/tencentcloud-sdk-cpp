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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANAPIKEYLISTITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANAPIKEYLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/SubPackageBalance.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Token Plan API Key 列表项
                */
                class TokenPlanApiKeyListItem : public AbstractModel
                {
                public:
                    TokenPlanApiKeyListItem();
                    ~TokenPlanApiKeyListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>API Key 密钥值（脱敏）。</p>
                     * @return ApiKey <p>API Key 密钥值（脱敏）。</p>
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置<p>API Key 密钥值（脱敏）。</p>
                     * @param _apiKey <p>API Key 密钥值（脱敏）。</p>
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取<p>API Key 名称。</p>
                     * @return Name <p>API Key 名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>API Key 名称。</p>
                     * @param _name <p>API Key 名称。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>所属套餐 ID。</p>
                     * @return TeamId <p>所属套餐 ID。</p>
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置<p>所属套餐 ID。</p>
                     * @param _teamId <p>所属套餐 ID。</p>
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
                     * 获取<p>账号APP ID。</p>
                     * @return AppId <p>账号APP ID。</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>账号APP ID。</p>
                     * @param _appId <p>账号APP ID。</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>主账号 UIN。最大 128 字符。</p>
                     * @return Uin <p>主账号 UIN。最大 128 字符。</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>主账号 UIN。最大 128 字符。</p>
                     * @param _uin <p>主账号 UIN。最大 128 字符。</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>API Key 可用模型列表（JSON 数组字符串）。</p>
                     * @return AllowedModels <p>API Key 可用模型列表（JSON 数组字符串）。</p>
                     * 
                     */
                    std::string GetAllowedModels() const;

                    /**
                     * 设置<p>API Key 可用模型列表（JSON 数组字符串）。</p>
                     * @param _allowedModels <p>API Key 可用模型列表（JSON 数组字符串）。</p>
                     * 
                     */
                    void SetAllowedModels(const std::string& _allowedModels);

                    /**
                     * 判断参数 AllowedModels 是否已赋值
                     * @return AllowedModels 是否已赋值
                     * 
                     */
                    bool AllowedModelsHasBeenSet() const;

                    /**
                     * 获取<p>API Key 是否可用。取值：enable（启用）、disable（停用）。</p>
                     * @return Status <p>API Key 是否可用。取值：enable（启用）、disable（停用）。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>API Key 是否可用。取值：enable（启用）、disable（停用）。</p>
                     * @param _status <p>API Key 是否可用。取值：enable（启用）、disable（停用）。</p>
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
                     * 获取<p>API Key 停用原因。取值：NORMAL（正常，默认值），QUOTA_EXHAUSTED（API Key额度包耗尽），ABNORMAL（异常，需人工介入）</p>
                     * @return StopReason <p>API Key 停用原因。取值：NORMAL（正常，默认值），QUOTA_EXHAUSTED（API Key额度包耗尽），ABNORMAL（异常，需人工介入）</p>
                     * 
                     */
                    std::string GetStopReason() const;

                    /**
                     * 设置<p>API Key 停用原因。取值：NORMAL（正常，默认值），QUOTA_EXHAUSTED（API Key额度包耗尽），ABNORMAL（异常，需人工介入）</p>
                     * @param _stopReason <p>API Key 停用原因。取值：NORMAL（正常，默认值），QUOTA_EXHAUSTED（API Key额度包耗尽），ABNORMAL（异常，需人工介入）</p>
                     * 
                     */
                    void SetStopReason(const std::string& _stopReason);

                    /**
                     * 判断参数 StopReason 是否已赋值
                     * @return StopReason 是否已赋值
                     * 
                     */
                    bool StopReasonHasBeenSet() const;

                    /**
                     * 获取<p>用户侧开关。取值：enable（启用）、disable（停用）。</p>
                     * @return UseStatus <p>用户侧开关。取值：enable（启用）、disable（停用）。</p>
                     * 
                     */
                    std::string GetUseStatus() const;

                    /**
                     * 设置<p>用户侧开关。取值：enable（启用）、disable（停用）。</p>
                     * @param _useStatus <p>用户侧开关。取值：enable（启用）、disable（停用）。</p>
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
                     * 获取<p>密钥版本号。</p>
                     * @return KeyVersion <p>密钥版本号。</p>
                     * 
                     */
                    int64_t GetKeyVersion() const;

                    /**
                     * 设置<p>密钥版本号。</p>
                     * @param _keyVersion <p>密钥版本号。</p>
                     * 
                     */
                    void SetKeyVersion(const int64_t& _keyVersion);

                    /**
                     * 判断参数 KeyVersion 是否已赋值
                     * @return KeyVersion 是否已赋值
                     * 
                     */
                    bool KeyVersionHasBeenSet() const;

                    /**
                     * 获取<p>最近一次重置时间。（ISO 8601）</p>
                     * @return LastRotatedAt <p>最近一次重置时间。（ISO 8601）</p>
                     * 
                     */
                    std::string GetLastRotatedAt() const;

                    /**
                     * 设置<p>最近一次重置时间。（ISO 8601）</p>
                     * @param _lastRotatedAt <p>最近一次重置时间。（ISO 8601）</p>
                     * 
                     */
                    void SetLastRotatedAt(const std::string& _lastRotatedAt);

                    /**
                     * 判断参数 LastRotatedAt 是否已赋值
                     * @return LastRotatedAt 是否已赋值
                     * 
                     */
                    bool LastRotatedAtHasBeenSet() const;

                    /**
                     * 获取<p>创建人，如果是子账号创建，则该值为子账号UIN。</p>
                     * @return Creator <p>创建人，如果是子账号创建，则该值为子账号UIN。</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建人，如果是子账号创建，则该值为子账号UIN。</p>
                     * @param _creator <p>创建人，如果是子账号创建，则该值为子账号UIN。</p>
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。</p>
                     * @return CreatedAt <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createdAt <p>创建时间。</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>更新时间。</p>
                     * @return UpdatedAt <p>更新时间。</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>更新时间。</p>
                     * @param _updatedAt <p>更新时间。</p>
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取<p>API Key 额度用量信息</p>
                     * @return Balance <p>API Key 额度用量信息</p>
                     * 
                     */
                    SubPackageBalance GetBalance() const;

                    /**
                     * 设置<p>API Key 额度用量信息</p>
                     * @param _balance <p>API Key 额度用量信息</p>
                     * 
                     */
                    void SetBalance(const SubPackageBalance& _balance);

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取<p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。</p>
                     * @return ProductType <p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。</p>
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置<p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。</p>
                     * @param _productType <p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。</p>
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取<p>IP 白名单列表。支持 IPv4 单地址与 IPv4 CIDR 格式，空数组表示不限制。</p>
                     * @return IpWhitelist <p>IP 白名单列表。支持 IPv4 单地址与 IPv4 CIDR 格式，空数组表示不限制。</p>
                     * 
                     */
                    std::vector<std::string> GetIpWhitelist() const;

                    /**
                     * 设置<p>IP 白名单列表。支持 IPv4 单地址与 IPv4 CIDR 格式，空数组表示不限制。</p>
                     * @param _ipWhitelist <p>IP 白名单列表。支持 IPv4 单地址与 IPv4 CIDR 格式，空数组表示不限制。</p>
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
                     * 获取<p>是否开启超额按量计费。开启后，若 APIKey 用量达到总额度上限，并且使用的模型已开启按量计费，将自动切换至按量计费模式；未开启时用量达上限后调用报错。</p>
                     * @return OverageEnabled <p>是否开启超额按量计费。开启后，若 APIKey 用量达到总额度上限，并且使用的模型已开启按量计费，将自动切换至按量计费模式；未开启时用量达上限后调用报错。</p>
                     * 
                     */
                    bool GetOverageEnabled() const;

                    /**
                     * 设置<p>是否开启超额按量计费。开启后，若 APIKey 用量达到总额度上限，并且使用的模型已开启按量计费，将自动切换至按量计费模式；未开启时用量达上限后调用报错。</p>
                     * @param _overageEnabled <p>是否开启超额按量计费。开启后，若 APIKey 用量达到总额度上限，并且使用的模型已开启按量计费，将自动切换至按量计费模式；未开启时用量达上限后调用报错。</p>
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
                     * <p>API Key ID。</p>
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * <p>API Key 密钥值（脱敏）。</p>
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * <p>API Key 名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>所属套餐 ID。</p>
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * <p>账号APP ID。</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>主账号 UIN。最大 128 字符。</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>API Key 可用模型列表（JSON 数组字符串）。</p>
                     */
                    std::string m_allowedModels;
                    bool m_allowedModelsHasBeenSet;

                    /**
                     * <p>API Key 是否可用。取值：enable（启用）、disable（停用）。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>API Key 停用原因。取值：NORMAL（正常，默认值），QUOTA_EXHAUSTED（API Key额度包耗尽），ABNORMAL（异常，需人工介入）</p>
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * <p>用户侧开关。取值：enable（启用）、disable（停用）。</p>
                     */
                    std::string m_useStatus;
                    bool m_useStatusHasBeenSet;

                    /**
                     * <p>密钥版本号。</p>
                     */
                    int64_t m_keyVersion;
                    bool m_keyVersionHasBeenSet;

                    /**
                     * <p>最近一次重置时间。（ISO 8601）</p>
                     */
                    std::string m_lastRotatedAt;
                    bool m_lastRotatedAtHasBeenSet;

                    /**
                     * <p>创建人，如果是子账号创建，则该值为子账号UIN。</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>更新时间。</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>API Key 额度用量信息</p>
                     */
                    SubPackageBalance m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * <p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。</p>
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>IP 白名单列表。支持 IPv4 单地址与 IPv4 CIDR 格式，空数组表示不限制。</p>
                     */
                    std::vector<std::string> m_ipWhitelist;
                    bool m_ipWhitelistHasBeenSet;

                    /**
                     * <p>是否开启超额按量计费。开启后，若 APIKey 用量达到总额度上限，并且使用的模型已开启按量计费，将自动切换至按量计费模式；未开启时用量达上限后调用报错。</p>
                     */
                    bool m_overageEnabled;
                    bool m_overageEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANAPIKEYLISTITEM_H_
