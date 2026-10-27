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

#include <tencentcloud/cvd/v20201104/model/User.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

User::User() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_mailHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_strategyNameHasBeenSet(false),
    m_bindStatusHasBeenSet(false)
{
}

CoreInternalOutcome User::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Mail") && !value["Mail"].IsNull())
    {
        if (!value["Mail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Mail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mail = string(value["Mail"].GetString());
        m_mailHasBeenSet = true;
    }

    if (value.HasMember("PhoneNum") && !value["PhoneNum"].IsNull())
    {
        if (!value["PhoneNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.PhoneNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNum = string(value["PhoneNum"].GetString());
        m_phoneNumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DepartmentId") && !value["DepartmentId"].IsNull())
    {
        if (!value["DepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.DepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentId = string(value["DepartmentId"].GetString());
        m_departmentIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.StrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = string(value["StrategyId"].GetString());
        m_strategyIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `User.BindStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = value["BindStatus"].GetBool();
        m_bindStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void User::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNum.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindStatus, allocator);
    }

}


string User::GetId() const
{
    return m_id;
}

void User::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool User::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string User::GetName() const
{
    return m_name;
}

void User::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool User::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string User::GetDisplayName() const
{
    return m_displayName;
}

void User::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool User::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string User::GetMail() const
{
    return m_mail;
}

void User::SetMail(const string& _mail)
{
    m_mail = _mail;
    m_mailHasBeenSet = true;
}

bool User::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

string User::GetPhoneNum() const
{
    return m_phoneNum;
}

void User::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool User::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

string User::GetStatus() const
{
    return m_status;
}

void User::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool User::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string User::GetDepartmentId() const
{
    return m_departmentId;
}

void User::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool User::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

string User::GetStrategyId() const
{
    return m_strategyId;
}

void User::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool User::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

string User::GetStrategyName() const
{
    return m_strategyName;
}

void User::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool User::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

bool User::GetBindStatus() const
{
    return m_bindStatus;
}

void User::SetBindStatus(const bool& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool User::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

