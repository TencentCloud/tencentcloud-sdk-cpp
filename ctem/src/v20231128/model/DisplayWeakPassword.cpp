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

#include <tencentcloud/ctem/v20231128/model/DisplayWeakPassword.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayWeakPassword::DisplayWeakPassword() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_isHoneypotHasBeenSet(false),
    m_screenshotUrlHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false)
{
}

CoreInternalOutcome DisplayWeakPassword::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWeakPassword.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWeakPassword.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWeakPassword.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWeakPassword.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWeakPassword.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWeakPassword.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWeakPassword.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWeakPassword.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("IsHoneypot") && !value["IsHoneypot"].IsNull())
    {
        if (!value["IsHoneypot"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWeakPassword.IsHoneypot` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isHoneypot = value["IsHoneypot"].GetBool();
        m_isHoneypotHasBeenSet = true;
    }

    if (value.HasMember("ScreenshotUrl") && !value["ScreenshotUrl"].IsNull())
    {
        if (!value["ScreenshotUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWeakPassword.ScreenshotUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_screenshotUrl = string(value["ScreenshotUrl"].GetString());
        m_screenshotUrlHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWeakPassword.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWeakPassword.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayWeakPassword::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_isHoneypotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHoneypot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isHoneypot, allocator);
    }

    if (m_screenshotUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreenshotUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_screenshotUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplayWeakPassword::GetId() const
{
    return m_id;
}

void DisplayWeakPassword::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayWeakPassword::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayWeakPassword::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayWeakPassword::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayWeakPassword::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayWeakPassword::GetIp() const
{
    return m_ip;
}

void DisplayWeakPassword::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DisplayWeakPassword::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t DisplayWeakPassword::GetPort() const
{
    return m_port;
}

void DisplayWeakPassword::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DisplayWeakPassword::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string DisplayWeakPassword::GetUrl() const
{
    return m_url;
}

void DisplayWeakPassword::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DisplayWeakPassword::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DisplayWeakPassword::GetType() const
{
    return m_type;
}

void DisplayWeakPassword::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DisplayWeakPassword::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DisplayWeakPassword::GetAccount() const
{
    return m_account;
}

void DisplayWeakPassword::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool DisplayWeakPassword::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string DisplayWeakPassword::GetPassword() const
{
    return m_password;
}

void DisplayWeakPassword::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool DisplayWeakPassword::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

bool DisplayWeakPassword::GetIsHoneypot() const
{
    return m_isHoneypot;
}

void DisplayWeakPassword::SetIsHoneypot(const bool& _isHoneypot)
{
    m_isHoneypot = _isHoneypot;
    m_isHoneypotHasBeenSet = true;
}

bool DisplayWeakPassword::IsHoneypotHasBeenSet() const
{
    return m_isHoneypotHasBeenSet;
}

string DisplayWeakPassword::GetScreenshotUrl() const
{
    return m_screenshotUrl;
}

void DisplayWeakPassword::SetScreenshotUrl(const string& _screenshotUrl)
{
    m_screenshotUrl = _screenshotUrl;
    m_screenshotUrlHasBeenSet = true;
}

bool DisplayWeakPassword::ScreenshotUrlHasBeenSet() const
{
    return m_screenshotUrlHasBeenSet;
}

string DisplayWeakPassword::GetStatus() const
{
    return m_status;
}

void DisplayWeakPassword::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DisplayWeakPassword::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DisplayWeakPassword::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void DisplayWeakPassword::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool DisplayWeakPassword::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

