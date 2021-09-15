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

#include <tencentcloud/essbasic/v20201222/model/SubOrganizationDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

SubOrganizationDetail::SubOrganizationDetail() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_organizationTypeHasBeenSet(false),
    m_idCardFileTypeHasBeenSet(false),
    m_bizLicenseFileHasBeenSet(false),
    m_bizLicenseFileNameHasBeenSet(false),
    m_legalNameHasBeenSet(false),
    m_legalIdCardTypeHasBeenSet(false),
    m_legalIdCardNumberHasBeenSet(false),
    m_legalMobileHasBeenSet(false),
    m_contactNameHasBeenSet(false),
    m_verifyStatusHasBeenSet(false),
    m_verifiedOnHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_verifyClientIpHasBeenSet(false),
    m_verifyServerIpHasBeenSet(false),
    m_contactAddressHasBeenSet(false)
{
}

CoreInternalOutcome SubOrganizationDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("IdCardType") && !value["IdCardType"].IsNull())
    {
        if (!value["IdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.IdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardType = string(value["IdCardType"].GetString());
        m_idCardTypeHasBeenSet = true;
    }

    if (value.HasMember("IdCardNumber") && !value["IdCardNumber"].IsNull())
    {
        if (!value["IdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.IdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNumber = string(value["IdCardNumber"].GetString());
        m_idCardNumberHasBeenSet = true;
    }

    if (value.HasMember("OrganizationType") && !value["OrganizationType"].IsNull())
    {
        if (!value["OrganizationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.OrganizationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationType = string(value["OrganizationType"].GetString());
        m_organizationTypeHasBeenSet = true;
    }

    if (value.HasMember("IdCardFileType") && !value["IdCardFileType"].IsNull())
    {
        if (!value["IdCardFileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.IdCardFileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardFileType = string(value["IdCardFileType"].GetString());
        m_idCardFileTypeHasBeenSet = true;
    }

    if (value.HasMember("BizLicenseFile") && !value["BizLicenseFile"].IsNull())
    {
        if (!value["BizLicenseFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.BizLicenseFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizLicenseFile = string(value["BizLicenseFile"].GetString());
        m_bizLicenseFileHasBeenSet = true;
    }

    if (value.HasMember("BizLicenseFileName") && !value["BizLicenseFileName"].IsNull())
    {
        if (!value["BizLicenseFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.BizLicenseFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizLicenseFileName = string(value["BizLicenseFileName"].GetString());
        m_bizLicenseFileNameHasBeenSet = true;
    }

    if (value.HasMember("LegalName") && !value["LegalName"].IsNull())
    {
        if (!value["LegalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.LegalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalName = string(value["LegalName"].GetString());
        m_legalNameHasBeenSet = true;
    }

    if (value.HasMember("LegalIdCardType") && !value["LegalIdCardType"].IsNull())
    {
        if (!value["LegalIdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.LegalIdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalIdCardType = string(value["LegalIdCardType"].GetString());
        m_legalIdCardTypeHasBeenSet = true;
    }

    if (value.HasMember("LegalIdCardNumber") && !value["LegalIdCardNumber"].IsNull())
    {
        if (!value["LegalIdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.LegalIdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalIdCardNumber = string(value["LegalIdCardNumber"].GetString());
        m_legalIdCardNumberHasBeenSet = true;
    }

    if (value.HasMember("LegalMobile") && !value["LegalMobile"].IsNull())
    {
        if (!value["LegalMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.LegalMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalMobile = string(value["LegalMobile"].GetString());
        m_legalMobileHasBeenSet = true;
    }

    if (value.HasMember("ContactName") && !value["ContactName"].IsNull())
    {
        if (!value["ContactName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.ContactName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactName = string(value["ContactName"].GetString());
        m_contactNameHasBeenSet = true;
    }

    if (value.HasMember("VerifyStatus") && !value["VerifyStatus"].IsNull())
    {
        if (!value["VerifyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.VerifyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyStatus = string(value["VerifyStatus"].GetString());
        m_verifyStatusHasBeenSet = true;
    }

    if (value.HasMember("VerifiedOn") && !value["VerifiedOn"].IsNull())
    {
        if (!value["VerifiedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.VerifiedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verifiedOn = value["VerifiedOn"].GetInt64();
        m_verifiedOnHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.CreatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = value["CreatedOn"].GetInt64();
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UpdatedOn") && !value["UpdatedOn"].IsNull())
    {
        if (!value["UpdatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.UpdatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = value["UpdatedOn"].GetInt64();
        m_updatedOnHasBeenSet = true;
    }

    if (value.HasMember("VerifyClientIp") && !value["VerifyClientIp"].IsNull())
    {
        if (!value["VerifyClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.VerifyClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyClientIp = string(value["VerifyClientIp"].GetString());
        m_verifyClientIpHasBeenSet = true;
    }

    if (value.HasMember("VerifyServerIp") && !value["VerifyServerIp"].IsNull())
    {
        if (!value["VerifyServerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.VerifyServerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyServerIp = string(value["VerifyServerIp"].GetString());
        m_verifyServerIpHasBeenSet = true;
    }

    if (value.HasMember("ContactAddress") && !value["ContactAddress"].IsNull())
    {
        if (!value["ContactAddress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubOrganizationDetail.ContactAddress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_contactAddress.Deserialize(value["ContactAddress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contactAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubOrganizationDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardFileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardFileType.c_str(), allocator).Move(), allocator);
    }

    if (m_bizLicenseFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizLicenseFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizLicenseFile.c_str(), allocator).Move(), allocator);
    }

    if (m_bizLicenseFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizLicenseFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizLicenseFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_legalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalName.c_str(), allocator).Move(), allocator);
    }

    if (m_legalIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalIdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_legalIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalIdCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_legalMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_contactNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactName.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_verifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifiedOn, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdOn, allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedOn, allocator);
    }

    if (m_verifyClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyServerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyServerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyServerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_contactAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contactAddress.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SubOrganizationDetail::GetId() const
{
    return m_id;
}

void SubOrganizationDetail::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SubOrganizationDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SubOrganizationDetail::GetName() const
{
    return m_name;
}

void SubOrganizationDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SubOrganizationDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SubOrganizationDetail::GetEmail() const
{
    return m_email;
}

void SubOrganizationDetail::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool SubOrganizationDetail::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string SubOrganizationDetail::GetIdCardType() const
{
    return m_idCardType;
}

void SubOrganizationDetail::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool SubOrganizationDetail::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string SubOrganizationDetail::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void SubOrganizationDetail::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool SubOrganizationDetail::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string SubOrganizationDetail::GetOrganizationType() const
{
    return m_organizationType;
}

void SubOrganizationDetail::SetOrganizationType(const string& _organizationType)
{
    m_organizationType = _organizationType;
    m_organizationTypeHasBeenSet = true;
}

bool SubOrganizationDetail::OrganizationTypeHasBeenSet() const
{
    return m_organizationTypeHasBeenSet;
}

string SubOrganizationDetail::GetIdCardFileType() const
{
    return m_idCardFileType;
}

void SubOrganizationDetail::SetIdCardFileType(const string& _idCardFileType)
{
    m_idCardFileType = _idCardFileType;
    m_idCardFileTypeHasBeenSet = true;
}

bool SubOrganizationDetail::IdCardFileTypeHasBeenSet() const
{
    return m_idCardFileTypeHasBeenSet;
}

string SubOrganizationDetail::GetBizLicenseFile() const
{
    return m_bizLicenseFile;
}

void SubOrganizationDetail::SetBizLicenseFile(const string& _bizLicenseFile)
{
    m_bizLicenseFile = _bizLicenseFile;
    m_bizLicenseFileHasBeenSet = true;
}

bool SubOrganizationDetail::BizLicenseFileHasBeenSet() const
{
    return m_bizLicenseFileHasBeenSet;
}

string SubOrganizationDetail::GetBizLicenseFileName() const
{
    return m_bizLicenseFileName;
}

void SubOrganizationDetail::SetBizLicenseFileName(const string& _bizLicenseFileName)
{
    m_bizLicenseFileName = _bizLicenseFileName;
    m_bizLicenseFileNameHasBeenSet = true;
}

bool SubOrganizationDetail::BizLicenseFileNameHasBeenSet() const
{
    return m_bizLicenseFileNameHasBeenSet;
}

string SubOrganizationDetail::GetLegalName() const
{
    return m_legalName;
}

void SubOrganizationDetail::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool SubOrganizationDetail::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}

string SubOrganizationDetail::GetLegalIdCardType() const
{
    return m_legalIdCardType;
}

void SubOrganizationDetail::SetLegalIdCardType(const string& _legalIdCardType)
{
    m_legalIdCardType = _legalIdCardType;
    m_legalIdCardTypeHasBeenSet = true;
}

bool SubOrganizationDetail::LegalIdCardTypeHasBeenSet() const
{
    return m_legalIdCardTypeHasBeenSet;
}

string SubOrganizationDetail::GetLegalIdCardNumber() const
{
    return m_legalIdCardNumber;
}

void SubOrganizationDetail::SetLegalIdCardNumber(const string& _legalIdCardNumber)
{
    m_legalIdCardNumber = _legalIdCardNumber;
    m_legalIdCardNumberHasBeenSet = true;
}

bool SubOrganizationDetail::LegalIdCardNumberHasBeenSet() const
{
    return m_legalIdCardNumberHasBeenSet;
}

string SubOrganizationDetail::GetLegalMobile() const
{
    return m_legalMobile;
}

void SubOrganizationDetail::SetLegalMobile(const string& _legalMobile)
{
    m_legalMobile = _legalMobile;
    m_legalMobileHasBeenSet = true;
}

bool SubOrganizationDetail::LegalMobileHasBeenSet() const
{
    return m_legalMobileHasBeenSet;
}

string SubOrganizationDetail::GetContactName() const
{
    return m_contactName;
}

void SubOrganizationDetail::SetContactName(const string& _contactName)
{
    m_contactName = _contactName;
    m_contactNameHasBeenSet = true;
}

bool SubOrganizationDetail::ContactNameHasBeenSet() const
{
    return m_contactNameHasBeenSet;
}

string SubOrganizationDetail::GetVerifyStatus() const
{
    return m_verifyStatus;
}

void SubOrganizationDetail::SetVerifyStatus(const string& _verifyStatus)
{
    m_verifyStatus = _verifyStatus;
    m_verifyStatusHasBeenSet = true;
}

bool SubOrganizationDetail::VerifyStatusHasBeenSet() const
{
    return m_verifyStatusHasBeenSet;
}

int64_t SubOrganizationDetail::GetVerifiedOn() const
{
    return m_verifiedOn;
}

void SubOrganizationDetail::SetVerifiedOn(const int64_t& _verifiedOn)
{
    m_verifiedOn = _verifiedOn;
    m_verifiedOnHasBeenSet = true;
}

bool SubOrganizationDetail::VerifiedOnHasBeenSet() const
{
    return m_verifiedOnHasBeenSet;
}

int64_t SubOrganizationDetail::GetCreatedOn() const
{
    return m_createdOn;
}

void SubOrganizationDetail::SetCreatedOn(const int64_t& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool SubOrganizationDetail::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

int64_t SubOrganizationDetail::GetUpdatedOn() const
{
    return m_updatedOn;
}

void SubOrganizationDetail::SetUpdatedOn(const int64_t& _updatedOn)
{
    m_updatedOn = _updatedOn;
    m_updatedOnHasBeenSet = true;
}

bool SubOrganizationDetail::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

string SubOrganizationDetail::GetVerifyClientIp() const
{
    return m_verifyClientIp;
}

void SubOrganizationDetail::SetVerifyClientIp(const string& _verifyClientIp)
{
    m_verifyClientIp = _verifyClientIp;
    m_verifyClientIpHasBeenSet = true;
}

bool SubOrganizationDetail::VerifyClientIpHasBeenSet() const
{
    return m_verifyClientIpHasBeenSet;
}

string SubOrganizationDetail::GetVerifyServerIp() const
{
    return m_verifyServerIp;
}

void SubOrganizationDetail::SetVerifyServerIp(const string& _verifyServerIp)
{
    m_verifyServerIp = _verifyServerIp;
    m_verifyServerIpHasBeenSet = true;
}

bool SubOrganizationDetail::VerifyServerIpHasBeenSet() const
{
    return m_verifyServerIpHasBeenSet;
}

Address SubOrganizationDetail::GetContactAddress() const
{
    return m_contactAddress;
}

void SubOrganizationDetail::SetContactAddress(const Address& _contactAddress)
{
    m_contactAddress = _contactAddress;
    m_contactAddressHasBeenSet = true;
}

bool SubOrganizationDetail::ContactAddressHasBeenSet() const
{
    return m_contactAddressHasBeenSet;
}

