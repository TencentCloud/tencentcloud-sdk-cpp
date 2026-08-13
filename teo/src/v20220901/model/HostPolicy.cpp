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

#include <tencentcloud/teo/v20220901/model/HostPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

HostPolicy::HostPolicy() :
    m_hostHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

CoreInternalOutcome HostPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostPolicy.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostPolicy.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostPolicy.Policy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_policy.Deserialize(value["Policy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_policyHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostPolicy.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_policy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

}


string HostPolicy::GetHost() const
{
    return m_host;
}

void HostPolicy::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool HostPolicy::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string HostPolicy::GetPolicyType() const
{
    return m_policyType;
}

void HostPolicy::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool HostPolicy::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

SecurityPolicy HostPolicy::GetPolicy() const
{
    return m_policy;
}

void HostPolicy::SetPolicy(const SecurityPolicy& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool HostPolicy::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

string HostPolicy::GetTemplateId() const
{
    return m_templateId;
}

void HostPolicy::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool HostPolicy::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

