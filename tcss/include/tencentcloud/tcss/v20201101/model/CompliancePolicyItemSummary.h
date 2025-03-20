/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPOLICYITEMSUMMARY_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPOLICYITEMSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 表示一条检测项对应的汇总信息。
                */
                class CompliancePolicyItemSummary : public AbstractModel
                {
                public:
                    CompliancePolicyItemSummary();
                    ~CompliancePolicyItemSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取为客户分配的唯一的检测项的ID。
                     * @return CustomerPolicyItemId 为客户分配的唯一的检测项的ID。
                     * 
                     */
                    uint64_t GetCustomerPolicyItemId() const;

                    /**
                     * 设置为客户分配的唯一的检测项的ID。
                     * @param _customerPolicyItemId 为客户分配的唯一的检测项的ID。
                     * 
                     */
                    void SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId);

                    /**
                     * 判断参数 CustomerPolicyItemId 是否已赋值
                     * @return CustomerPolicyItemId 是否已赋值
                     * 
                     */
                    bool CustomerPolicyItemIdHasBeenSet() const;

                    /**
                     * 获取检测项的原始ID。
                     * @return BasePolicyItemId 检测项的原始ID。
                     * 
                     */
                    uint64_t GetBasePolicyItemId() const;

                    /**
                     * 设置检测项的原始ID。
                     * @param _basePolicyItemId 检测项的原始ID。
                     * 
                     */
                    void SetBasePolicyItemId(const uint64_t& _basePolicyItemId);

                    /**
                     * 判断参数 BasePolicyItemId 是否已赋值
                     * @return BasePolicyItemId 是否已赋值
                     * 
                     */
                    bool BasePolicyItemIdHasBeenSet() const;

                    /**
                     * 获取检测项的名称。
                     * @return Name 检测项的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置检测项的名称。
                     * @param _name 检测项的名称。
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
                     * 获取检测项所属的类型，枚举字符串。
                     * @return Category 检测项所属的类型，枚举字符串。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置检测项所属的类型，枚举字符串。
                     * @param _category 检测项所属的类型，枚举字符串。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取所属的合规标准
                     * @return BenchmarkStandardName 所属的合规标准
                     * 
                     */
                    std::string GetBenchmarkStandardName() const;

                    /**
                     * 设置所属的合规标准
                     * @param _benchmarkStandardName 所属的合规标准
                     * 
                     */
                    void SetBenchmarkStandardName(const std::string& _benchmarkStandardName);

                    /**
                     * 判断参数 BenchmarkStandardName 是否已赋值
                     * @return BenchmarkStandardName 是否已赋值
                     * 
                     */
                    bool BenchmarkStandardNameHasBeenSet() const;

                    /**
                     * 获取威胁等级。RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, RISK_NOTICE。
                     * @return RiskLevel 威胁等级。RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, RISK_NOTICE。
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置威胁等级。RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, RISK_NOTICE。
                     * @param _riskLevel 威胁等级。RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, RISK_NOTICE。
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取检测项所属的资产类型
                     * @return AssetType 检测项所属的资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置检测项所属的资产类型
                     * @param _assetType 检测项所属的资产类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取最近检测的时间
                     * @return LastCheckTime 最近检测的时间
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置最近检测的时间
                     * @param _lastCheckTime 最近检测的时间
                     * 
                     */
                    void SetLastCheckTime(const std::string& _lastCheckTime);

                    /**
                     * 判断参数 LastCheckTime 是否已赋值
                     * @return LastCheckTime 是否已赋值
                     * 
                     */
                    bool LastCheckTimeHasBeenSet() const;

                    /**
                     * 获取检测状态

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     * @return CheckStatus 检测状态

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置检测状态

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     * @param _checkStatus 检测状态

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     * 
                     */
                    void SetCheckStatus(const std::string& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取检测结果。RESULT_PASSED: 通过

RESULT_FAILED: 未通过
                     * @return CheckResult 检测结果。RESULT_PASSED: 通过

RESULT_FAILED: 未通过
                     * 
                     */
                    std::string GetCheckResult() const;

                    /**
                     * 设置检测结果。RESULT_PASSED: 通过

RESULT_FAILED: 未通过
                     * @param _checkResult 检测结果。RESULT_PASSED: 通过

RESULT_FAILED: 未通过
                     * 
                     */
                    void SetCheckResult(const std::string& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     * 
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取通过检测的资产的数目
                     * @return PassedAssetCount 通过检测的资产的数目
                     * 
                     */
                    uint64_t GetPassedAssetCount() const;

                    /**
                     * 设置通过检测的资产的数目
                     * @param _passedAssetCount 通过检测的资产的数目
                     * 
                     */
                    void SetPassedAssetCount(const uint64_t& _passedAssetCount);

                    /**
                     * 判断参数 PassedAssetCount 是否已赋值
                     * @return PassedAssetCount 是否已赋值
                     * 
                     */
                    bool PassedAssetCountHasBeenSet() const;

                    /**
                     * 获取未通过检测的资产的数目
                     * @return FailedAssetCount 未通过检测的资产的数目
                     * 
                     */
                    uint64_t GetFailedAssetCount() const;

                    /**
                     * 设置未通过检测的资产的数目
                     * @param _failedAssetCount 未通过检测的资产的数目
                     * 
                     */
                    void SetFailedAssetCount(const uint64_t& _failedAssetCount);

                    /**
                     * 判断参数 FailedAssetCount 是否已赋值
                     * @return FailedAssetCount 是否已赋值
                     * 
                     */
                    bool FailedAssetCountHasBeenSet() const;

                    /**
                     * 获取检测项对应的白名单项的ID。如果存在且非0，表示检测项被用户忽略。
                     * @return WhitelistId 检测项对应的白名单项的ID。如果存在且非0，表示检测项被用户忽略。
                     * 
                     */
                    uint64_t GetWhitelistId() const;

                    /**
                     * 设置检测项对应的白名单项的ID。如果存在且非0，表示检测项被用户忽略。
                     * @param _whitelistId 检测项对应的白名单项的ID。如果存在且非0，表示检测项被用户忽略。
                     * 
                     */
                    void SetWhitelistId(const uint64_t& _whitelistId);

                    /**
                     * 判断参数 WhitelistId 是否已赋值
                     * @return WhitelistId 是否已赋值
                     * 
                     */
                    bool WhitelistIdHasBeenSet() const;

                    /**
                     * 获取处理建议。
                     * @return FixSuggestion 处理建议。
                     * 
                     */
                    std::string GetFixSuggestion() const;

                    /**
                     * 设置处理建议。
                     * @param _fixSuggestion 处理建议。
                     * 
                     */
                    void SetFixSuggestion(const std::string& _fixSuggestion);

                    /**
                     * 判断参数 FixSuggestion 是否已赋值
                     * @return FixSuggestion 是否已赋值
                     * 
                     */
                    bool FixSuggestionHasBeenSet() const;

                    /**
                     * 获取所属的合规标准的ID
                     * @return BenchmarkStandardId 所属的合规标准的ID
                     * 
                     */
                    uint64_t GetBenchmarkStandardId() const;

                    /**
                     * 设置所属的合规标准的ID
                     * @param _benchmarkStandardId 所属的合规标准的ID
                     * 
                     */
                    void SetBenchmarkStandardId(const uint64_t& _benchmarkStandardId);

                    /**
                     * 判断参数 BenchmarkStandardId 是否已赋值
                     * @return BenchmarkStandardId 是否已赋值
                     * 
                     */
                    bool BenchmarkStandardIdHasBeenSet() const;

                    /**
                     * 获取检测项适用的版本
                     * @return ApplicableVersion 检测项适用的版本
                     * 
                     */
                    std::string GetApplicableVersion() const;

                    /**
                     * 设置检测项适用的版本
                     * @param _applicableVersion 检测项适用的版本
                     * 
                     */
                    void SetApplicableVersion(const std::string& _applicableVersion);

                    /**
                     * 判断参数 ApplicableVersion 是否已赋值
                     * @return ApplicableVersion 是否已赋值
                     * 
                     */
                    bool ApplicableVersionHasBeenSet() const;

                    /**
                     * 获取检查项描述
                     * @return Description 检查项描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置检查项描述
                     * @param _description 检查项描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取检查项审计方法
                     * @return AuditProcedure 检查项审计方法
                     * 
                     */
                    std::string GetAuditProcedure() const;

                    /**
                     * 设置检查项审计方法
                     * @param _auditProcedure 检查项审计方法
                     * 
                     */
                    void SetAuditProcedure(const std::string& _auditProcedure);

                    /**
                     * 判断参数 AuditProcedure 是否已赋值
                     * @return AuditProcedure 是否已赋值
                     * 
                     */
                    bool AuditProcedureHasBeenSet() const;

                    /**
                     * 获取是否开启
<li>0 关闭</li>
<li>1 开启</li>
                     * @return IsEnable 是否开启
<li>0 关闭</li>
<li>1 开启</li>
                     * 
                     */
                    uint64_t GetIsEnable() const;

                    /**
                     * 设置是否开启
<li>0 关闭</li>
<li>1 开启</li>
                     * @param _isEnable 是否开启
<li>0 关闭</li>
<li>1 开启</li>
                     * 
                     */
                    void SetIsEnable(const uint64_t& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     * 
                     */
                    bool IsEnableHasBeenSet() const;

                private:

                    /**
                     * 为客户分配的唯一的检测项的ID。
                     */
                    uint64_t m_customerPolicyItemId;
                    bool m_customerPolicyItemIdHasBeenSet;

                    /**
                     * 检测项的原始ID。
                     */
                    uint64_t m_basePolicyItemId;
                    bool m_basePolicyItemIdHasBeenSet;

                    /**
                     * 检测项的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 检测项所属的类型，枚举字符串。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 所属的合规标准
                     */
                    std::string m_benchmarkStandardName;
                    bool m_benchmarkStandardNameHasBeenSet;

                    /**
                     * 威胁等级。RISK_CRITICAL, RISK_HIGH, RISK_MEDIUM, RISK_LOW, RISK_NOTICE。
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 检测项所属的资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 最近检测的时间
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * 检测状态

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * 检测结果。RESULT_PASSED: 通过

RESULT_FAILED: 未通过
                     */
                    std::string m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * 通过检测的资产的数目
                     */
                    uint64_t m_passedAssetCount;
                    bool m_passedAssetCountHasBeenSet;

                    /**
                     * 未通过检测的资产的数目
                     */
                    uint64_t m_failedAssetCount;
                    bool m_failedAssetCountHasBeenSet;

                    /**
                     * 检测项对应的白名单项的ID。如果存在且非0，表示检测项被用户忽略。
                     */
                    uint64_t m_whitelistId;
                    bool m_whitelistIdHasBeenSet;

                    /**
                     * 处理建议。
                     */
                    std::string m_fixSuggestion;
                    bool m_fixSuggestionHasBeenSet;

                    /**
                     * 所属的合规标准的ID
                     */
                    uint64_t m_benchmarkStandardId;
                    bool m_benchmarkStandardIdHasBeenSet;

                    /**
                     * 检测项适用的版本
                     */
                    std::string m_applicableVersion;
                    bool m_applicableVersionHasBeenSet;

                    /**
                     * 检查项描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 检查项审计方法
                     */
                    std::string m_auditProcedure;
                    bool m_auditProcedureHasBeenSet;

                    /**
                     * 是否开启
<li>0 关闭</li>
<li>1 开启</li>
                     */
                    uint64_t m_isEnable;
                    bool m_isEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPOLICYITEMSUMMARY_H_
