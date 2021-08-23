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

#include <tencentcloud/cam/v20190116/model/ListGrantServiceAccessPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

ListGrantServiceAccessPolicy::ListGrantServiceAccessPolicy() :
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome ListGrantServiceAccessPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListGrantServiceAccessPolicy.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListGrantServiceAccessPolicy.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListGrantServiceAccessPolicy.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyDescription") && !value["PolicyDescription"].IsNull())
    {
        if (!value["PolicyDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListGrantServiceAccessPolicy.PolicyDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDescription = string(value["PolicyDescription"].GetString());
        m_policyDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListGrantServiceAccessPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyDescription.c_str(), allocator).Move(), allocator);
    }

}


string ListGrantServiceAccessPolicy::GetPolicyId() const
{
    return m_policyId;
}

void ListGrantServiceAccessPolicy::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ListGrantServiceAccessPolicy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ListGrantServiceAccessPolicy::GetPolicyName() const
{
    return m_policyName;
}

void ListGrantServiceAccessPolicy::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool ListGrantServiceAccessPolicy::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string ListGrantServiceAccessPolicy::GetPolicyType() const
{
    return m_policyType;
}

void ListGrantServiceAccessPolicy::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool ListGrantServiceAccessPolicy::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

string ListGrantServiceAccessPolicy::GetPolicyDescription() const
{
    return m_policyDescription;
}

void ListGrantServiceAccessPolicy::SetPolicyDescription(const string& _policyDescription)
{
    m_policyDescription = _policyDescription;
    m_policyDescriptionHasBeenSet = true;
}

bool ListGrantServiceAccessPolicy::PolicyDescriptionHasBeenSet() const
{
    return m_policyDescriptionHasBeenSet;
}

