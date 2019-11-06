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
    m_policyTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_operateOwnerUinHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_operateUinTypeHasBeenSet(false)
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

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `AttachPolicyInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("OperateOwnerUin") && !value["OperateOwnerUin"].IsNull())
    {
        if (!value["OperateOwnerUin"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AttachPolicyInfo.OperateOwnerUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operateOwnerUin = value["OperateOwnerUin"].GetUint64();
        m_operateOwnerUinHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AttachPolicyInfo.OperateUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = value["OperateUin"].GetUint64();
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("OperateUinType") && !value["OperateUinType"].IsNull())
    {
        if (!value["OperateUinType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AttachPolicyInfo.OperateUinType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operateUinType = value["OperateUinType"].GetUint64();
        m_operateUinTypeHasBeenSet = true;
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

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_operateOwnerUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OperateOwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateOwnerUin, allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateUin, allocator);
    }

    if (m_operateUinTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OperateUinType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateUinType, allocator);
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

string AttachPolicyInfo::GetRemark() const
{
    return m_remark;
}

void AttachPolicyInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AttachPolicyInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t AttachPolicyInfo::GetOperateOwnerUin() const
{
    return m_operateOwnerUin;
}

void AttachPolicyInfo::SetOperateOwnerUin(const uint64_t& _operateOwnerUin)
{
    m_operateOwnerUin = _operateOwnerUin;
    m_operateOwnerUinHasBeenSet = true;
}

bool AttachPolicyInfo::OperateOwnerUinHasBeenSet() const
{
    return m_operateOwnerUinHasBeenSet;
}

uint64_t AttachPolicyInfo::GetOperateUin() const
{
    return m_operateUin;
}

void AttachPolicyInfo::SetOperateUin(const uint64_t& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool AttachPolicyInfo::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

uint64_t AttachPolicyInfo::GetOperateUinType() const
{
    return m_operateUinType;
}

void AttachPolicyInfo::SetOperateUinType(const uint64_t& _operateUinType)
{
    m_operateUinType = _operateUinType;
    m_operateUinTypeHasBeenSet = true;
}

bool AttachPolicyInfo::OperateUinTypeHasBeenSet() const
{
    return m_operateUinTypeHasBeenSet;
}

