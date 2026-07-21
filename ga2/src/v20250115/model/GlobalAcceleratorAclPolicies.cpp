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

#include <tencentcloud/ga2/v20250115/model/GlobalAcceleratorAclPolicies.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

GlobalAcceleratorAclPolicies::GlobalAcceleratorAclPolicies() :
    m_globalAcceleratorAclPolicyIdHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome GlobalAcceleratorAclPolicies::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GlobalAcceleratorAclPolicyId") && !value["GlobalAcceleratorAclPolicyId"].IsNull())
    {
        if (!value["GlobalAcceleratorAclPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAclPolicies.GlobalAcceleratorAclPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalAcceleratorAclPolicyId = string(value["GlobalAcceleratorAclPolicyId"].GetString());
        m_globalAcceleratorAclPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("DefaultAction") && !value["DefaultAction"].IsNull())
    {
        if (!value["DefaultAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAclPolicies.DefaultAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultAction = string(value["DefaultAction"].GetString());
        m_defaultActionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorAclPolicies.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GlobalAcceleratorAclPolicies::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_globalAcceleratorAclPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorAclPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalAcceleratorAclPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultAction.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string GlobalAcceleratorAclPolicies::GetGlobalAcceleratorAclPolicyId() const
{
    return m_globalAcceleratorAclPolicyId;
}

void GlobalAcceleratorAclPolicies::SetGlobalAcceleratorAclPolicyId(const string& _globalAcceleratorAclPolicyId)
{
    m_globalAcceleratorAclPolicyId = _globalAcceleratorAclPolicyId;
    m_globalAcceleratorAclPolicyIdHasBeenSet = true;
}

bool GlobalAcceleratorAclPolicies::GlobalAcceleratorAclPolicyIdHasBeenSet() const
{
    return m_globalAcceleratorAclPolicyIdHasBeenSet;
}

string GlobalAcceleratorAclPolicies::GetDefaultAction() const
{
    return m_defaultAction;
}

void GlobalAcceleratorAclPolicies::SetDefaultAction(const string& _defaultAction)
{
    m_defaultAction = _defaultAction;
    m_defaultActionHasBeenSet = true;
}

bool GlobalAcceleratorAclPolicies::DefaultActionHasBeenSet() const
{
    return m_defaultActionHasBeenSet;
}

string GlobalAcceleratorAclPolicies::GetStatus() const
{
    return m_status;
}

void GlobalAcceleratorAclPolicies::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GlobalAcceleratorAclPolicies::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

