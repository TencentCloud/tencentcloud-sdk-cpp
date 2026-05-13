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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETSECURITYANALYSESTATUS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETSECURITYANALYSESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm资产安全分析状态
                */
                class DspmAssetSecurityAnalyseStatus : public AbstractModel
                {
                public:
                    DspmAssetSecurityAnalyseStatus();
                    ~DspmAssetSecurityAnalyseStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产所属账号app id
                     * @return AppId 资产所属账号app id
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置资产所属账号app id
                     * @param _appId 资产所属账号app id
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取资产实例Id
                     * @return AssetId 资产实例Id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产实例Id
                     * @param _assetId 资产实例Id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取是否支持敏感数据识别。0 不支持；1 支持
                     * @return IdentifyScanSupported 是否支持敏感数据识别。0 不支持；1 支持
                     * 
                     */
                    int64_t GetIdentifyScanSupported() const;

                    /**
                     * 设置是否支持敏感数据识别。0 不支持；1 支持
                     * @param _identifyScanSupported 是否支持敏感数据识别。0 不支持；1 支持
                     * 
                     */
                    void SetIdentifyScanSupported(const int64_t& _identifyScanSupported);

                    /**
                     * 判断参数 IdentifyScanSupported 是否已赋值
                     * @return IdentifyScanSupported 是否已赋值
                     * 
                     */
                    bool IdentifyScanSupportedHasBeenSet() const;

                    /**
                     * 获取是否支持日志投递。0-不支持 1-支持
                     * @return LogDeliverySupported 是否支持日志投递。0-不支持 1-支持
                     * 
                     */
                    int64_t GetLogDeliverySupported() const;

                    /**
                     * 设置是否支持日志投递。0-不支持 1-支持
                     * @param _logDeliverySupported 是否支持日志投递。0-不支持 1-支持
                     * 
                     */
                    void SetLogDeliverySupported(const int64_t& _logDeliverySupported);

                    /**
                     * 判断参数 LogDeliverySupported 是否已赋值
                     * @return LogDeliverySupported 是否已赋值
                     * 
                     */
                    bool LogDeliverySupportedHasBeenSet() const;

                    /**
                     * 获取安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）

                     * @return SecurityAnalyseStatus 安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）

                     * 
                     */
                    int64_t GetSecurityAnalyseStatus() const;

                    /**
                     * 设置安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）

                     * @param _securityAnalyseStatus 安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）

                     * 
                     */
                    void SetSecurityAnalyseStatus(const int64_t& _securityAnalyseStatus);

                    /**
                     * 判断参数 SecurityAnalyseStatus 是否已赋值
                     * @return SecurityAnalyseStatus 是否已赋值
                     * 
                     */
                    bool SecurityAnalyseStatusHasBeenSet() const;

                    /**
                     * 获取日志投递状态。
0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中
                     * @return LogDeliveryStatus 日志投递状态。
0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中
                     * 
                     */
                    int64_t GetLogDeliveryStatus() const;

                    /**
                     * 设置日志投递状态。
0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中
                     * @param _logDeliveryStatus 日志投递状态。
0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中
                     * 
                     */
                    void SetLogDeliveryStatus(const int64_t& _logDeliveryStatus);

                    /**
                     * 判断参数 LogDeliveryStatus 是否已赋值
                     * @return LogDeliveryStatus 是否已赋值
                     * 
                     */
                    bool LogDeliveryStatusHasBeenSet() const;

                    /**
                     * 获取日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading,CdbRuleAuditEnabled
                     * @return LogDeliveryDisableReason 日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading,CdbRuleAuditEnabled
                     * 
                     */
                    std::string GetLogDeliveryDisableReason() const;

                    /**
                     * 设置日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading,CdbRuleAuditEnabled
                     * @param _logDeliveryDisableReason 日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading,CdbRuleAuditEnabled
                     * 
                     */
                    void SetLogDeliveryDisableReason(const std::string& _logDeliveryDisableReason);

                    /**
                     * 判断参数 LogDeliveryDisableReason 是否已赋值
                     * @return LogDeliveryDisableReason 是否已赋值
                     * 
                     */
                    bool LogDeliveryDisableReasonHasBeenSet() const;

                    /**
                     * 获取当前实例的总日志数
                     * @return TotalAuditLogs 当前实例的总日志数
                     * 
                     */
                    uint64_t GetTotalAuditLogs() const;

                    /**
                     * 设置当前实例的总日志数
                     * @param _totalAuditLogs 当前实例的总日志数
                     * 
                     */
                    void SetTotalAuditLogs(const uint64_t& _totalAuditLogs);

                    /**
                     * 判断参数 TotalAuditLogs 是否已赋值
                     * @return TotalAuditLogs 是否已赋值
                     * 
                     */
                    bool TotalAuditLogsHasBeenSet() const;

                    /**
                     * 获取已识别敏感数据项个数
                     * @return DataScanDetailRuleCount 已识别敏感数据项个数
                     * 
                     */
                    uint64_t GetDataScanDetailRuleCount() const;

                    /**
                     * 设置已识别敏感数据项个数
                     * @param _dataScanDetailRuleCount 已识别敏感数据项个数
                     * 
                     */
                    void SetDataScanDetailRuleCount(const uint64_t& _dataScanDetailRuleCount);

                    /**
                     * 判断参数 DataScanDetailRuleCount 是否已赋值
                     * @return DataScanDetailRuleCount 是否已赋值
                     * 
                     */
                    bool DataScanDetailRuleCountHasBeenSet() const;

                    /**
                     * 获取操作错误信息
                     * @return OperationErrorMsg 操作错误信息
                     * 
                     */
                    std::string GetOperationErrorMsg() const;

                    /**
                     * 设置操作错误信息
                     * @param _operationErrorMsg 操作错误信息
                     * 
                     */
                    void SetOperationErrorMsg(const std::string& _operationErrorMsg);

                    /**
                     * 判断参数 OperationErrorMsg 是否已赋值
                     * @return OperationErrorMsg 是否已赋值
                     * 
                     */
                    bool OperationErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 资产所属账号app id
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 资产实例Id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 是否支持敏感数据识别。0 不支持；1 支持
                     */
                    int64_t m_identifyScanSupported;
                    bool m_identifyScanSupportedHasBeenSet;

                    /**
                     * 是否支持日志投递。0-不支持 1-支持
                     */
                    int64_t m_logDeliverySupported;
                    bool m_logDeliverySupportedHasBeenSet;

                    /**
                     * 安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）

                     */
                    int64_t m_securityAnalyseStatus;
                    bool m_securityAnalyseStatusHasBeenSet;

                    /**
                     * 日志投递状态。
0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中
                     */
                    int64_t m_logDeliveryStatus;
                    bool m_logDeliveryStatusHasBeenSet;

                    /**
                     * 日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading,CdbRuleAuditEnabled
                     */
                    std::string m_logDeliveryDisableReason;
                    bool m_logDeliveryDisableReasonHasBeenSet;

                    /**
                     * 当前实例的总日志数
                     */
                    uint64_t m_totalAuditLogs;
                    bool m_totalAuditLogsHasBeenSet;

                    /**
                     * 已识别敏感数据项个数
                     */
                    uint64_t m_dataScanDetailRuleCount;
                    bool m_dataScanDetailRuleCountHasBeenSet;

                    /**
                     * 操作错误信息
                     */
                    std::string m_operationErrorMsg;
                    bool m_operationErrorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETSECURITYANALYSESTATUS_H_
