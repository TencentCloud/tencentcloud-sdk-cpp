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

#include <tencentcloud/tke/v20180525/model/OpenPolicyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

OpenPolicyInfo::OpenPolicyInfo() :
    m_policyCategoryHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyDescHasBeenSet(false),
    m_enforcementActionHasBeenSet(false),
    m_eventNumsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_enabledStatusHasBeenSet(false),
    m_constraintYamlExampleHasBeenSet(false),
    m_openConstraintInfoListHasBeenSet(false)
{
}

CoreInternalOutcome OpenPolicyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyCategory") && !value["PolicyCategory"].IsNull())
    {
        if (!value["PolicyCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicyInfo.PolicyCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyCategory = string(value["PolicyCategory"].GetString());
        m_policyCategoryHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicyInfo.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyDesc") && !value["PolicyDesc"].IsNull())
    {
        if (!value["PolicyDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicyInfo.PolicyDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDesc = string(value["PolicyDesc"].GetString());
        m_policyDescHasBeenSet = true;
    }

    if (value.HasMember("EnforcementAction") && !value["EnforcementAction"].IsNull())
    {
        if (!value["EnforcementAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicyInfo.EnforcementAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enforcementAction = string(value["EnforcementAction"].GetString());
        m_enforcementActionHasBeenSet = true;
    }

    if (value.HasMember("EventNums") && !value["EventNums"].IsNull())
    {
        if (!value["EventNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicyInfo.EventNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventNums = value["EventNums"].GetUint64();
        m_eventNumsHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicyInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicyInfo.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("EnabledStatus") && !value["EnabledStatus"].IsNull())
    {
        if (!value["EnabledStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicyInfo.EnabledStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabledStatus = string(value["EnabledStatus"].GetString());
        m_enabledStatusHasBeenSet = true;
    }

    if (value.HasMember("ConstraintYamlExample") && !value["ConstraintYamlExample"].IsNull())
    {
        if (!value["ConstraintYamlExample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicyInfo.ConstraintYamlExample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_constraintYamlExample = string(value["ConstraintYamlExample"].GetString());
        m_constraintYamlExampleHasBeenSet = true;
    }

    if (value.HasMember("OpenConstraintInfoList") && !value["OpenConstraintInfoList"].IsNull())
    {
        if (!value["OpenConstraintInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OpenPolicyInfo.OpenConstraintInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["OpenConstraintInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OpenConstraintInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_openConstraintInfoList.push_back(item);
        }
        m_openConstraintInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenPolicyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_enforcementActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnforcementAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enforcementAction.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventNums, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnabledStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabledStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_constraintYamlExampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConstraintYamlExample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_constraintYamlExample.c_str(), allocator).Move(), allocator);
    }

    if (m_openConstraintInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenConstraintInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_openConstraintInfoList.begin(); itr != m_openConstraintInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string OpenPolicyInfo::GetPolicyCategory() const
{
    return m_policyCategory;
}

void OpenPolicyInfo::SetPolicyCategory(const string& _policyCategory)
{
    m_policyCategory = _policyCategory;
    m_policyCategoryHasBeenSet = true;
}

bool OpenPolicyInfo::PolicyCategoryHasBeenSet() const
{
    return m_policyCategoryHasBeenSet;
}

string OpenPolicyInfo::GetPolicyName() const
{
    return m_policyName;
}

void OpenPolicyInfo::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool OpenPolicyInfo::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string OpenPolicyInfo::GetPolicyDesc() const
{
    return m_policyDesc;
}

void OpenPolicyInfo::SetPolicyDesc(const string& _policyDesc)
{
    m_policyDesc = _policyDesc;
    m_policyDescHasBeenSet = true;
}

bool OpenPolicyInfo::PolicyDescHasBeenSet() const
{
    return m_policyDescHasBeenSet;
}

string OpenPolicyInfo::GetEnforcementAction() const
{
    return m_enforcementAction;
}

void OpenPolicyInfo::SetEnforcementAction(const string& _enforcementAction)
{
    m_enforcementAction = _enforcementAction;
    m_enforcementActionHasBeenSet = true;
}

bool OpenPolicyInfo::EnforcementActionHasBeenSet() const
{
    return m_enforcementActionHasBeenSet;
}

uint64_t OpenPolicyInfo::GetEventNums() const
{
    return m_eventNums;
}

void OpenPolicyInfo::SetEventNums(const uint64_t& _eventNums)
{
    m_eventNums = _eventNums;
    m_eventNumsHasBeenSet = true;
}

bool OpenPolicyInfo::EventNumsHasBeenSet() const
{
    return m_eventNumsHasBeenSet;
}

string OpenPolicyInfo::GetName() const
{
    return m_name;
}

void OpenPolicyInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OpenPolicyInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string OpenPolicyInfo::GetKind() const
{
    return m_kind;
}

void OpenPolicyInfo::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool OpenPolicyInfo::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string OpenPolicyInfo::GetEnabledStatus() const
{
    return m_enabledStatus;
}

void OpenPolicyInfo::SetEnabledStatus(const string& _enabledStatus)
{
    m_enabledStatus = _enabledStatus;
    m_enabledStatusHasBeenSet = true;
}

bool OpenPolicyInfo::EnabledStatusHasBeenSet() const
{
    return m_enabledStatusHasBeenSet;
}

string OpenPolicyInfo::GetConstraintYamlExample() const
{
    return m_constraintYamlExample;
}

void OpenPolicyInfo::SetConstraintYamlExample(const string& _constraintYamlExample)
{
    m_constraintYamlExample = _constraintYamlExample;
    m_constraintYamlExampleHasBeenSet = true;
}

bool OpenPolicyInfo::ConstraintYamlExampleHasBeenSet() const
{
    return m_constraintYamlExampleHasBeenSet;
}

vector<OpenConstraintInfo> OpenPolicyInfo::GetOpenConstraintInfoList() const
{
    return m_openConstraintInfoList;
}

void OpenPolicyInfo::SetOpenConstraintInfoList(const vector<OpenConstraintInfo>& _openConstraintInfoList)
{
    m_openConstraintInfoList = _openConstraintInfoList;
    m_openConstraintInfoListHasBeenSet = true;
}

bool OpenPolicyInfo::OpenConstraintInfoListHasBeenSet() const
{
    return m_openConstraintInfoListHasBeenSet;
}

