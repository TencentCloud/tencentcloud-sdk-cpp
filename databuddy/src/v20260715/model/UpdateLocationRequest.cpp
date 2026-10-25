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

#include <tencentcloud/databuddy/v20260715/model/UpdateLocationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateLocationRequest::UpdateLocationRequest() :
    m_locationNameHasBeenSet(false),
    m_updatesHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

string UpdateLocationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_locationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_locationName.c_str(), allocator).Move(), allocator);
    }

    if (m_updatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Updates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_updates.begin(); itr != m_updates.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateLocationRequest::GetLocationName() const
{
    return m_locationName;
}

void UpdateLocationRequest::SetLocationName(const string& _locationName)
{
    m_locationName = _locationName;
    m_locationNameHasBeenSet = true;
}

bool UpdateLocationRequest::LocationNameHasBeenSet() const
{
    return m_locationNameHasBeenSet;
}

vector<LocationUpdate> UpdateLocationRequest::GetUpdates() const
{
    return m_updates;
}

void UpdateLocationRequest::SetUpdates(const vector<LocationUpdate>& _updates)
{
    m_updates = _updates;
    m_updatesHasBeenSet = true;
}

bool UpdateLocationRequest::UpdatesHasBeenSet() const
{
    return m_updatesHasBeenSet;
}

string UpdateLocationRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void UpdateLocationRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool UpdateLocationRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}


