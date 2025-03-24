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

#include <tencentcloud/chc/v20230418/model/Personnel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

Personnel::Personnel() :
    m_iDCardNumberHasBeenSet(false),
    m_iDCardTypeHasBeenSet(false),
    m_companyHasBeenSet(false),
    m_languageTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_telNumberHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_wechatHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

CoreInternalOutcome Personnel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IDCardNumber") && !value["IDCardNumber"].IsNull())
    {
        if (!value["IDCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Personnel.IDCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDCardNumber = string(value["IDCardNumber"].GetString());
        m_iDCardNumberHasBeenSet = true;
    }

    if (value.HasMember("IDCardType") && !value["IDCardType"].IsNull())
    {
        if (!value["IDCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Personnel.IDCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDCardType = string(value["IDCardType"].GetString());
        m_iDCardTypeHasBeenSet = true;
    }

    if (value.HasMember("Company") && !value["Company"].IsNull())
    {
        if (!value["Company"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Personnel.Company` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_company = string(value["Company"].GetString());
        m_companyHasBeenSet = true;
    }

    if (value.HasMember("LanguageType") && !value["LanguageType"].IsNull())
    {
        if (!value["LanguageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Personnel.LanguageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_languageType = string(value["LanguageType"].GetString());
        m_languageTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Personnel.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TelNumber") && !value["TelNumber"].IsNull())
    {
        if (!value["TelNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Personnel.TelNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telNumber = string(value["TelNumber"].GetString());
        m_telNumberHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Personnel.Position` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_position = string(value["Position"].GetString());
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("Wechat") && !value["Wechat"].IsNull())
    {
        if (!value["Wechat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Personnel.Wechat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechat = string(value["Wechat"].GetString());
        m_wechatHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Personnel.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Personnel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_iDCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_companyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Company";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_company.c_str(), allocator).Move(), allocator);
    }

    if (m_languageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_languageType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_telNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TelNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wechat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechat.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

}


string Personnel::GetIDCardNumber() const
{
    return m_iDCardNumber;
}

void Personnel::SetIDCardNumber(const string& _iDCardNumber)
{
    m_iDCardNumber = _iDCardNumber;
    m_iDCardNumberHasBeenSet = true;
}

bool Personnel::IDCardNumberHasBeenSet() const
{
    return m_iDCardNumberHasBeenSet;
}

string Personnel::GetIDCardType() const
{
    return m_iDCardType;
}

void Personnel::SetIDCardType(const string& _iDCardType)
{
    m_iDCardType = _iDCardType;
    m_iDCardTypeHasBeenSet = true;
}

bool Personnel::IDCardTypeHasBeenSet() const
{
    return m_iDCardTypeHasBeenSet;
}

string Personnel::GetCompany() const
{
    return m_company;
}

void Personnel::SetCompany(const string& _company)
{
    m_company = _company;
    m_companyHasBeenSet = true;
}

bool Personnel::CompanyHasBeenSet() const
{
    return m_companyHasBeenSet;
}

string Personnel::GetLanguageType() const
{
    return m_languageType;
}

void Personnel::SetLanguageType(const string& _languageType)
{
    m_languageType = _languageType;
    m_languageTypeHasBeenSet = true;
}

bool Personnel::LanguageTypeHasBeenSet() const
{
    return m_languageTypeHasBeenSet;
}

string Personnel::GetName() const
{
    return m_name;
}

void Personnel::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Personnel::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Personnel::GetTelNumber() const
{
    return m_telNumber;
}

void Personnel::SetTelNumber(const string& _telNumber)
{
    m_telNumber = _telNumber;
    m_telNumberHasBeenSet = true;
}

bool Personnel::TelNumberHasBeenSet() const
{
    return m_telNumberHasBeenSet;
}

string Personnel::GetPosition() const
{
    return m_position;
}

void Personnel::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool Personnel::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string Personnel::GetWechat() const
{
    return m_wechat;
}

void Personnel::SetWechat(const string& _wechat)
{
    m_wechat = _wechat;
    m_wechatHasBeenSet = true;
}

bool Personnel::WechatHasBeenSet() const
{
    return m_wechatHasBeenSet;
}

string Personnel::GetEmail() const
{
    return m_email;
}

void Personnel::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool Personnel::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

