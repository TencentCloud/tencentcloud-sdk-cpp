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

#include <tencentcloud/dlc/v20210125/model/CosPermission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CosPermission::CosPermission() :
    m_cosPathHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

CoreInternalOutcome CosPermission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosPath") && !value["CosPath"].IsNull())
    {
        if (!value["CosPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosPermission.CosPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosPath = string(value["CosPath"].GetString());
        m_cosPathHasBeenSet = true;
    }

    if (value.HasMember("Permissions") && !value["Permissions"].IsNull())
    {
        if (!value["Permissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosPermission.Permissions` is not array type"));

        const rapidjson::Value &tmpValue = value["Permissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_permissions.push_back((*itr).GetString());
        }
        m_permissionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosPermission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosPath.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CosPermission::GetCosPath() const
{
    return m_cosPath;
}

void CosPermission::SetCosPath(const string& _cosPath)
{
    m_cosPath = _cosPath;
    m_cosPathHasBeenSet = true;
}

bool CosPermission::CosPathHasBeenSet() const
{
    return m_cosPathHasBeenSet;
}

vector<string> CosPermission::GetPermissions() const
{
    return m_permissions;
}

void CosPermission::SetPermissions(const vector<string>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool CosPermission::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}

