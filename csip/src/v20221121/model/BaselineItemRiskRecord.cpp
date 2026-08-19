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

#include <tencentcloud/csip/v20221121/model/BaselineItemRiskRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineItemRiskRecord::BaselineItemRiskRecord() :
    m_iDHasBeenSet(false),
    m_hostInfoHasBeenSet(false),
    m_clusterInfoHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_resultStatusHasBeenSet(false),
    m_latestCheckTimeHasBeenSet(false),
    m_itemIDHasBeenSet(false),
    m_riskIDHasBeenSet(false),
    m_jobIDHasBeenSet(false)
{
}

CoreInternalOutcome BaselineItemRiskRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemRiskRecord.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("HostInfo") && !value["HostInfo"].IsNull())
    {
        if (!value["HostInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemRiskRecord.HostInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostInfo.Deserialize(value["HostInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostInfoHasBeenSet = true;
    }

    if (value.HasMember("ClusterInfo") && !value["ClusterInfo"].IsNull())
    {
        if (!value["ClusterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemRiskRecord.ClusterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterInfo.Deserialize(value["ClusterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterInfoHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemRiskRecord.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("ResultStatus") && !value["ResultStatus"].IsNull())
    {
        if (!value["ResultStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemRiskRecord.ResultStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultStatus = string(value["ResultStatus"].GetString());
        m_resultStatusHasBeenSet = true;
    }

    if (value.HasMember("LatestCheckTime") && !value["LatestCheckTime"].IsNull())
    {
        if (!value["LatestCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemRiskRecord.LatestCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestCheckTime = string(value["LatestCheckTime"].GetString());
        m_latestCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("ItemID") && !value["ItemID"].IsNull())
    {
        if (!value["ItemID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemRiskRecord.ItemID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_itemID = value["ItemID"].GetUint64();
        m_itemIDHasBeenSet = true;
    }

    if (value.HasMember("RiskID") && !value["RiskID"].IsNull())
    {
        if (!value["RiskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemRiskRecord.RiskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskID = string(value["RiskID"].GetString());
        m_riskIDHasBeenSet = true;
    }

    if (value.HasMember("JobID") && !value["JobID"].IsNull())
    {
        if (!value["JobID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemRiskRecord.JobID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobID = string(value["JobID"].GetString());
        m_jobIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineItemRiskRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_hostInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_resultStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_latestCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_itemIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemID, allocator);
    }

    if (m_riskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskID.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobID.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BaselineItemRiskRecord::GetID() const
{
    return m_iD;
}

void BaselineItemRiskRecord::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool BaselineItemRiskRecord::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

BaselineHostAsset BaselineItemRiskRecord::GetHostInfo() const
{
    return m_hostInfo;
}

void BaselineItemRiskRecord::SetHostInfo(const BaselineHostAsset& _hostInfo)
{
    m_hostInfo = _hostInfo;
    m_hostInfoHasBeenSet = true;
}

bool BaselineItemRiskRecord::HostInfoHasBeenSet() const
{
    return m_hostInfoHasBeenSet;
}

BaselineClusterAsset BaselineItemRiskRecord::GetClusterInfo() const
{
    return m_clusterInfo;
}

void BaselineItemRiskRecord::SetClusterInfo(const BaselineClusterAsset& _clusterInfo)
{
    m_clusterInfo = _clusterInfo;
    m_clusterInfoHasBeenSet = true;
}

bool BaselineItemRiskRecord::ClusterInfoHasBeenSet() const
{
    return m_clusterInfoHasBeenSet;
}

string BaselineItemRiskRecord::GetAssetType() const
{
    return m_assetType;
}

void BaselineItemRiskRecord::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool BaselineItemRiskRecord::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string BaselineItemRiskRecord::GetResultStatus() const
{
    return m_resultStatus;
}

void BaselineItemRiskRecord::SetResultStatus(const string& _resultStatus)
{
    m_resultStatus = _resultStatus;
    m_resultStatusHasBeenSet = true;
}

bool BaselineItemRiskRecord::ResultStatusHasBeenSet() const
{
    return m_resultStatusHasBeenSet;
}

string BaselineItemRiskRecord::GetLatestCheckTime() const
{
    return m_latestCheckTime;
}

void BaselineItemRiskRecord::SetLatestCheckTime(const string& _latestCheckTime)
{
    m_latestCheckTime = _latestCheckTime;
    m_latestCheckTimeHasBeenSet = true;
}

bool BaselineItemRiskRecord::LatestCheckTimeHasBeenSet() const
{
    return m_latestCheckTimeHasBeenSet;
}

uint64_t BaselineItemRiskRecord::GetItemID() const
{
    return m_itemID;
}

void BaselineItemRiskRecord::SetItemID(const uint64_t& _itemID)
{
    m_itemID = _itemID;
    m_itemIDHasBeenSet = true;
}

bool BaselineItemRiskRecord::ItemIDHasBeenSet() const
{
    return m_itemIDHasBeenSet;
}

string BaselineItemRiskRecord::GetRiskID() const
{
    return m_riskID;
}

void BaselineItemRiskRecord::SetRiskID(const string& _riskID)
{
    m_riskID = _riskID;
    m_riskIDHasBeenSet = true;
}

bool BaselineItemRiskRecord::RiskIDHasBeenSet() const
{
    return m_riskIDHasBeenSet;
}

string BaselineItemRiskRecord::GetJobID() const
{
    return m_jobID;
}

void BaselineItemRiskRecord::SetJobID(const string& _jobID)
{
    m_jobID = _jobID;
    m_jobIDHasBeenSet = true;
}

bool BaselineItemRiskRecord::JobIDHasBeenSet() const
{
    return m_jobIDHasBeenSet;
}

