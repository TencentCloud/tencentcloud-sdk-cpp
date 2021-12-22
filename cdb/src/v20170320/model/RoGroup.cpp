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

#include <tencentcloud/cdb/v20170320/model/RoGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

RoGroup::RoGroup() :
    m_roGroupModeHasBeenSet(false),
    m_roGroupIdHasBeenSet(false),
    m_roGroupNameHasBeenSet(false),
    m_roOfflineDelayHasBeenSet(false),
    m_roMaxDelayTimeHasBeenSet(false),
    m_minRoInGroupHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_roInstancesHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_roGroupRegionHasBeenSet(false),
    m_roGroupZoneHasBeenSet(false),
    m_delayReplicationTimeHasBeenSet(false)
{
}

CoreInternalOutcome RoGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoGroupMode") && !value["RoGroupMode"].IsNull())
    {
        if (!value["RoGroupMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.RoGroupMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roGroupMode = string(value["RoGroupMode"].GetString());
        m_roGroupModeHasBeenSet = true;
    }

    if (value.HasMember("RoGroupId") && !value["RoGroupId"].IsNull())
    {
        if (!value["RoGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.RoGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roGroupId = string(value["RoGroupId"].GetString());
        m_roGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RoGroupName") && !value["RoGroupName"].IsNull())
    {
        if (!value["RoGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.RoGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roGroupName = string(value["RoGroupName"].GetString());
        m_roGroupNameHasBeenSet = true;
    }

    if (value.HasMember("RoOfflineDelay") && !value["RoOfflineDelay"].IsNull())
    {
        if (!value["RoOfflineDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.RoOfflineDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roOfflineDelay = value["RoOfflineDelay"].GetInt64();
        m_roOfflineDelayHasBeenSet = true;
    }

    if (value.HasMember("RoMaxDelayTime") && !value["RoMaxDelayTime"].IsNull())
    {
        if (!value["RoMaxDelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.RoMaxDelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roMaxDelayTime = value["RoMaxDelayTime"].GetInt64();
        m_roMaxDelayTimeHasBeenSet = true;
    }

    if (value.HasMember("MinRoInGroup") && !value["MinRoInGroup"].IsNull())
    {
        if (!value["MinRoInGroup"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.MinRoInGroup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minRoInGroup = value["MinRoInGroup"].GetInt64();
        m_minRoInGroupHasBeenSet = true;
    }

    if (value.HasMember("WeightMode") && !value["WeightMode"].IsNull())
    {
        if (!value["WeightMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.WeightMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weightMode = string(value["WeightMode"].GetString());
        m_weightModeHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("RoInstances") && !value["RoInstances"].IsNull())
    {
        if (!value["RoInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoGroup.RoInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["RoInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roInstances.push_back(item);
        }
        m_roInstancesHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("RoGroupRegion") && !value["RoGroupRegion"].IsNull())
    {
        if (!value["RoGroupRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.RoGroupRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roGroupRegion = string(value["RoGroupRegion"].GetString());
        m_roGroupRegionHasBeenSet = true;
    }

    if (value.HasMember("RoGroupZone") && !value["RoGroupZone"].IsNull())
    {
        if (!value["RoGroupZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.RoGroupZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roGroupZone = string(value["RoGroupZone"].GetString());
        m_roGroupZoneHasBeenSet = true;
    }

    if (value.HasMember("DelayReplicationTime") && !value["DelayReplicationTime"].IsNull())
    {
        if (!value["DelayReplicationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoGroup.DelayReplicationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delayReplicationTime = value["DelayReplicationTime"].GetInt64();
        m_delayReplicationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roGroupModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoGroupMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roGroupMode.c_str(), allocator).Move(), allocator);
    }

    if (m_roGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_roGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_roOfflineDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoOfflineDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roOfflineDelay, allocator);
    }

    if (m_roMaxDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoMaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roMaxDelayTime, allocator);
    }

    if (m_minRoInGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRoInGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minRoInGroup, allocator);
    }

    if (m_weightModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weightMode.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_roInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roInstances.begin(); itr != m_roInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_roGroupRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoGroupRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roGroupRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_roGroupZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoGroupZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roGroupZone.c_str(), allocator).Move(), allocator);
    }

    if (m_delayReplicationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayReplicationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayReplicationTime, allocator);
    }

}


string RoGroup::GetRoGroupMode() const
{
    return m_roGroupMode;
}

void RoGroup::SetRoGroupMode(const string& _roGroupMode)
{
    m_roGroupMode = _roGroupMode;
    m_roGroupModeHasBeenSet = true;
}

bool RoGroup::RoGroupModeHasBeenSet() const
{
    return m_roGroupModeHasBeenSet;
}

string RoGroup::GetRoGroupId() const
{
    return m_roGroupId;
}

void RoGroup::SetRoGroupId(const string& _roGroupId)
{
    m_roGroupId = _roGroupId;
    m_roGroupIdHasBeenSet = true;
}

bool RoGroup::RoGroupIdHasBeenSet() const
{
    return m_roGroupIdHasBeenSet;
}

string RoGroup::GetRoGroupName() const
{
    return m_roGroupName;
}

void RoGroup::SetRoGroupName(const string& _roGroupName)
{
    m_roGroupName = _roGroupName;
    m_roGroupNameHasBeenSet = true;
}

bool RoGroup::RoGroupNameHasBeenSet() const
{
    return m_roGroupNameHasBeenSet;
}

int64_t RoGroup::GetRoOfflineDelay() const
{
    return m_roOfflineDelay;
}

void RoGroup::SetRoOfflineDelay(const int64_t& _roOfflineDelay)
{
    m_roOfflineDelay = _roOfflineDelay;
    m_roOfflineDelayHasBeenSet = true;
}

bool RoGroup::RoOfflineDelayHasBeenSet() const
{
    return m_roOfflineDelayHasBeenSet;
}

int64_t RoGroup::GetRoMaxDelayTime() const
{
    return m_roMaxDelayTime;
}

void RoGroup::SetRoMaxDelayTime(const int64_t& _roMaxDelayTime)
{
    m_roMaxDelayTime = _roMaxDelayTime;
    m_roMaxDelayTimeHasBeenSet = true;
}

bool RoGroup::RoMaxDelayTimeHasBeenSet() const
{
    return m_roMaxDelayTimeHasBeenSet;
}

int64_t RoGroup::GetMinRoInGroup() const
{
    return m_minRoInGroup;
}

void RoGroup::SetMinRoInGroup(const int64_t& _minRoInGroup)
{
    m_minRoInGroup = _minRoInGroup;
    m_minRoInGroupHasBeenSet = true;
}

bool RoGroup::MinRoInGroupHasBeenSet() const
{
    return m_minRoInGroupHasBeenSet;
}

string RoGroup::GetWeightMode() const
{
    return m_weightMode;
}

void RoGroup::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool RoGroup::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

int64_t RoGroup::GetWeight() const
{
    return m_weight;
}

void RoGroup::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool RoGroup::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

vector<RoInstanceInfo> RoGroup::GetRoInstances() const
{
    return m_roInstances;
}

void RoGroup::SetRoInstances(const vector<RoInstanceInfo>& _roInstances)
{
    m_roInstances = _roInstances;
    m_roInstancesHasBeenSet = true;
}

bool RoGroup::RoInstancesHasBeenSet() const
{
    return m_roInstancesHasBeenSet;
}

string RoGroup::GetVip() const
{
    return m_vip;
}

void RoGroup::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool RoGroup::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t RoGroup::GetVport() const
{
    return m_vport;
}

void RoGroup::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool RoGroup::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string RoGroup::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void RoGroup::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool RoGroup::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string RoGroup::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void RoGroup::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool RoGroup::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

string RoGroup::GetRoGroupRegion() const
{
    return m_roGroupRegion;
}

void RoGroup::SetRoGroupRegion(const string& _roGroupRegion)
{
    m_roGroupRegion = _roGroupRegion;
    m_roGroupRegionHasBeenSet = true;
}

bool RoGroup::RoGroupRegionHasBeenSet() const
{
    return m_roGroupRegionHasBeenSet;
}

string RoGroup::GetRoGroupZone() const
{
    return m_roGroupZone;
}

void RoGroup::SetRoGroupZone(const string& _roGroupZone)
{
    m_roGroupZone = _roGroupZone;
    m_roGroupZoneHasBeenSet = true;
}

bool RoGroup::RoGroupZoneHasBeenSet() const
{
    return m_roGroupZoneHasBeenSet;
}

int64_t RoGroup::GetDelayReplicationTime() const
{
    return m_delayReplicationTime;
}

void RoGroup::SetDelayReplicationTime(const int64_t& _delayReplicationTime)
{
    m_delayReplicationTime = _delayReplicationTime;
    m_delayReplicationTimeHasBeenSet = true;
}

bool RoGroup::DelayReplicationTimeHasBeenSet() const
{
    return m_delayReplicationTimeHasBeenSet;
}

