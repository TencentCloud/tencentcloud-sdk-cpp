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

#include <tencentcloud/cpdp/v20190820/model/AddMerchantRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

AddMerchantRequest::AddMerchantRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_outMerchantIdHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_businessLicenseTypeHasBeenSet(false),
    m_businessLicenseNoHasBeenSet(false),
    m_businessLicensePictureHasBeenSet(false),
    m_businessLicenseStartDateHasBeenSet(false),
    m_businessLicenseEndDateHasBeenSet(false),
    m_classificationIdsHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_telephoneHasBeenSet(false),
    m_cityIdHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_openHoursHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_bankNoHasBeenSet(false),
    m_bankNameHasBeenSet(false),
    m_accountNoHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_bossIdTypeHasBeenSet(false),
    m_bossIdNoHasBeenSet(false),
    m_bossNameHasBeenSet(false),
    m_bossSexHasBeenSet(false),
    m_bossIdCountryHasBeenSet(false),
    m_bossPositiveHasBeenSet(false),
    m_bossBackHasBeenSet(false),
    m_bossStartDateHasBeenSet(false),
    m_bossEndDateHasBeenSet(false),
    m_licencePictureHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_organizationNoHasBeenSet(false),
    m_organizationStartDateHasBeenSet(false),
    m_organizationPictureHasBeenSet(false),
    m_organizationEndDateHasBeenSet(false),
    m_introHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_financialTelephoneHasBeenSet(false),
    m_financialContactHasBeenSet(false),
    m_taxRegistrationNoHasBeenSet(false),
    m_taxRegistrationPictureHasBeenSet(false),
    m_taxRegistrationStartDateHasBeenSet(false),
    m_taxRegistrationEndDateHasBeenSet(false),
    m_accountBossHasBeenSet(false),
    m_accountManagerNameHasBeenSet(false),
    m_bossTelephoneHasBeenSet(false),
    m_bossJobHasBeenSet(false),
    m_bossEmailHasBeenSet(false),
    m_bossAddressHasBeenSet(false),
    m_accountIdTypeHasBeenSet(false),
    m_accountIdNoHasBeenSet(false),
    m_licencePictureTwoHasBeenSet(false),
    m_otherPictureOneHasBeenSet(false),
    m_otherPictureTwoHasBeenSet(false),
    m_otherPictureThreeHasBeenSet(false),
    m_otherPictureFourHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string AddMerchantRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_openKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openKey.c_str(), allocator).Move(), allocator);
    }

    if (m_outMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessLicenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessLicenseNo.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicensePictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicensePicture";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessLicensePicture.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessLicenseStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessLicenseEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_classificationIds.begin(); itr != m_classificationIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_telephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Telephone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_telephone.c_str(), allocator).Move(), allocator);
    }

    if (m_cityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cityId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_openHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenHours";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openHours.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_bankNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankNo.c_str(), allocator).Move(), allocator);
    }

    if (m_bankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountNo.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_bossIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_bossIdNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossIdNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossIdNo.c_str(), allocator).Move(), allocator);
    }

    if (m_bossNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossName.c_str(), allocator).Move(), allocator);
    }

    if (m_bossSexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossSex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossSex.c_str(), allocator).Move(), allocator);
    }

    if (m_bossIdCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossIdCountry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossIdCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_bossPositiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossPositive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossPositive.c_str(), allocator).Move(), allocator);
    }

    if (m_bossBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossBack";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossBack.c_str(), allocator).Move(), allocator);
    }

    if (m_bossStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_bossEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_licencePictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicencePicture";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_licencePicture.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationNo.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationPictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationPicture";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationPicture.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_introHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intro";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_intro.c_str(), allocator).Move(), allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_financialTelephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinancialTelephone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_financialTelephone.c_str(), allocator).Move(), allocator);
    }

    if (m_financialContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinancialContact";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_financialContact.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRegistrationNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRegistrationNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taxRegistrationNo.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRegistrationPictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRegistrationPicture";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taxRegistrationPicture.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRegistrationStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRegistrationStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taxRegistrationStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRegistrationEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRegistrationEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taxRegistrationEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_accountBossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountBoss";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountBoss.c_str(), allocator).Move(), allocator);
    }

    if (m_accountManagerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountManagerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountManagerName.c_str(), allocator).Move(), allocator);
    }

    if (m_bossTelephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossTelephone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossTelephone.c_str(), allocator).Move(), allocator);
    }

    if (m_bossJobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossJob";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossJob.c_str(), allocator).Move(), allocator);
    }

    if (m_bossEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_bossAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bossAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountIdNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountIdNo.c_str(), allocator).Move(), allocator);
    }

    if (m_licencePictureTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicencePictureTwo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_licencePictureTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_otherPictureOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherPictureOne";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_otherPictureOne.c_str(), allocator).Move(), allocator);
    }

    if (m_otherPictureTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherPictureTwo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_otherPictureTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_otherPictureThreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherPictureThree";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_otherPictureThree.c_str(), allocator).Move(), allocator);
    }

    if (m_otherPictureFourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherPictureFour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_otherPictureFour.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddMerchantRequest::GetOpenId() const
{
    return m_openId;
}

void AddMerchantRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool AddMerchantRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string AddMerchantRequest::GetOpenKey() const
{
    return m_openKey;
}

void AddMerchantRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool AddMerchantRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string AddMerchantRequest::GetOutMerchantId() const
{
    return m_outMerchantId;
}

void AddMerchantRequest::SetOutMerchantId(const string& _outMerchantId)
{
    m_outMerchantId = _outMerchantId;
    m_outMerchantIdHasBeenSet = true;
}

bool AddMerchantRequest::OutMerchantIdHasBeenSet() const
{
    return m_outMerchantIdHasBeenSet;
}

string AddMerchantRequest::GetMerchantName() const
{
    return m_merchantName;
}

void AddMerchantRequest::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool AddMerchantRequest::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

string AddMerchantRequest::GetBusinessLicenseType() const
{
    return m_businessLicenseType;
}

void AddMerchantRequest::SetBusinessLicenseType(const string& _businessLicenseType)
{
    m_businessLicenseType = _businessLicenseType;
    m_businessLicenseTypeHasBeenSet = true;
}

bool AddMerchantRequest::BusinessLicenseTypeHasBeenSet() const
{
    return m_businessLicenseTypeHasBeenSet;
}

string AddMerchantRequest::GetBusinessLicenseNo() const
{
    return m_businessLicenseNo;
}

void AddMerchantRequest::SetBusinessLicenseNo(const string& _businessLicenseNo)
{
    m_businessLicenseNo = _businessLicenseNo;
    m_businessLicenseNoHasBeenSet = true;
}

bool AddMerchantRequest::BusinessLicenseNoHasBeenSet() const
{
    return m_businessLicenseNoHasBeenSet;
}

string AddMerchantRequest::GetBusinessLicensePicture() const
{
    return m_businessLicensePicture;
}

void AddMerchantRequest::SetBusinessLicensePicture(const string& _businessLicensePicture)
{
    m_businessLicensePicture = _businessLicensePicture;
    m_businessLicensePictureHasBeenSet = true;
}

bool AddMerchantRequest::BusinessLicensePictureHasBeenSet() const
{
    return m_businessLicensePictureHasBeenSet;
}

string AddMerchantRequest::GetBusinessLicenseStartDate() const
{
    return m_businessLicenseStartDate;
}

void AddMerchantRequest::SetBusinessLicenseStartDate(const string& _businessLicenseStartDate)
{
    m_businessLicenseStartDate = _businessLicenseStartDate;
    m_businessLicenseStartDateHasBeenSet = true;
}

bool AddMerchantRequest::BusinessLicenseStartDateHasBeenSet() const
{
    return m_businessLicenseStartDateHasBeenSet;
}

string AddMerchantRequest::GetBusinessLicenseEndDate() const
{
    return m_businessLicenseEndDate;
}

void AddMerchantRequest::SetBusinessLicenseEndDate(const string& _businessLicenseEndDate)
{
    m_businessLicenseEndDate = _businessLicenseEndDate;
    m_businessLicenseEndDateHasBeenSet = true;
}

bool AddMerchantRequest::BusinessLicenseEndDateHasBeenSet() const
{
    return m_businessLicenseEndDateHasBeenSet;
}

vector<string> AddMerchantRequest::GetClassificationIds() const
{
    return m_classificationIds;
}

void AddMerchantRequest::SetClassificationIds(const vector<string>& _classificationIds)
{
    m_classificationIds = _classificationIds;
    m_classificationIdsHasBeenSet = true;
}

bool AddMerchantRequest::ClassificationIdsHasBeenSet() const
{
    return m_classificationIdsHasBeenSet;
}

string AddMerchantRequest::GetBrandName() const
{
    return m_brandName;
}

void AddMerchantRequest::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool AddMerchantRequest::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

string AddMerchantRequest::GetTelephone() const
{
    return m_telephone;
}

void AddMerchantRequest::SetTelephone(const string& _telephone)
{
    m_telephone = _telephone;
    m_telephoneHasBeenSet = true;
}

bool AddMerchantRequest::TelephoneHasBeenSet() const
{
    return m_telephoneHasBeenSet;
}

string AddMerchantRequest::GetCityId() const
{
    return m_cityId;
}

void AddMerchantRequest::SetCityId(const string& _cityId)
{
    m_cityId = _cityId;
    m_cityIdHasBeenSet = true;
}

bool AddMerchantRequest::CityIdHasBeenSet() const
{
    return m_cityIdHasBeenSet;
}

string AddMerchantRequest::GetAddress() const
{
    return m_address;
}

void AddMerchantRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool AddMerchantRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string AddMerchantRequest::GetOpenHours() const
{
    return m_openHours;
}

void AddMerchantRequest::SetOpenHours(const string& _openHours)
{
    m_openHours = _openHours;
    m_openHoursHasBeenSet = true;
}

bool AddMerchantRequest::OpenHoursHasBeenSet() const
{
    return m_openHoursHasBeenSet;
}

string AddMerchantRequest::GetAccountType() const
{
    return m_accountType;
}

void AddMerchantRequest::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool AddMerchantRequest::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string AddMerchantRequest::GetBankNo() const
{
    return m_bankNo;
}

void AddMerchantRequest::SetBankNo(const string& _bankNo)
{
    m_bankNo = _bankNo;
    m_bankNoHasBeenSet = true;
}

bool AddMerchantRequest::BankNoHasBeenSet() const
{
    return m_bankNoHasBeenSet;
}

string AddMerchantRequest::GetBankName() const
{
    return m_bankName;
}

void AddMerchantRequest::SetBankName(const string& _bankName)
{
    m_bankName = _bankName;
    m_bankNameHasBeenSet = true;
}

bool AddMerchantRequest::BankNameHasBeenSet() const
{
    return m_bankNameHasBeenSet;
}

string AddMerchantRequest::GetAccountNo() const
{
    return m_accountNo;
}

void AddMerchantRequest::SetAccountNo(const string& _accountNo)
{
    m_accountNo = _accountNo;
    m_accountNoHasBeenSet = true;
}

bool AddMerchantRequest::AccountNoHasBeenSet() const
{
    return m_accountNoHasBeenSet;
}

string AddMerchantRequest::GetAccountName() const
{
    return m_accountName;
}

void AddMerchantRequest::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool AddMerchantRequest::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string AddMerchantRequest::GetBossIdType() const
{
    return m_bossIdType;
}

void AddMerchantRequest::SetBossIdType(const string& _bossIdType)
{
    m_bossIdType = _bossIdType;
    m_bossIdTypeHasBeenSet = true;
}

bool AddMerchantRequest::BossIdTypeHasBeenSet() const
{
    return m_bossIdTypeHasBeenSet;
}

string AddMerchantRequest::GetBossIdNo() const
{
    return m_bossIdNo;
}

void AddMerchantRequest::SetBossIdNo(const string& _bossIdNo)
{
    m_bossIdNo = _bossIdNo;
    m_bossIdNoHasBeenSet = true;
}

bool AddMerchantRequest::BossIdNoHasBeenSet() const
{
    return m_bossIdNoHasBeenSet;
}

string AddMerchantRequest::GetBossName() const
{
    return m_bossName;
}

void AddMerchantRequest::SetBossName(const string& _bossName)
{
    m_bossName = _bossName;
    m_bossNameHasBeenSet = true;
}

bool AddMerchantRequest::BossNameHasBeenSet() const
{
    return m_bossNameHasBeenSet;
}

string AddMerchantRequest::GetBossSex() const
{
    return m_bossSex;
}

void AddMerchantRequest::SetBossSex(const string& _bossSex)
{
    m_bossSex = _bossSex;
    m_bossSexHasBeenSet = true;
}

bool AddMerchantRequest::BossSexHasBeenSet() const
{
    return m_bossSexHasBeenSet;
}

string AddMerchantRequest::GetBossIdCountry() const
{
    return m_bossIdCountry;
}

void AddMerchantRequest::SetBossIdCountry(const string& _bossIdCountry)
{
    m_bossIdCountry = _bossIdCountry;
    m_bossIdCountryHasBeenSet = true;
}

bool AddMerchantRequest::BossIdCountryHasBeenSet() const
{
    return m_bossIdCountryHasBeenSet;
}

string AddMerchantRequest::GetBossPositive() const
{
    return m_bossPositive;
}

void AddMerchantRequest::SetBossPositive(const string& _bossPositive)
{
    m_bossPositive = _bossPositive;
    m_bossPositiveHasBeenSet = true;
}

bool AddMerchantRequest::BossPositiveHasBeenSet() const
{
    return m_bossPositiveHasBeenSet;
}

string AddMerchantRequest::GetBossBack() const
{
    return m_bossBack;
}

void AddMerchantRequest::SetBossBack(const string& _bossBack)
{
    m_bossBack = _bossBack;
    m_bossBackHasBeenSet = true;
}

bool AddMerchantRequest::BossBackHasBeenSet() const
{
    return m_bossBackHasBeenSet;
}

string AddMerchantRequest::GetBossStartDate() const
{
    return m_bossStartDate;
}

void AddMerchantRequest::SetBossStartDate(const string& _bossStartDate)
{
    m_bossStartDate = _bossStartDate;
    m_bossStartDateHasBeenSet = true;
}

bool AddMerchantRequest::BossStartDateHasBeenSet() const
{
    return m_bossStartDateHasBeenSet;
}

string AddMerchantRequest::GetBossEndDate() const
{
    return m_bossEndDate;
}

void AddMerchantRequest::SetBossEndDate(const string& _bossEndDate)
{
    m_bossEndDate = _bossEndDate;
    m_bossEndDateHasBeenSet = true;
}

bool AddMerchantRequest::BossEndDateHasBeenSet() const
{
    return m_bossEndDateHasBeenSet;
}

string AddMerchantRequest::GetLicencePicture() const
{
    return m_licencePicture;
}

void AddMerchantRequest::SetLicencePicture(const string& _licencePicture)
{
    m_licencePicture = _licencePicture;
    m_licencePictureHasBeenSet = true;
}

bool AddMerchantRequest::LicencePictureHasBeenSet() const
{
    return m_licencePictureHasBeenSet;
}

string AddMerchantRequest::GetType() const
{
    return m_type;
}

void AddMerchantRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AddMerchantRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AddMerchantRequest::GetOrganizationNo() const
{
    return m_organizationNo;
}

void AddMerchantRequest::SetOrganizationNo(const string& _organizationNo)
{
    m_organizationNo = _organizationNo;
    m_organizationNoHasBeenSet = true;
}

bool AddMerchantRequest::OrganizationNoHasBeenSet() const
{
    return m_organizationNoHasBeenSet;
}

string AddMerchantRequest::GetOrganizationStartDate() const
{
    return m_organizationStartDate;
}

void AddMerchantRequest::SetOrganizationStartDate(const string& _organizationStartDate)
{
    m_organizationStartDate = _organizationStartDate;
    m_organizationStartDateHasBeenSet = true;
}

bool AddMerchantRequest::OrganizationStartDateHasBeenSet() const
{
    return m_organizationStartDateHasBeenSet;
}

string AddMerchantRequest::GetOrganizationPicture() const
{
    return m_organizationPicture;
}

void AddMerchantRequest::SetOrganizationPicture(const string& _organizationPicture)
{
    m_organizationPicture = _organizationPicture;
    m_organizationPictureHasBeenSet = true;
}

bool AddMerchantRequest::OrganizationPictureHasBeenSet() const
{
    return m_organizationPictureHasBeenSet;
}

string AddMerchantRequest::GetOrganizationEndDate() const
{
    return m_organizationEndDate;
}

void AddMerchantRequest::SetOrganizationEndDate(const string& _organizationEndDate)
{
    m_organizationEndDate = _organizationEndDate;
    m_organizationEndDateHasBeenSet = true;
}

bool AddMerchantRequest::OrganizationEndDateHasBeenSet() const
{
    return m_organizationEndDateHasBeenSet;
}

string AddMerchantRequest::GetIntro() const
{
    return m_intro;
}

void AddMerchantRequest::SetIntro(const string& _intro)
{
    m_intro = _intro;
    m_introHasBeenSet = true;
}

bool AddMerchantRequest::IntroHasBeenSet() const
{
    return m_introHasBeenSet;
}

string AddMerchantRequest::GetLogo() const
{
    return m_logo;
}

void AddMerchantRequest::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool AddMerchantRequest::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string AddMerchantRequest::GetTag() const
{
    return m_tag;
}

void AddMerchantRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AddMerchantRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AddMerchantRequest::GetFinancialTelephone() const
{
    return m_financialTelephone;
}

void AddMerchantRequest::SetFinancialTelephone(const string& _financialTelephone)
{
    m_financialTelephone = _financialTelephone;
    m_financialTelephoneHasBeenSet = true;
}

bool AddMerchantRequest::FinancialTelephoneHasBeenSet() const
{
    return m_financialTelephoneHasBeenSet;
}

string AddMerchantRequest::GetFinancialContact() const
{
    return m_financialContact;
}

void AddMerchantRequest::SetFinancialContact(const string& _financialContact)
{
    m_financialContact = _financialContact;
    m_financialContactHasBeenSet = true;
}

bool AddMerchantRequest::FinancialContactHasBeenSet() const
{
    return m_financialContactHasBeenSet;
}

string AddMerchantRequest::GetTaxRegistrationNo() const
{
    return m_taxRegistrationNo;
}

void AddMerchantRequest::SetTaxRegistrationNo(const string& _taxRegistrationNo)
{
    m_taxRegistrationNo = _taxRegistrationNo;
    m_taxRegistrationNoHasBeenSet = true;
}

bool AddMerchantRequest::TaxRegistrationNoHasBeenSet() const
{
    return m_taxRegistrationNoHasBeenSet;
}

string AddMerchantRequest::GetTaxRegistrationPicture() const
{
    return m_taxRegistrationPicture;
}

void AddMerchantRequest::SetTaxRegistrationPicture(const string& _taxRegistrationPicture)
{
    m_taxRegistrationPicture = _taxRegistrationPicture;
    m_taxRegistrationPictureHasBeenSet = true;
}

bool AddMerchantRequest::TaxRegistrationPictureHasBeenSet() const
{
    return m_taxRegistrationPictureHasBeenSet;
}

string AddMerchantRequest::GetTaxRegistrationStartDate() const
{
    return m_taxRegistrationStartDate;
}

void AddMerchantRequest::SetTaxRegistrationStartDate(const string& _taxRegistrationStartDate)
{
    m_taxRegistrationStartDate = _taxRegistrationStartDate;
    m_taxRegistrationStartDateHasBeenSet = true;
}

bool AddMerchantRequest::TaxRegistrationStartDateHasBeenSet() const
{
    return m_taxRegistrationStartDateHasBeenSet;
}

string AddMerchantRequest::GetTaxRegistrationEndDate() const
{
    return m_taxRegistrationEndDate;
}

void AddMerchantRequest::SetTaxRegistrationEndDate(const string& _taxRegistrationEndDate)
{
    m_taxRegistrationEndDate = _taxRegistrationEndDate;
    m_taxRegistrationEndDateHasBeenSet = true;
}

bool AddMerchantRequest::TaxRegistrationEndDateHasBeenSet() const
{
    return m_taxRegistrationEndDateHasBeenSet;
}

string AddMerchantRequest::GetAccountBoss() const
{
    return m_accountBoss;
}

void AddMerchantRequest::SetAccountBoss(const string& _accountBoss)
{
    m_accountBoss = _accountBoss;
    m_accountBossHasBeenSet = true;
}

bool AddMerchantRequest::AccountBossHasBeenSet() const
{
    return m_accountBossHasBeenSet;
}

string AddMerchantRequest::GetAccountManagerName() const
{
    return m_accountManagerName;
}

void AddMerchantRequest::SetAccountManagerName(const string& _accountManagerName)
{
    m_accountManagerName = _accountManagerName;
    m_accountManagerNameHasBeenSet = true;
}

bool AddMerchantRequest::AccountManagerNameHasBeenSet() const
{
    return m_accountManagerNameHasBeenSet;
}

string AddMerchantRequest::GetBossTelephone() const
{
    return m_bossTelephone;
}

void AddMerchantRequest::SetBossTelephone(const string& _bossTelephone)
{
    m_bossTelephone = _bossTelephone;
    m_bossTelephoneHasBeenSet = true;
}

bool AddMerchantRequest::BossTelephoneHasBeenSet() const
{
    return m_bossTelephoneHasBeenSet;
}

string AddMerchantRequest::GetBossJob() const
{
    return m_bossJob;
}

void AddMerchantRequest::SetBossJob(const string& _bossJob)
{
    m_bossJob = _bossJob;
    m_bossJobHasBeenSet = true;
}

bool AddMerchantRequest::BossJobHasBeenSet() const
{
    return m_bossJobHasBeenSet;
}

string AddMerchantRequest::GetBossEmail() const
{
    return m_bossEmail;
}

void AddMerchantRequest::SetBossEmail(const string& _bossEmail)
{
    m_bossEmail = _bossEmail;
    m_bossEmailHasBeenSet = true;
}

bool AddMerchantRequest::BossEmailHasBeenSet() const
{
    return m_bossEmailHasBeenSet;
}

string AddMerchantRequest::GetBossAddress() const
{
    return m_bossAddress;
}

void AddMerchantRequest::SetBossAddress(const string& _bossAddress)
{
    m_bossAddress = _bossAddress;
    m_bossAddressHasBeenSet = true;
}

bool AddMerchantRequest::BossAddressHasBeenSet() const
{
    return m_bossAddressHasBeenSet;
}

string AddMerchantRequest::GetAccountIdType() const
{
    return m_accountIdType;
}

void AddMerchantRequest::SetAccountIdType(const string& _accountIdType)
{
    m_accountIdType = _accountIdType;
    m_accountIdTypeHasBeenSet = true;
}

bool AddMerchantRequest::AccountIdTypeHasBeenSet() const
{
    return m_accountIdTypeHasBeenSet;
}

string AddMerchantRequest::GetAccountIdNo() const
{
    return m_accountIdNo;
}

void AddMerchantRequest::SetAccountIdNo(const string& _accountIdNo)
{
    m_accountIdNo = _accountIdNo;
    m_accountIdNoHasBeenSet = true;
}

bool AddMerchantRequest::AccountIdNoHasBeenSet() const
{
    return m_accountIdNoHasBeenSet;
}

string AddMerchantRequest::GetLicencePictureTwo() const
{
    return m_licencePictureTwo;
}

void AddMerchantRequest::SetLicencePictureTwo(const string& _licencePictureTwo)
{
    m_licencePictureTwo = _licencePictureTwo;
    m_licencePictureTwoHasBeenSet = true;
}

bool AddMerchantRequest::LicencePictureTwoHasBeenSet() const
{
    return m_licencePictureTwoHasBeenSet;
}

string AddMerchantRequest::GetOtherPictureOne() const
{
    return m_otherPictureOne;
}

void AddMerchantRequest::SetOtherPictureOne(const string& _otherPictureOne)
{
    m_otherPictureOne = _otherPictureOne;
    m_otherPictureOneHasBeenSet = true;
}

bool AddMerchantRequest::OtherPictureOneHasBeenSet() const
{
    return m_otherPictureOneHasBeenSet;
}

string AddMerchantRequest::GetOtherPictureTwo() const
{
    return m_otherPictureTwo;
}

void AddMerchantRequest::SetOtherPictureTwo(const string& _otherPictureTwo)
{
    m_otherPictureTwo = _otherPictureTwo;
    m_otherPictureTwoHasBeenSet = true;
}

bool AddMerchantRequest::OtherPictureTwoHasBeenSet() const
{
    return m_otherPictureTwoHasBeenSet;
}

string AddMerchantRequest::GetOtherPictureThree() const
{
    return m_otherPictureThree;
}

void AddMerchantRequest::SetOtherPictureThree(const string& _otherPictureThree)
{
    m_otherPictureThree = _otherPictureThree;
    m_otherPictureThreeHasBeenSet = true;
}

bool AddMerchantRequest::OtherPictureThreeHasBeenSet() const
{
    return m_otherPictureThreeHasBeenSet;
}

string AddMerchantRequest::GetOtherPictureFour() const
{
    return m_otherPictureFour;
}

void AddMerchantRequest::SetOtherPictureFour(const string& _otherPictureFour)
{
    m_otherPictureFour = _otherPictureFour;
    m_otherPictureFourHasBeenSet = true;
}

bool AddMerchantRequest::OtherPictureFourHasBeenSet() const
{
    return m_otherPictureFourHasBeenSet;
}

string AddMerchantRequest::GetProfile() const
{
    return m_profile;
}

void AddMerchantRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool AddMerchantRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


