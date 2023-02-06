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

#include <tencentcloud/ess/v20201111/model/GroupOrganization.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

GroupOrganization::GroupOrganization() :
    m_nameHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isMainOrganizationHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_adminInfoHasBeenSet(false),
    m_licenseHasBeenSet(false),
    m_licenseExpireTimeHasBeenSet(false),
    m_joinTimeHasBeenSet(false),
    m_flowEngineEnableHasBeenSet(false)
{
}

CoreInternalOutcome GroupOrganization::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOrganization.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOrganization.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("OrganizationId") && !value["OrganizationId"].IsNull())
    {
        if (!value["OrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOrganization.OrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationId = string(value["OrganizationId"].GetString());
        m_organizationIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOrganization.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOrganization.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsMainOrganization") && !value["IsMainOrganization"].IsNull())
    {
        if (!value["IsMainOrganization"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOrganization.IsMainOrganization` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMainOrganization = value["IsMainOrganization"].GetBool();
        m_isMainOrganizationHasBeenSet = true;
    }

    if (value.HasMember("IdCardNumber") && !value["IdCardNumber"].IsNull())
    {
        if (!value["IdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOrganization.IdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNumber = string(value["IdCardNumber"].GetString());
        m_idCardNumberHasBeenSet = true;
    }

    if (value.HasMember("AdminInfo") && !value["AdminInfo"].IsNull())
    {
        if (!value["AdminInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOrganization.AdminInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adminInfo.Deserialize(value["AdminInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adminInfoHasBeenSet = true;
    }

    if (value.HasMember("License") && !value["License"].IsNull())
    {
        if (!value["License"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOrganization.License` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_license = string(value["License"].GetString());
        m_licenseHasBeenSet = true;
    }

    if (value.HasMember("LicenseExpireTime") && !value["LicenseExpireTime"].IsNull())
    {
        if (!value["LicenseExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOrganization.LicenseExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseExpireTime = value["LicenseExpireTime"].GetUint64();
        m_licenseExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("JoinTime") && !value["JoinTime"].IsNull())
    {
        if (!value["JoinTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOrganization.JoinTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_joinTime = value["JoinTime"].GetUint64();
        m_joinTimeHasBeenSet = true;
    }

    if (value.HasMember("FlowEngineEnable") && !value["FlowEngineEnable"].IsNull())
    {
        if (!value["FlowEngineEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GroupOrganization.FlowEngineEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_flowEngineEnable = value["FlowEngineEnable"].GetBool();
        m_flowEngineEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupOrganization::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isMainOrganizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMainOrganization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMainOrganization, allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_adminInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adminInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_licenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_license.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseExpireTime, allocator);
    }

    if (m_joinTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_joinTime, allocator);
    }

    if (m_flowEngineEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowEngineEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowEngineEnable, allocator);
    }

}


string GroupOrganization::GetName() const
{
    return m_name;
}

void GroupOrganization::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GroupOrganization::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GroupOrganization::GetAlias() const
{
    return m_alias;
}

void GroupOrganization::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool GroupOrganization::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string GroupOrganization::GetOrganizationId() const
{
    return m_organizationId;
}

void GroupOrganization::SetOrganizationId(const string& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool GroupOrganization::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

uint64_t GroupOrganization::GetUpdateTime() const
{
    return m_updateTime;
}

void GroupOrganization::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool GroupOrganization::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t GroupOrganization::GetStatus() const
{
    return m_status;
}

void GroupOrganization::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GroupOrganization::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool GroupOrganization::GetIsMainOrganization() const
{
    return m_isMainOrganization;
}

void GroupOrganization::SetIsMainOrganization(const bool& _isMainOrganization)
{
    m_isMainOrganization = _isMainOrganization;
    m_isMainOrganizationHasBeenSet = true;
}

bool GroupOrganization::IsMainOrganizationHasBeenSet() const
{
    return m_isMainOrganizationHasBeenSet;
}

string GroupOrganization::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void GroupOrganization::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool GroupOrganization::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

Admin GroupOrganization::GetAdminInfo() const
{
    return m_adminInfo;
}

void GroupOrganization::SetAdminInfo(const Admin& _adminInfo)
{
    m_adminInfo = _adminInfo;
    m_adminInfoHasBeenSet = true;
}

bool GroupOrganization::AdminInfoHasBeenSet() const
{
    return m_adminInfoHasBeenSet;
}

string GroupOrganization::GetLicense() const
{
    return m_license;
}

void GroupOrganization::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool GroupOrganization::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

uint64_t GroupOrganization::GetLicenseExpireTime() const
{
    return m_licenseExpireTime;
}

void GroupOrganization::SetLicenseExpireTime(const uint64_t& _licenseExpireTime)
{
    m_licenseExpireTime = _licenseExpireTime;
    m_licenseExpireTimeHasBeenSet = true;
}

bool GroupOrganization::LicenseExpireTimeHasBeenSet() const
{
    return m_licenseExpireTimeHasBeenSet;
}

uint64_t GroupOrganization::GetJoinTime() const
{
    return m_joinTime;
}

void GroupOrganization::SetJoinTime(const uint64_t& _joinTime)
{
    m_joinTime = _joinTime;
    m_joinTimeHasBeenSet = true;
}

bool GroupOrganization::JoinTimeHasBeenSet() const
{
    return m_joinTimeHasBeenSet;
}

bool GroupOrganization::GetFlowEngineEnable() const
{
    return m_flowEngineEnable;
}

void GroupOrganization::SetFlowEngineEnable(const bool& _flowEngineEnable)
{
    m_flowEngineEnable = _flowEngineEnable;
    m_flowEngineEnableHasBeenSet = true;
}

bool GroupOrganization::FlowEngineEnableHasBeenSet() const
{
    return m_flowEngineEnableHasBeenSet;
}

