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

#include <tencentcloud/cam/v20190116/model/UntagRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

UntagRoleRequest::UntagRoleRequest() :
    m_tagKeysHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleIdHasBeenSet(false)
{
}

string UntagRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tagKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagKeys.begin(); itr != m_tagKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UntagRoleRequest::GetTagKeys() const
{
    return m_tagKeys;
}

void UntagRoleRequest::SetTagKeys(const vector<string>& _tagKeys)
{
    m_tagKeys = _tagKeys;
    m_tagKeysHasBeenSet = true;
}

bool UntagRoleRequest::TagKeysHasBeenSet() const
{
    return m_tagKeysHasBeenSet;
}

string UntagRoleRequest::GetRoleName() const
{
    return m_roleName;
}

void UntagRoleRequest::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool UntagRoleRequest::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string UntagRoleRequest::GetRoleId() const
{
    return m_roleId;
}

void UntagRoleRequest::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool UntagRoleRequest::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}


