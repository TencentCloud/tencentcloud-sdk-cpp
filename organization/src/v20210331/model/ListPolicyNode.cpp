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

#include <tencentcloud/organization/v20210331/model/ListPolicyNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ListPolicyNode::ListPolicyNode() :
    m_addTimeHasBeenSet(false),
    m_attachedTimesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome ListPolicyNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListPolicyNode.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("AttachedTimes") && !value["AttachedTimes"].IsNull())
    {
        if (!value["AttachedTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListPolicyNode.AttachedTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attachedTimes = value["AttachedTimes"].GetUint64();
        m_attachedTimesHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListPolicyNode.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListPolicyNode.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListPolicyNode.PolicyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetUint64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListPolicyNode.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListPolicyNode.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListPolicyNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attachedTimes, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


string ListPolicyNode::GetAddTime() const
{
    return m_addTime;
}

void ListPolicyNode::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool ListPolicyNode::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

uint64_t ListPolicyNode::GetAttachedTimes() const
{
    return m_attachedTimes;
}

void ListPolicyNode::SetAttachedTimes(const uint64_t& _attachedTimes)
{
    m_attachedTimes = _attachedTimes;
    m_attachedTimesHasBeenSet = true;
}

bool ListPolicyNode::AttachedTimesHasBeenSet() const
{
    return m_attachedTimesHasBeenSet;
}

string ListPolicyNode::GetDescription() const
{
    return m_description;
}

void ListPolicyNode::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ListPolicyNode::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ListPolicyNode::GetPolicyName() const
{
    return m_policyName;
}

void ListPolicyNode::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool ListPolicyNode::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

uint64_t ListPolicyNode::GetPolicyId() const
{
    return m_policyId;
}

void ListPolicyNode::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ListPolicyNode::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ListPolicyNode::GetUpdateTime() const
{
    return m_updateTime;
}

void ListPolicyNode::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ListPolicyNode::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t ListPolicyNode::GetType() const
{
    return m_type;
}

void ListPolicyNode::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ListPolicyNode::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

