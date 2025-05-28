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

#include <tencentcloud/cloudapp/v20220530/model/License.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudapp::V20220530::Model;
using namespace std;

License::License() :
    m_licenseIdHasBeenSet(false),
    m_licenseModeHasBeenSet(false),
    m_licenseStatusHasBeenSet(false),
    m_providerIdHasBeenSet(false),
    m_softwarePackageIdHasBeenSet(false),
    m_softwarePackageVersionHasBeenSet(false),
    m_authorizedUserUinHasBeenSet(false),
    m_authorizedCloudappIdHasBeenSet(false),
    m_authorizedCloudappRoleIdHasBeenSet(false),
    m_authorizedSpecificationHasBeenSet(false),
    m_billingModeHasBeenSet(false),
    m_lifeSpanHasBeenSet(false),
    m_issueDateHasBeenSet(false),
    m_activationDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_lifeSpanUnitHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_licenseLevelHasBeenSet(false)
{
}

CoreInternalOutcome License::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LicenseId") && !value["LicenseId"].IsNull())
    {
        if (!value["LicenseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.LicenseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseId = string(value["LicenseId"].GetString());
        m_licenseIdHasBeenSet = true;
    }

    if (value.HasMember("LicenseMode") && !value["LicenseMode"].IsNull())
    {
        if (!value["LicenseMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.LicenseMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseMode = string(value["LicenseMode"].GetString());
        m_licenseModeHasBeenSet = true;
    }

    if (value.HasMember("LicenseStatus") && !value["LicenseStatus"].IsNull())
    {
        if (!value["LicenseStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.LicenseStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseStatus = string(value["LicenseStatus"].GetString());
        m_licenseStatusHasBeenSet = true;
    }

    if (value.HasMember("ProviderId") && !value["ProviderId"].IsNull())
    {
        if (!value["ProviderId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `License.ProviderId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_providerId = value["ProviderId"].GetUint64();
        m_providerIdHasBeenSet = true;
    }

    if (value.HasMember("SoftwarePackageId") && !value["SoftwarePackageId"].IsNull())
    {
        if (!value["SoftwarePackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.SoftwarePackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_softwarePackageId = string(value["SoftwarePackageId"].GetString());
        m_softwarePackageIdHasBeenSet = true;
    }

    if (value.HasMember("SoftwarePackageVersion") && !value["SoftwarePackageVersion"].IsNull())
    {
        if (!value["SoftwarePackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.SoftwarePackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_softwarePackageVersion = string(value["SoftwarePackageVersion"].GetString());
        m_softwarePackageVersionHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedUserUin") && !value["AuthorizedUserUin"].IsNull())
    {
        if (!value["AuthorizedUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.AuthorizedUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedUserUin = string(value["AuthorizedUserUin"].GetString());
        m_authorizedUserUinHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedCloudappId") && !value["AuthorizedCloudappId"].IsNull())
    {
        if (!value["AuthorizedCloudappId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.AuthorizedCloudappId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedCloudappId = string(value["AuthorizedCloudappId"].GetString());
        m_authorizedCloudappIdHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedCloudappRoleId") && !value["AuthorizedCloudappRoleId"].IsNull())
    {
        if (!value["AuthorizedCloudappRoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.AuthorizedCloudappRoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedCloudappRoleId = string(value["AuthorizedCloudappRoleId"].GetString());
        m_authorizedCloudappRoleIdHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedSpecification") && !value["AuthorizedSpecification"].IsNull())
    {
        if (!value["AuthorizedSpecification"].IsArray())
            return CoreInternalOutcome(Core::Error("response `License.AuthorizedSpecification` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthorizedSpecification"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SaleParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authorizedSpecification.push_back(item);
        }
        m_authorizedSpecificationHasBeenSet = true;
    }

    if (value.HasMember("BillingMode") && !value["BillingMode"].IsNull())
    {
        if (!value["BillingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `License.BillingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingMode = value["BillingMode"].GetInt64();
        m_billingModeHasBeenSet = true;
    }

    if (value.HasMember("LifeSpan") && !value["LifeSpan"].IsNull())
    {
        if (!value["LifeSpan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `License.LifeSpan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeSpan = value["LifeSpan"].GetInt64();
        m_lifeSpanHasBeenSet = true;
    }

    if (value.HasMember("IssueDate") && !value["IssueDate"].IsNull())
    {
        if (!value["IssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.IssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueDate = string(value["IssueDate"].GetString());
        m_issueDateHasBeenSet = true;
    }

    if (value.HasMember("ActivationDate") && !value["ActivationDate"].IsNull())
    {
        if (!value["ActivationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.ActivationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activationDate = string(value["ActivationDate"].GetString());
        m_activationDateHasBeenSet = true;
    }

    if (value.HasMember("ExpirationDate") && !value["ExpirationDate"].IsNull())
    {
        if (!value["ExpirationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.ExpirationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationDate = string(value["ExpirationDate"].GetString());
        m_expirationDateHasBeenSet = true;
    }

    if (value.HasMember("LifeSpanUnit") && !value["LifeSpanUnit"].IsNull())
    {
        if (!value["LifeSpanUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.LifeSpanUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeSpanUnit = string(value["LifeSpanUnit"].GetString());
        m_lifeSpanUnitHasBeenSet = true;
    }

    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.LicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = string(value["LicenseType"].GetString());
        m_licenseTypeHasBeenSet = true;
    }

    if (value.HasMember("LicenseLevel") && !value["LicenseLevel"].IsNull())
    {
        if (!value["LicenseLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `License.LicenseLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseLevel = string(value["LicenseLevel"].GetString());
        m_licenseLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void License::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_licenseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseId.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseMode.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_providerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_providerId, allocator);
    }

    if (m_softwarePackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftwarePackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_softwarePackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_softwarePackageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftwarePackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_softwarePackageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizedUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedCloudappIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedCloudappId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizedCloudappId.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedCloudappRoleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedCloudappRoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizedCloudappRoleId.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authorizedSpecification.begin(); itr != m_authorizedSpecification.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_billingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingMode, allocator);
    }

    if (m_lifeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeSpan, allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_activationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expirationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeSpanUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeSpanUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeSpanUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseLevel.c_str(), allocator).Move(), allocator);
    }

}


string License::GetLicenseId() const
{
    return m_licenseId;
}

void License::SetLicenseId(const string& _licenseId)
{
    m_licenseId = _licenseId;
    m_licenseIdHasBeenSet = true;
}

bool License::LicenseIdHasBeenSet() const
{
    return m_licenseIdHasBeenSet;
}

string License::GetLicenseMode() const
{
    return m_licenseMode;
}

void License::SetLicenseMode(const string& _licenseMode)
{
    m_licenseMode = _licenseMode;
    m_licenseModeHasBeenSet = true;
}

bool License::LicenseModeHasBeenSet() const
{
    return m_licenseModeHasBeenSet;
}

string License::GetLicenseStatus() const
{
    return m_licenseStatus;
}

void License::SetLicenseStatus(const string& _licenseStatus)
{
    m_licenseStatus = _licenseStatus;
    m_licenseStatusHasBeenSet = true;
}

bool License::LicenseStatusHasBeenSet() const
{
    return m_licenseStatusHasBeenSet;
}

uint64_t License::GetProviderId() const
{
    return m_providerId;
}

void License::SetProviderId(const uint64_t& _providerId)
{
    m_providerId = _providerId;
    m_providerIdHasBeenSet = true;
}

bool License::ProviderIdHasBeenSet() const
{
    return m_providerIdHasBeenSet;
}

string License::GetSoftwarePackageId() const
{
    return m_softwarePackageId;
}

void License::SetSoftwarePackageId(const string& _softwarePackageId)
{
    m_softwarePackageId = _softwarePackageId;
    m_softwarePackageIdHasBeenSet = true;
}

bool License::SoftwarePackageIdHasBeenSet() const
{
    return m_softwarePackageIdHasBeenSet;
}

string License::GetSoftwarePackageVersion() const
{
    return m_softwarePackageVersion;
}

void License::SetSoftwarePackageVersion(const string& _softwarePackageVersion)
{
    m_softwarePackageVersion = _softwarePackageVersion;
    m_softwarePackageVersionHasBeenSet = true;
}

bool License::SoftwarePackageVersionHasBeenSet() const
{
    return m_softwarePackageVersionHasBeenSet;
}

string License::GetAuthorizedUserUin() const
{
    return m_authorizedUserUin;
}

void License::SetAuthorizedUserUin(const string& _authorizedUserUin)
{
    m_authorizedUserUin = _authorizedUserUin;
    m_authorizedUserUinHasBeenSet = true;
}

bool License::AuthorizedUserUinHasBeenSet() const
{
    return m_authorizedUserUinHasBeenSet;
}

string License::GetAuthorizedCloudappId() const
{
    return m_authorizedCloudappId;
}

void License::SetAuthorizedCloudappId(const string& _authorizedCloudappId)
{
    m_authorizedCloudappId = _authorizedCloudappId;
    m_authorizedCloudappIdHasBeenSet = true;
}

bool License::AuthorizedCloudappIdHasBeenSet() const
{
    return m_authorizedCloudappIdHasBeenSet;
}

string License::GetAuthorizedCloudappRoleId() const
{
    return m_authorizedCloudappRoleId;
}

void License::SetAuthorizedCloudappRoleId(const string& _authorizedCloudappRoleId)
{
    m_authorizedCloudappRoleId = _authorizedCloudappRoleId;
    m_authorizedCloudappRoleIdHasBeenSet = true;
}

bool License::AuthorizedCloudappRoleIdHasBeenSet() const
{
    return m_authorizedCloudappRoleIdHasBeenSet;
}

vector<SaleParam> License::GetAuthorizedSpecification() const
{
    return m_authorizedSpecification;
}

void License::SetAuthorizedSpecification(const vector<SaleParam>& _authorizedSpecification)
{
    m_authorizedSpecification = _authorizedSpecification;
    m_authorizedSpecificationHasBeenSet = true;
}

bool License::AuthorizedSpecificationHasBeenSet() const
{
    return m_authorizedSpecificationHasBeenSet;
}

int64_t License::GetBillingMode() const
{
    return m_billingMode;
}

void License::SetBillingMode(const int64_t& _billingMode)
{
    m_billingMode = _billingMode;
    m_billingModeHasBeenSet = true;
}

bool License::BillingModeHasBeenSet() const
{
    return m_billingModeHasBeenSet;
}

int64_t License::GetLifeSpan() const
{
    return m_lifeSpan;
}

void License::SetLifeSpan(const int64_t& _lifeSpan)
{
    m_lifeSpan = _lifeSpan;
    m_lifeSpanHasBeenSet = true;
}

bool License::LifeSpanHasBeenSet() const
{
    return m_lifeSpanHasBeenSet;
}

string License::GetIssueDate() const
{
    return m_issueDate;
}

void License::SetIssueDate(const string& _issueDate)
{
    m_issueDate = _issueDate;
    m_issueDateHasBeenSet = true;
}

bool License::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string License::GetActivationDate() const
{
    return m_activationDate;
}

void License::SetActivationDate(const string& _activationDate)
{
    m_activationDate = _activationDate;
    m_activationDateHasBeenSet = true;
}

bool License::ActivationDateHasBeenSet() const
{
    return m_activationDateHasBeenSet;
}

string License::GetExpirationDate() const
{
    return m_expirationDate;
}

void License::SetExpirationDate(const string& _expirationDate)
{
    m_expirationDate = _expirationDate;
    m_expirationDateHasBeenSet = true;
}

bool License::ExpirationDateHasBeenSet() const
{
    return m_expirationDateHasBeenSet;
}

string License::GetLifeSpanUnit() const
{
    return m_lifeSpanUnit;
}

void License::SetLifeSpanUnit(const string& _lifeSpanUnit)
{
    m_lifeSpanUnit = _lifeSpanUnit;
    m_lifeSpanUnitHasBeenSet = true;
}

bool License::LifeSpanUnitHasBeenSet() const
{
    return m_lifeSpanUnitHasBeenSet;
}

string License::GetLicenseType() const
{
    return m_licenseType;
}

void License::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool License::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

string License::GetLicenseLevel() const
{
    return m_licenseLevel;
}

void License::SetLicenseLevel(const string& _licenseLevel)
{
    m_licenseLevel = _licenseLevel;
    m_licenseLevelHasBeenSet = true;
}

bool License::LicenseLevelHasBeenSet() const
{
    return m_licenseLevelHasBeenSet;
}

