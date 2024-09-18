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

#include <tencentcloud/tke/v20180525/model/OpenPolicySwitch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

OpenPolicySwitch::OpenPolicySwitch() :
    m_enforcementActionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_enabledStatusHasBeenSet(false),
    m_openConstraintInfoListHasBeenSet(false)
{
}

CoreInternalOutcome OpenPolicySwitch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnforcementAction") && !value["EnforcementAction"].IsNull())
    {
        if (!value["EnforcementAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicySwitch.EnforcementAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enforcementAction = string(value["EnforcementAction"].GetString());
        m_enforcementActionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicySwitch.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicySwitch.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("EnabledStatus") && !value["EnabledStatus"].IsNull())
    {
        if (!value["EnabledStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenPolicySwitch.EnabledStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabledStatus = string(value["EnabledStatus"].GetString());
        m_enabledStatusHasBeenSet = true;
    }

    if (value.HasMember("OpenConstraintInfoList") && !value["OpenConstraintInfoList"].IsNull())
    {
        if (!value["OpenConstraintInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OpenPolicySwitch.OpenConstraintInfoList` is not array type"));

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

void OpenPolicySwitch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enforcementActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnforcementAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enforcementAction.c_str(), allocator).Move(), allocator);
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


string OpenPolicySwitch::GetEnforcementAction() const
{
    return m_enforcementAction;
}

void OpenPolicySwitch::SetEnforcementAction(const string& _enforcementAction)
{
    m_enforcementAction = _enforcementAction;
    m_enforcementActionHasBeenSet = true;
}

bool OpenPolicySwitch::EnforcementActionHasBeenSet() const
{
    return m_enforcementActionHasBeenSet;
}

string OpenPolicySwitch::GetName() const
{
    return m_name;
}

void OpenPolicySwitch::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OpenPolicySwitch::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string OpenPolicySwitch::GetKind() const
{
    return m_kind;
}

void OpenPolicySwitch::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool OpenPolicySwitch::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string OpenPolicySwitch::GetEnabledStatus() const
{
    return m_enabledStatus;
}

void OpenPolicySwitch::SetEnabledStatus(const string& _enabledStatus)
{
    m_enabledStatus = _enabledStatus;
    m_enabledStatusHasBeenSet = true;
}

bool OpenPolicySwitch::EnabledStatusHasBeenSet() const
{
    return m_enabledStatusHasBeenSet;
}

vector<OpenConstraintInfo> OpenPolicySwitch::GetOpenConstraintInfoList() const
{
    return m_openConstraintInfoList;
}

void OpenPolicySwitch::SetOpenConstraintInfoList(const vector<OpenConstraintInfo>& _openConstraintInfoList)
{
    m_openConstraintInfoList = _openConstraintInfoList;
    m_openConstraintInfoListHasBeenSet = true;
}

bool OpenPolicySwitch::OpenConstraintInfoListHasBeenSet() const
{
    return m_openConstraintInfoListHasBeenSet;
}

