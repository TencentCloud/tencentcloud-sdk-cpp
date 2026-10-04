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

#include <tencentcloud/databuddy/v20260715/model/CreateWorkspaceRoleResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateWorkspaceRoleResult::CreateWorkspaceRoleResult() :
    m_roleIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome CreateWorkspaceRoleResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateWorkspaceRoleResult.RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(value["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateWorkspaceRoleResult.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateWorkspaceRoleResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string CreateWorkspaceRoleResult::GetRoleId() const
{
    return m_roleId;
}

void CreateWorkspaceRoleResult::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool CreateWorkspaceRoleResult::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

bool CreateWorkspaceRoleResult::GetStatus() const
{
    return m_status;
}

void CreateWorkspaceRoleResult::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateWorkspaceRoleResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

