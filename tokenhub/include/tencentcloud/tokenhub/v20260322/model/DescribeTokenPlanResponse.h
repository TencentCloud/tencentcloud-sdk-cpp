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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/TokenPlanPackageInfo.h>
#include <tencentcloud/tokenhub/v20260322/model/TokenSummary.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeTokenPlan返回参数结构体
                */
                class DescribeTokenPlanResponse : public AbstractModel
                {
                public:
                    DescribeTokenPlanResponse();
                    ~DescribeTokenPlanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐 ID。
                     * @return TeamId 套餐 ID。
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取套餐名称。
                     * @return Name 套餐名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取主账号 APP ID。
                     * @return AppId 主账号 APP ID。
                     * 
                     */
                    std::string GetAppId() const;

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
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取状态。取值：enable（启用）、disable（停用）。
                     * @return Status 状态。取值：enable（启用）、disable（停用）。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取关停原因。取值：取值：NORMAL（套餐正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）。
                     * @return StopReason 关停原因。取值：取值：NORMAL（套餐正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）。
                     * 
                     */
                    std::string GetStopReason() const;

                    /**
                     * 判断参数 StopReason 是否已赋值
                     * @return StopReason 是否已赋值
                     * 
                     */
                    bool StopReasonHasBeenSet() const;

                    /**
                     * 获取可创建APIKey 上限。
                     * @return ApiKeyMax 可创建APIKey 上限。
                     * 
                     */
                    int64_t GetApiKeyMax() const;

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
                     * 判断参数 PrepayResourceID 是否已赋值
                     * @return PrepayResourceID 是否已赋值
                     * 
                     */
                    bool PrepayResourceIDHasBeenSet() const;

                    /**
                     * 获取创建人，子账号创建的套餐将展示子账号UIN。
                     * @return Creator 创建人，子账号创建的套餐将展示子账号UIN。
                     * 
                     */
                    std::string GetCreator() const;

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
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取套餐包基本信息
                     * @return PackageInfo 套餐包基本信息
                     * 
                     */
                    TokenPlanPackageInfo GetPackageInfo() const;

                    /**
                     * 判断参数 PackageInfo 是否已赋值
                     * @return PackageInfo 是否已赋值
                     * 
                     */
                    bool PackageInfoHasBeenSet() const;

                    /**
                     * 获取自动续费标识。取值：0（手动续费）、1（自动续费）、2（明确不自动续费）。未绑定预付费资源时不返回。
                     * @return AutoRenewFlag 自动续费标识。取值：0（手动续费）、1（自动续费）、2（明确不自动续费）。未绑定预付费资源时不返回。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取当前已创建的 API Key 数量
                     * @return ApiKeyCount 当前已创建的 API Key 数量
                     * 
                     */
                    int64_t GetApiKeyCount() const;

                    /**
                     * 判断参数 ApiKeyCount 是否已赋值
                     * @return ApiKeyCount 是否已赋值
                     * 
                     */
                    bool ApiKeyCountHasBeenSet() const;

                    /**
                     * 获取当前周期 Token 用量明细
                     * @return TokenSummary 当前周期 Token 用量明细
                     * 
                     */
                    TokenSummary GetTokenSummary() const;

                    /**
                     * 判断参数 TokenSummary 是否已赋值
                     * @return TokenSummary 是否已赋值
                     * 
                     */
                    bool TokenSummaryHasBeenSet() const;

                    /**
                     * 获取套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）
                     * @return ProductType 套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                private:

                    /**
                     * 套餐 ID。
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * 套餐名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 主账号 APP ID。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号 UIN。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 状态。取值：enable（启用）、disable（停用）。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 关停原因。取值：取值：NORMAL（套餐正常）、ISOLATED（隔离/欠费）、FROZEN（冻结）、EXHAUSTED（额度耗尽）、DESTROYED（已销毁）。
                     */
                    std::string m_stopReason;
                    bool m_stopReasonHasBeenSet;

                    /**
                     * 可创建APIKey 上限。
                     */
                    int64_t m_apiKeyMax;
                    bool m_apiKeyMaxHasBeenSet;

                    /**
                     * 云计费预付费资源包 ID。
                     */
                    std::string m_prepayResourceID;
                    bool m_prepayResourceIDHasBeenSet;

                    /**
                     * 创建人，子账号创建的套餐将展示子账号UIN。
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
                     * 套餐包基本信息
                     */
                    TokenPlanPackageInfo m_packageInfo;
                    bool m_packageInfoHasBeenSet;

                    /**
                     * 自动续费标识。取值：0（手动续费）、1（自动续费）、2（明确不自动续费）。未绑定预付费资源时不返回。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 当前已创建的 API Key 数量
                     */
                    int64_t m_apiKeyCount;
                    bool m_apiKeyCountHasBeenSet;

                    /**
                     * 当前周期 Token 用量明细
                     */
                    TokenSummary m_tokenSummary;
                    bool m_tokenSummaryHasBeenSet;

                    /**
                     * 套餐类型。取值：enterprise（企业版专业套餐）、enterprise-auto（企业版轻享套餐）
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANRESPONSE_H_
