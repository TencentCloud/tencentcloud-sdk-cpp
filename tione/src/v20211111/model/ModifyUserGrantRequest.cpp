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

#include <tencentcloud/tione/v20211111/model/ModifyUserGrantRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ModifyUserGrantRequest::ModifyUserGrantRequest() :
    m_tiProjectIdHasBeenSet(false),
    m_subUinsHasBeenSet(false),
    m_roleIdsHasBeenSet(false),
    m_grantHasBeenSet(false)
{
}

string ModifyUserGrantRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tiProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TiProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tiProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subUins.begin(); itr != m_subUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_roleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roleIds.begin(); itr != m_roleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_grantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grant";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_grant.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUserGrantRequest::GetTiProjectId() const
{
    return m_tiProjectId;
}

void ModifyUserGrantRequest::SetTiProjectId(const string& _tiProjectId)
{
    m_tiProjectId = _tiProjectId;
    m_tiProjectIdHasBeenSet = true;
}

bool ModifyUserGrantRequest::TiProjectIdHasBeenSet() const
{
    return m_tiProjectIdHasBeenSet;
}

vector<string> ModifyUserGrantRequest::GetSubUins() const
{
    return m_subUins;
}

void ModifyUserGrantRequest::SetSubUins(const vector<string>& _subUins)
{
    m_subUins = _subUins;
    m_subUinsHasBeenSet = true;
}

bool ModifyUserGrantRequest::SubUinsHasBeenSet() const
{
    return m_subUinsHasBeenSet;
}

vector<string> ModifyUserGrantRequest::GetRoleIds() const
{
    return m_roleIds;
}

void ModifyUserGrantRequest::SetRoleIds(const vector<string>& _roleIds)
{
    m_roleIds = _roleIds;
    m_roleIdsHasBeenSet = true;
}

bool ModifyUserGrantRequest::RoleIdsHasBeenSet() const
{
    return m_roleIdsHasBeenSet;
}

string ModifyUserGrantRequest::GetGrant() const
{
    return m_grant;
}

void ModifyUserGrantRequest::SetGrant(const string& _grant)
{
    m_grant = _grant;
    m_grantHasBeenSet = true;
}

bool ModifyUserGrantRequest::GrantHasBeenSet() const
{
    return m_grantHasBeenSet;
}


