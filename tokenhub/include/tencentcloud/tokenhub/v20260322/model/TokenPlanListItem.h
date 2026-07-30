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
                     * 获取<p>套餐 ID。</p>
                     * @return TeamId <p>套餐 ID。</p>
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置<p>套餐 ID。</p>
                     * @param _teamId <p>套餐 ID。</p>
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
                     * 获取<p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）</p>
                     * @return ProductType <p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）</p>
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置<p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）</p>
                     * @param _productType <p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）</p>
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
                     * 获取<p>套餐名称。最大 128 字符。</p>
                     * @return Name <p>套餐名称。最大 128 字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>套餐名称。最大 128 字符。</p>
                     * @param _name <p>套餐名称。最大 128 字符。</p>
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
                     * 获取<p>账号 APP ID。</p>
                     * @return AppId <p>账号 APP ID。</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>账号 APP ID。</p>
                     * @param _appId <p>账号 APP ID。</p>
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
                     * 获取<p>主账号 UIN。</p>
                     * @return Uin <p>主账号 UIN。</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>主账号 UIN。</p>
                     * @param _uin <p>主账号 UIN。</p>
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
                     * 获取<p>套餐状态。取值：enable（启用）、disable（停用）。</p>
                     * @return Status <p>套餐状态。取值：enable（启用）、disable（停用）。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>套餐状态。取值：enable（启用）、disable（停用）。</p>
                     * @param _status <p>套餐状态。取值：enable（启用）、disable（停用）。</p>
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
                     * 获取<p>套餐关停原因。取值：NORMAL（正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）</p>
                     * @return StopReason <p>套餐关停原因。取值：NORMAL（正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）</p>
                     * 
                     */
                    std::string GetStopReason() const;

                    /**
                     * 设置<p>套餐关停原因。取值：NORMAL（正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）</p>
                     * @param _stopReason <p>套餐关停原因。取值：NORMAL（正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）</p>
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
                     * 获取<p>可创建 API Key 上限。</p>
                     * @return ApiKeyMax <p>可创建 API Key 上限。</p>
                     * 
                     */
                    int64_t GetApiKeyMax() const;

                    /**
                     * 设置<p>可创建 API Key 上限。</p>
                     * @param _apiKeyMax <p>可创建 API Key 上限。</p>
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
                     * 获取<p>当前已创建的 APIKey 数量</p>
                     * @return ApiKeyCount <p>当前已创建的 APIKey 数量</p>
                     * 
                     */
                    int64_t GetApiKeyCount() const;

                    /**
                     * 设置<p>当前已创建的 APIKey 数量</p>
                     * @param _apiKeyCount <p>当前已创建的 APIKey 数量</p>
                     * 
                     */
                    void SetApiKeyCount(const int64_t& _apiKeyCount);

                    /**
                     * 判断参数 ApiKeyCount 是否已赋值
                     * @return ApiKeyCount 是否已赋值
                     * 
                     */
                    bool ApiKeyCountHasBeenSet() const;

                    /**
                     * 获取<p>云计费预付费资源包 ID。</p>
                     * @return PrepayResourceID <p>云计费预付费资源包 ID。</p>
                     * 
                     */
                    std::string GetPrepayResourceID() const;

                    /**
                     * 设置<p>云计费预付费资源包 ID。</p>
                     * @param _prepayResourceID <p>云计费预付费资源包 ID。</p>
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
                     * 获取<p>创建人。若为子账号创建的套餐，则该值为子账号UIN。</p>
                     * @return Creator <p>创建人。若为子账号创建的套餐，则该值为子账号UIN。</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建人。若为子账号创建的套餐，则该值为子账号UIN。</p>
                     * @param _creator <p>创建人。若为子账号创建的套餐，则该值为子账号UIN。</p>
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
                     * 获取<p>套餐包基本信息。</p>
                     * @return PackageInfo <p>套餐包基本信息。</p>
                     * 
                     */
                    TokenPlanPackageInfo GetPackageInfo() const;

                    /**
                     * 设置<p>套餐包基本信息。</p>
                     * @param _packageInfo <p>套餐包基本信息。</p>
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
                     * 获取<p>是否开启自动续费。取值：0（未开启），1（开启）</p>
                     * @return AutoRenewFlag <p>是否开启自动续费。取值：0（未开启），1（开启）</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>是否开启自动续费。取值：0（未开启），1（开启）</p>
                     * @param _autoRenewFlag <p>是否开启自动续费。取值：0（未开启），1（开启）</p>
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
                     * <p>套餐 ID。</p>
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * <p>套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）</p>
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>套餐名称。最大 128 字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>账号 APP ID。</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>主账号 UIN。</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>套餐状态。取值：enable（启用）、disable（停用）。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>套餐关停原因。取值：NORMAL（正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）</p>
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * <p>可创建 API Key 上限。</p>
                     */
                    int64_t m_apiKeyMax;
                    bool m_apiKeyMaxHasBeenSet;

                    /**
                     * <p>当前已创建的 APIKey 数量</p>
                     */
                    int64_t m_apiKeyCount;
                    bool m_apiKeyCountHasBeenSet;

                    /**
                     * <p>云计费预付费资源包 ID。</p>
                     */
                    std::string m_prepayResourceID;
                    bool m_prepayResourceIDHasBeenSet;

                    /**
                     * <p>创建人。若为子账号创建的套餐，则该值为子账号UIN。</p>
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
                     * <p>套餐包基本信息。</p>
                     */
                    TokenPlanPackageInfo m_packageInfo;
                    bool m_packageInfoHasBeenSet;

                    /**
                     * <p>是否开启自动续费。取值：0（未开启），1（开启）</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENPLANLISTITEM_H_
