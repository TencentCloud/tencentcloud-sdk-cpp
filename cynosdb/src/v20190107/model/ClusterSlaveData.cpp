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

#include <tencentcloud/cynosdb/v20190107/model/ClusterSlaveData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ClusterSlaveData::ClusterSlaveData() :
    m_oldMasterZoneHasBeenSet(false),
    m_oldSlaveZoneHasBeenSet(false),
    m_newMasterZoneHasBeenSet(false),
    m_newSlaveZoneHasBeenSet(false),
    m_newSlaveZoneAttrHasBeenSet(false),
    m_oldSlaveZoneAttrHasBeenSet(false)
{
}

CoreInternalOutcome ClusterSlaveData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OldMasterZone") && !value["OldMasterZone"].IsNull())
    {
        if (!value["OldMasterZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSlaveData.OldMasterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldMasterZone = string(value["OldMasterZone"].GetString());
        m_oldMasterZoneHasBeenSet = true;
    }

    if (value.HasMember("OldSlaveZone") && !value["OldSlaveZone"].IsNull())
    {
        if (!value["OldSlaveZone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterSlaveData.OldSlaveZone` is not array type"));

        const rapidjson::Value &tmpValue = value["OldSlaveZone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_oldSlaveZone.push_back((*itr).GetString());
        }
        m_oldSlaveZoneHasBeenSet = true;
    }

    if (value.HasMember("NewMasterZone") && !value["NewMasterZone"].IsNull())
    {
        if (!value["NewMasterZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterSlaveData.NewMasterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newMasterZone = string(value["NewMasterZone"].GetString());
        m_newMasterZoneHasBeenSet = true;
    }

    if (value.HasMember("NewSlaveZone") && !value["NewSlaveZone"].IsNull())
    {
        if (!value["NewSlaveZone"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterSlaveData.NewSlaveZone` is not array type"));

        const rapidjson::Value &tmpValue = value["NewSlaveZone"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_newSlaveZone.push_back((*itr).GetString());
        }
        m_newSlaveZoneHasBeenSet = true;
    }

    if (value.HasMember("NewSlaveZoneAttr") && !value["NewSlaveZoneAttr"].IsNull())
    {
        if (!value["NewSlaveZoneAttr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterSlaveData.NewSlaveZoneAttr` is not array type"));

        const rapidjson::Value &tmpValue = value["NewSlaveZoneAttr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlaveZoneAttrItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_newSlaveZoneAttr.push_back(item);
        }
        m_newSlaveZoneAttrHasBeenSet = true;
    }

    if (value.HasMember("OldSlaveZoneAttr") && !value["OldSlaveZoneAttr"].IsNull())
    {
        if (!value["OldSlaveZoneAttr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterSlaveData.OldSlaveZoneAttr` is not array type"));

        const rapidjson::Value &tmpValue = value["OldSlaveZoneAttr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlaveZoneAttrItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_oldSlaveZoneAttr.push_back(item);
        }
        m_oldSlaveZoneAttrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterSlaveData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_oldMasterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldMasterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldMasterZone.c_str(), allocator).Move(), allocator);
    }

    if (m_oldSlaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldSlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_oldSlaveZone.begin(); itr != m_oldSlaveZone.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_newMasterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewMasterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newMasterZone.c_str(), allocator).Move(), allocator);
    }

    if (m_newSlaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewSlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_newSlaveZone.begin(); itr != m_newSlaveZone.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_newSlaveZoneAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewSlaveZoneAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_newSlaveZoneAttr.begin(); itr != m_newSlaveZoneAttr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_oldSlaveZoneAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldSlaveZoneAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_oldSlaveZoneAttr.begin(); itr != m_oldSlaveZoneAttr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ClusterSlaveData::GetOldMasterZone() const
{
    return m_oldMasterZone;
}

void ClusterSlaveData::SetOldMasterZone(const string& _oldMasterZone)
{
    m_oldMasterZone = _oldMasterZone;
    m_oldMasterZoneHasBeenSet = true;
}

bool ClusterSlaveData::OldMasterZoneHasBeenSet() const
{
    return m_oldMasterZoneHasBeenSet;
}

vector<string> ClusterSlaveData::GetOldSlaveZone() const
{
    return m_oldSlaveZone;
}

void ClusterSlaveData::SetOldSlaveZone(const vector<string>& _oldSlaveZone)
{
    m_oldSlaveZone = _oldSlaveZone;
    m_oldSlaveZoneHasBeenSet = true;
}

bool ClusterSlaveData::OldSlaveZoneHasBeenSet() const
{
    return m_oldSlaveZoneHasBeenSet;
}

string ClusterSlaveData::GetNewMasterZone() const
{
    return m_newMasterZone;
}

void ClusterSlaveData::SetNewMasterZone(const string& _newMasterZone)
{
    m_newMasterZone = _newMasterZone;
    m_newMasterZoneHasBeenSet = true;
}

bool ClusterSlaveData::NewMasterZoneHasBeenSet() const
{
    return m_newMasterZoneHasBeenSet;
}

vector<string> ClusterSlaveData::GetNewSlaveZone() const
{
    return m_newSlaveZone;
}

void ClusterSlaveData::SetNewSlaveZone(const vector<string>& _newSlaveZone)
{
    m_newSlaveZone = _newSlaveZone;
    m_newSlaveZoneHasBeenSet = true;
}

bool ClusterSlaveData::NewSlaveZoneHasBeenSet() const
{
    return m_newSlaveZoneHasBeenSet;
}

vector<SlaveZoneAttrItem> ClusterSlaveData::GetNewSlaveZoneAttr() const
{
    return m_newSlaveZoneAttr;
}

void ClusterSlaveData::SetNewSlaveZoneAttr(const vector<SlaveZoneAttrItem>& _newSlaveZoneAttr)
{
    m_newSlaveZoneAttr = _newSlaveZoneAttr;
    m_newSlaveZoneAttrHasBeenSet = true;
}

bool ClusterSlaveData::NewSlaveZoneAttrHasBeenSet() const
{
    return m_newSlaveZoneAttrHasBeenSet;
}

vector<SlaveZoneAttrItem> ClusterSlaveData::GetOldSlaveZoneAttr() const
{
    return m_oldSlaveZoneAttr;
}

void ClusterSlaveData::SetOldSlaveZoneAttr(const vector<SlaveZoneAttrItem>& _oldSlaveZoneAttr)
{
    m_oldSlaveZoneAttr = _oldSlaveZoneAttr;
    m_oldSlaveZoneAttrHasBeenSet = true;
}

bool ClusterSlaveData::OldSlaveZoneAttrHasBeenSet() const
{
    return m_oldSlaveZoneAttrHasBeenSet;
}

