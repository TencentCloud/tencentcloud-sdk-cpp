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

#include <tencentcloud/cloudaudit/v20190319/model/Tracks.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

Tracks::Tracks() :
    m_nameHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_eventNamesHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_trackIdHasBeenSet(false)
{
}

CoreInternalOutcome Tracks::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tracks.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tracks.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tracks.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Tracks.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EventNames") && !value["EventNames"].IsNull())
    {
        if (!value["EventNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tracks.EventNames` is not array type"));

        const rapidjson::Value &tmpValue = value["EventNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eventNames.push_back((*itr).GetString());
        }
        m_eventNamesHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Tracks.Storage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storage.Deserialize(value["Storage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tracks.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TrackId") && !value["TrackId"].IsNull())
    {
        if (!value["TrackId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Tracks.TrackId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trackId = value["TrackId"].GetUint64();
        m_trackIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Tracks::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_eventNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventNames.begin(); itr != m_eventNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_trackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trackId, allocator);
    }

}


string Tracks::GetName() const
{
    return m_name;
}

void Tracks::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Tracks::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Tracks::GetActionType() const
{
    return m_actionType;
}

void Tracks::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool Tracks::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string Tracks::GetResourceType() const
{
    return m_resourceType;
}

void Tracks::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool Tracks::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

uint64_t Tracks::GetStatus() const
{
    return m_status;
}

void Tracks::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Tracks::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> Tracks::GetEventNames() const
{
    return m_eventNames;
}

void Tracks::SetEventNames(const vector<string>& _eventNames)
{
    m_eventNames = _eventNames;
    m_eventNamesHasBeenSet = true;
}

bool Tracks::EventNamesHasBeenSet() const
{
    return m_eventNamesHasBeenSet;
}

Storage Tracks::GetStorage() const
{
    return m_storage;
}

void Tracks::SetStorage(const Storage& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool Tracks::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string Tracks::GetCreateTime() const
{
    return m_createTime;
}

void Tracks::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Tracks::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t Tracks::GetTrackId() const
{
    return m_trackId;
}

void Tracks::SetTrackId(const uint64_t& _trackId)
{
    m_trackId = _trackId;
    m_trackIdHasBeenSet = true;
}

bool Tracks::TrackIdHasBeenSet() const
{
    return m_trackIdHasBeenSet;
}

