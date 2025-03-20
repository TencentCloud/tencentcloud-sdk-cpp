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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETSUMMARY_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/CompliancePeriodTaskRule.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 表示一类资产的总览信息。
                */
                class ComplianceAssetSummary : public AbstractModel
                {
                public:
                    ComplianceAssetSummary();
                    ~ComplianceAssetSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产类别。
                     * @return AssetType 资产类别。
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类别。
                     * @param _assetType 资产类别。
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
                     * 获取是否为客户的首次检测。与CheckStatus配合使用。
                     * @return IsCustomerFirstCheck 是否为客户的首次检测。与CheckStatus配合使用。
                     * 
                     */
                    bool GetIsCustomerFirstCheck() const;

                    /**
                     * 设置是否为客户的首次检测。与CheckStatus配合使用。
                     * @param _isCustomerFirstCheck 是否为客户的首次检测。与CheckStatus配合使用。
                     * 
                     */
                    void SetIsCustomerFirstCheck(const bool& _isCustomerFirstCheck);

                    /**
                     * 判断参数 IsCustomerFirstCheck 是否已赋值
                     * @return IsCustomerFirstCheck 是否已赋值
                     * 
                     */
                    bool IsCustomerFirstCheckHasBeenSet() const;

                    /**
                     * 获取检测状态

CHECK_UNINIT, 用户未启用此功能

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     * @return CheckStatus 检测状态

CHECK_UNINIT, 用户未启用此功能

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置检测状态

CHECK_UNINIT, 用户未启用此功能

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     * @param _checkStatus 检测状态

CHECK_UNINIT, 用户未启用此功能

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
                     * 获取此类别的检测进度，为 0~100 的数。若未在检测中，无此字段。
                     * @return CheckProgress 此类别的检测进度，为 0~100 的数。若未在检测中，无此字段。
                     * 
                     */
                    double GetCheckProgress() const;

                    /**
                     * 设置此类别的检测进度，为 0~100 的数。若未在检测中，无此字段。
                     * @param _checkProgress 此类别的检测进度，为 0~100 的数。若未在检测中，无此字段。
                     * 
                     */
                    void SetCheckProgress(const double& _checkProgress);

                    /**
                     * 判断参数 CheckProgress 是否已赋值
                     * @return CheckProgress 是否已赋值
                     * 
                     */
                    bool CheckProgressHasBeenSet() const;

                    /**
                     * 获取此类资产通过的检测项的数目。
                     * @return PassedPolicyItemCount 此类资产通过的检测项的数目。
                     * 
                     */
                    uint64_t GetPassedPolicyItemCount() const;

                    /**
                     * 设置此类资产通过的检测项的数目。
                     * @param _passedPolicyItemCount 此类资产通过的检测项的数目。
                     * 
                     */
                    void SetPassedPolicyItemCount(const uint64_t& _passedPolicyItemCount);

                    /**
                     * 判断参数 PassedPolicyItemCount 是否已赋值
                     * @return PassedPolicyItemCount 是否已赋值
                     * 
                     */
                    bool PassedPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取此类资产未通过的检测的数目。
                     * @return FailedPolicyItemCount 此类资产未通过的检测的数目。
                     * 
                     */
                    uint64_t GetFailedPolicyItemCount() const;

                    /**
                     * 设置此类资产未通过的检测的数目。
                     * @param _failedPolicyItemCount 此类资产未通过的检测的数目。
                     * 
                     */
                    void SetFailedPolicyItemCount(const uint64_t& _failedPolicyItemCount);

                    /**
                     * 判断参数 FailedPolicyItemCount 是否已赋值
                     * @return FailedPolicyItemCount 是否已赋值
                     * 
                     */
                    bool FailedPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取此类资产下未通过的严重级别的检测项的数目。
                     * @return FailedCriticalPolicyItemCount 此类资产下未通过的严重级别的检测项的数目。
                     * 
                     */
                    uint64_t GetFailedCriticalPolicyItemCount() const;

                    /**
                     * 设置此类资产下未通过的严重级别的检测项的数目。
                     * @param _failedCriticalPolicyItemCount 此类资产下未通过的严重级别的检测项的数目。
                     * 
                     */
                    void SetFailedCriticalPolicyItemCount(const uint64_t& _failedCriticalPolicyItemCount);

                    /**
                     * 判断参数 FailedCriticalPolicyItemCount 是否已赋值
                     * @return FailedCriticalPolicyItemCount 是否已赋值
                     * 
                     */
                    bool FailedCriticalPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取此类资产下未通过的高危检测项的数目。
                     * @return FailedHighRiskPolicyItemCount 此类资产下未通过的高危检测项的数目。
                     * 
                     */
                    uint64_t GetFailedHighRiskPolicyItemCount() const;

                    /**
                     * 设置此类资产下未通过的高危检测项的数目。
                     * @param _failedHighRiskPolicyItemCount 此类资产下未通过的高危检测项的数目。
                     * 
                     */
                    void SetFailedHighRiskPolicyItemCount(const uint64_t& _failedHighRiskPolicyItemCount);

                    /**
                     * 判断参数 FailedHighRiskPolicyItemCount 是否已赋值
                     * @return FailedHighRiskPolicyItemCount 是否已赋值
                     * 
                     */
                    bool FailedHighRiskPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取此类资产下未通过的中危检测项的数目。
                     * @return FailedMediumRiskPolicyItemCount 此类资产下未通过的中危检测项的数目。
                     * 
                     */
                    uint64_t GetFailedMediumRiskPolicyItemCount() const;

                    /**
                     * 设置此类资产下未通过的中危检测项的数目。
                     * @param _failedMediumRiskPolicyItemCount 此类资产下未通过的中危检测项的数目。
                     * 
                     */
                    void SetFailedMediumRiskPolicyItemCount(const uint64_t& _failedMediumRiskPolicyItemCount);

                    /**
                     * 判断参数 FailedMediumRiskPolicyItemCount 是否已赋值
                     * @return FailedMediumRiskPolicyItemCount 是否已赋值
                     * 
                     */
                    bool FailedMediumRiskPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取此类资产下未通过的低危检测项的数目。
                     * @return FailedLowRiskPolicyItemCount 此类资产下未通过的低危检测项的数目。
                     * 
                     */
                    uint64_t GetFailedLowRiskPolicyItemCount() const;

                    /**
                     * 设置此类资产下未通过的低危检测项的数目。
                     * @param _failedLowRiskPolicyItemCount 此类资产下未通过的低危检测项的数目。
                     * 
                     */
                    void SetFailedLowRiskPolicyItemCount(const uint64_t& _failedLowRiskPolicyItemCount);

                    /**
                     * 判断参数 FailedLowRiskPolicyItemCount 是否已赋值
                     * @return FailedLowRiskPolicyItemCount 是否已赋值
                     * 
                     */
                    bool FailedLowRiskPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取此类资产下提示级别的检测项的数目。
                     * @return NoticePolicyItemCount 此类资产下提示级别的检测项的数目。
                     * 
                     */
                    uint64_t GetNoticePolicyItemCount() const;

                    /**
                     * 设置此类资产下提示级别的检测项的数目。
                     * @param _noticePolicyItemCount 此类资产下提示级别的检测项的数目。
                     * 
                     */
                    void SetNoticePolicyItemCount(const uint64_t& _noticePolicyItemCount);

                    /**
                     * 判断参数 NoticePolicyItemCount 是否已赋值
                     * @return NoticePolicyItemCount 是否已赋值
                     * 
                     */
                    bool NoticePolicyItemCountHasBeenSet() const;

                    /**
                     * 获取通过检测的资产的数目。
                     * @return PassedAssetCount 通过检测的资产的数目。
                     * 
                     */
                    uint64_t GetPassedAssetCount() const;

                    /**
                     * 设置通过检测的资产的数目。
                     * @param _passedAssetCount 通过检测的资产的数目。
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
                     * 获取未通过检测的资产的数目。
                     * @return FailedAssetCount 未通过检测的资产的数目。
                     * 
                     */
                    uint64_t GetFailedAssetCount() const;

                    /**
                     * 设置未通过检测的资产的数目。
                     * @param _failedAssetCount 未通过检测的资产的数目。
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
                     * 获取此类资产的合规率，0~100的数。
                     * @return AssetPassedRate 此类资产的合规率，0~100的数。
                     * 
                     */
                    double GetAssetPassedRate() const;

                    /**
                     * 设置此类资产的合规率，0~100的数。
                     * @param _assetPassedRate 此类资产的合规率，0~100的数。
                     * 
                     */
                    void SetAssetPassedRate(const double& _assetPassedRate);

                    /**
                     * 判断参数 AssetPassedRate 是否已赋值
                     * @return AssetPassedRate 是否已赋值
                     * 
                     */
                    bool AssetPassedRateHasBeenSet() const;

                    /**
                     * 获取检测失败的资产的数目。
                     * @return ScanFailedAssetCount 检测失败的资产的数目。
                     * 
                     */
                    uint64_t GetScanFailedAssetCount() const;

                    /**
                     * 设置检测失败的资产的数目。
                     * @param _scanFailedAssetCount 检测失败的资产的数目。
                     * 
                     */
                    void SetScanFailedAssetCount(const uint64_t& _scanFailedAssetCount);

                    /**
                     * 判断参数 ScanFailedAssetCount 是否已赋值
                     * @return ScanFailedAssetCount 是否已赋值
                     * 
                     */
                    bool ScanFailedAssetCountHasBeenSet() const;

                    /**
                     * 获取上次检测的耗时，单位为秒。
                     * @return CheckCostTime 上次检测的耗时，单位为秒。
                     * 
                     */
                    double GetCheckCostTime() const;

                    /**
                     * 设置上次检测的耗时，单位为秒。
                     * @param _checkCostTime 上次检测的耗时，单位为秒。
                     * 
                     */
                    void SetCheckCostTime(const double& _checkCostTime);

                    /**
                     * 判断参数 CheckCostTime 是否已赋值
                     * @return CheckCostTime 是否已赋值
                     * 
                     */
                    bool CheckCostTimeHasBeenSet() const;

                    /**
                     * 获取上次检测的时间。
                     * @return LastCheckTime 上次检测的时间。
                     * 
                     */
                    std::string GetLastCheckTime() const;

                    /**
                     * 设置上次检测的时间。
                     * @param _lastCheckTime 上次检测的时间。
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
                     * 获取定时检测规则。
                     * @return PeriodRule 定时检测规则。
                     * 
                     */
                    CompliancePeriodTaskRule GetPeriodRule() const;

                    /**
                     * 设置定时检测规则。
                     * @param _periodRule 定时检测规则。
                     * 
                     */
                    void SetPeriodRule(const CompliancePeriodTaskRule& _periodRule);

                    /**
                     * 判断参数 PeriodRule 是否已赋值
                     * @return PeriodRule 是否已赋值
                     * 
                     */
                    bool PeriodRuleHasBeenSet() const;

                    /**
                     * 获取已开启的检查项总数
                     * @return OpenPolicyItemCount 已开启的检查项总数
                     * 
                     */
                    uint64_t GetOpenPolicyItemCount() const;

                    /**
                     * 设置已开启的检查项总数
                     * @param _openPolicyItemCount 已开启的检查项总数
                     * 
                     */
                    void SetOpenPolicyItemCount(const uint64_t& _openPolicyItemCount);

                    /**
                     * 判断参数 OpenPolicyItemCount 是否已赋值
                     * @return OpenPolicyItemCount 是否已赋值
                     * 
                     */
                    bool OpenPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取已忽略的检查项总数
                     * @return IgnoredPolicyItemCount 已忽略的检查项总数
                     * 
                     */
                    uint64_t GetIgnoredPolicyItemCount() const;

                    /**
                     * 设置已忽略的检查项总数
                     * @param _ignoredPolicyItemCount 已忽略的检查项总数
                     * 
                     */
                    void SetIgnoredPolicyItemCount(const uint64_t& _ignoredPolicyItemCount);

                    /**
                     * 判断参数 IgnoredPolicyItemCount 是否已赋值
                     * @return IgnoredPolicyItemCount 是否已赋值
                     * 
                     */
                    bool IgnoredPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取总检测项数
                     * @return TotalPolicyItemCount 总检测项数
                     * 
                     */
                    uint64_t GetTotalPolicyItemCount() const;

                    /**
                     * 设置总检测项数
                     * @param _totalPolicyItemCount 总检测项数
                     * 
                     */
                    void SetTotalPolicyItemCount(const uint64_t& _totalPolicyItemCount);

                    /**
                     * 判断参数 TotalPolicyItemCount 是否已赋值
                     * @return TotalPolicyItemCount 是否已赋值
                     * 
                     */
                    bool TotalPolicyItemCountHasBeenSet() const;

                    /**
                     * 获取检测主机数
                     * @return DetectHostCount 检测主机数
                     * 
                     */
                    uint64_t GetDetectHostCount() const;

                    /**
                     * 设置检测主机数
                     * @param _detectHostCount 检测主机数
                     * 
                     */
                    void SetDetectHostCount(const uint64_t& _detectHostCount);

                    /**
                     * 判断参数 DetectHostCount 是否已赋值
                     * @return DetectHostCount 是否已赋值
                     * 
                     */
                    bool DetectHostCountHasBeenSet() const;

                    /**
                     * 获取当前任务剩余时间，单位秒
                     * @return LeftTime 当前任务剩余时间，单位秒
                     * 
                     */
                    uint64_t GetLeftTime() const;

                    /**
                     * 设置当前任务剩余时间，单位秒
                     * @param _leftTime 当前任务剩余时间，单位秒
                     * 
                     */
                    void SetLeftTime(const uint64_t& _leftTime);

                    /**
                     * 判断参数 LeftTime 是否已赋值
                     * @return LeftTime 是否已赋值
                     * 
                     */
                    bool LeftTimeHasBeenSet() const;

                private:

                    /**
                     * 资产类别。
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 是否为客户的首次检测。与CheckStatus配合使用。
                     */
                    bool m_isCustomerFirstCheck;
                    bool m_isCustomerFirstCheckHasBeenSet;

                    /**
                     * 检测状态

CHECK_UNINIT, 用户未启用此功能

CHECK_INIT, 待检测

CHECK_RUNNING, 检测中

CHECK_FINISHED, 检测完成

CHECK_FAILED, 检测失败
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * 此类别的检测进度，为 0~100 的数。若未在检测中，无此字段。
                     */
                    double m_checkProgress;
                    bool m_checkProgressHasBeenSet;

                    /**
                     * 此类资产通过的检测项的数目。
                     */
                    uint64_t m_passedPolicyItemCount;
                    bool m_passedPolicyItemCountHasBeenSet;

                    /**
                     * 此类资产未通过的检测的数目。
                     */
                    uint64_t m_failedPolicyItemCount;
                    bool m_failedPolicyItemCountHasBeenSet;

                    /**
                     * 此类资产下未通过的严重级别的检测项的数目。
                     */
                    uint64_t m_failedCriticalPolicyItemCount;
                    bool m_failedCriticalPolicyItemCountHasBeenSet;

                    /**
                     * 此类资产下未通过的高危检测项的数目。
                     */
                    uint64_t m_failedHighRiskPolicyItemCount;
                    bool m_failedHighRiskPolicyItemCountHasBeenSet;

                    /**
                     * 此类资产下未通过的中危检测项的数目。
                     */
                    uint64_t m_failedMediumRiskPolicyItemCount;
                    bool m_failedMediumRiskPolicyItemCountHasBeenSet;

                    /**
                     * 此类资产下未通过的低危检测项的数目。
                     */
                    uint64_t m_failedLowRiskPolicyItemCount;
                    bool m_failedLowRiskPolicyItemCountHasBeenSet;

                    /**
                     * 此类资产下提示级别的检测项的数目。
                     */
                    uint64_t m_noticePolicyItemCount;
                    bool m_noticePolicyItemCountHasBeenSet;

                    /**
                     * 通过检测的资产的数目。
                     */
                    uint64_t m_passedAssetCount;
                    bool m_passedAssetCountHasBeenSet;

                    /**
                     * 未通过检测的资产的数目。
                     */
                    uint64_t m_failedAssetCount;
                    bool m_failedAssetCountHasBeenSet;

                    /**
                     * 此类资产的合规率，0~100的数。
                     */
                    double m_assetPassedRate;
                    bool m_assetPassedRateHasBeenSet;

                    /**
                     * 检测失败的资产的数目。
                     */
                    uint64_t m_scanFailedAssetCount;
                    bool m_scanFailedAssetCountHasBeenSet;

                    /**
                     * 上次检测的耗时，单位为秒。
                     */
                    double m_checkCostTime;
                    bool m_checkCostTimeHasBeenSet;

                    /**
                     * 上次检测的时间。
                     */
                    std::string m_lastCheckTime;
                    bool m_lastCheckTimeHasBeenSet;

                    /**
                     * 定时检测规则。
                     */
                    CompliancePeriodTaskRule m_periodRule;
                    bool m_periodRuleHasBeenSet;

                    /**
                     * 已开启的检查项总数
                     */
                    uint64_t m_openPolicyItemCount;
                    bool m_openPolicyItemCountHasBeenSet;

                    /**
                     * 已忽略的检查项总数
                     */
                    uint64_t m_ignoredPolicyItemCount;
                    bool m_ignoredPolicyItemCountHasBeenSet;

                    /**
                     * 总检测项数
                     */
                    uint64_t m_totalPolicyItemCount;
                    bool m_totalPolicyItemCountHasBeenSet;

                    /**
                     * 检测主机数
                     */
                    uint64_t m_detectHostCount;
                    bool m_detectHostCountHasBeenSet;

                    /**
                     * 当前任务剩余时间，单位秒
                     */
                    uint64_t m_leftTime;
                    bool m_leftTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETSUMMARY_H_
