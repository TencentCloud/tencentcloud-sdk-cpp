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

#include <tencentcloud/cam/v20190116/model/AttachPolicyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

AttachPolicyInfo::AttachPolicyInfo() :
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_createModeHasBeenSet(false),
    m_policyTypeHasBeenSet(false)
{
}

CoreInternalOutcome AttachPolicyInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AttachPolicyInfo.PolicyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetUint64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AttachPolicyInfo.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AttachPolicyInfo.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateMode") && !value["CreateMode"].IsNull())
    {
        if (!value["CreateMode"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AttachPolicyInfo.CreateMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createMode = value["CreateMode"].GetUint64();
        m_createModeHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Error("response `AttachPolicyInfo.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttachPolicyInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createMode, allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AttachPolicyInfo::GetPolicyId() const
{
    return m_policyId;
}

void AttachPolicyInfo::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool AttachPolicyInfo::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string AttachPolicyInfo::GetPolicyName() const
{
    return m_policyName;
}

void AttachPolicyInfo::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AttachPolicyInfo::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string AttachPolicyInfo::GetAddTime() const
{
    return m_addTime;
}

void AttachPolicyInfo::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool AttachPolicyInfo::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

uint64_t AttachPolicyInfo::GetCreateMode() const
{
    return m_createMode;
}

void AttachPolicyInfo::SetCreateMode(const uint64_t& _createMode)
{
    m_createMode = _createMode;
    m_createModeHasBeenSet = true;
}

bool AttachPolicyInfo::CreateModeHasBeenSet() const
{
    return m_createModeHasBeenSet;
}

string AttachPolicyInfo::GetPolicyType() const
{
    return m_policyType;
}

void AttachPolicyInfo::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool AttachPolicyInfo::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

