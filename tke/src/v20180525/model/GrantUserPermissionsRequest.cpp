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

#include <tencentcloud/tke/v20180525/model/GrantUserPermissionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

GrantUserPermissionsRequest::GrantUserPermissionsRequest() :
    m_targetUinHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

string GrantUserPermissionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetUin.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr, ++i)
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


string GrantUserPermissionsRequest::GetTargetUin() const
{
    return m_targetUin;
}

void GrantUserPermissionsRequest::SetTargetUin(const string& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool GrantUserPermissionsRequest::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

vector<PermissionItem> GrantUserPermissionsRequest::GetPermissions() const
{
    return m_permissions;
}

void GrantUserPermissionsRequest::SetPermissions(const vector<PermissionItem>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool GrantUserPermissionsRequest::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}


