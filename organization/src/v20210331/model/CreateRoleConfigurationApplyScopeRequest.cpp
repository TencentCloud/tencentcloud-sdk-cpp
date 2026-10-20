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

#include <tencentcloud/organization/v20210331/model/CreateRoleConfigurationApplyScopeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

CreateRoleConfigurationApplyScopeRequest::CreateRoleConfigurationApplyScopeRequest() :
    m_zoneIdHasBeenSet(false),
    m_applyScopeInfoHasBeenSet(false)
{
}

string CreateRoleConfigurationApplyScopeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_applyScopeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyScopeInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_applyScopeInfo.begin(); itr != m_applyScopeInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRoleConfigurationApplyScopeRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateRoleConfigurationApplyScopeRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateRoleConfigurationApplyScopeRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<RoleAssignmentInfo> CreateRoleConfigurationApplyScopeRequest::GetApplyScopeInfo() const
{
    return m_applyScopeInfo;
}

void CreateRoleConfigurationApplyScopeRequest::SetApplyScopeInfo(const vector<RoleAssignmentInfo>& _applyScopeInfo)
{
    m_applyScopeInfo = _applyScopeInfo;
    m_applyScopeInfoHasBeenSet = true;
}

bool CreateRoleConfigurationApplyScopeRequest::ApplyScopeInfoHasBeenSet() const
{
    return m_applyScopeInfoHasBeenSet;
}


