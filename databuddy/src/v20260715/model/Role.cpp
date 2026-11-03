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

#include <tencentcloud/databuddy/v20260715/model/Role.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

Role::Role() :
    m_basicInfoHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

CoreInternalOutcome Role::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BasicInfo") && !value["BasicInfo"].IsNull())
    {
        if (!value["BasicInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Role.BasicInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicInfo.Deserialize(value["BasicInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicInfoHasBeenSet = true;
    }

    if (value.HasMember("Permissions") && !value["Permissions"].IsNull())
    {
        if (!value["Permissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Role.Permissions` is not array type"));

        const rapidjson::Value &tmpValue = value["Permissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RolePermission item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_permissions.push_back(item);
        }
        m_permissionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Role::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_basicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


RoleBasicInfo Role::GetBasicInfo() const
{
    return m_basicInfo;
}

void Role::SetBasicInfo(const RoleBasicInfo& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool Role::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}

vector<RolePermission> Role::GetPermissions() const
{
    return m_permissions;
}

void Role::SetPermissions(const vector<RolePermission>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool Role::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}

