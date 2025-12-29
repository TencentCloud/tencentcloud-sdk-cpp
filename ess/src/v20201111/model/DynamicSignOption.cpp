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

#include <tencentcloud/ess/v20201111/model/DynamicSignOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DynamicSignOption::DynamicSignOption() :
    m_dynamicReceiveTypeHasBeenSet(false),
    m_organizationNameHasBeenSet(false)
{
}

CoreInternalOutcome DynamicSignOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DynamicReceiveType") && !value["DynamicReceiveType"].IsNull())
    {
        if (!value["DynamicReceiveType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicSignOption.DynamicReceiveType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dynamicReceiveType = value["DynamicReceiveType"].GetUint64();
        m_dynamicReceiveTypeHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicSignOption.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicSignOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dynamicReceiveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicReceiveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dynamicReceiveType, allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DynamicSignOption::GetDynamicReceiveType() const
{
    return m_dynamicReceiveType;
}

void DynamicSignOption::SetDynamicReceiveType(const uint64_t& _dynamicReceiveType)
{
    m_dynamicReceiveType = _dynamicReceiveType;
    m_dynamicReceiveTypeHasBeenSet = true;
}

bool DynamicSignOption::DynamicReceiveTypeHasBeenSet() const
{
    return m_dynamicReceiveTypeHasBeenSet;
}

string DynamicSignOption::GetOrganizationName() const
{
    return m_organizationName;
}

void DynamicSignOption::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool DynamicSignOption::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

