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

#include <tencentcloud/tcb/v20180608/model/APIsUserKeyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

APIsUserKeyInfo::APIsUserKeyInfo() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_keyIDHasBeenSet(false),
    m_extHasBeenSet(false),
    m_authTypeCodeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_bindServiceListHasBeenSet(false),
    m_authTypeNameHasBeenSet(false),
    m_ticketIDHasBeenSet(false),
    m_demoCodeFunctionNameHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_updateAtHasBeenSet(false)
{
}

CoreInternalOutcome APIsUserKeyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIsUserKeyInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIsUserKeyInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("KeyID") && !value["KeyID"].IsNull())
    {
        if (!value["KeyID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIsUserKeyInfo.KeyID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyID = string(value["KeyID"].GetString());
        m_keyIDHasBeenSet = true;
    }

    if (value.HasMember("Ext") && !value["Ext"].IsNull())
    {
        if (!value["Ext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIsUserKeyInfo.Ext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ext = string(value["Ext"].GetString());
        m_extHasBeenSet = true;
    }

    if (value.HasMember("AuthTypeCode") && !value["AuthTypeCode"].IsNull())
    {
        if (!value["AuthTypeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIsUserKeyInfo.AuthTypeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authTypeCode = string(value["AuthTypeCode"].GetString());
        m_authTypeCodeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIsUserKeyInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BindServiceList") && !value["BindServiceList"].IsNull())
    {
        if (!value["BindServiceList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `APIsUserKeyInfo.BindServiceList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bindServiceList.Deserialize(value["BindServiceList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bindServiceListHasBeenSet = true;
    }

    if (value.HasMember("AuthTypeName") && !value["AuthTypeName"].IsNull())
    {
        if (!value["AuthTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIsUserKeyInfo.AuthTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authTypeName = string(value["AuthTypeName"].GetString());
        m_authTypeNameHasBeenSet = true;
    }

    if (value.HasMember("TicketID") && !value["TicketID"].IsNull())
    {
        if (!value["TicketID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIsUserKeyInfo.TicketID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ticketID = string(value["TicketID"].GetString());
        m_ticketIDHasBeenSet = true;
    }

    if (value.HasMember("DemoCodeFunctionName") && !value["DemoCodeFunctionName"].IsNull())
    {
        if (!value["DemoCodeFunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIsUserKeyInfo.DemoCodeFunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_demoCodeFunctionName = string(value["DemoCodeFunctionName"].GetString());
        m_demoCodeFunctionNameHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIsUserKeyInfo.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("UpdateAt") && !value["UpdateAt"].IsNull())
    {
        if (!value["UpdateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIsUserKeyInfo.UpdateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateAt = string(value["UpdateAt"].GetString());
        m_updateAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void APIsUserKeyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyID.c_str(), allocator).Move(), allocator);
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ext.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTypeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authTypeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_bindServiceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindServiceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bindServiceList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_authTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_ticketIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TicketID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ticketID.c_str(), allocator).Move(), allocator);
    }

    if (m_demoCodeFunctionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DemoCodeFunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_demoCodeFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updateAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateAt.c_str(), allocator).Move(), allocator);
    }

}


string APIsUserKeyInfo::GetName() const
{
    return m_name;
}

void APIsUserKeyInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool APIsUserKeyInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string APIsUserKeyInfo::GetDescription() const
{
    return m_description;
}

void APIsUserKeyInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool APIsUserKeyInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string APIsUserKeyInfo::GetKeyID() const
{
    return m_keyID;
}

void APIsUserKeyInfo::SetKeyID(const string& _keyID)
{
    m_keyID = _keyID;
    m_keyIDHasBeenSet = true;
}

bool APIsUserKeyInfo::KeyIDHasBeenSet() const
{
    return m_keyIDHasBeenSet;
}

string APIsUserKeyInfo::GetExt() const
{
    return m_ext;
}

void APIsUserKeyInfo::SetExt(const string& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool APIsUserKeyInfo::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

string APIsUserKeyInfo::GetAuthTypeCode() const
{
    return m_authTypeCode;
}

void APIsUserKeyInfo::SetAuthTypeCode(const string& _authTypeCode)
{
    m_authTypeCode = _authTypeCode;
    m_authTypeCodeHasBeenSet = true;
}

bool APIsUserKeyInfo::AuthTypeCodeHasBeenSet() const
{
    return m_authTypeCodeHasBeenSet;
}

string APIsUserKeyInfo::GetStatus() const
{
    return m_status;
}

void APIsUserKeyInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool APIsUserKeyInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

BindServiceList APIsUserKeyInfo::GetBindServiceList() const
{
    return m_bindServiceList;
}

void APIsUserKeyInfo::SetBindServiceList(const BindServiceList& _bindServiceList)
{
    m_bindServiceList = _bindServiceList;
    m_bindServiceListHasBeenSet = true;
}

bool APIsUserKeyInfo::BindServiceListHasBeenSet() const
{
    return m_bindServiceListHasBeenSet;
}

string APIsUserKeyInfo::GetAuthTypeName() const
{
    return m_authTypeName;
}

void APIsUserKeyInfo::SetAuthTypeName(const string& _authTypeName)
{
    m_authTypeName = _authTypeName;
    m_authTypeNameHasBeenSet = true;
}

bool APIsUserKeyInfo::AuthTypeNameHasBeenSet() const
{
    return m_authTypeNameHasBeenSet;
}

string APIsUserKeyInfo::GetTicketID() const
{
    return m_ticketID;
}

void APIsUserKeyInfo::SetTicketID(const string& _ticketID)
{
    m_ticketID = _ticketID;
    m_ticketIDHasBeenSet = true;
}

bool APIsUserKeyInfo::TicketIDHasBeenSet() const
{
    return m_ticketIDHasBeenSet;
}

string APIsUserKeyInfo::GetDemoCodeFunctionName() const
{
    return m_demoCodeFunctionName;
}

void APIsUserKeyInfo::SetDemoCodeFunctionName(const string& _demoCodeFunctionName)
{
    m_demoCodeFunctionName = _demoCodeFunctionName;
    m_demoCodeFunctionNameHasBeenSet = true;
}

bool APIsUserKeyInfo::DemoCodeFunctionNameHasBeenSet() const
{
    return m_demoCodeFunctionNameHasBeenSet;
}

string APIsUserKeyInfo::GetCreateAt() const
{
    return m_createAt;
}

void APIsUserKeyInfo::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool APIsUserKeyInfo::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

string APIsUserKeyInfo::GetUpdateAt() const
{
    return m_updateAt;
}

void APIsUserKeyInfo::SetUpdateAt(const string& _updateAt)
{
    m_updateAt = _updateAt;
    m_updateAtHasBeenSet = true;
}

bool APIsUserKeyInfo::UpdateAtHasBeenSet() const
{
    return m_updateAtHasBeenSet;
}

