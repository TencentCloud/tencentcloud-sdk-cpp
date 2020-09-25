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

#include <tencentcloud/gse/v20191112/model/UpdateFleetPortSettingsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace rapidjson;
using namespace std;

UpdateFleetPortSettingsRequest::UpdateFleetPortSettingsRequest() :
    m_fleetIdHasBeenSet(false),
    m_inboundPermissionAuthorizationsHasBeenSet(false),
    m_inboundPermissionRevocationsHasBeenSet(false)
{
}

string UpdateFleetPortSettingsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fleetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_inboundPermissionAuthorizationsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InboundPermissionAuthorizations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inboundPermissionAuthorizations.begin(); itr != m_inboundPermissionAuthorizations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_inboundPermissionRevocationsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InboundPermissionRevocations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inboundPermissionRevocations.begin(); itr != m_inboundPermissionRevocations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateFleetPortSettingsRequest::GetFleetId() const
{
    return m_fleetId;
}

void UpdateFleetPortSettingsRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool UpdateFleetPortSettingsRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

vector<InboundPermissionAuthorization> UpdateFleetPortSettingsRequest::GetInboundPermissionAuthorizations() const
{
    return m_inboundPermissionAuthorizations;
}

void UpdateFleetPortSettingsRequest::SetInboundPermissionAuthorizations(const vector<InboundPermissionAuthorization>& _inboundPermissionAuthorizations)
{
    m_inboundPermissionAuthorizations = _inboundPermissionAuthorizations;
    m_inboundPermissionAuthorizationsHasBeenSet = true;
}

bool UpdateFleetPortSettingsRequest::InboundPermissionAuthorizationsHasBeenSet() const
{
    return m_inboundPermissionAuthorizationsHasBeenSet;
}

vector<InboundPermissionRevocations> UpdateFleetPortSettingsRequest::GetInboundPermissionRevocations() const
{
    return m_inboundPermissionRevocations;
}

void UpdateFleetPortSettingsRequest::SetInboundPermissionRevocations(const vector<InboundPermissionRevocations>& _inboundPermissionRevocations)
{
    m_inboundPermissionRevocations = _inboundPermissionRevocations;
    m_inboundPermissionRevocationsHasBeenSet = true;
}

bool UpdateFleetPortSettingsRequest::InboundPermissionRevocationsHasBeenSet() const
{
    return m_inboundPermissionRevocationsHasBeenSet;
}


