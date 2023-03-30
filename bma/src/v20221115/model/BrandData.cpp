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

#include <tencentcloud/bma/v20221115/model/BrandData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

BrandData::BrandData() :
    m_companyIdHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_licenseHasBeenSet(false),
    m_licenseStatusHasBeenSet(false),
    m_licenseNoteHasBeenSet(false),
    m_authorizationHasBeenSet(false),
    m_authorizationStatusHasBeenSet(false),
    m_authorizationNoteHasBeenSet(false),
    m_trademarksHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome BrandData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompanyId") && !value["CompanyId"].IsNull())
    {
        if (!value["CompanyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.CompanyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = value["CompanyId"].GetInt64();
        m_companyIdHasBeenSet = true;
    }

    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("License") && !value["License"].IsNull())
    {
        if (!value["License"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.License` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_license = string(value["License"].GetString());
        m_licenseHasBeenSet = true;
    }

    if (value.HasMember("LicenseStatus") && !value["LicenseStatus"].IsNull())
    {
        if (!value["LicenseStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.LicenseStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseStatus = value["LicenseStatus"].GetInt64();
        m_licenseStatusHasBeenSet = true;
    }

    if (value.HasMember("LicenseNote") && !value["LicenseNote"].IsNull())
    {
        if (!value["LicenseNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.LicenseNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNote = string(value["LicenseNote"].GetString());
        m_licenseNoteHasBeenSet = true;
    }

    if (value.HasMember("Authorization") && !value["Authorization"].IsNull())
    {
        if (!value["Authorization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.Authorization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorization = string(value["Authorization"].GetString());
        m_authorizationHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationStatus") && !value["AuthorizationStatus"].IsNull())
    {
        if (!value["AuthorizationStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.AuthorizationStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationStatus = value["AuthorizationStatus"].GetInt64();
        m_authorizationStatusHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationNote") && !value["AuthorizationNote"].IsNull())
    {
        if (!value["AuthorizationNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.AuthorizationNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationNote = string(value["AuthorizationNote"].GetString());
        m_authorizationNoteHasBeenSet = true;
    }

    if (value.HasMember("Trademarks") && !value["Trademarks"].IsNull())
    {
        if (!value["Trademarks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BrandData.Trademarks` is not array type"));

        const rapidjson::Value &tmpValue = value["Trademarks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrademarkData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trademarks.push_back(item);
        }
        m_trademarksHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("Services") && !value["Services"].IsNull())
    {
        if (!value["Services"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.Services` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_services.Deserialize(value["Services"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_servicesHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrandData.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrandData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companyId, allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_license.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseStatus, allocator);
    }

    if (m_licenseNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseNote.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authorization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorization.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationStatus, allocator);
    }

    if (m_authorizationNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationNote.c_str(), allocator).Move(), allocator);
    }

    if (m_trademarksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trademarks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trademarks.begin(); itr != m_trademarks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_servicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Services";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_services.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

}


int64_t BrandData::GetCompanyId() const
{
    return m_companyId;
}

void BrandData::SetCompanyId(const int64_t& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool BrandData::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

string BrandData::GetCompanyName() const
{
    return m_companyName;
}

void BrandData::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool BrandData::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

string BrandData::GetBrandName() const
{
    return m_brandName;
}

void BrandData::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool BrandData::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

string BrandData::GetPhone() const
{
    return m_phone;
}

void BrandData::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool BrandData::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string BrandData::GetLicense() const
{
    return m_license;
}

void BrandData::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool BrandData::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

int64_t BrandData::GetLicenseStatus() const
{
    return m_licenseStatus;
}

void BrandData::SetLicenseStatus(const int64_t& _licenseStatus)
{
    m_licenseStatus = _licenseStatus;
    m_licenseStatusHasBeenSet = true;
}

bool BrandData::LicenseStatusHasBeenSet() const
{
    return m_licenseStatusHasBeenSet;
}

string BrandData::GetLicenseNote() const
{
    return m_licenseNote;
}

void BrandData::SetLicenseNote(const string& _licenseNote)
{
    m_licenseNote = _licenseNote;
    m_licenseNoteHasBeenSet = true;
}

bool BrandData::LicenseNoteHasBeenSet() const
{
    return m_licenseNoteHasBeenSet;
}

string BrandData::GetAuthorization() const
{
    return m_authorization;
}

void BrandData::SetAuthorization(const string& _authorization)
{
    m_authorization = _authorization;
    m_authorizationHasBeenSet = true;
}

bool BrandData::AuthorizationHasBeenSet() const
{
    return m_authorizationHasBeenSet;
}

int64_t BrandData::GetAuthorizationStatus() const
{
    return m_authorizationStatus;
}

void BrandData::SetAuthorizationStatus(const int64_t& _authorizationStatus)
{
    m_authorizationStatus = _authorizationStatus;
    m_authorizationStatusHasBeenSet = true;
}

bool BrandData::AuthorizationStatusHasBeenSet() const
{
    return m_authorizationStatusHasBeenSet;
}

string BrandData::GetAuthorizationNote() const
{
    return m_authorizationNote;
}

void BrandData::SetAuthorizationNote(const string& _authorizationNote)
{
    m_authorizationNote = _authorizationNote;
    m_authorizationNoteHasBeenSet = true;
}

bool BrandData::AuthorizationNoteHasBeenSet() const
{
    return m_authorizationNoteHasBeenSet;
}

vector<TrademarkData> BrandData::GetTrademarks() const
{
    return m_trademarks;
}

void BrandData::SetTrademarks(const vector<TrademarkData>& _trademarks)
{
    m_trademarks = _trademarks;
    m_trademarksHasBeenSet = true;
}

bool BrandData::TrademarksHasBeenSet() const
{
    return m_trademarksHasBeenSet;
}

string BrandData::GetInsertTime() const
{
    return m_insertTime;
}

void BrandData::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool BrandData::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

ServiceData BrandData::GetServices() const
{
    return m_services;
}

void BrandData::SetServices(const ServiceData& _services)
{
    m_services = _services;
    m_servicesHasBeenSet = true;
}

bool BrandData::ServicesHasBeenSet() const
{
    return m_servicesHasBeenSet;
}

string BrandData::GetUin() const
{
    return m_uin;
}

void BrandData::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool BrandData::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

