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

#include <tencentcloud/ctem/v20231128/model/DisplayWechatOfficialAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayWechatOfficialAccount::DisplayWechatOfficialAccount() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_qrCodeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome DisplayWechatOfficialAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWechatOfficialAccount.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWechatOfficialAccount.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWechatOfficialAccount.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Logo") && !value["Logo"].IsNull())
    {
        if (!value["Logo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWechatOfficialAccount.Logo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logo = string(value["Logo"].GetString());
        m_logoHasBeenSet = true;
    }

    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWechatOfficialAccount.AccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = string(value["AccountId"].GetString());
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("QrCode") && !value["QrCode"].IsNull())
    {
        if (!value["QrCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWechatOfficialAccount.QrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qrCode = string(value["QrCode"].GetString());
        m_qrCodeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayWechatOfficialAccount.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayWechatOfficialAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

    if (m_qrCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qrCode.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplayWechatOfficialAccount::GetId() const
{
    return m_id;
}

void DisplayWechatOfficialAccount::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayWechatOfficialAccount::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayWechatOfficialAccount::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayWechatOfficialAccount::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayWechatOfficialAccount::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayWechatOfficialAccount::GetName() const
{
    return m_name;
}

void DisplayWechatOfficialAccount::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DisplayWechatOfficialAccount::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DisplayWechatOfficialAccount::GetLogo() const
{
    return m_logo;
}

void DisplayWechatOfficialAccount::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool DisplayWechatOfficialAccount::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string DisplayWechatOfficialAccount::GetAccountId() const
{
    return m_accountId;
}

void DisplayWechatOfficialAccount::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool DisplayWechatOfficialAccount::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string DisplayWechatOfficialAccount::GetQrCode() const
{
    return m_qrCode;
}

void DisplayWechatOfficialAccount::SetQrCode(const string& _qrCode)
{
    m_qrCode = _qrCode;
    m_qrCodeHasBeenSet = true;
}

bool DisplayWechatOfficialAccount::QrCodeHasBeenSet() const
{
    return m_qrCodeHasBeenSet;
}

string DisplayWechatOfficialAccount::GetDescription() const
{
    return m_description;
}

void DisplayWechatOfficialAccount::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DisplayWechatOfficialAccount::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

