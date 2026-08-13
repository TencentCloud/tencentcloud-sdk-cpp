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

#include <tencentcloud/csip/v20221121/model/EDRScanTaskHostItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

EDRScanTaskHostItem::EDRScanTaskHostItem() :
    m_quuidHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_fixSuggestionHasBeenSet(false)
{
}

CoreInternalOutcome EDRScanTaskHostItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.OsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osType = string(value["OsType"].GetString());
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.RiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetInt64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("FixSuggestion") && !value["FixSuggestion"].IsNull())
    {
        if (!value["FixSuggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskHostItem.FixSuggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixSuggestion = string(value["FixSuggestion"].GetString());
        m_fixSuggestionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EDRScanTaskHostItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osType.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_fixSuggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixSuggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixSuggestion.c_str(), allocator).Move(), allocator);
    }

}


string EDRScanTaskHostItem::GetQuuid() const
{
    return m_quuid;
}

void EDRScanTaskHostItem::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool EDRScanTaskHostItem::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string EDRScanTaskHostItem::GetHostName() const
{
    return m_hostName;
}

void EDRScanTaskHostItem::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool EDRScanTaskHostItem::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string EDRScanTaskHostItem::GetInstanceId() const
{
    return m_instanceId;
}

void EDRScanTaskHostItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EDRScanTaskHostItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string EDRScanTaskHostItem::GetPublicIp() const
{
    return m_publicIp;
}

void EDRScanTaskHostItem::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool EDRScanTaskHostItem::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string EDRScanTaskHostItem::GetPrivateIp() const
{
    return m_privateIp;
}

void EDRScanTaskHostItem::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool EDRScanTaskHostItem::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string EDRScanTaskHostItem::GetOsType() const
{
    return m_osType;
}

void EDRScanTaskHostItem::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool EDRScanTaskHostItem::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string EDRScanTaskHostItem::GetAccountName() const
{
    return m_accountName;
}

void EDRScanTaskHostItem::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool EDRScanTaskHostItem::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

uint64_t EDRScanTaskHostItem::GetAppId() const
{
    return m_appId;
}

void EDRScanTaskHostItem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool EDRScanTaskHostItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t EDRScanTaskHostItem::GetCloudType() const
{
    return m_cloudType;
}

void EDRScanTaskHostItem::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool EDRScanTaskHostItem::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

string EDRScanTaskHostItem::GetStatus() const
{
    return m_status;
}

void EDRScanTaskHostItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EDRScanTaskHostItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t EDRScanTaskHostItem::GetRiskCount() const
{
    return m_riskCount;
}

void EDRScanTaskHostItem::SetRiskCount(const int64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool EDRScanTaskHostItem::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

string EDRScanTaskHostItem::GetFailReason() const
{
    return m_failReason;
}

void EDRScanTaskHostItem::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool EDRScanTaskHostItem::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string EDRScanTaskHostItem::GetFixSuggestion() const
{
    return m_fixSuggestion;
}

void EDRScanTaskHostItem::SetFixSuggestion(const string& _fixSuggestion)
{
    m_fixSuggestion = _fixSuggestion;
    m_fixSuggestionHasBeenSet = true;
}

bool EDRScanTaskHostItem::FixSuggestionHasBeenSet() const
{
    return m_fixSuggestionHasBeenSet;
}

