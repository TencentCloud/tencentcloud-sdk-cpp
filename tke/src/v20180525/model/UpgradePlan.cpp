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

#include <tencentcloud/tke/v20180525/model/UpgradePlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpgradePlan::UpgradePlan() :
    m_iDHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_planedStartAtHasBeenSet(false),
    m_upgradeStartAtHasBeenSet(false),
    m_upgradeEndAtHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome UpgradePlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradePlan.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradePlan.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradePlan.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradePlan.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PlanedStartAt") && !value["PlanedStartAt"].IsNull())
    {
        if (!value["PlanedStartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradePlan.PlanedStartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planedStartAt = string(value["PlanedStartAt"].GetString());
        m_planedStartAtHasBeenSet = true;
    }

    if (value.HasMember("UpgradeStartAt") && !value["UpgradeStartAt"].IsNull())
    {
        if (!value["UpgradeStartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradePlan.UpgradeStartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeStartAt = string(value["UpgradeStartAt"].GetString());
        m_upgradeStartAtHasBeenSet = true;
    }

    if (value.HasMember("UpgradeEndAt") && !value["UpgradeEndAt"].IsNull())
    {
        if (!value["UpgradeEndAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradePlan.UpgradeEndAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeEndAt = string(value["UpgradeEndAt"].GetString());
        m_upgradeEndAtHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradePlan.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradePlan.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpgradePlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_planedStartAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanedStartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planedStartAt.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeStartAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeStartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upgradeStartAt.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeEndAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeEndAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upgradeEndAt.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


int64_t UpgradePlan::GetID() const
{
    return m_iD;
}

void UpgradePlan::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool UpgradePlan::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string UpgradePlan::GetClusterID() const
{
    return m_clusterID;
}

void UpgradePlan::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool UpgradePlan::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string UpgradePlan::GetClusterName() const
{
    return m_clusterName;
}

void UpgradePlan::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool UpgradePlan::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string UpgradePlan::GetRegion() const
{
    return m_region;
}

void UpgradePlan::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool UpgradePlan::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string UpgradePlan::GetPlanedStartAt() const
{
    return m_planedStartAt;
}

void UpgradePlan::SetPlanedStartAt(const string& _planedStartAt)
{
    m_planedStartAt = _planedStartAt;
    m_planedStartAtHasBeenSet = true;
}

bool UpgradePlan::PlanedStartAtHasBeenSet() const
{
    return m_planedStartAtHasBeenSet;
}

string UpgradePlan::GetUpgradeStartAt() const
{
    return m_upgradeStartAt;
}

void UpgradePlan::SetUpgradeStartAt(const string& _upgradeStartAt)
{
    m_upgradeStartAt = _upgradeStartAt;
    m_upgradeStartAtHasBeenSet = true;
}

bool UpgradePlan::UpgradeStartAtHasBeenSet() const
{
    return m_upgradeStartAtHasBeenSet;
}

string UpgradePlan::GetUpgradeEndAt() const
{
    return m_upgradeEndAt;
}

void UpgradePlan::SetUpgradeEndAt(const string& _upgradeEndAt)
{
    m_upgradeEndAt = _upgradeEndAt;
    m_upgradeEndAtHasBeenSet = true;
}

bool UpgradePlan::UpgradeEndAtHasBeenSet() const
{
    return m_upgradeEndAtHasBeenSet;
}

string UpgradePlan::GetStatus() const
{
    return m_status;
}

void UpgradePlan::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpgradePlan::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UpgradePlan::GetReason() const
{
    return m_reason;
}

void UpgradePlan::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool UpgradePlan::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

