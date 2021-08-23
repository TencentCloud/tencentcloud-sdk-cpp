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

#include <tencentcloud/cws/v20180312/model/SitesVerification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cws::V20180312::Model;
using namespace std;

SitesVerification::SitesVerification() :
    m_domainHasBeenSet(false),
    m_txtNameHasBeenSet(false),
    m_txtTextHasBeenSet(false),
    m_validToHasBeenSet(false),
    m_verifyStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_idHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_verifyUrlHasBeenSet(false),
    m_verifyFileUrlHasBeenSet(false)
{
}

CoreInternalOutcome SitesVerification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitesVerification.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("TxtName") && !value["TxtName"].IsNull())
    {
        if (!value["TxtName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitesVerification.TxtName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txtName = string(value["TxtName"].GetString());
        m_txtNameHasBeenSet = true;
    }

    if (value.HasMember("TxtText") && !value["TxtText"].IsNull())
    {
        if (!value["TxtText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitesVerification.TxtText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_txtText = string(value["TxtText"].GetString());
        m_txtTextHasBeenSet = true;
    }

    if (value.HasMember("ValidTo") && !value["ValidTo"].IsNull())
    {
        if (!value["ValidTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitesVerification.ValidTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validTo = string(value["ValidTo"].GetString());
        m_validToHasBeenSet = true;
    }

    if (value.HasMember("VerifyStatus") && !value["VerifyStatus"].IsNull())
    {
        if (!value["VerifyStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SitesVerification.VerifyStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyStatus = value["VerifyStatus"].GetUint64();
        m_verifyStatusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitesVerification.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitesVerification.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SitesVerification.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SitesVerification.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("VerifyUrl") && !value["VerifyUrl"].IsNull())
    {
        if (!value["VerifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitesVerification.VerifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyUrl = string(value["VerifyUrl"].GetString());
        m_verifyUrlHasBeenSet = true;
    }

    if (value.HasMember("VerifyFileUrl") && !value["VerifyFileUrl"].IsNull())
    {
        if (!value["VerifyFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitesVerification.VerifyFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyFileUrl = string(value["VerifyFileUrl"].GetString());
        m_verifyFileUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SitesVerification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_txtNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxtName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_txtName.c_str(), allocator).Move(), allocator);
    }

    if (m_txtTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxtText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_txtText.c_str(), allocator).Move(), allocator);
    }

    if (m_validToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validTo.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyStatus, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_verifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyFileUrl.c_str(), allocator).Move(), allocator);
    }

}


string SitesVerification::GetDomain() const
{
    return m_domain;
}

void SitesVerification::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SitesVerification::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string SitesVerification::GetTxtName() const
{
    return m_txtName;
}

void SitesVerification::SetTxtName(const string& _txtName)
{
    m_txtName = _txtName;
    m_txtNameHasBeenSet = true;
}

bool SitesVerification::TxtNameHasBeenSet() const
{
    return m_txtNameHasBeenSet;
}

string SitesVerification::GetTxtText() const
{
    return m_txtText;
}

void SitesVerification::SetTxtText(const string& _txtText)
{
    m_txtText = _txtText;
    m_txtTextHasBeenSet = true;
}

bool SitesVerification::TxtTextHasBeenSet() const
{
    return m_txtTextHasBeenSet;
}

string SitesVerification::GetValidTo() const
{
    return m_validTo;
}

void SitesVerification::SetValidTo(const string& _validTo)
{
    m_validTo = _validTo;
    m_validToHasBeenSet = true;
}

bool SitesVerification::ValidToHasBeenSet() const
{
    return m_validToHasBeenSet;
}

uint64_t SitesVerification::GetVerifyStatus() const
{
    return m_verifyStatus;
}

void SitesVerification::SetVerifyStatus(const uint64_t& _verifyStatus)
{
    m_verifyStatus = _verifyStatus;
    m_verifyStatusHasBeenSet = true;
}

bool SitesVerification::VerifyStatusHasBeenSet() const
{
    return m_verifyStatusHasBeenSet;
}

string SitesVerification::GetCreatedAt() const
{
    return m_createdAt;
}

void SitesVerification::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool SitesVerification::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string SitesVerification::GetUpdatedAt() const
{
    return m_updatedAt;
}

void SitesVerification::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool SitesVerification::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

uint64_t SitesVerification::GetId() const
{
    return m_id;
}

void SitesVerification::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SitesVerification::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t SitesVerification::GetAppid() const
{
    return m_appid;
}

void SitesVerification::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool SitesVerification::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

string SitesVerification::GetVerifyUrl() const
{
    return m_verifyUrl;
}

void SitesVerification::SetVerifyUrl(const string& _verifyUrl)
{
    m_verifyUrl = _verifyUrl;
    m_verifyUrlHasBeenSet = true;
}

bool SitesVerification::VerifyUrlHasBeenSet() const
{
    return m_verifyUrlHasBeenSet;
}

string SitesVerification::GetVerifyFileUrl() const
{
    return m_verifyFileUrl;
}

void SitesVerification::SetVerifyFileUrl(const string& _verifyFileUrl)
{
    m_verifyFileUrl = _verifyFileUrl;
    m_verifyFileUrlHasBeenSet = true;
}

bool SitesVerification::VerifyFileUrlHasBeenSet() const
{
    return m_verifyFileUrlHasBeenSet;
}

