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

#include <tencentcloud/csip/v20221121/model/EDRScanTaskContainerItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

EDRScanTaskContainerItem::EDRScanTaskContainerItem() :
    m_containerIDHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_fixSuggestionHasBeenSet(false)
{
}

CoreInternalOutcome EDRScanTaskContainerItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContainerID") && !value["ContainerID"].IsNull())
    {
        if (!value["ContainerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.ContainerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerID = string(value["ContainerID"].GetString());
        m_containerIDHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.RiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetInt64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("FixSuggestion") && !value["FixSuggestion"].IsNull())
    {
        if (!value["FixSuggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EDRScanTaskContainerItem.FixSuggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixSuggestion = string(value["FixSuggestion"].GetString());
        m_fixSuggestionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EDRScanTaskContainerItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerID.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
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


string EDRScanTaskContainerItem::GetContainerID() const
{
    return m_containerID;
}

void EDRScanTaskContainerItem::SetContainerID(const string& _containerID)
{
    m_containerID = _containerID;
    m_containerIDHasBeenSet = true;
}

bool EDRScanTaskContainerItem::ContainerIDHasBeenSet() const
{
    return m_containerIDHasBeenSet;
}

string EDRScanTaskContainerItem::GetContainerName() const
{
    return m_containerName;
}

void EDRScanTaskContainerItem::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool EDRScanTaskContainerItem::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string EDRScanTaskContainerItem::GetPodName() const
{
    return m_podName;
}

void EDRScanTaskContainerItem::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool EDRScanTaskContainerItem::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string EDRScanTaskContainerItem::GetClusterID() const
{
    return m_clusterID;
}

void EDRScanTaskContainerItem::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool EDRScanTaskContainerItem::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string EDRScanTaskContainerItem::GetClusterName() const
{
    return m_clusterName;
}

void EDRScanTaskContainerItem::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool EDRScanTaskContainerItem::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string EDRScanTaskContainerItem::GetClusterType() const
{
    return m_clusterType;
}

void EDRScanTaskContainerItem::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool EDRScanTaskContainerItem::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string EDRScanTaskContainerItem::GetAccountName() const
{
    return m_accountName;
}

void EDRScanTaskContainerItem::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool EDRScanTaskContainerItem::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

uint64_t EDRScanTaskContainerItem::GetAppId() const
{
    return m_appId;
}

void EDRScanTaskContainerItem::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool EDRScanTaskContainerItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t EDRScanTaskContainerItem::GetCloudType() const
{
    return m_cloudType;
}

void EDRScanTaskContainerItem::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool EDRScanTaskContainerItem::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

string EDRScanTaskContainerItem::GetStatus() const
{
    return m_status;
}

void EDRScanTaskContainerItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EDRScanTaskContainerItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t EDRScanTaskContainerItem::GetRiskCount() const
{
    return m_riskCount;
}

void EDRScanTaskContainerItem::SetRiskCount(const int64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool EDRScanTaskContainerItem::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

string EDRScanTaskContainerItem::GetFailReason() const
{
    return m_failReason;
}

void EDRScanTaskContainerItem::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool EDRScanTaskContainerItem::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string EDRScanTaskContainerItem::GetFixSuggestion() const
{
    return m_fixSuggestion;
}

void EDRScanTaskContainerItem::SetFixSuggestion(const string& _fixSuggestion)
{
    m_fixSuggestion = _fixSuggestion;
    m_fixSuggestionHasBeenSet = true;
}

bool EDRScanTaskContainerItem::FixSuggestionHasBeenSet() const
{
    return m_fixSuggestionHasBeenSet;
}

