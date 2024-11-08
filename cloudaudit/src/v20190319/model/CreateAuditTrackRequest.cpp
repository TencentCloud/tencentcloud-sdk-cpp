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

#include <tencentcloud/cloudaudit/v20190319/model/CreateAuditTrackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

CreateAuditTrackRequest::CreateAuditTrackRequest() :
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_eventNamesHasBeenSet(false),
    m_trackForAllMembersHasBeenSet(false)
{
}

string CreateAuditTrackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventNames.begin(); itr != m_eventNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_trackForAllMembersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackForAllMembers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trackForAllMembers, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAuditTrackRequest::GetName() const
{
    return m_name;
}

void CreateAuditTrackRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAuditTrackRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateAuditTrackRequest::GetStatus() const
{
    return m_status;
}

void CreateAuditTrackRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateAuditTrackRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

Storage CreateAuditTrackRequest::GetStorage() const
{
    return m_storage;
}

void CreateAuditTrackRequest::SetStorage(const Storage& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CreateAuditTrackRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string CreateAuditTrackRequest::GetActionType() const
{
    return m_actionType;
}

void CreateAuditTrackRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool CreateAuditTrackRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string CreateAuditTrackRequest::GetResourceType() const
{
    return m_resourceType;
}

void CreateAuditTrackRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CreateAuditTrackRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

vector<string> CreateAuditTrackRequest::GetEventNames() const
{
    return m_eventNames;
}

void CreateAuditTrackRequest::SetEventNames(const vector<string>& _eventNames)
{
    m_eventNames = _eventNames;
    m_eventNamesHasBeenSet = true;
}

bool CreateAuditTrackRequest::EventNamesHasBeenSet() const
{
    return m_eventNamesHasBeenSet;
}

uint64_t CreateAuditTrackRequest::GetTrackForAllMembers() const
{
    return m_trackForAllMembers;
}

void CreateAuditTrackRequest::SetTrackForAllMembers(const uint64_t& _trackForAllMembers)
{
    m_trackForAllMembers = _trackForAllMembers;
    m_trackForAllMembersHasBeenSet = true;
}

bool CreateAuditTrackRequest::TrackForAllMembersHasBeenSet() const
{
    return m_trackForAllMembersHasBeenSet;
}


