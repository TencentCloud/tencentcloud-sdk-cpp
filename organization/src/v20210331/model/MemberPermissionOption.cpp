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

#include <tencentcloud/organization/v20210331/model/MemberPermissionOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

MemberPermissionOption::MemberPermissionOption() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_defaultCheckedHasBeenSet(false),
    m_disabledCodeHasBeenSet(false)
{
}

CoreInternalOutcome MemberPermissionOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberPermissionOption.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberPermissionOption.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberPermissionOption.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DefaultChecked") && !value["DefaultChecked"].IsNull())
    {
        if (!value["DefaultChecked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MemberPermissionOption.DefaultChecked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultChecked = value["DefaultChecked"].GetBool();
        m_defaultCheckedHasBeenSet = true;
    }

    if (value.HasMember("DisabledCode") && !value["DisabledCode"].IsNull())
    {
        if (!value["DisabledCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberPermissionOption.DisabledCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disabledCode = string(value["DisabledCode"].GetString());
        m_disabledCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MemberPermissionOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultCheckedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultChecked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultChecked, allocator);
    }

    if (m_disabledCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisabledCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disabledCode.c_str(), allocator).Move(), allocator);
    }

}


uint64_t MemberPermissionOption::GetId() const
{
    return m_id;
}

void MemberPermissionOption::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MemberPermissionOption::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string MemberPermissionOption::GetName() const
{
    return m_name;
}

void MemberPermissionOption::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MemberPermissionOption::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MemberPermissionOption::GetStatus() const
{
    return m_status;
}

void MemberPermissionOption::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MemberPermissionOption::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool MemberPermissionOption::GetDefaultChecked() const
{
    return m_defaultChecked;
}

void MemberPermissionOption::SetDefaultChecked(const bool& _defaultChecked)
{
    m_defaultChecked = _defaultChecked;
    m_defaultCheckedHasBeenSet = true;
}

bool MemberPermissionOption::DefaultCheckedHasBeenSet() const
{
    return m_defaultCheckedHasBeenSet;
}

string MemberPermissionOption::GetDisabledCode() const
{
    return m_disabledCode;
}

void MemberPermissionOption::SetDisabledCode(const string& _disabledCode)
{
    m_disabledCode = _disabledCode;
    m_disabledCodeHasBeenSet = true;
}

bool MemberPermissionOption::DisabledCodeHasBeenSet() const
{
    return m_disabledCodeHasBeenSet;
}

