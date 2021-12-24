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

#include <tencentcloud/tke/v20180525/model/ClusterPublicLB.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterPublicLB::ClusterPublicLB() :
    m_enabledHasBeenSet(false),
    m_allowFromCidrsHasBeenSet(false),
    m_securityPoliciesHasBeenSet(false),
    m_extraParamHasBeenSet(false),
    m_securityGroupHasBeenSet(false)
{
}

CoreInternalOutcome ClusterPublicLB::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPublicLB.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("AllowFromCidrs") && !value["AllowFromCidrs"].IsNull())
    {
        if (!value["AllowFromCidrs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterPublicLB.AllowFromCidrs` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowFromCidrs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowFromCidrs.push_back((*itr).GetString());
        }
        m_allowFromCidrsHasBeenSet = true;
    }

    if (value.HasMember("SecurityPolicies") && !value["SecurityPolicies"].IsNull())
    {
        if (!value["SecurityPolicies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterPublicLB.SecurityPolicies` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityPolicies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityPolicies.push_back((*itr).GetString());
        }
        m_securityPoliciesHasBeenSet = true;
    }

    if (value.HasMember("ExtraParam") && !value["ExtraParam"].IsNull())
    {
        if (!value["ExtraParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPublicLB.ExtraParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraParam = string(value["ExtraParam"].GetString());
        m_extraParamHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroup") && !value["SecurityGroup"].IsNull())
    {
        if (!value["SecurityGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPublicLB.SecurityGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroup = string(value["SecurityGroup"].GetString());
        m_securityGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterPublicLB::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_allowFromCidrsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowFromCidrs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowFromCidrs.begin(); itr != m_allowFromCidrs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_securityPoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityPolicies.begin(); itr != m_securityPolicies.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraParam.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityGroup.c_str(), allocator).Move(), allocator);
    }

}


bool ClusterPublicLB::GetEnabled() const
{
    return m_enabled;
}

void ClusterPublicLB::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ClusterPublicLB::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<string> ClusterPublicLB::GetAllowFromCidrs() const
{
    return m_allowFromCidrs;
}

void ClusterPublicLB::SetAllowFromCidrs(const vector<string>& _allowFromCidrs)
{
    m_allowFromCidrs = _allowFromCidrs;
    m_allowFromCidrsHasBeenSet = true;
}

bool ClusterPublicLB::AllowFromCidrsHasBeenSet() const
{
    return m_allowFromCidrsHasBeenSet;
}

vector<string> ClusterPublicLB::GetSecurityPolicies() const
{
    return m_securityPolicies;
}

void ClusterPublicLB::SetSecurityPolicies(const vector<string>& _securityPolicies)
{
    m_securityPolicies = _securityPolicies;
    m_securityPoliciesHasBeenSet = true;
}

bool ClusterPublicLB::SecurityPoliciesHasBeenSet() const
{
    return m_securityPoliciesHasBeenSet;
}

string ClusterPublicLB::GetExtraParam() const
{
    return m_extraParam;
}

void ClusterPublicLB::SetExtraParam(const string& _extraParam)
{
    m_extraParam = _extraParam;
    m_extraParamHasBeenSet = true;
}

bool ClusterPublicLB::ExtraParamHasBeenSet() const
{
    return m_extraParamHasBeenSet;
}

string ClusterPublicLB::GetSecurityGroup() const
{
    return m_securityGroup;
}

void ClusterPublicLB::SetSecurityGroup(const string& _securityGroup)
{
    m_securityGroup = _securityGroup;
    m_securityGroupHasBeenSet = true;
}

bool ClusterPublicLB::SecurityGroupHasBeenSet() const
{
    return m_securityGroupHasBeenSet;
}

