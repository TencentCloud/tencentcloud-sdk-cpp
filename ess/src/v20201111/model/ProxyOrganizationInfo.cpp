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

#include <tencentcloud/ess/v20201111/model/ProxyOrganizationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ProxyOrganizationInfo::ProxyOrganizationInfo() :
    m_organizationOpenIdHasBeenSet(false),
    m_operatorOpenIdHasBeenSet(false)
{
}

CoreInternalOutcome ProxyOrganizationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrganizationOpenId") && !value["OrganizationOpenId"].IsNull())
    {
        if (!value["OrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyOrganizationInfo.OrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationOpenId = string(value["OrganizationOpenId"].GetString());
        m_organizationOpenIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorOpenId") && !value["OperatorOpenId"].IsNull())
    {
        if (!value["OperatorOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyOrganizationInfo.OperatorOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorOpenId = string(value["OperatorOpenId"].GetString());
        m_operatorOpenIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyOrganizationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_organizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorOpenId.c_str(), allocator).Move(), allocator);
    }

}


string ProxyOrganizationInfo::GetOrganizationOpenId() const
{
    return m_organizationOpenId;
}

void ProxyOrganizationInfo::SetOrganizationOpenId(const string& _organizationOpenId)
{
    m_organizationOpenId = _organizationOpenId;
    m_organizationOpenIdHasBeenSet = true;
}

bool ProxyOrganizationInfo::OrganizationOpenIdHasBeenSet() const
{
    return m_organizationOpenIdHasBeenSet;
}

string ProxyOrganizationInfo::GetOperatorOpenId() const
{
    return m_operatorOpenId;
}

void ProxyOrganizationInfo::SetOperatorOpenId(const string& _operatorOpenId)
{
    m_operatorOpenId = _operatorOpenId;
    m_operatorOpenIdHasBeenSet = true;
}

bool ProxyOrganizationInfo::OperatorOpenIdHasBeenSet() const
{
    return m_operatorOpenIdHasBeenSet;
}

