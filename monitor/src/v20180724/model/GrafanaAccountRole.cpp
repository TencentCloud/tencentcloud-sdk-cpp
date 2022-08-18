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

#include <tencentcloud/monitor/v20180724/model/GrafanaAccountRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

GrafanaAccountRole::GrafanaAccountRole() :
    m_organizationHasBeenSet(false),
    m_roleHasBeenSet(false)
{
}

CoreInternalOutcome GrafanaAccountRole::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Organization") && !value["Organization"].IsNull())
    {
        if (!value["Organization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaAccountRole.Organization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organization = string(value["Organization"].GetString());
        m_organizationHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaAccountRole.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GrafanaAccountRole::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organization.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

}


string GrafanaAccountRole::GetOrganization() const
{
    return m_organization;
}

void GrafanaAccountRole::SetOrganization(const string& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool GrafanaAccountRole::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

string GrafanaAccountRole::GetRole() const
{
    return m_role;
}

void GrafanaAccountRole::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool GrafanaAccountRole::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

