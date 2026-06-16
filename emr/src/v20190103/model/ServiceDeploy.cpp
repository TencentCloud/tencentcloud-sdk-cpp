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

#include <tencentcloud/emr/v20190103/model/ServiceDeploy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ServiceDeploy::ServiceDeploy() :
    m_softwareNameHasBeenSet(false),
    m_rolesHasBeenSet(false)
{
}

CoreInternalOutcome ServiceDeploy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SoftwareName") && !value["SoftwareName"].IsNull())
    {
        if (!value["SoftwareName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDeploy.SoftwareName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_softwareName = string(value["SoftwareName"].GetString());
        m_softwareNameHasBeenSet = true;
    }

    if (value.HasMember("Roles") && !value["Roles"].IsNull())
    {
        if (!value["Roles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceDeploy.Roles` is not array type"));

        const rapidjson::Value &tmpValue = value["Roles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_roles.push_back((*itr).GetString());
        }
        m_rolesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceDeploy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_softwareNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftwareName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_softwareName.c_str(), allocator).Move(), allocator);
    }

    if (m_rolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roles.begin(); itr != m_roles.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ServiceDeploy::GetSoftwareName() const
{
    return m_softwareName;
}

void ServiceDeploy::SetSoftwareName(const string& _softwareName)
{
    m_softwareName = _softwareName;
    m_softwareNameHasBeenSet = true;
}

bool ServiceDeploy::SoftwareNameHasBeenSet() const
{
    return m_softwareNameHasBeenSet;
}

vector<string> ServiceDeploy::GetRoles() const
{
    return m_roles;
}

void ServiceDeploy::SetRoles(const vector<string>& _roles)
{
    m_roles = _roles;
    m_rolesHasBeenSet = true;
}

bool ServiceDeploy::RolesHasBeenSet() const
{
    return m_rolesHasBeenSet;
}

