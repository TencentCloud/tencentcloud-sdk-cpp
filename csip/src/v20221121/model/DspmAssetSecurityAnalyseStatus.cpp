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

#include <tencentcloud/csip/v20221121/model/DspmAssetSecurityAnalyseStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAssetSecurityAnalyseStatus::DspmAssetSecurityAnalyseStatus() :
    m_appIdHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_identifyScanSupportedHasBeenSet(false),
    m_logDeliverySupportedHasBeenSet(false),
    m_securityAnalyseStatusHasBeenSet(false),
    m_logDeliveryStatusHasBeenSet(false),
    m_logDeliveryDisableReasonHasBeenSet(false),
    m_totalAuditLogsHasBeenSet(false),
    m_dataScanDetailRuleCountHasBeenSet(false),
    m_operationErrorMsgHasBeenSet(false)
{
}

CoreInternalOutcome DspmAssetSecurityAnalyseStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetSecurityAnalyseStatus.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetSecurityAnalyseStatus.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetSecurityAnalyseStatus.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetSecurityAnalyseStatus.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("IdentifyScanSupported") && !value["IdentifyScanSupported"].IsNull())
    {
        if (!value["IdentifyScanSupported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetSecurityAnalyseStatus.IdentifyScanSupported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyScanSupported = value["IdentifyScanSupported"].GetInt64();
        m_identifyScanSupportedHasBeenSet = true;
    }

    if (value.HasMember("LogDeliverySupported") && !value["LogDeliverySupported"].IsNull())
    {
        if (!value["LogDeliverySupported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetSecurityAnalyseStatus.LogDeliverySupported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logDeliverySupported = value["LogDeliverySupported"].GetInt64();
        m_logDeliverySupportedHasBeenSet = true;
    }

    if (value.HasMember("SecurityAnalyseStatus") && !value["SecurityAnalyseStatus"].IsNull())
    {
        if (!value["SecurityAnalyseStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetSecurityAnalyseStatus.SecurityAnalyseStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_securityAnalyseStatus = value["SecurityAnalyseStatus"].GetInt64();
        m_securityAnalyseStatusHasBeenSet = true;
    }

    if (value.HasMember("LogDeliveryStatus") && !value["LogDeliveryStatus"].IsNull())
    {
        if (!value["LogDeliveryStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetSecurityAnalyseStatus.LogDeliveryStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logDeliveryStatus = value["LogDeliveryStatus"].GetInt64();
        m_logDeliveryStatusHasBeenSet = true;
    }

    if (value.HasMember("LogDeliveryDisableReason") && !value["LogDeliveryDisableReason"].IsNull())
    {
        if (!value["LogDeliveryDisableReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetSecurityAnalyseStatus.LogDeliveryDisableReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logDeliveryDisableReason = string(value["LogDeliveryDisableReason"].GetString());
        m_logDeliveryDisableReasonHasBeenSet = true;
    }

    if (value.HasMember("TotalAuditLogs") && !value["TotalAuditLogs"].IsNull())
    {
        if (!value["TotalAuditLogs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetSecurityAnalyseStatus.TotalAuditLogs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAuditLogs = value["TotalAuditLogs"].GetUint64();
        m_totalAuditLogsHasBeenSet = true;
    }

    if (value.HasMember("DataScanDetailRuleCount") && !value["DataScanDetailRuleCount"].IsNull())
    {
        if (!value["DataScanDetailRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetSecurityAnalyseStatus.DataScanDetailRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataScanDetailRuleCount = value["DataScanDetailRuleCount"].GetUint64();
        m_dataScanDetailRuleCountHasBeenSet = true;
    }

    if (value.HasMember("OperationErrorMsg") && !value["OperationErrorMsg"].IsNull())
    {
        if (!value["OperationErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAssetSecurityAnalyseStatus.OperationErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationErrorMsg = string(value["OperationErrorMsg"].GetString());
        m_operationErrorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAssetSecurityAnalyseStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyScanSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyScanSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyScanSupported, allocator);
    }

    if (m_logDeliverySupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDeliverySupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logDeliverySupported, allocator);
    }

    if (m_securityAnalyseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityAnalyseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_securityAnalyseStatus, allocator);
    }

    if (m_logDeliveryStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDeliveryStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logDeliveryStatus, allocator);
    }

    if (m_logDeliveryDisableReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDeliveryDisableReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logDeliveryDisableReason.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAuditLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAuditLogs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAuditLogs, allocator);
    }

    if (m_dataScanDetailRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataScanDetailRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataScanDetailRuleCount, allocator);
    }

    if (m_operationErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationErrorMsg.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DspmAssetSecurityAnalyseStatus::GetAppId() const
{
    return m_appId;
}

void DspmAssetSecurityAnalyseStatus::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DspmAssetSecurityAnalyseStatus::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DspmAssetSecurityAnalyseStatus::GetAssetId() const
{
    return m_assetId;
}

void DspmAssetSecurityAnalyseStatus::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmAssetSecurityAnalyseStatus::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DspmAssetSecurityAnalyseStatus::GetAssetType() const
{
    return m_assetType;
}

void DspmAssetSecurityAnalyseStatus::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DspmAssetSecurityAnalyseStatus::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string DspmAssetSecurityAnalyseStatus::GetRegion() const
{
    return m_region;
}

void DspmAssetSecurityAnalyseStatus::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DspmAssetSecurityAnalyseStatus::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t DspmAssetSecurityAnalyseStatus::GetIdentifyScanSupported() const
{
    return m_identifyScanSupported;
}

void DspmAssetSecurityAnalyseStatus::SetIdentifyScanSupported(const int64_t& _identifyScanSupported)
{
    m_identifyScanSupported = _identifyScanSupported;
    m_identifyScanSupportedHasBeenSet = true;
}

bool DspmAssetSecurityAnalyseStatus::IdentifyScanSupportedHasBeenSet() const
{
    return m_identifyScanSupportedHasBeenSet;
}

int64_t DspmAssetSecurityAnalyseStatus::GetLogDeliverySupported() const
{
    return m_logDeliverySupported;
}

void DspmAssetSecurityAnalyseStatus::SetLogDeliverySupported(const int64_t& _logDeliverySupported)
{
    m_logDeliverySupported = _logDeliverySupported;
    m_logDeliverySupportedHasBeenSet = true;
}

bool DspmAssetSecurityAnalyseStatus::LogDeliverySupportedHasBeenSet() const
{
    return m_logDeliverySupportedHasBeenSet;
}

int64_t DspmAssetSecurityAnalyseStatus::GetSecurityAnalyseStatus() const
{
    return m_securityAnalyseStatus;
}

void DspmAssetSecurityAnalyseStatus::SetSecurityAnalyseStatus(const int64_t& _securityAnalyseStatus)
{
    m_securityAnalyseStatus = _securityAnalyseStatus;
    m_securityAnalyseStatusHasBeenSet = true;
}

bool DspmAssetSecurityAnalyseStatus::SecurityAnalyseStatusHasBeenSet() const
{
    return m_securityAnalyseStatusHasBeenSet;
}

int64_t DspmAssetSecurityAnalyseStatus::GetLogDeliveryStatus() const
{
    return m_logDeliveryStatus;
}

void DspmAssetSecurityAnalyseStatus::SetLogDeliveryStatus(const int64_t& _logDeliveryStatus)
{
    m_logDeliveryStatus = _logDeliveryStatus;
    m_logDeliveryStatusHasBeenSet = true;
}

bool DspmAssetSecurityAnalyseStatus::LogDeliveryStatusHasBeenSet() const
{
    return m_logDeliveryStatusHasBeenSet;
}

string DspmAssetSecurityAnalyseStatus::GetLogDeliveryDisableReason() const
{
    return m_logDeliveryDisableReason;
}

void DspmAssetSecurityAnalyseStatus::SetLogDeliveryDisableReason(const string& _logDeliveryDisableReason)
{
    m_logDeliveryDisableReason = _logDeliveryDisableReason;
    m_logDeliveryDisableReasonHasBeenSet = true;
}

bool DspmAssetSecurityAnalyseStatus::LogDeliveryDisableReasonHasBeenSet() const
{
    return m_logDeliveryDisableReasonHasBeenSet;
}

uint64_t DspmAssetSecurityAnalyseStatus::GetTotalAuditLogs() const
{
    return m_totalAuditLogs;
}

void DspmAssetSecurityAnalyseStatus::SetTotalAuditLogs(const uint64_t& _totalAuditLogs)
{
    m_totalAuditLogs = _totalAuditLogs;
    m_totalAuditLogsHasBeenSet = true;
}

bool DspmAssetSecurityAnalyseStatus::TotalAuditLogsHasBeenSet() const
{
    return m_totalAuditLogsHasBeenSet;
}

uint64_t DspmAssetSecurityAnalyseStatus::GetDataScanDetailRuleCount() const
{
    return m_dataScanDetailRuleCount;
}

void DspmAssetSecurityAnalyseStatus::SetDataScanDetailRuleCount(const uint64_t& _dataScanDetailRuleCount)
{
    m_dataScanDetailRuleCount = _dataScanDetailRuleCount;
    m_dataScanDetailRuleCountHasBeenSet = true;
}

bool DspmAssetSecurityAnalyseStatus::DataScanDetailRuleCountHasBeenSet() const
{
    return m_dataScanDetailRuleCountHasBeenSet;
}

string DspmAssetSecurityAnalyseStatus::GetOperationErrorMsg() const
{
    return m_operationErrorMsg;
}

void DspmAssetSecurityAnalyseStatus::SetOperationErrorMsg(const string& _operationErrorMsg)
{
    m_operationErrorMsg = _operationErrorMsg;
    m_operationErrorMsgHasBeenSet = true;
}

bool DspmAssetSecurityAnalyseStatus::OperationErrorMsgHasBeenSet() const
{
    return m_operationErrorMsgHasBeenSet;
}

