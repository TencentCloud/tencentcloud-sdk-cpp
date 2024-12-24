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

#include <tencentcloud/aca/v20210323/model/Department.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

Department::Department() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_outpatientOnHasBeenSet(false),
    m_inHospitalOnHasBeenSet(false)
{
}

CoreInternalOutcome Department::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Department.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Department.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Department.Scope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = value["Scope"].GetInt64();
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("OutpatientOn") && !value["OutpatientOn"].IsNull())
    {
        if (!value["OutpatientOn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Department.OutpatientOn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_outpatientOn = value["OutpatientOn"].GetBool();
        m_outpatientOnHasBeenSet = true;
    }

    if (value.HasMember("InHospitalOn") && !value["InHospitalOn"].IsNull())
    {
        if (!value["InHospitalOn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Department.InHospitalOn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_inHospitalOn = value["InHospitalOn"].GetBool();
        m_inHospitalOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Department::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
    }

    if (m_outpatientOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutpatientOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outpatientOn, allocator);
    }

    if (m_inHospitalOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InHospitalOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inHospitalOn, allocator);
    }

}


string Department::GetId() const
{
    return m_id;
}

void Department::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Department::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Department::GetName() const
{
    return m_name;
}

void Department::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Department::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t Department::GetScope() const
{
    return m_scope;
}

void Department::SetScope(const int64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool Department::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

bool Department::GetOutpatientOn() const
{
    return m_outpatientOn;
}

void Department::SetOutpatientOn(const bool& _outpatientOn)
{
    m_outpatientOn = _outpatientOn;
    m_outpatientOnHasBeenSet = true;
}

bool Department::OutpatientOnHasBeenSet() const
{
    return m_outpatientOnHasBeenSet;
}

bool Department::GetInHospitalOn() const
{
    return m_inHospitalOn;
}

void Department::SetInHospitalOn(const bool& _inHospitalOn)
{
    m_inHospitalOn = _inHospitalOn;
    m_inHospitalOnHasBeenSet = true;
}

bool Department::InHospitalOnHasBeenSet() const
{
    return m_inHospitalOnHasBeenSet;
}

