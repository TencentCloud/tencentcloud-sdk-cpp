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

#include <tencentcloud/organization/v20210331/model/DeleteShareUnitMembersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

DeleteShareUnitMembersRequest::DeleteShareUnitMembersRequest() :
    m_unitIdHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_membersHasBeenSet(false)
{
}

string DeleteShareUnitMembersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_unitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unitId.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_membersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Members";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_members.begin(); itr != m_members.end(); ++itr, ++i)
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


string DeleteShareUnitMembersRequest::GetUnitId() const
{
    return m_unitId;
}

void DeleteShareUnitMembersRequest::SetUnitId(const string& _unitId)
{
    m_unitId = _unitId;
    m_unitIdHasBeenSet = true;
}

bool DeleteShareUnitMembersRequest::UnitIdHasBeenSet() const
{
    return m_unitIdHasBeenSet;
}

string DeleteShareUnitMembersRequest::GetArea() const
{
    return m_area;
}

void DeleteShareUnitMembersRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DeleteShareUnitMembersRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

vector<ShareMember> DeleteShareUnitMembersRequest::GetMembers() const
{
    return m_members;
}

void DeleteShareUnitMembersRequest::SetMembers(const vector<ShareMember>& _members)
{
    m_members = _members;
    m_membersHasBeenSet = true;
}

bool DeleteShareUnitMembersRequest::MembersHasBeenSet() const
{
    return m_membersHasBeenSet;
}


