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

#include <tencentcloud/cvd/v20201104/model/Usage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

Usage::Usage() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_activeTimeHasBeenSet(false),
    m_idleTimeHasBeenSet(false),
    m_anonymousAccessHasBeenSet(false)
{
}

CoreInternalOutcome Usage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("ActiveTime") && !value["ActiveTime"].IsNull())
    {
        if (!value["ActiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.ActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeTime = string(value["ActiveTime"].GetString());
        m_activeTimeHasBeenSet = true;
    }

    if (value.HasMember("IdleTime") && !value["IdleTime"].IsNull())
    {
        if (!value["IdleTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.IdleTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idleTime = string(value["IdleTime"].GetString());
        m_idleTimeHasBeenSet = true;
    }

    if (value.HasMember("AnonymousAccess") && !value["AnonymousAccess"].IsNull())
    {
        if (!value["AnonymousAccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Usage.AnonymousAccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_anonymousAccess = value["AnonymousAccess"].GetBool();
        m_anonymousAccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Usage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_activeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_idleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idleTime.c_str(), allocator).Move(), allocator);
    }

    if (m_anonymousAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnonymousAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_anonymousAccess, allocator);
    }

}


string Usage::GetInstanceId() const
{
    return m_instanceId;
}

void Usage::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Usage::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Usage::GetName() const
{
    return m_name;
}

void Usage::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Usage::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Usage::GetStatus() const
{
    return m_status;
}

void Usage::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Usage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Usage::GetUserName() const
{
    return m_userName;
}

void Usage::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool Usage::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string Usage::GetChargeType() const
{
    return m_chargeType;
}

void Usage::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool Usage::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string Usage::GetInstanceType() const
{
    return m_instanceType;
}

void Usage::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool Usage::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string Usage::GetOsName() const
{
    return m_osName;
}

void Usage::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool Usage::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string Usage::GetActiveTime() const
{
    return m_activeTime;
}

void Usage::SetActiveTime(const string& _activeTime)
{
    m_activeTime = _activeTime;
    m_activeTimeHasBeenSet = true;
}

bool Usage::ActiveTimeHasBeenSet() const
{
    return m_activeTimeHasBeenSet;
}

string Usage::GetIdleTime() const
{
    return m_idleTime;
}

void Usage::SetIdleTime(const string& _idleTime)
{
    m_idleTime = _idleTime;
    m_idleTimeHasBeenSet = true;
}

bool Usage::IdleTimeHasBeenSet() const
{
    return m_idleTimeHasBeenSet;
}

bool Usage::GetAnonymousAccess() const
{
    return m_anonymousAccess;
}

void Usage::SetAnonymousAccess(const bool& _anonymousAccess)
{
    m_anonymousAccess = _anonymousAccess;
    m_anonymousAccessHasBeenSet = true;
}

bool Usage::AnonymousAccessHasBeenSet() const
{
    return m_anonymousAccessHasBeenSet;
}

