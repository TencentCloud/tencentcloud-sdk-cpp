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

#include <tencentcloud/tcss/v20201101/model/ClusterInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ClusterInfoItem::ClusterInfoItem() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_clusterOsHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterNodeNumHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_defenderStatusHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_clusterCheckModeHasBeenSet(false),
    m_clusterAutoCheckHasBeenSet(false),
    m_defenderErrorReasonHasBeenSet(false),
    m_unreadyNodeNumHasBeenSet(false),
    m_seriousRiskCountHasBeenSet(false),
    m_highRiskCountHasBeenSet(false),
    m_middleRiskCountHasBeenSet(false),
    m_hintRiskCountHasBeenSet(false),
    m_checkFailReasonHasBeenSet(false),
    m_checkStatusHasBeenSet(false),
    m_taskCreateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ClusterInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterOs") && !value["ClusterOs"].IsNull())
    {
        if (!value["ClusterOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.ClusterOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterOs = string(value["ClusterOs"].GetString());
        m_clusterOsHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterNodeNum") && !value["ClusterNodeNum"].IsNull())
    {
        if (!value["ClusterNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.ClusterNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterNodeNum = value["ClusterNodeNum"].GetUint64();
        m_clusterNodeNumHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("DefenderStatus") && !value["DefenderStatus"].IsNull())
    {
        if (!value["DefenderStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.DefenderStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenderStatus = string(value["DefenderStatus"].GetString());
        m_defenderStatusHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(value["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("ClusterCheckMode") && !value["ClusterCheckMode"].IsNull())
    {
        if (!value["ClusterCheckMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.ClusterCheckMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCheckMode = string(value["ClusterCheckMode"].GetString());
        m_clusterCheckModeHasBeenSet = true;
    }

    if (value.HasMember("ClusterAutoCheck") && !value["ClusterAutoCheck"].IsNull())
    {
        if (!value["ClusterAutoCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.ClusterAutoCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_clusterAutoCheck = value["ClusterAutoCheck"].GetBool();
        m_clusterAutoCheckHasBeenSet = true;
    }

    if (value.HasMember("DefenderErrorReason") && !value["DefenderErrorReason"].IsNull())
    {
        if (!value["DefenderErrorReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.DefenderErrorReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenderErrorReason = string(value["DefenderErrorReason"].GetString());
        m_defenderErrorReasonHasBeenSet = true;
    }

    if (value.HasMember("UnreadyNodeNum") && !value["UnreadyNodeNum"].IsNull())
    {
        if (!value["UnreadyNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.UnreadyNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unreadyNodeNum = value["UnreadyNodeNum"].GetUint64();
        m_unreadyNodeNumHasBeenSet = true;
    }

    if (value.HasMember("SeriousRiskCount") && !value["SeriousRiskCount"].IsNull())
    {
        if (!value["SeriousRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.SeriousRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seriousRiskCount = value["SeriousRiskCount"].GetInt64();
        m_seriousRiskCountHasBeenSet = true;
    }

    if (value.HasMember("HighRiskCount") && !value["HighRiskCount"].IsNull())
    {
        if (!value["HighRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.HighRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskCount = value["HighRiskCount"].GetInt64();
        m_highRiskCountHasBeenSet = true;
    }

    if (value.HasMember("MiddleRiskCount") && !value["MiddleRiskCount"].IsNull())
    {
        if (!value["MiddleRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.MiddleRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_middleRiskCount = value["MiddleRiskCount"].GetInt64();
        m_middleRiskCountHasBeenSet = true;
    }

    if (value.HasMember("HintRiskCount") && !value["HintRiskCount"].IsNull())
    {
        if (!value["HintRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.HintRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hintRiskCount = value["HintRiskCount"].GetInt64();
        m_hintRiskCountHasBeenSet = true;
    }

    if (value.HasMember("CheckFailReason") && !value["CheckFailReason"].IsNull())
    {
        if (!value["CheckFailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.CheckFailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkFailReason = string(value["CheckFailReason"].GetString());
        m_checkFailReasonHasBeenSet = true;
    }

    if (value.HasMember("CheckStatus") && !value["CheckStatus"].IsNull())
    {
        if (!value["CheckStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.CheckStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkStatus = string(value["CheckStatus"].GetString());
        m_checkStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskCreateTime") && !value["TaskCreateTime"].IsNull())
    {
        if (!value["TaskCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInfoItem.TaskCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCreateTime = string(value["TaskCreateTime"].GetString());
        m_taskCreateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterOs.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterNodeNum, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_defenderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defenderStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterCheckModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCheckMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterCheckMode.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterAutoCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterAutoCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterAutoCheck, allocator);
    }

    if (m_defenderErrorReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenderErrorReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defenderErrorReason.c_str(), allocator).Move(), allocator);
    }

    if (m_unreadyNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnreadyNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unreadyNodeNum, allocator);
    }

    if (m_seriousRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriousRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seriousRiskCount, allocator);
    }

    if (m_highRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskCount, allocator);
    }

    if (m_middleRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_middleRiskCount, allocator);
    }

    if (m_hintRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HintRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hintRiskCount, allocator);
    }

    if (m_checkFailReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckFailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkFailReason.c_str(), allocator).Move(), allocator);
    }

    if (m_checkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_taskCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCreateTime.c_str(), allocator).Move(), allocator);
    }

}


string ClusterInfoItem::GetClusterId() const
{
    return m_clusterId;
}

void ClusterInfoItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterInfoItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterInfoItem::GetClusterName() const
{
    return m_clusterName;
}

void ClusterInfoItem::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterInfoItem::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ClusterInfoItem::GetClusterVersion() const
{
    return m_clusterVersion;
}

void ClusterInfoItem::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool ClusterInfoItem::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

string ClusterInfoItem::GetClusterOs() const
{
    return m_clusterOs;
}

void ClusterInfoItem::SetClusterOs(const string& _clusterOs)
{
    m_clusterOs = _clusterOs;
    m_clusterOsHasBeenSet = true;
}

bool ClusterInfoItem::ClusterOsHasBeenSet() const
{
    return m_clusterOsHasBeenSet;
}

string ClusterInfoItem::GetClusterType() const
{
    return m_clusterType;
}

void ClusterInfoItem::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ClusterInfoItem::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

uint64_t ClusterInfoItem::GetClusterNodeNum() const
{
    return m_clusterNodeNum;
}

void ClusterInfoItem::SetClusterNodeNum(const uint64_t& _clusterNodeNum)
{
    m_clusterNodeNum = _clusterNodeNum;
    m_clusterNodeNumHasBeenSet = true;
}

bool ClusterInfoItem::ClusterNodeNumHasBeenSet() const
{
    return m_clusterNodeNumHasBeenSet;
}

string ClusterInfoItem::GetRegion() const
{
    return m_region;
}

void ClusterInfoItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ClusterInfoItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ClusterInfoItem::GetDefenderStatus() const
{
    return m_defenderStatus;
}

void ClusterInfoItem::SetDefenderStatus(const string& _defenderStatus)
{
    m_defenderStatus = _defenderStatus;
    m_defenderStatusHasBeenSet = true;
}

bool ClusterInfoItem::DefenderStatusHasBeenSet() const
{
    return m_defenderStatusHasBeenSet;
}

string ClusterInfoItem::GetClusterStatus() const
{
    return m_clusterStatus;
}

void ClusterInfoItem::SetClusterStatus(const string& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool ClusterInfoItem::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

string ClusterInfoItem::GetClusterCheckMode() const
{
    return m_clusterCheckMode;
}

void ClusterInfoItem::SetClusterCheckMode(const string& _clusterCheckMode)
{
    m_clusterCheckMode = _clusterCheckMode;
    m_clusterCheckModeHasBeenSet = true;
}

bool ClusterInfoItem::ClusterCheckModeHasBeenSet() const
{
    return m_clusterCheckModeHasBeenSet;
}

bool ClusterInfoItem::GetClusterAutoCheck() const
{
    return m_clusterAutoCheck;
}

void ClusterInfoItem::SetClusterAutoCheck(const bool& _clusterAutoCheck)
{
    m_clusterAutoCheck = _clusterAutoCheck;
    m_clusterAutoCheckHasBeenSet = true;
}

bool ClusterInfoItem::ClusterAutoCheckHasBeenSet() const
{
    return m_clusterAutoCheckHasBeenSet;
}

string ClusterInfoItem::GetDefenderErrorReason() const
{
    return m_defenderErrorReason;
}

void ClusterInfoItem::SetDefenderErrorReason(const string& _defenderErrorReason)
{
    m_defenderErrorReason = _defenderErrorReason;
    m_defenderErrorReasonHasBeenSet = true;
}

bool ClusterInfoItem::DefenderErrorReasonHasBeenSet() const
{
    return m_defenderErrorReasonHasBeenSet;
}

uint64_t ClusterInfoItem::GetUnreadyNodeNum() const
{
    return m_unreadyNodeNum;
}

void ClusterInfoItem::SetUnreadyNodeNum(const uint64_t& _unreadyNodeNum)
{
    m_unreadyNodeNum = _unreadyNodeNum;
    m_unreadyNodeNumHasBeenSet = true;
}

bool ClusterInfoItem::UnreadyNodeNumHasBeenSet() const
{
    return m_unreadyNodeNumHasBeenSet;
}

int64_t ClusterInfoItem::GetSeriousRiskCount() const
{
    return m_seriousRiskCount;
}

void ClusterInfoItem::SetSeriousRiskCount(const int64_t& _seriousRiskCount)
{
    m_seriousRiskCount = _seriousRiskCount;
    m_seriousRiskCountHasBeenSet = true;
}

bool ClusterInfoItem::SeriousRiskCountHasBeenSet() const
{
    return m_seriousRiskCountHasBeenSet;
}

int64_t ClusterInfoItem::GetHighRiskCount() const
{
    return m_highRiskCount;
}

void ClusterInfoItem::SetHighRiskCount(const int64_t& _highRiskCount)
{
    m_highRiskCount = _highRiskCount;
    m_highRiskCountHasBeenSet = true;
}

bool ClusterInfoItem::HighRiskCountHasBeenSet() const
{
    return m_highRiskCountHasBeenSet;
}

int64_t ClusterInfoItem::GetMiddleRiskCount() const
{
    return m_middleRiskCount;
}

void ClusterInfoItem::SetMiddleRiskCount(const int64_t& _middleRiskCount)
{
    m_middleRiskCount = _middleRiskCount;
    m_middleRiskCountHasBeenSet = true;
}

bool ClusterInfoItem::MiddleRiskCountHasBeenSet() const
{
    return m_middleRiskCountHasBeenSet;
}

int64_t ClusterInfoItem::GetHintRiskCount() const
{
    return m_hintRiskCount;
}

void ClusterInfoItem::SetHintRiskCount(const int64_t& _hintRiskCount)
{
    m_hintRiskCount = _hintRiskCount;
    m_hintRiskCountHasBeenSet = true;
}

bool ClusterInfoItem::HintRiskCountHasBeenSet() const
{
    return m_hintRiskCountHasBeenSet;
}

string ClusterInfoItem::GetCheckFailReason() const
{
    return m_checkFailReason;
}

void ClusterInfoItem::SetCheckFailReason(const string& _checkFailReason)
{
    m_checkFailReason = _checkFailReason;
    m_checkFailReasonHasBeenSet = true;
}

bool ClusterInfoItem::CheckFailReasonHasBeenSet() const
{
    return m_checkFailReasonHasBeenSet;
}

string ClusterInfoItem::GetCheckStatus() const
{
    return m_checkStatus;
}

void ClusterInfoItem::SetCheckStatus(const string& _checkStatus)
{
    m_checkStatus = _checkStatus;
    m_checkStatusHasBeenSet = true;
}

bool ClusterInfoItem::CheckStatusHasBeenSet() const
{
    return m_checkStatusHasBeenSet;
}

string ClusterInfoItem::GetTaskCreateTime() const
{
    return m_taskCreateTime;
}

void ClusterInfoItem::SetTaskCreateTime(const string& _taskCreateTime)
{
    m_taskCreateTime = _taskCreateTime;
    m_taskCreateTimeHasBeenSet = true;
}

bool ClusterInfoItem::TaskCreateTimeHasBeenSet() const
{
    return m_taskCreateTimeHasBeenSet;
}

