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
                     * 获取API Key ID。
                     * @return ApiKeyId API Key ID。
                     * 
                     */
                    std::string GetApiKeyId() const;

                    /**
                     * 设置API Key ID。
                     * @param _apiKeyId API Key ID。
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
                     * 获取API Key 密钥值（脱敏）。
                     * @return ApiKey API Key 密钥值（脱敏）。
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置API Key 密钥值（脱敏）。
                     * @param _apiKey API Key 密钥值（脱敏）。
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
                     * 获取API Key 名称。
                     * @return Name API Key 名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API Key 名称。
                     * @param _name API Key 名称。
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
                     * 获取所属套餐 ID。
                     * @return TeamId 所属套餐 ID。
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置所属套餐 ID。
                     * @param _teamId 所属套餐 ID。
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
                     * 获取账号APP ID。
                     * @return AppId 账号APP ID。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置账号APP ID。
                     * @param _appId 账号APP ID。
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
                     * 获取主账号 UIN。最大 128 字符。
                     * @return Uin 主账号 UIN。最大 128 字符。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置主账号 UIN。最大 128 字符。
                     * @param _uin 主账号 UIN。最大 128 字符。
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
                     * 获取API Key 可用模型列表（JSON 数组字符串）。
                     * @return AllowedModels API Key 可用模型列表（JSON 数组字符串）。
                     * 
                     */
                    std::string GetAllowedModels() const;

                    /**
                     * 设置API Key 可用模型列表（JSON 数组字符串）。
                     * @param _allowedModels API Key 可用模型列表（JSON 数组字符串）。
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
                     * 获取API Key 是否可用。取值：enable（启用）、disable（停用）。
                     * @return Status API Key 是否可用。取值：enable（启用）、disable（停用）。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置API Key 是否可用。取值：enable（启用）、disable（停用）。
                     * @param _status API Key 是否可用。取值：enable（启用）、disable（停用）。
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
                     * 获取API Key 停用原因。取值：NORMAL（正常，默认值），QUOTA_EXHAUSTED（API Key额度包耗尽），ABNORMAL（异常，需人工介入）
                     * @return StopReason API Key 停用原因。取值：NORMAL（正常，默认值），QUOTA_EXHAUSTED（API Key额度包耗尽），ABNORMAL（异常，需人工介入）
                     * 
                     */
                    std::string GetStopReason() const;

                    /**
                     * 设置API Key 停用原因。取值：NORMAL（正常，默认值），QUOTA_EXHAUSTED（API Key额度包耗尽），ABNORMAL（异常，需人工介入）
                     * @param _stopReason API Key 停用原因。取值：NORMAL（正常，默认值），QUOTA_EXHAUSTED（API Key额度包耗尽），ABNORMAL（异常，需人工介入）
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
                     * 获取用户侧开关。取值：enable（启用）、disable（停用）。
                     * @return UseStatus 用户侧开关。取值：enable（启用）、disable（停用）。
                     * 
                     */
                    std::string GetUseStatus() const;

                    /**
                     * 设置用户侧开关。取值：enable（启用）、disable（停用）。
                     * @param _useStatus 用户侧开关。取值：enable（启用）、disable（停用）。
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
                     * 获取密钥版本号。
                     * @return KeyVersion 密钥版本号。
                     * 
                     */
                    int64_t GetKeyVersion() const;

                    /**
                     * 设置密钥版本号。
                     * @param _keyVersion 密钥版本号。
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
                     * 获取最近一次重置时间。（ISO 8601）
                     * @return LastRotatedAt 最近一次重置时间。（ISO 8601）
                     * 
                     */
                    std::string GetLastRotatedAt() const;

                    /**
                     * 设置最近一次重置时间。（ISO 8601）
                     * @param _lastRotatedAt 最近一次重置时间。（ISO 8601）
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
                     * 获取创建人，如果是子账号创建，则该值为子账号UIN。
                     * @return Creator 创建人，如果是子账号创建，则该值为子账号UIN。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人，如果是子账号创建，则该值为子账号UIN。
                     * @param _creator 创建人，如果是子账号创建，则该值为子账号UIN。
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
                     * 获取创建时间。
                     * @return CreatedAt 创建时间。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间。
                     * @param _createdAt 创建时间。
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
                     * 获取更新时间。
                     * @return UpdatedAt 更新时间。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间。
                     * @param _updatedAt 更新时间。
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
                     * 获取API Key 额度用量信息
                     * @return Balance API Key 额度用量信息
                     * 
                     */
                    SubPackageBalance GetBalance() const;

                    /**
                     * 设置API Key 额度用量信息
                     * @param _balance API Key 额度用量信息
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
                     * 获取套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。
                     * @return ProductType 套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。
                     * @param _productType 套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                private:

                    /**
                     * API Key ID。
                     */
                    std::string m_apiKeyId;
                    bool m_apiKeyIdHasBeenSet;

                    /**
                     * API Key 密钥值（脱敏）。
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * API Key 名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 所属套餐 ID。
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * 账号APP ID。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号 UIN。最大 128 字符。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * API Key 可用模型列表（JSON 数组字符串）。
                     */
                    std::string m_allowedModels;
                    bool m_allowedModelsHasBeenSet;

                    /**
                     * API Key 是否可用。取值：enable（启用）、disable（停用）。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * API Key 停用原因。取值：NORMAL（正常，默认值），QUOTA_EXHAUSTED（API Key额度包耗尽），ABNORMAL（异常，需人工介入）
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * 用户侧开关。取值：enable（启用）、disable（停用）。
                     */
                    std::string m_useStatus;
                    bool m_useStatusHasBeenSet;

                    /**
                     * 密钥版本号。
                     */
                    int64_t m_keyVersion;
                    bool m_keyVersionHasBeenSet;

                    /**
                     * 最近一次重置时间。（ISO 8601）
                     */
                    std::string m_lastRotatedAt;
                    bool m_lastRotatedAtHasBeenSet;

                    /**
                     * 创建人，如果是子账号创建，则该值为子账号UIN。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * API Key 额度用量信息
                     */
                    SubPackageBalance m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * 套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）。
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANAPIKEYLISTITEM_H_
