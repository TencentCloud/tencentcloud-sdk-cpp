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

#include <tencentcloud/tsf/v20180326/model/LaneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

LaneInfo::LaneInfo() :
    m_laneIdHasBeenSet(false),
    m_laneNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_laneGroupListHasBeenSet(false),
    m_entranceHasBeenSet(false),
    m_namespaceIdListHasBeenSet(false),
    m_laneGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome LaneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LaneId") && !value["LaneId"].IsNull())
    {
        if (!value["LaneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneInfo.LaneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_laneId = string(value["LaneId"].GetString());
        m_laneIdHasBeenSet = true;
    }

    if (value.HasMember("LaneName") && !value["LaneName"].IsNull())
    {
        if (!value["LaneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneInfo.LaneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_laneName = string(value["LaneName"].GetString());
        m_laneNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LaneInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LaneInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LaneGroupList") && !value["LaneGroupList"].IsNull())
    {
        if (!value["LaneGroupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaneInfo.LaneGroupList` is not array type"));

        const rapidjson::Value &tmpValue = value["LaneGroupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LaneGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_laneGroupList.push_back(item);
        }
        m_laneGroupListHasBeenSet = true;
    }

    if (value.HasMember("Entrance") && !value["Entrance"].IsNull())
    {
        if (!value["Entrance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LaneInfo.Entrance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_entrance = value["Entrance"].GetBool();
        m_entranceHasBeenSet = true;
    }

    if (value.HasMember("NamespaceIdList") && !value["NamespaceIdList"].IsNull())
    {
        if (!value["NamespaceIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LaneInfo.NamespaceIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["NamespaceIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_namespaceIdList.push_back((*itr).GetString());
        }
        m_namespaceIdListHasBeenSet = true;
    }

    if (value.HasMember("LaneGroupId") && !value["LaneGroupId"].IsNull())
    {
        if (!value["LaneGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LaneInfo.LaneGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_laneGroupId = string(value["LaneGroupId"].GetString());
        m_laneGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LaneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_laneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_laneId.c_str(), allocator).Move(), allocator);
    }

    if (m_laneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_laneName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_laneGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaneGroupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_laneGroupList.begin(); itr != m_laneGroupList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_entranceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entrance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_entrance, allocator);
    }

    if (m_namespaceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespaceIdList.begin(); itr != m_namespaceIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_laneGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaneGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_laneGroupId.c_str(), allocator).Move(), allocator);
    }

}


string LaneInfo::GetLaneId() const
{
    return m_laneId;
}

void LaneInfo::SetLaneId(const string& _laneId)
{
    m_laneId = _laneId;
    m_laneIdHasBeenSet = true;
}

bool LaneInfo::LaneIdHasBeenSet() const
{
    return m_laneIdHasBeenSet;
}

string LaneInfo::GetLaneName() const
{
    return m_laneName;
}

void LaneInfo::SetLaneName(const string& _laneName)
{
    m_laneName = _laneName;
    m_laneNameHasBeenSet = true;
}

bool LaneInfo::LaneNameHasBeenSet() const
{
    return m_laneNameHasBeenSet;
}

string LaneInfo::GetRemark() const
{
    return m_remark;
}

void LaneInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool LaneInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t LaneInfo::GetCreateTime() const
{
    return m_createTime;
}

void LaneInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LaneInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t LaneInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void LaneInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LaneInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<LaneGroup> LaneInfo::GetLaneGroupList() const
{
    return m_laneGroupList;
}

void LaneInfo::SetLaneGroupList(const vector<LaneGroup>& _laneGroupList)
{
    m_laneGroupList = _laneGroupList;
    m_laneGroupListHasBeenSet = true;
}

bool LaneInfo::LaneGroupListHasBeenSet() const
{
    return m_laneGroupListHasBeenSet;
}

bool LaneInfo::GetEntrance() const
{
    return m_entrance;
}

void LaneInfo::SetEntrance(const bool& _entrance)
{
    m_entrance = _entrance;
    m_entranceHasBeenSet = true;
}

bool LaneInfo::EntranceHasBeenSet() const
{
    return m_entranceHasBeenSet;
}

vector<string> LaneInfo::GetNamespaceIdList() const
{
    return m_namespaceIdList;
}

void LaneInfo::SetNamespaceIdList(const vector<string>& _namespaceIdList)
{
    m_namespaceIdList = _namespaceIdList;
    m_namespaceIdListHasBeenSet = true;
}

bool LaneInfo::NamespaceIdListHasBeenSet() const
{
    return m_namespaceIdListHasBeenSet;
}

string LaneInfo::GetLaneGroupId() const
{
    return m_laneGroupId;
}

void LaneInfo::SetLaneGroupId(const string& _laneGroupId)
{
    m_laneGroupId = _laneGroupId;
    m_laneGroupIdHasBeenSet = true;
}

bool LaneInfo::LaneGroupIdHasBeenSet() const
{
    return m_laneGroupIdHasBeenSet;
}

