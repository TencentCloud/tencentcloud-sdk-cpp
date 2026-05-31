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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANLISTITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/TokenPlanPackageInfo.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Token Plan 套餐列表项
                */
                class TokenPlanListItem : public AbstractModel
                {
                public:
                    TokenPlanListItem();
                    ~TokenPlanListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取套餐 ID。
                     * @return TeamId 套餐 ID。
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置套餐 ID。
                     * @param _teamId 套餐 ID。
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
                     * 获取套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）
                     * @return ProductType 套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）
                     * @param _productType 套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）
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
                     * 获取套餐名称。最大 128 字符。
                     * @return Name 套餐名称。最大 128 字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置套餐名称。最大 128 字符。
                     * @param _name 套餐名称。最大 128 字符。
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
                     * 获取账号 APP ID。
                     * @return AppId 账号 APP ID。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置账号 APP ID。
                     * @param _appId 账号 APP ID。
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
                     * 获取主账号 UIN。
                     * @return Uin 主账号 UIN。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置主账号 UIN。
                     * @param _uin 主账号 UIN。
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
                     * 获取套餐状态。取值：enable（启用）、disable（停用）。
                     * @return Status 套餐状态。取值：enable（启用）、disable（停用）。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置套餐状态。取值：enable（启用）、disable（停用）。
                     * @param _status 套餐状态。取值：enable（启用）、disable（停用）。
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
                     * 获取套餐关停原因。取值：NORMAL（正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）
                     * @return StopReason 套餐关停原因。取值：NORMAL（正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）
                     * 
                     */
                    std::string GetStopReason() const;

                    /**
                     * 设置套餐关停原因。取值：NORMAL（正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）
                     * @param _stopReason 套餐关停原因。取值：NORMAL（正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）
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
                     * 获取可创建 API Key 上限。
                     * @return ApiKeyMax 可创建 API Key 上限。
                     * 
                     */
                    int64_t GetApiKeyMax() const;

                    /**
                     * 设置可创建 API Key 上限。
                     * @param _apiKeyMax 可创建 API Key 上限。
                     * 
                     */
                    void SetApiKeyMax(const int64_t& _apiKeyMax);

                    /**
                     * 判断参数 ApiKeyMax 是否已赋值
                     * @return ApiKeyMax 是否已赋值
                     * 
                     */
                    bool ApiKeyMaxHasBeenSet() const;

                    /**
                     * 获取云计费预付费资源包 ID。
                     * @return PrepayResourceID 云计费预付费资源包 ID。
                     * 
                     */
                    std::string GetPrepayResourceID() const;

                    /**
                     * 设置云计费预付费资源包 ID。
                     * @param _prepayResourceID 云计费预付费资源包 ID。
                     * 
                     */
                    void SetPrepayResourceID(const std::string& _prepayResourceID);

                    /**
                     * 判断参数 PrepayResourceID 是否已赋值
                     * @return PrepayResourceID 是否已赋值
                     * 
                     */
                    bool PrepayResourceIDHasBeenSet() const;

                    /**
                     * 获取创建人。若为子账号创建的套餐，则该值为子账号UIN。
                     * @return Creator 创建人。若为子账号创建的套餐，则该值为子账号UIN。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人。若为子账号创建的套餐，则该值为子账号UIN。
                     * @param _creator 创建人。若为子账号创建的套餐，则该值为子账号UIN。
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
                     * 获取套餐包基本信息。
                     * @return PackageInfo 套餐包基本信息。
                     * 
                     */
                    TokenPlanPackageInfo GetPackageInfo() const;

                    /**
                     * 设置套餐包基本信息。
                     * @param _packageInfo 套餐包基本信息。
                     * 
                     */
                    void SetPackageInfo(const TokenPlanPackageInfo& _packageInfo);

                    /**
                     * 判断参数 PackageInfo 是否已赋值
                     * @return PackageInfo 是否已赋值
                     * 
                     */
                    bool PackageInfoHasBeenSet() const;

                    /**
                     * 获取是否开启自动续费。取值：0（未开启），1（开启）
                     * @return AutoRenewFlag 是否开启自动续费。取值：0（未开启），1（开启）
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置是否开启自动续费。取值：0（未开启），1（开启）
                     * @param _autoRenewFlag 是否开启自动续费。取值：0（未开启），1（开启）
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * 套餐 ID。
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * 套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * 套餐名称。最大 128 字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 账号 APP ID。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号 UIN。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 套餐状态。取值：enable（启用）、disable（停用）。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 套餐关停原因。取值：NORMAL（正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * 可创建 API Key 上限。
                     */
                    int64_t m_apiKeyMax;
                    bool m_apiKeyMaxHasBeenSet;

                    /**
                     * 云计费预付费资源包 ID。
                     */
                    std::string m_prepayResourceID;
                    bool m_prepayResourceIDHasBeenSet;

                    /**
                     * 创建人。若为子账号创建的套餐，则该值为子账号UIN。
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
                     * 套餐包基本信息。
                     */
                    TokenPlanPackageInfo m_packageInfo;
                    bool m_packageInfoHasBeenSet;

                    /**
                     * 是否开启自动续费。取值：0（未开启），1（开启）
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANLISTITEM_H_
