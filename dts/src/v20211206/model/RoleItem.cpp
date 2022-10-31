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

#include <tencentcloud/dts/v20211206/model/RoleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

RoleItem::RoleItem() :
    m_roleNameHasBeenSet(false),
    m_newRoleNameHasBeenSet(false)
{
}

CoreInternalOutcome RoleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleItem.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("NewRoleName") && !value["NewRoleName"].IsNull())
    {
        if (!value["NewRoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleItem.NewRoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newRoleName = string(value["NewRoleName"].GetString());
        m_newRoleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_newRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewRoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newRoleName.c_str(), allocator).Move(), allocator);
    }

}


string RoleItem::GetRoleName() const
{
    return m_roleName;
}

void RoleItem::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool RoleItem::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string RoleItem::GetNewRoleName() const
{
    return m_newRoleName;
}

void RoleItem::SetNewRoleName(const string& _newRoleName)
{
    m_newRoleName = _newRoleName;
    m_newRoleNameHasBeenSet = true;
}

bool RoleItem::NewRoleNameHasBeenSet() const
{
    return m_newRoleNameHasBeenSet;
}

