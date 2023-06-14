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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCESCANFAILEDASSET_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCESCANFAILEDASSET_H_

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
                * 表示检测失败的资产的信息。
                */
                class ComplianceScanFailedAsset : public AbstractModel
                {
                public:
                    ComplianceScanFailedAsset();
                    ~ComplianceScanFailedAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户资产的ID。
                     * @return CustomerAssetId 客户资产的ID。
                     * 
                     */
                    uint64_t GetCustomerAssetId() const;

                    /**
                     * 设置客户资产的ID。
                     * @param _customerAssetId 客户资产的ID。
                     * 
                     */
                    void SetCustomerAssetId(const uint64_t& _customerAssetId);

                    /**
                     * 判断参数 CustomerAssetId 是否已赋值
                     * @return CustomerAssetId 是否已赋值
                     * 
                     */
                    bool CustomerAssetIdHasBeenSet() const;

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
                     * 获取资产的名称。
                     * @return AssetName 资产的名称。
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产的名称。
                     * @param _assetName 资产的名称。
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取资产检测失败的原因。
                     * @return FailureReason 资产检测失败的原因。
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置资产检测失败的原因。
                     * @param _failureReason 资产检测失败的原因。
                     * 
                     */
                    void SetFailureReason(const std::string& _failureReason);

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                    /**
                     * 获取检测失败的处理建议。
                     * @return Suggestion 检测失败的处理建议。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置检测失败的处理建议。
                     * @param _suggestion 检测失败的处理建议。
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取检测的时间。
                     * @return CheckTime 检测的时间。
                     * 
                     */
                    std::string GetCheckTime() const;

                    /**
                     * 设置检测的时间。
                     * @param _checkTime 检测的时间。
                     * 
                     */
                    void SetCheckTime(const std::string& _checkTime);

                    /**
                     * 判断参数 CheckTime 是否已赋值
                     * @return CheckTime 是否已赋值
                     * 
                     */
                    bool CheckTimeHasBeenSet() const;

                private:

                    /**
                     * 客户资产的ID。
                     */
                    uint64_t m_customerAssetId;
                    bool m_customerAssetIdHasBeenSet;

                    /**
                     * 资产类别。
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

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
                     * 资产的名称。
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 资产检测失败的原因。
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * 检测失败的处理建议。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 检测的时间。
                     */
                    std::string m_checkTime;
                    bool m_checkTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCESCANFAILEDASSET_H_
