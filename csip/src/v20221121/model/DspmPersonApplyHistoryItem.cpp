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

#include <tencentcloud/csip/v20221121/model/DspmPersonApplyHistoryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmPersonApplyHistoryItem::DspmPersonApplyHistoryItem() :
    m_assetIdHasBeenSet(false),
    m_personNameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_validateFromHasBeenSet(false),
    m_validateToHasBeenSet(false),
    m_validatePeriodHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_validStatusHasBeenSet(false)
{
}

CoreInternalOutcome DspmPersonApplyHistoryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmPersonApplyHistoryItem.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("PersonName") && !value["PersonName"].IsNull())
    {
        if (!value["PersonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmPersonApplyHistoryItem.PersonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personName = string(value["PersonName"].GetString());
        m_personNameHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmPersonApplyHistoryItem.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("ValidateFrom") && !value["ValidateFrom"].IsNull())
    {
        if (!value["ValidateFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmPersonApplyHistoryItem.ValidateFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validateFrom = string(value["ValidateFrom"].GetString());
        m_validateFromHasBeenSet = true;
    }

    if (value.HasMember("ValidateTo") && !value["ValidateTo"].IsNull())
    {
        if (!value["ValidateTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmPersonApplyHistoryItem.ValidateTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validateTo = string(value["ValidateTo"].GetString());
        m_validateToHasBeenSet = true;
    }

    if (value.HasMember("ValidatePeriod") && !value["ValidatePeriod"].IsNull())
    {
        if (!value["ValidatePeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmPersonApplyHistoryItem.ValidatePeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validatePeriod = value["ValidatePeriod"].GetInt64();
        m_validatePeriodHasBeenSet = true;
    }

    if (value.HasMember("Privilege") && !value["Privilege"].IsNull())
    {
        if (!value["Privilege"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmPersonApplyHistoryItem.Privilege` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_privilege.Deserialize(value["Privilege"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_privilegeHasBeenSet = true;
    }

    if (value.HasMember("ValidStatus") && !value["ValidStatus"].IsNull())
    {
        if (!value["ValidStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmPersonApplyHistoryItem.ValidStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validStatus = value["ValidStatus"].GetInt64();
        m_validStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmPersonApplyHistoryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_personNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_validateFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validateFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_validateToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validateTo.c_str(), allocator).Move(), allocator);
    }

    if (m_validatePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidatePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validatePeriod, allocator);
    }

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_privilege.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_validStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validStatus, allocator);
    }

}


string DspmPersonApplyHistoryItem::GetAssetId() const
{
    return m_assetId;
}

void DspmPersonApplyHistoryItem::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmPersonApplyHistoryItem::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DspmPersonApplyHistoryItem::GetPersonName() const
{
    return m_personName;
}

void DspmPersonApplyHistoryItem::SetPersonName(const string& _personName)
{
    m_personName = _personName;
    m_personNameHasBeenSet = true;
}

bool DspmPersonApplyHistoryItem::PersonNameHasBeenSet() const
{
    return m_personNameHasBeenSet;
}

string DspmPersonApplyHistoryItem::GetPhone() const
{
    return m_phone;
}

void DspmPersonApplyHistoryItem::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool DspmPersonApplyHistoryItem::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string DspmPersonApplyHistoryItem::GetValidateFrom() const
{
    return m_validateFrom;
}

void DspmPersonApplyHistoryItem::SetValidateFrom(const string& _validateFrom)
{
    m_validateFrom = _validateFrom;
    m_validateFromHasBeenSet = true;
}

bool DspmPersonApplyHistoryItem::ValidateFromHasBeenSet() const
{
    return m_validateFromHasBeenSet;
}

string DspmPersonApplyHistoryItem::GetValidateTo() const
{
    return m_validateTo;
}

void DspmPersonApplyHistoryItem::SetValidateTo(const string& _validateTo)
{
    m_validateTo = _validateTo;
    m_validateToHasBeenSet = true;
}

bool DspmPersonApplyHistoryItem::ValidateToHasBeenSet() const
{
    return m_validateToHasBeenSet;
}

int64_t DspmPersonApplyHistoryItem::GetValidatePeriod() const
{
    return m_validatePeriod;
}

void DspmPersonApplyHistoryItem::SetValidatePeriod(const int64_t& _validatePeriod)
{
    m_validatePeriod = _validatePeriod;
    m_validatePeriodHasBeenSet = true;
}

bool DspmPersonApplyHistoryItem::ValidatePeriodHasBeenSet() const
{
    return m_validatePeriodHasBeenSet;
}

DspmDbAccountPrivilege DspmPersonApplyHistoryItem::GetPrivilege() const
{
    return m_privilege;
}

void DspmPersonApplyHistoryItem::SetPrivilege(const DspmDbAccountPrivilege& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool DspmPersonApplyHistoryItem::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

int64_t DspmPersonApplyHistoryItem::GetValidStatus() const
{
    return m_validStatus;
}

void DspmPersonApplyHistoryItem::SetValidStatus(const int64_t& _validStatus)
{
    m_validStatus = _validStatus;
    m_validStatusHasBeenSet = true;
}

bool DspmPersonApplyHistoryItem::ValidStatusHasBeenSet() const
{
    return m_validStatusHasBeenSet;
}

