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

#include <tencentcloud/tcss/v20201101/model/ComplianceAssetDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ComplianceAssetDetailInfo::ComplianceAssetDetailInfo() :
    m_customerAssetIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_passedPolicyItemCountHasBeenSet(false),
    m_failedPolicyItemCountHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false),
    m_checkResultHasBeenSet(false),
    m_assetStatusHasBeenSet(false),
    m_assetCreateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceAssetDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerAssetId") && !value["CustomerAssetId"].IsNull())
    {
        if (!value["CustomerAssetId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.CustomerAssetId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customerAssetId = value["CustomerAssetId"].GetUint64();
        m_customerAssetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.CheckStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = string(value["CheckStatus"].GetString());
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("PassedPolicyItemCount") && !value["PassedPolicyItemCount"].IsNull())
    {
        if (!value["PassedPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.PassedPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_passedPolicyItemCount = value["PassedPolicyItemCount"].GetUint64();
        m_passedPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("FailedPolicyItemCount") && !value["FailedPolicyItemCount"].IsNull())
    {
        if (!value["FailedPolicyItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.FailedPolicyItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failedPolicyItemCount = value["FailedPolicyItemCount"].GetUint64();
        m_failedPolicyItemCountHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.CheckResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkResult = string(value["CheckResult"].GetString());
        m_checkResultHasBeenSet = true;
    }

    if (value.HasMember("AssetStatus") && !value["AssetStatus"].IsNull())
    {
        if (!value["AssetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.AssetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetStatus = string(value["AssetStatus"].GetString());
        m_assetStatusHasBeenSet = true;
    }

    if (value.HasMember("AssetCreateTime") && !value["AssetCreateTime"].IsNull())
    {
        if (!value["AssetCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceAssetDetailInfo.AssetCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetCreateTime = string(value["AssetCreateTime"].GetString());
        m_assetCreateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceAssetDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerAssetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerAssetId, allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_passedPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassedPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passedPolicyItemCount, allocator);
    }

    if (m_failedPolicyItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedPolicyItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedPolicyItemCount, allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_checkResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkResult.c_str(), allocator).Move(), allocator);
    }

    if (m_assetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_assetCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetCreateTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ComplianceAssetDetailInfo::GetCustomerAssetId() const
{
    return m_customerAssetId;
}

void ComplianceAssetDetailInfo::SetCustomerAssetId(const uint64_t& _customerAssetId)
{
    m_customerAssetId = _customerAssetId;
    m_customerAssetIdHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::CustomerAssetIdHasBeenSet() const
{
    return m_customerAssetIdHasBeenSet;
}

string ComplianceAssetDetailInfo::GetAssetType() const
{
    return m_assetType;
}

void ComplianceAssetDetailInfo::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string ComplianceAssetDetailInfo::GetAssetName() const
{
    return m_assetName;
}

void ComplianceAssetDetailInfo::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string ComplianceAssetDetailInfo::GetNodeName() const
{
    return m_nodeName;
}

void ComplianceAssetDetailInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string ComplianceAssetDetailInfo::GetHostName() const
{
    return m_hostName;
}

void ComplianceAssetDetailInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string ComplianceAssetDetailInfo::GetHostIP() const
{
    return m_hostIP;
}

void ComplianceAssetDetailInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string ComplianceAssetDetailInfo::GetCheckStatus() const
{
    return m_checkStatus;
}

void ComplianceAssetDetailInfo::SetCheckStatus(const string& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

uint64_t ComplianceAssetDetailInfo::GetPassedPolicyItemCount() const
{
    return m_passedPolicyItemCount;
}

void ComplianceAssetDetailInfo::SetPassedPolicyItemCount(const uint64_t& _passedPolicyItemCount)
{
    m_passedPolicyItemCount = _passedPolicyItemCount;
    m_passedPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::PassedPolicyItemCountHasBeenSet() const
{
    return m_passedPolicyItemCountHasBeenSet;
}

uint64_t ComplianceAssetDetailInfo::GetFailedPolicyItemCount() const
{
    return m_failedPolicyItemCount;
}

void ComplianceAssetDetailInfo::SetFailedPolicyItemCount(const uint64_t& _failedPolicyItemCount)
{
    m_failedPolicyItemCount = _failedPolicyItemCount;
    m_failedPolicyItemCountHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::FailedPolicyItemCountHasBeenSet() const
{
    return m_failedPolicyItemCountHasBeenSet;
}

string ComplianceAssetDetailInfo::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void ComplianceAssetDetailInfo::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

string ComplianceAssetDetailInfo::GetCheckResult() const
{
    return m_checkResult;
}

void ComplianceAssetDetailInfo::SetCheckResult(const string& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

string ComplianceAssetDetailInfo::GetAssetStatus() const
{
    return m_assetStatus;
}

void ComplianceAssetDetailInfo::SetAssetStatus(const string& _assetStatus)
{
    m_assetStatus = _assetStatus;
    m_assetStatusHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::AssetStatusHasBeenSet() const
{
    return m_assetStatusHasBeenSet;
}

string ComplianceAssetDetailInfo::GetAssetCreateTime() const
{
    return m_assetCreateTime;
}

void ComplianceAssetDetailInfo::SetAssetCreateTime(const string& _assetCreateTime)
{
    m_assetCreateTime = _assetCreateTime;
    m_assetCreateTimeHasBeenSet = true;
}

bool ComplianceAssetDetailInfo::AssetCreateTimeHasBeenSet() const
{
    return m_assetCreateTimeHasBeenSet;
}

