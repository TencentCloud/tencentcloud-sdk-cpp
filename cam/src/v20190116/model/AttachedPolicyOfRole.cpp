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

#include <tencentcloud/cam/v20190116/model/AttachedPolicyOfRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

AttachedPolicyOfRole::AttachedPolicyOfRole() :
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_createModeHasBeenSet(false),
    m_deactivedHasBeenSet(false),
    m_deactivedDetailHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome AttachedPolicyOfRole::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPolicyOfRole.PolicyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetUint64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPolicyOfRole.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPolicyOfRole.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPolicyOfRole.PolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = string(value["PolicyType"].GetString());
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateMode") && !value["CreateMode"].IsNull())
    {
        if (!value["CreateMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPolicyOfRole.CreateMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createMode = value["CreateMode"].GetUint64();
        m_createModeHasBeenSet = true;
    }

    if (value.HasMember("Deactived") && !value["Deactived"].IsNull())
    {
        if (!value["Deactived"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPolicyOfRole.Deactived` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deactived = value["Deactived"].GetUint64();
        m_deactivedHasBeenSet = true;
    }

    if (value.HasMember("DeactivedDetail") && !value["DeactivedDetail"].IsNull())
    {
        if (!value["DeactivedDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttachedPolicyOfRole.DeactivedDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["DeactivedDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deactivedDetail.push_back((*itr).GetString());
        }
        m_deactivedDetailHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedPolicyOfRole.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttachedPolicyOfRole::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_createModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createMode, allocator);
    }

    if (m_deactivedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deactived";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deactived, allocator);
    }

    if (m_deactivedDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeactivedDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deactivedDetail.begin(); itr != m_deactivedDetail.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AttachedPolicyOfRole::GetPolicyId() const
{
    return m_policyId;
}

void AttachedPolicyOfRole::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool AttachedPolicyOfRole::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string AttachedPolicyOfRole::GetPolicyName() const
{
    return m_policyName;
}

void AttachedPolicyOfRole::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AttachedPolicyOfRole::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string AttachedPolicyOfRole::GetAddTime() const
{
    return m_addTime;
}

void AttachedPolicyOfRole::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool AttachedPolicyOfRole::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string AttachedPolicyOfRole::GetPolicyType() const
{
    return m_policyType;
}

void AttachedPolicyOfRole::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool AttachedPolicyOfRole::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

uint64_t AttachedPolicyOfRole::GetCreateMode() const
{
    return m_createMode;
}

void AttachedPolicyOfRole::SetCreateMode(const uint64_t& _createMode)
{
    m_createMode = _createMode;
    m_createModeHasBeenSet = true;
}

bool AttachedPolicyOfRole::CreateModeHasBeenSet() const
{
    return m_createModeHasBeenSet;
}

uint64_t AttachedPolicyOfRole::GetDeactived() const
{
    return m_deactived;
}

void AttachedPolicyOfRole::SetDeactived(const uint64_t& _deactived)
{
    m_deactived = _deactived;
    m_deactivedHasBeenSet = true;
}

bool AttachedPolicyOfRole::DeactivedHasBeenSet() const
{
    return m_deactivedHasBeenSet;
}

vector<string> AttachedPolicyOfRole::GetDeactivedDetail() const
{
    return m_deactivedDetail;
}

void AttachedPolicyOfRole::SetDeactivedDetail(const vector<string>& _deactivedDetail)
{
    m_deactivedDetail = _deactivedDetail;
    m_deactivedDetailHasBeenSet = true;
}

bool AttachedPolicyOfRole::DeactivedDetailHasBeenSet() const
{
    return m_deactivedDetailHasBeenSet;
}

string AttachedPolicyOfRole::GetDescription() const
{
    return m_description;
}

void AttachedPolicyOfRole::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AttachedPolicyOfRole::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

