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

#include <tencentcloud/domain/v20180808/model/TemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

TemplateInfo::TemplateInfo() :
    m_templateIdHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_auditReasonHasBeenSet(false),
    m_certificateInfoHasBeenSet(false),
    m_contactInfoHasBeenSet(false),
    m_isValidTemplateHasBeenSet(false),
    m_invalidReasonHasBeenSet(false),
    m_isBlackHasBeenSet(false)
{
}

CoreInternalOutcome TemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.AuditStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = string(value["AuditStatus"].GetString());
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.UpdatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = string(value["UpdatedOn"].GetString());
        m_updatedOnHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.IsDefault` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = string(value["IsDefault"].GetString());
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("AuditReason") && !value["AuditReason"].IsNull())
    {
        if (!value["AuditReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.AuditReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditReason = string(value["AuditReason"].GetString());
        m_auditReasonHasBeenSet = true;
    }

    if (value.HasMember("CertificateInfo") && !value["CertificateInfo"].IsNull())
    {
        if (!value["CertificateInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.CertificateInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certificateInfo.Deserialize(value["CertificateInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certificateInfoHasBeenSet = true;
    }

    if (value.HasMember("ContactInfo") && !value["ContactInfo"].IsNull())
    {
        if (!value["ContactInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.ContactInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_contactInfo.Deserialize(value["ContactInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contactInfoHasBeenSet = true;
    }

    if (value.HasMember("IsValidTemplate") && !value["IsValidTemplate"].IsNull())
    {
        if (!value["IsValidTemplate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.IsValidTemplate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isValidTemplate = value["IsValidTemplate"].GetInt64();
        m_isValidTemplateHasBeenSet = true;
    }

    if (value.HasMember("InvalidReason") && !value["InvalidReason"].IsNull())
    {
        if (!value["InvalidReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.InvalidReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invalidReason = string(value["InvalidReason"].GetString());
        m_invalidReasonHasBeenSet = true;
    }

    if (value.HasMember("IsBlack") && !value["IsBlack"].IsNull())
    {
        if (!value["IsBlack"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateInfo.IsBlack` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBlack = value["IsBlack"].GetBool();
        m_isBlackHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isDefault.c_str(), allocator).Move(), allocator);
    }

    if (m_auditReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditReason.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certificateInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_contactInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contactInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isValidTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsValidTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isValidTemplate, allocator);
    }

    if (m_invalidReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invalidReason.c_str(), allocator).Move(), allocator);
    }

    if (m_isBlackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBlack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBlack, allocator);
    }

}


string TemplateInfo::GetTemplateId() const
{
    return m_templateId;
}

void TemplateInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool TemplateInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string TemplateInfo::GetAuditStatus() const
{
    return m_auditStatus;
}

void TemplateInfo::SetAuditStatus(const string& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool TemplateInfo::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string TemplateInfo::GetCreatedOn() const
{
    return m_createdOn;
}

void TemplateInfo::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool TemplateInfo::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string TemplateInfo::GetUpdatedOn() const
{
    return m_updatedOn;
}

void TemplateInfo::SetUpdatedOn(const string& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool TemplateInfo::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

string TemplateInfo::GetUserUin() const
{
    return m_userUin;
}

void TemplateInfo::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool TemplateInfo::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string TemplateInfo::GetIsDefault() const
{
    return m_isDefault;
}

void TemplateInfo::SetIsDefault(const string& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool TemplateInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string TemplateInfo::GetAuditReason() const
{
    return m_auditReason;
}

void TemplateInfo::SetAuditReason(const string& _auditReason)
{
    m_auditReason = _auditReason;
    m_auditReasonHasBeenSet = true;
}

bool TemplateInfo::AuditReasonHasBeenSet() const
{
    return m_auditReasonHasBeenSet;
}

CertificateInfo TemplateInfo::GetCertificateInfo() const
{
    return m_certificateInfo;
}

void TemplateInfo::SetCertificateInfo(const CertificateInfo& _certificateInfo)
{
    m_certificateInfo = _certificateInfo;
    m_certificateInfoHasBeenSet = true;
}

bool TemplateInfo::CertificateInfoHasBeenSet() const
{
    return m_certificateInfoHasBeenSet;
}

ContactInfo TemplateInfo::GetContactInfo() const
{
    return m_contactInfo;
}

void TemplateInfo::SetContactInfo(const ContactInfo& _contactInfo)
{
    m_contactInfo = _contactInfo;
    m_contactInfoHasBeenSet = true;
}

bool TemplateInfo::ContactInfoHasBeenSet() const
{
    return m_contactInfoHasBeenSet;
}

int64_t TemplateInfo::GetIsValidTemplate() const
{
    return m_isValidTemplate;
}

void TemplateInfo::SetIsValidTemplate(const int64_t& _isValidTemplate)
{
    m_isValidTemplate = _isValidTemplate;
    m_isValidTemplateHasBeenSet = true;
}

bool TemplateInfo::IsValidTemplateHasBeenSet() const
{
    return m_isValidTemplateHasBeenSet;
}

string TemplateInfo::GetInvalidReason() const
{
    return m_invalidReason;
}

void TemplateInfo::SetInvalidReason(const string& _invalidReason)
{
    m_invalidReason = _invalidReason;
    m_invalidReasonHasBeenSet = true;
}

bool TemplateInfo::InvalidReasonHasBeenSet() const
{
    return m_invalidReasonHasBeenSet;
}

bool TemplateInfo::GetIsBlack() const
{
    return m_isBlack;
}

void TemplateInfo::SetIsBlack(const bool& _isBlack)
{
    m_isBlack = _isBlack;
    m_isBlackHasBeenSet = true;
}

bool TemplateInfo::IsBlackHasBeenSet() const
{
    return m_isBlackHasBeenSet;
}

