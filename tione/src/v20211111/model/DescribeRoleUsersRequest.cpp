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

#include <tencentcloud/tione/v20211111/model/DescribeRoleUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeRoleUsersRequest::DescribeRoleUsersRequest() :
    m_roleIdHasBeenSet(false),
    m_tiProjectIdHasBeenSet(false)
{
}

string DescribeRoleUsersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_tiProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TiProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tiProjectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRoleUsersRequest::GetRoleId() const
{
    return m_roleId;
}

void DescribeRoleUsersRequest::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool DescribeRoleUsersRequest::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string DescribeRoleUsersRequest::GetTiProjectId() const
{
    return m_tiProjectId;
}

void DescribeRoleUsersRequest::SetTiProjectId(const string& _tiProjectId)
{
    m_tiProjectId = _tiProjectId;
    m_tiProjectIdHasBeenSet = true;
}

bool DescribeRoleUsersRequest::TiProjectIdHasBeenSet() const
{
    return m_tiProjectIdHasBeenSet;
}


