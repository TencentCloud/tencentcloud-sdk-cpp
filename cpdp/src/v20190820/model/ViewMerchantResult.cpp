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

#include <tencentcloud/cpdp/v20190820/model/ViewMerchantResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ViewMerchantResult::ViewMerchantResult() :
    m_cityHasBeenSet(false),
    m_taxCollectionPictureHasBeenSet(false),
    m_bossIdNoHasBeenSet(false),
    m_accountIdNoHasBeenSet(false),
    m_otherPictureThreeHasBeenSet(false),
    m_accountIdTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_businessLicensePictureHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_bossPositiveHasBeenSet(false),
    m_appCountHasBeenSet(false),
    m_bossBackHasBeenSet(false),
    m_organizationCodePictureHasBeenSet(false),
    m_businessLicenseEndDateHasBeenSet(false),
    m_organizationCodeNoHasBeenSet(false),
    m_agentNoHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_bossStartDateHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_bankNoHasBeenSet(false),
    m_taxCollectionStartDateHasBeenSet(false),
    m_businessLicenseStartDateHasBeenSet(false),
    m_accountManagerIdHasBeenSet(false),
    m_classificationIdsHasBeenSet(false),
    m_businessLicenseTypeHasBeenSet(false),
    m_bossEndDateHasBeenSet(false),
    m_businessLicenseNoHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_introHasBeenSet(false),
    m_bossIdTypeHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_shopCountHasBeenSet(false),
    m_accountBossHasBeenSet(false),
    m_classificationNamesHasBeenSet(false),
    m_bossTelephoneHasBeenSet(false),
    m_accountManagerNameHasBeenSet(false),
    m_terminalCountHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_financialContactHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_bossSexHasBeenSet(false),
    m_merchantNoHasBeenSet(false),
    m_bossAddressHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_bossJobHasBeenSet(false),
    m_licencePictureHasBeenSet(false),
    m_organizationCodeEndDateHasBeenSet(false),
    m_openHoursHasBeenSet(false),
    m_otherPictureTwoHasBeenSet(false),
    m_otherPictureOneHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_contractCountHasBeenSet(false),
    m_licencePictureTwoHasBeenSet(false),
    m_accountNoHasBeenSet(false),
    m_bossEmailHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_taxCollectionEndDateHasBeenSet(false),
    m_bankNameHasBeenSet(false),
    m_telephoneHasBeenSet(false),
    m_outMerchantIdHasBeenSet(false),
    m_cityIdHasBeenSet(false),
    m_bossIdCountHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_financialTelephoneHasBeenSet(false),
    m_bossNameHasBeenSet(false),
    m_organizationCodeStartDateHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_otherPictureFourHasBeenSet(false),
    m_taxCollectionNoHasBeenSet(false)
{
}

CoreInternalOutcome ViewMerchantResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("TaxCollectionPicture") && !value["TaxCollectionPicture"].IsNull())
    {
        if (!value["TaxCollectionPicture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.TaxCollectionPicture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxCollectionPicture = string(value["TaxCollectionPicture"].GetString());
        m_taxCollectionPictureHasBeenSet = true;
    }

    if (value.HasMember("BossIdNo") && !value["BossIdNo"].IsNull())
    {
        if (!value["BossIdNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossIdNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossIdNo = string(value["BossIdNo"].GetString());
        m_bossIdNoHasBeenSet = true;
    }

    if (value.HasMember("AccountIdNo") && !value["AccountIdNo"].IsNull())
    {
        if (!value["AccountIdNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.AccountIdNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountIdNo = string(value["AccountIdNo"].GetString());
        m_accountIdNoHasBeenSet = true;
    }

    if (value.HasMember("OtherPictureThree") && !value["OtherPictureThree"].IsNull())
    {
        if (!value["OtherPictureThree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.OtherPictureThree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherPictureThree = string(value["OtherPictureThree"].GetString());
        m_otherPictureThreeHasBeenSet = true;
    }

    if (value.HasMember("AccountIdType") && !value["AccountIdType"].IsNull())
    {
        if (!value["AccountIdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.AccountIdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountIdType = string(value["AccountIdType"].GetString());
        m_accountIdTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BusinessLicensePicture") && !value["BusinessLicensePicture"].IsNull())
    {
        if (!value["BusinessLicensePicture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BusinessLicensePicture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicensePicture = string(value["BusinessLicensePicture"].GetString());
        m_businessLicensePictureHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("BossPositive") && !value["BossPositive"].IsNull())
    {
        if (!value["BossPositive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossPositive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossPositive = string(value["BossPositive"].GetString());
        m_bossPositiveHasBeenSet = true;
    }

    if (value.HasMember("AppCount") && !value["AppCount"].IsNull())
    {
        if (!value["AppCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.AppCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appCount = string(value["AppCount"].GetString());
        m_appCountHasBeenSet = true;
    }

    if (value.HasMember("BossBack") && !value["BossBack"].IsNull())
    {
        if (!value["BossBack"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossBack` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossBack = string(value["BossBack"].GetString());
        m_bossBackHasBeenSet = true;
    }

    if (value.HasMember("OrganizationCodePicture") && !value["OrganizationCodePicture"].IsNull())
    {
        if (!value["OrganizationCodePicture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.OrganizationCodePicture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationCodePicture = string(value["OrganizationCodePicture"].GetString());
        m_organizationCodePictureHasBeenSet = true;
    }

    if (value.HasMember("BusinessLicenseEndDate") && !value["BusinessLicenseEndDate"].IsNull())
    {
        if (!value["BusinessLicenseEndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BusinessLicenseEndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicenseEndDate = string(value["BusinessLicenseEndDate"].GetString());
        m_businessLicenseEndDateHasBeenSet = true;
    }

    if (value.HasMember("OrganizationCodeNo") && !value["OrganizationCodeNo"].IsNull())
    {
        if (!value["OrganizationCodeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.OrganizationCodeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationCodeNo = string(value["OrganizationCodeNo"].GetString());
        m_organizationCodeNoHasBeenSet = true;
    }

    if (value.HasMember("AgentNo") && !value["AgentNo"].IsNull())
    {
        if (!value["AgentNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.AgentNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentNo = string(value["AgentNo"].GetString());
        m_agentNoHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("BossStartDate") && !value["BossStartDate"].IsNull())
    {
        if (!value["BossStartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossStartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossStartDate = string(value["BossStartDate"].GetString());
        m_bossStartDateHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("BankNo") && !value["BankNo"].IsNull())
    {
        if (!value["BankNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BankNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankNo = string(value["BankNo"].GetString());
        m_bankNoHasBeenSet = true;
    }

    if (value.HasMember("TaxCollectionStartDate") && !value["TaxCollectionStartDate"].IsNull())
    {
        if (!value["TaxCollectionStartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.TaxCollectionStartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxCollectionStartDate = string(value["TaxCollectionStartDate"].GetString());
        m_taxCollectionStartDateHasBeenSet = true;
    }

    if (value.HasMember("BusinessLicenseStartDate") && !value["BusinessLicenseStartDate"].IsNull())
    {
        if (!value["BusinessLicenseStartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BusinessLicenseStartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicenseStartDate = string(value["BusinessLicenseStartDate"].GetString());
        m_businessLicenseStartDateHasBeenSet = true;
    }

    if (value.HasMember("AccountManagerId") && !value["AccountManagerId"].IsNull())
    {
        if (!value["AccountManagerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.AccountManagerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountManagerId = string(value["AccountManagerId"].GetString());
        m_accountManagerIdHasBeenSet = true;
    }

    if (value.HasMember("ClassificationIds") && !value["ClassificationIds"].IsNull())
    {
        if (!value["ClassificationIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.ClassificationIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classificationIds = string(value["ClassificationIds"].GetString());
        m_classificationIdsHasBeenSet = true;
    }

    if (value.HasMember("BusinessLicenseType") && !value["BusinessLicenseType"].IsNull())
    {
        if (!value["BusinessLicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BusinessLicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicenseType = string(value["BusinessLicenseType"].GetString());
        m_businessLicenseTypeHasBeenSet = true;
    }

    if (value.HasMember("BossEndDate") && !value["BossEndDate"].IsNull())
    {
        if (!value["BossEndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossEndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossEndDate = string(value["BossEndDate"].GetString());
        m_bossEndDateHasBeenSet = true;
    }

    if (value.HasMember("BusinessLicenseNo") && !value["BusinessLicenseNo"].IsNull())
    {
        if (!value["BusinessLicenseNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BusinessLicenseNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicenseNo = string(value["BusinessLicenseNo"].GetString());
        m_businessLicenseNoHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("Intro") && !value["Intro"].IsNull())
    {
        if (!value["Intro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.Intro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intro = string(value["Intro"].GetString());
        m_introHasBeenSet = true;
    }

    if (value.HasMember("BossIdType") && !value["BossIdType"].IsNull())
    {
        if (!value["BossIdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossIdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossIdType = string(value["BossIdType"].GetString());
        m_bossIdTypeHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("ShopCount") && !value["ShopCount"].IsNull())
    {
        if (!value["ShopCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.ShopCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopCount = string(value["ShopCount"].GetString());
        m_shopCountHasBeenSet = true;
    }

    if (value.HasMember("AccountBoss") && !value["AccountBoss"].IsNull())
    {
        if (!value["AccountBoss"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.AccountBoss` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountBoss = string(value["AccountBoss"].GetString());
        m_accountBossHasBeenSet = true;
    }

    if (value.HasMember("ClassificationNames") && !value["ClassificationNames"].IsNull())
    {
        if (!value["ClassificationNames"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.ClassificationNames` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classificationNames = string(value["ClassificationNames"].GetString());
        m_classificationNamesHasBeenSet = true;
    }

    if (value.HasMember("BossTelephone") && !value["BossTelephone"].IsNull())
    {
        if (!value["BossTelephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossTelephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossTelephone = string(value["BossTelephone"].GetString());
        m_bossTelephoneHasBeenSet = true;
    }

    if (value.HasMember("AccountManagerName") && !value["AccountManagerName"].IsNull())
    {
        if (!value["AccountManagerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.AccountManagerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountManagerName = string(value["AccountManagerName"].GetString());
        m_accountManagerNameHasBeenSet = true;
    }

    if (value.HasMember("TerminalCount") && !value["TerminalCount"].IsNull())
    {
        if (!value["TerminalCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.TerminalCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_terminalCount = string(value["TerminalCount"].GetString());
        m_terminalCountHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("FinancialContact") && !value["FinancialContact"].IsNull())
    {
        if (!value["FinancialContact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.FinancialContact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_financialContact = string(value["FinancialContact"].GetString());
        m_financialContactHasBeenSet = true;
    }

    if (value.HasMember("MerchantName") && !value["MerchantName"].IsNull())
    {
        if (!value["MerchantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.MerchantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantName = string(value["MerchantName"].GetString());
        m_merchantNameHasBeenSet = true;
    }

    if (value.HasMember("BossSex") && !value["BossSex"].IsNull())
    {
        if (!value["BossSex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossSex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossSex = string(value["BossSex"].GetString());
        m_bossSexHasBeenSet = true;
    }

    if (value.HasMember("MerchantNo") && !value["MerchantNo"].IsNull())
    {
        if (!value["MerchantNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.MerchantNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantNo = string(value["MerchantNo"].GetString());
        m_merchantNoHasBeenSet = true;
    }

    if (value.HasMember("BossAddress") && !value["BossAddress"].IsNull())
    {
        if (!value["BossAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossAddress = string(value["BossAddress"].GetString());
        m_bossAddressHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("BossJob") && !value["BossJob"].IsNull())
    {
        if (!value["BossJob"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossJob` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossJob = string(value["BossJob"].GetString());
        m_bossJobHasBeenSet = true;
    }

    if (value.HasMember("LicencePicture") && !value["LicencePicture"].IsNull())
    {
        if (!value["LicencePicture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.LicencePicture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licencePicture = string(value["LicencePicture"].GetString());
        m_licencePictureHasBeenSet = true;
    }

    if (value.HasMember("OrganizationCodeEndDate") && !value["OrganizationCodeEndDate"].IsNull())
    {
        if (!value["OrganizationCodeEndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.OrganizationCodeEndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationCodeEndDate = string(value["OrganizationCodeEndDate"].GetString());
        m_organizationCodeEndDateHasBeenSet = true;
    }

    if (value.HasMember("OpenHours") && !value["OpenHours"].IsNull())
    {
        if (!value["OpenHours"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.OpenHours` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openHours = string(value["OpenHours"].GetString());
        m_openHoursHasBeenSet = true;
    }

    if (value.HasMember("OtherPictureTwo") && !value["OtherPictureTwo"].IsNull())
    {
        if (!value["OtherPictureTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.OtherPictureTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherPictureTwo = string(value["OtherPictureTwo"].GetString());
        m_otherPictureTwoHasBeenSet = true;
    }

    if (value.HasMember("OtherPictureOne") && !value["OtherPictureOne"].IsNull())
    {
        if (!value["OtherPictureOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.OtherPictureOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherPictureOne = string(value["OtherPictureOne"].GetString());
        m_otherPictureOneHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("ContractCount") && !value["ContractCount"].IsNull())
    {
        if (!value["ContractCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.ContractCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractCount = string(value["ContractCount"].GetString());
        m_contractCountHasBeenSet = true;
    }

    if (value.HasMember("LicencePictureTwo") && !value["LicencePictureTwo"].IsNull())
    {
        if (!value["LicencePictureTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.LicencePictureTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licencePictureTwo = string(value["LicencePictureTwo"].GetString());
        m_licencePictureTwoHasBeenSet = true;
    }

    if (value.HasMember("AccountNo") && !value["AccountNo"].IsNull())
    {
        if (!value["AccountNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.AccountNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountNo = string(value["AccountNo"].GetString());
        m_accountNoHasBeenSet = true;
    }

    if (value.HasMember("BossEmail") && !value["BossEmail"].IsNull())
    {
        if (!value["BossEmail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossEmail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossEmail = string(value["BossEmail"].GetString());
        m_bossEmailHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.AccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = string(value["AccountType"].GetString());
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("TaxCollectionEndDate") && !value["TaxCollectionEndDate"].IsNull())
    {
        if (!value["TaxCollectionEndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.TaxCollectionEndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxCollectionEndDate = string(value["TaxCollectionEndDate"].GetString());
        m_taxCollectionEndDateHasBeenSet = true;
    }

    if (value.HasMember("BankName") && !value["BankName"].IsNull())
    {
        if (!value["BankName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BankName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankName = string(value["BankName"].GetString());
        m_bankNameHasBeenSet = true;
    }

    if (value.HasMember("Telephone") && !value["Telephone"].IsNull())
    {
        if (!value["Telephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.Telephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telephone = string(value["Telephone"].GetString());
        m_telephoneHasBeenSet = true;
    }

    if (value.HasMember("OutMerchantId") && !value["OutMerchantId"].IsNull())
    {
        if (!value["OutMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.OutMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outMerchantId = string(value["OutMerchantId"].GetString());
        m_outMerchantIdHasBeenSet = true;
    }

    if (value.HasMember("CityId") && !value["CityId"].IsNull())
    {
        if (!value["CityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.CityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityId = string(value["CityId"].GetString());
        m_cityIdHasBeenSet = true;
    }

    if (value.HasMember("BossIdCount") && !value["BossIdCount"].IsNull())
    {
        if (!value["BossIdCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossIdCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossIdCount = string(value["BossIdCount"].GetString());
        m_bossIdCountHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("FinancialTelephone") && !value["FinancialTelephone"].IsNull())
    {
        if (!value["FinancialTelephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.FinancialTelephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_financialTelephone = string(value["FinancialTelephone"].GetString());
        m_financialTelephoneHasBeenSet = true;
    }

    if (value.HasMember("BossName") && !value["BossName"].IsNull())
    {
        if (!value["BossName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.BossName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bossName = string(value["BossName"].GetString());
        m_bossNameHasBeenSet = true;
    }

    if (value.HasMember("OrganizationCodeStartDate") && !value["OrganizationCodeStartDate"].IsNull())
    {
        if (!value["OrganizationCodeStartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.OrganizationCodeStartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationCodeStartDate = string(value["OrganizationCodeStartDate"].GetString());
        m_organizationCodeStartDateHasBeenSet = true;
    }

    if (value.HasMember("Logo") && !value["Logo"].IsNull())
    {
        if (!value["Logo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.Logo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logo = string(value["Logo"].GetString());
        m_logoHasBeenSet = true;
    }

    if (value.HasMember("OtherPictureFour") && !value["OtherPictureFour"].IsNull())
    {
        if (!value["OtherPictureFour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.OtherPictureFour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherPictureFour = string(value["OtherPictureFour"].GetString());
        m_otherPictureFourHasBeenSet = true;
    }

    if (value.HasMember("TaxCollectionNo") && !value["TaxCollectionNo"].IsNull())
    {
        if (!value["TaxCollectionNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewMerchantResult.TaxCollectionNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxCollectionNo = string(value["TaxCollectionNo"].GetString());
        m_taxCollectionNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ViewMerchantResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_taxCollectionPictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxCollectionPicture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxCollectionPicture.c_str(), allocator).Move(), allocator);
    }

    if (m_bossIdNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossIdNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossIdNo.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountIdNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountIdNo.c_str(), allocator).Move(), allocator);
    }

    if (m_otherPictureThreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherPictureThree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherPictureThree.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountIdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicensePictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicensePicture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicensePicture.c_str(), allocator).Move(), allocator);
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_bossPositiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossPositive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossPositive.c_str(), allocator).Move(), allocator);
    }

    if (m_appCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appCount.c_str(), allocator).Move(), allocator);
    }

    if (m_bossBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossBack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossBack.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationCodePictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationCodePicture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationCodePicture.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseEndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicenseEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationCodeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationCodeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationCodeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentNo.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_bossStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossStartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bankNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankNo.c_str(), allocator).Move(), allocator);
    }

    if (m_taxCollectionStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxCollectionStartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxCollectionStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseStartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicenseStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_accountManagerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountManagerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountManagerId.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classificationIds.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_bossEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossEndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicenseNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicenseNo.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_introHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intro.c_str(), allocator).Move(), allocator);
    }

    if (m_bossIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossIdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_shopCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopCount.c_str(), allocator).Move(), allocator);
    }

    if (m_accountBossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountBoss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountBoss.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classificationNames.c_str(), allocator).Move(), allocator);
    }

    if (m_bossTelephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossTelephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossTelephone.c_str(), allocator).Move(), allocator);
    }

    if (m_accountManagerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountManagerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountManagerName.c_str(), allocator).Move(), allocator);
    }

    if (m_terminalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_terminalCount.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_financialContactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinancialContact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_financialContact.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_bossSexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossSex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossSex.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantNo.c_str(), allocator).Move(), allocator);
    }

    if (m_bossAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_bossJobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossJob";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossJob.c_str(), allocator).Move(), allocator);
    }

    if (m_licencePictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicencePicture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licencePicture.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationCodeEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationCodeEndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationCodeEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_openHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenHours";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openHours.c_str(), allocator).Move(), allocator);
    }

    if (m_otherPictureTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherPictureTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherPictureTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_otherPictureOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherPictureOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherPictureOne.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_contractCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractCount.c_str(), allocator).Move(), allocator);
    }

    if (m_licencePictureTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicencePictureTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licencePictureTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountNo.c_str(), allocator).Move(), allocator);
    }

    if (m_bossEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_taxCollectionEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxCollectionEndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxCollectionEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_bankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankName.c_str(), allocator).Move(), allocator);
    }

    if (m_telephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Telephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telephone.c_str(), allocator).Move(), allocator);
    }

    if (m_outMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_cityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityId.c_str(), allocator).Move(), allocator);
    }

    if (m_bossIdCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossIdCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossIdCount.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_financialTelephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinancialTelephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_financialTelephone.c_str(), allocator).Move(), allocator);
    }

    if (m_bossNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BossName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bossName.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationCodeStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationCodeStartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationCodeStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
    }

    if (m_otherPictureFourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherPictureFour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherPictureFour.c_str(), allocator).Move(), allocator);
    }

    if (m_taxCollectionNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxCollectionNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxCollectionNo.c_str(), allocator).Move(), allocator);
    }

}


string ViewMerchantResult::GetCity() const
{
    return m_city;
}

void ViewMerchantResult::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool ViewMerchantResult::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string ViewMerchantResult::GetTaxCollectionPicture() const
{
    return m_taxCollectionPicture;
}

void ViewMerchantResult::SetTaxCollectionPicture(const string& _taxCollectionPicture)
{
    m_taxCollectionPicture = _taxCollectionPicture;
    m_taxCollectionPictureHasBeenSet = true;
}

bool ViewMerchantResult::TaxCollectionPictureHasBeenSet() const
{
    return m_taxCollectionPictureHasBeenSet;
}

string ViewMerchantResult::GetBossIdNo() const
{
    return m_bossIdNo;
}

void ViewMerchantResult::SetBossIdNo(const string& _bossIdNo)
{
    m_bossIdNo = _bossIdNo;
    m_bossIdNoHasBeenSet = true;
}

bool ViewMerchantResult::BossIdNoHasBeenSet() const
{
    return m_bossIdNoHasBeenSet;
}

string ViewMerchantResult::GetAccountIdNo() const
{
    return m_accountIdNo;
}

void ViewMerchantResult::SetAccountIdNo(const string& _accountIdNo)
{
    m_accountIdNo = _accountIdNo;
    m_accountIdNoHasBeenSet = true;
}

bool ViewMerchantResult::AccountIdNoHasBeenSet() const
{
    return m_accountIdNoHasBeenSet;
}

string ViewMerchantResult::GetOtherPictureThree() const
{
    return m_otherPictureThree;
}

void ViewMerchantResult::SetOtherPictureThree(const string& _otherPictureThree)
{
    m_otherPictureThree = _otherPictureThree;
    m_otherPictureThreeHasBeenSet = true;
}

bool ViewMerchantResult::OtherPictureThreeHasBeenSet() const
{
    return m_otherPictureThreeHasBeenSet;
}

string ViewMerchantResult::GetAccountIdType() const
{
    return m_accountIdType;
}

void ViewMerchantResult::SetAccountIdType(const string& _accountIdType)
{
    m_accountIdType = _accountIdType;
    m_accountIdTypeHasBeenSet = true;
}

bool ViewMerchantResult::AccountIdTypeHasBeenSet() const
{
    return m_accountIdTypeHasBeenSet;
}

string ViewMerchantResult::GetStatus() const
{
    return m_status;
}

void ViewMerchantResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ViewMerchantResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ViewMerchantResult::GetBusinessLicensePicture() const
{
    return m_businessLicensePicture;
}

void ViewMerchantResult::SetBusinessLicensePicture(const string& _businessLicensePicture)
{
    m_businessLicensePicture = _businessLicensePicture;
    m_businessLicensePictureHasBeenSet = true;
}

bool ViewMerchantResult::BusinessLicensePictureHasBeenSet() const
{
    return m_businessLicensePictureHasBeenSet;
}

string ViewMerchantResult::GetBrandName() const
{
    return m_brandName;
}

void ViewMerchantResult::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool ViewMerchantResult::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

string ViewMerchantResult::GetBossPositive() const
{
    return m_bossPositive;
}

void ViewMerchantResult::SetBossPositive(const string& _bossPositive)
{
    m_bossPositive = _bossPositive;
    m_bossPositiveHasBeenSet = true;
}

bool ViewMerchantResult::BossPositiveHasBeenSet() const
{
    return m_bossPositiveHasBeenSet;
}

string ViewMerchantResult::GetAppCount() const
{
    return m_appCount;
}

void ViewMerchantResult::SetAppCount(const string& _appCount)
{
    m_appCount = _appCount;
    m_appCountHasBeenSet = true;
}

bool ViewMerchantResult::AppCountHasBeenSet() const
{
    return m_appCountHasBeenSet;
}

string ViewMerchantResult::GetBossBack() const
{
    return m_bossBack;
}

void ViewMerchantResult::SetBossBack(const string& _bossBack)
{
    m_bossBack = _bossBack;
    m_bossBackHasBeenSet = true;
}

bool ViewMerchantResult::BossBackHasBeenSet() const
{
    return m_bossBackHasBeenSet;
}

string ViewMerchantResult::GetOrganizationCodePicture() const
{
    return m_organizationCodePicture;
}

void ViewMerchantResult::SetOrganizationCodePicture(const string& _organizationCodePicture)
{
    m_organizationCodePicture = _organizationCodePicture;
    m_organizationCodePictureHasBeenSet = true;
}

bool ViewMerchantResult::OrganizationCodePictureHasBeenSet() const
{
    return m_organizationCodePictureHasBeenSet;
}

string ViewMerchantResult::GetBusinessLicenseEndDate() const
{
    return m_businessLicenseEndDate;
}

void ViewMerchantResult::SetBusinessLicenseEndDate(const string& _businessLicenseEndDate)
{
    m_businessLicenseEndDate = _businessLicenseEndDate;
    m_businessLicenseEndDateHasBeenSet = true;
}

bool ViewMerchantResult::BusinessLicenseEndDateHasBeenSet() const
{
    return m_businessLicenseEndDateHasBeenSet;
}

string ViewMerchantResult::GetOrganizationCodeNo() const
{
    return m_organizationCodeNo;
}

void ViewMerchantResult::SetOrganizationCodeNo(const string& _organizationCodeNo)
{
    m_organizationCodeNo = _organizationCodeNo;
    m_organizationCodeNoHasBeenSet = true;
}

bool ViewMerchantResult::OrganizationCodeNoHasBeenSet() const
{
    return m_organizationCodeNoHasBeenSet;
}

string ViewMerchantResult::GetAgentNo() const
{
    return m_agentNo;
}

void ViewMerchantResult::SetAgentNo(const string& _agentNo)
{
    m_agentNo = _agentNo;
    m_agentNoHasBeenSet = true;
}

bool ViewMerchantResult::AgentNoHasBeenSet() const
{
    return m_agentNoHasBeenSet;
}

string ViewMerchantResult::GetProvince() const
{
    return m_province;
}

void ViewMerchantResult::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool ViewMerchantResult::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string ViewMerchantResult::GetBossStartDate() const
{
    return m_bossStartDate;
}

void ViewMerchantResult::SetBossStartDate(const string& _bossStartDate)
{
    m_bossStartDate = _bossStartDate;
    m_bossStartDateHasBeenSet = true;
}

bool ViewMerchantResult::BossStartDateHasBeenSet() const
{
    return m_bossStartDateHasBeenSet;
}

string ViewMerchantResult::GetUpdateTime() const
{
    return m_updateTime;
}

void ViewMerchantResult::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ViewMerchantResult::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ViewMerchantResult::GetBankNo() const
{
    return m_bankNo;
}

void ViewMerchantResult::SetBankNo(const string& _bankNo)
{
    m_bankNo = _bankNo;
    m_bankNoHasBeenSet = true;
}

bool ViewMerchantResult::BankNoHasBeenSet() const
{
    return m_bankNoHasBeenSet;
}

string ViewMerchantResult::GetTaxCollectionStartDate() const
{
    return m_taxCollectionStartDate;
}

void ViewMerchantResult::SetTaxCollectionStartDate(const string& _taxCollectionStartDate)
{
    m_taxCollectionStartDate = _taxCollectionStartDate;
    m_taxCollectionStartDateHasBeenSet = true;
}

bool ViewMerchantResult::TaxCollectionStartDateHasBeenSet() const
{
    return m_taxCollectionStartDateHasBeenSet;
}

string ViewMerchantResult::GetBusinessLicenseStartDate() const
{
    return m_businessLicenseStartDate;
}

void ViewMerchantResult::SetBusinessLicenseStartDate(const string& _businessLicenseStartDate)
{
    m_businessLicenseStartDate = _businessLicenseStartDate;
    m_businessLicenseStartDateHasBeenSet = true;
}

bool ViewMerchantResult::BusinessLicenseStartDateHasBeenSet() const
{
    return m_businessLicenseStartDateHasBeenSet;
}

string ViewMerchantResult::GetAccountManagerId() const
{
    return m_accountManagerId;
}

void ViewMerchantResult::SetAccountManagerId(const string& _accountManagerId)
{
    m_accountManagerId = _accountManagerId;
    m_accountManagerIdHasBeenSet = true;
}

bool ViewMerchantResult::AccountManagerIdHasBeenSet() const
{
    return m_accountManagerIdHasBeenSet;
}

string ViewMerchantResult::GetClassificationIds() const
{
    return m_classificationIds;
}

void ViewMerchantResult::SetClassificationIds(const string& _classificationIds)
{
    m_classificationIds = _classificationIds;
    m_classificationIdsHasBeenSet = true;
}

bool ViewMerchantResult::ClassificationIdsHasBeenSet() const
{
    return m_classificationIdsHasBeenSet;
}

string ViewMerchantResult::GetBusinessLicenseType() const
{
    return m_businessLicenseType;
}

void ViewMerchantResult::SetBusinessLicenseType(const string& _businessLicenseType)
{
    m_businessLicenseType = _businessLicenseType;
    m_businessLicenseTypeHasBeenSet = true;
}

bool ViewMerchantResult::BusinessLicenseTypeHasBeenSet() const
{
    return m_businessLicenseTypeHasBeenSet;
}

string ViewMerchantResult::GetBossEndDate() const
{
    return m_bossEndDate;
}

void ViewMerchantResult::SetBossEndDate(const string& _bossEndDate)
{
    m_bossEndDate = _bossEndDate;
    m_bossEndDateHasBeenSet = true;
}

bool ViewMerchantResult::BossEndDateHasBeenSet() const
{
    return m_bossEndDateHasBeenSet;
}

string ViewMerchantResult::GetBusinessLicenseNo() const
{
    return m_businessLicenseNo;
}

void ViewMerchantResult::SetBusinessLicenseNo(const string& _businessLicenseNo)
{
    m_businessLicenseNo = _businessLicenseNo;
    m_businessLicenseNoHasBeenSet = true;
}

bool ViewMerchantResult::BusinessLicenseNoHasBeenSet() const
{
    return m_businessLicenseNoHasBeenSet;
}

string ViewMerchantResult::GetAgentName() const
{
    return m_agentName;
}

void ViewMerchantResult::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool ViewMerchantResult::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string ViewMerchantResult::GetIntro() const
{
    return m_intro;
}

void ViewMerchantResult::SetIntro(const string& _intro)
{
    m_intro = _intro;
    m_introHasBeenSet = true;
}

bool ViewMerchantResult::IntroHasBeenSet() const
{
    return m_introHasBeenSet;
}

string ViewMerchantResult::GetBossIdType() const
{
    return m_bossIdType;
}

void ViewMerchantResult::SetBossIdType(const string& _bossIdType)
{
    m_bossIdType = _bossIdType;
    m_bossIdTypeHasBeenSet = true;
}

bool ViewMerchantResult::BossIdTypeHasBeenSet() const
{
    return m_bossIdTypeHasBeenSet;
}

string ViewMerchantResult::GetAddTime() const
{
    return m_addTime;
}

void ViewMerchantResult::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool ViewMerchantResult::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string ViewMerchantResult::GetShopCount() const
{
    return m_shopCount;
}

void ViewMerchantResult::SetShopCount(const string& _shopCount)
{
    m_shopCount = _shopCount;
    m_shopCountHasBeenSet = true;
}

bool ViewMerchantResult::ShopCountHasBeenSet() const
{
    return m_shopCountHasBeenSet;
}

string ViewMerchantResult::GetAccountBoss() const
{
    return m_accountBoss;
}

void ViewMerchantResult::SetAccountBoss(const string& _accountBoss)
{
    m_accountBoss = _accountBoss;
    m_accountBossHasBeenSet = true;
}

bool ViewMerchantResult::AccountBossHasBeenSet() const
{
    return m_accountBossHasBeenSet;
}

string ViewMerchantResult::GetClassificationNames() const
{
    return m_classificationNames;
}

void ViewMerchantResult::SetClassificationNames(const string& _classificationNames)
{
    m_classificationNames = _classificationNames;
    m_classificationNamesHasBeenSet = true;
}

bool ViewMerchantResult::ClassificationNamesHasBeenSet() const
{
    return m_classificationNamesHasBeenSet;
}

string ViewMerchantResult::GetBossTelephone() const
{
    return m_bossTelephone;
}

void ViewMerchantResult::SetBossTelephone(const string& _bossTelephone)
{
    m_bossTelephone = _bossTelephone;
    m_bossTelephoneHasBeenSet = true;
}

bool ViewMerchantResult::BossTelephoneHasBeenSet() const
{
    return m_bossTelephoneHasBeenSet;
}

string ViewMerchantResult::GetAccountManagerName() const
{
    return m_accountManagerName;
}

void ViewMerchantResult::SetAccountManagerName(const string& _accountManagerName)
{
    m_accountManagerName = _accountManagerName;
    m_accountManagerNameHasBeenSet = true;
}

bool ViewMerchantResult::AccountManagerNameHasBeenSet() const
{
    return m_accountManagerNameHasBeenSet;
}

string ViewMerchantResult::GetTerminalCount() const
{
    return m_terminalCount;
}

void ViewMerchantResult::SetTerminalCount(const string& _terminalCount)
{
    m_terminalCount = _terminalCount;
    m_terminalCountHasBeenSet = true;
}

bool ViewMerchantResult::TerminalCountHasBeenSet() const
{
    return m_terminalCountHasBeenSet;
}

string ViewMerchantResult::GetRemark() const
{
    return m_remark;
}

void ViewMerchantResult::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ViewMerchantResult::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ViewMerchantResult::GetFinancialContact() const
{
    return m_financialContact;
}

void ViewMerchantResult::SetFinancialContact(const string& _financialContact)
{
    m_financialContact = _financialContact;
    m_financialContactHasBeenSet = true;
}

bool ViewMerchantResult::FinancialContactHasBeenSet() const
{
    return m_financialContactHasBeenSet;
}

string ViewMerchantResult::GetMerchantName() const
{
    return m_merchantName;
}

void ViewMerchantResult::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool ViewMerchantResult::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

string ViewMerchantResult::GetBossSex() const
{
    return m_bossSex;
}

void ViewMerchantResult::SetBossSex(const string& _bossSex)
{
    m_bossSex = _bossSex;
    m_bossSexHasBeenSet = true;
}

bool ViewMerchantResult::BossSexHasBeenSet() const
{
    return m_bossSexHasBeenSet;
}

string ViewMerchantResult::GetMerchantNo() const
{
    return m_merchantNo;
}

void ViewMerchantResult::SetMerchantNo(const string& _merchantNo)
{
    m_merchantNo = _merchantNo;
    m_merchantNoHasBeenSet = true;
}

bool ViewMerchantResult::MerchantNoHasBeenSet() const
{
    return m_merchantNoHasBeenSet;
}

string ViewMerchantResult::GetBossAddress() const
{
    return m_bossAddress;
}

void ViewMerchantResult::SetBossAddress(const string& _bossAddress)
{
    m_bossAddress = _bossAddress;
    m_bossAddressHasBeenSet = true;
}

bool ViewMerchantResult::BossAddressHasBeenSet() const
{
    return m_bossAddressHasBeenSet;
}

string ViewMerchantResult::GetCountry() const
{
    return m_country;
}

void ViewMerchantResult::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool ViewMerchantResult::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string ViewMerchantResult::GetAddress() const
{
    return m_address;
}

void ViewMerchantResult::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ViewMerchantResult::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string ViewMerchantResult::GetBossJob() const
{
    return m_bossJob;
}

void ViewMerchantResult::SetBossJob(const string& _bossJob)
{
    m_bossJob = _bossJob;
    m_bossJobHasBeenSet = true;
}

bool ViewMerchantResult::BossJobHasBeenSet() const
{
    return m_bossJobHasBeenSet;
}

string ViewMerchantResult::GetLicencePicture() const
{
    return m_licencePicture;
}

void ViewMerchantResult::SetLicencePicture(const string& _licencePicture)
{
    m_licencePicture = _licencePicture;
    m_licencePictureHasBeenSet = true;
}

bool ViewMerchantResult::LicencePictureHasBeenSet() const
{
    return m_licencePictureHasBeenSet;
}

string ViewMerchantResult::GetOrganizationCodeEndDate() const
{
    return m_organizationCodeEndDate;
}

void ViewMerchantResult::SetOrganizationCodeEndDate(const string& _organizationCodeEndDate)
{
    m_organizationCodeEndDate = _organizationCodeEndDate;
    m_organizationCodeEndDateHasBeenSet = true;
}

bool ViewMerchantResult::OrganizationCodeEndDateHasBeenSet() const
{
    return m_organizationCodeEndDateHasBeenSet;
}

string ViewMerchantResult::GetOpenHours() const
{
    return m_openHours;
}

void ViewMerchantResult::SetOpenHours(const string& _openHours)
{
    m_openHours = _openHours;
    m_openHoursHasBeenSet = true;
}

bool ViewMerchantResult::OpenHoursHasBeenSet() const
{
    return m_openHoursHasBeenSet;
}

string ViewMerchantResult::GetOtherPictureTwo() const
{
    return m_otherPictureTwo;
}

void ViewMerchantResult::SetOtherPictureTwo(const string& _otherPictureTwo)
{
    m_otherPictureTwo = _otherPictureTwo;
    m_otherPictureTwoHasBeenSet = true;
}

bool ViewMerchantResult::OtherPictureTwoHasBeenSet() const
{
    return m_otherPictureTwoHasBeenSet;
}

string ViewMerchantResult::GetOtherPictureOne() const
{
    return m_otherPictureOne;
}

void ViewMerchantResult::SetOtherPictureOne(const string& _otherPictureOne)
{
    m_otherPictureOne = _otherPictureOne;
    m_otherPictureOneHasBeenSet = true;
}

bool ViewMerchantResult::OtherPictureOneHasBeenSet() const
{
    return m_otherPictureOneHasBeenSet;
}

string ViewMerchantResult::GetAccountName() const
{
    return m_accountName;
}

void ViewMerchantResult::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool ViewMerchantResult::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string ViewMerchantResult::GetContractCount() const
{
    return m_contractCount;
}

void ViewMerchantResult::SetContractCount(const string& _contractCount)
{
    m_contractCount = _contractCount;
    m_contractCountHasBeenSet = true;
}

bool ViewMerchantResult::ContractCountHasBeenSet() const
{
    return m_contractCountHasBeenSet;
}

string ViewMerchantResult::GetLicencePictureTwo() const
{
    return m_licencePictureTwo;
}

void ViewMerchantResult::SetLicencePictureTwo(const string& _licencePictureTwo)
{
    m_licencePictureTwo = _licencePictureTwo;
    m_licencePictureTwoHasBeenSet = true;
}

bool ViewMerchantResult::LicencePictureTwoHasBeenSet() const
{
    return m_licencePictureTwoHasBeenSet;
}

string ViewMerchantResult::GetAccountNo() const
{
    return m_accountNo;
}

void ViewMerchantResult::SetAccountNo(const string& _accountNo)
{
    m_accountNo = _accountNo;
    m_accountNoHasBeenSet = true;
}

bool ViewMerchantResult::AccountNoHasBeenSet() const
{
    return m_accountNoHasBeenSet;
}

string ViewMerchantResult::GetBossEmail() const
{
    return m_bossEmail;
}

void ViewMerchantResult::SetBossEmail(const string& _bossEmail)
{
    m_bossEmail = _bossEmail;
    m_bossEmailHasBeenSet = true;
}

bool ViewMerchantResult::BossEmailHasBeenSet() const
{
    return m_bossEmailHasBeenSet;
}

string ViewMerchantResult::GetAccountType() const
{
    return m_accountType;
}

void ViewMerchantResult::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool ViewMerchantResult::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string ViewMerchantResult::GetTaxCollectionEndDate() const
{
    return m_taxCollectionEndDate;
}

void ViewMerchantResult::SetTaxCollectionEndDate(const string& _taxCollectionEndDate)
{
    m_taxCollectionEndDate = _taxCollectionEndDate;
    m_taxCollectionEndDateHasBeenSet = true;
}

bool ViewMerchantResult::TaxCollectionEndDateHasBeenSet() const
{
    return m_taxCollectionEndDateHasBeenSet;
}

string ViewMerchantResult::GetBankName() const
{
    return m_bankName;
}

void ViewMerchantResult::SetBankName(const string& _bankName)
{
    m_bankName = _bankName;
    m_bankNameHasBeenSet = true;
}

bool ViewMerchantResult::BankNameHasBeenSet() const
{
    return m_bankNameHasBeenSet;
}

string ViewMerchantResult::GetTelephone() const
{
    return m_telephone;
}

void ViewMerchantResult::SetTelephone(const string& _telephone)
{
    m_telephone = _telephone;
    m_telephoneHasBeenSet = true;
}

bool ViewMerchantResult::TelephoneHasBeenSet() const
{
    return m_telephoneHasBeenSet;
}

string ViewMerchantResult::GetOutMerchantId() const
{
    return m_outMerchantId;
}

void ViewMerchantResult::SetOutMerchantId(const string& _outMerchantId)
{
    m_outMerchantId = _outMerchantId;
    m_outMerchantIdHasBeenSet = true;
}

bool ViewMerchantResult::OutMerchantIdHasBeenSet() const
{
    return m_outMerchantIdHasBeenSet;
}

string ViewMerchantResult::GetCityId() const
{
    return m_cityId;
}

void ViewMerchantResult::SetCityId(const string& _cityId)
{
    m_cityId = _cityId;
    m_cityIdHasBeenSet = true;
}

bool ViewMerchantResult::CityIdHasBeenSet() const
{
    return m_cityIdHasBeenSet;
}

string ViewMerchantResult::GetBossIdCount() const
{
    return m_bossIdCount;
}

void ViewMerchantResult::SetBossIdCount(const string& _bossIdCount)
{
    m_bossIdCount = _bossIdCount;
    m_bossIdCountHasBeenSet = true;
}

bool ViewMerchantResult::BossIdCountHasBeenSet() const
{
    return m_bossIdCountHasBeenSet;
}

string ViewMerchantResult::GetTag() const
{
    return m_tag;
}

void ViewMerchantResult::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool ViewMerchantResult::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string ViewMerchantResult::GetFinancialTelephone() const
{
    return m_financialTelephone;
}

void ViewMerchantResult::SetFinancialTelephone(const string& _financialTelephone)
{
    m_financialTelephone = _financialTelephone;
    m_financialTelephoneHasBeenSet = true;
}

bool ViewMerchantResult::FinancialTelephoneHasBeenSet() const
{
    return m_financialTelephoneHasBeenSet;
}

string ViewMerchantResult::GetBossName() const
{
    return m_bossName;
}

void ViewMerchantResult::SetBossName(const string& _bossName)
{
    m_bossName = _bossName;
    m_bossNameHasBeenSet = true;
}

bool ViewMerchantResult::BossNameHasBeenSet() const
{
    return m_bossNameHasBeenSet;
}

string ViewMerchantResult::GetOrganizationCodeStartDate() const
{
    return m_organizationCodeStartDate;
}

void ViewMerchantResult::SetOrganizationCodeStartDate(const string& _organizationCodeStartDate)
{
    m_organizationCodeStartDate = _organizationCodeStartDate;
    m_organizationCodeStartDateHasBeenSet = true;
}

bool ViewMerchantResult::OrganizationCodeStartDateHasBeenSet() const
{
    return m_organizationCodeStartDateHasBeenSet;
}

string ViewMerchantResult::GetLogo() const
{
    return m_logo;
}

void ViewMerchantResult::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool ViewMerchantResult::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string ViewMerchantResult::GetOtherPictureFour() const
{
    return m_otherPictureFour;
}

void ViewMerchantResult::SetOtherPictureFour(const string& _otherPictureFour)
{
    m_otherPictureFour = _otherPictureFour;
    m_otherPictureFourHasBeenSet = true;
}

bool ViewMerchantResult::OtherPictureFourHasBeenSet() const
{
    return m_otherPictureFourHasBeenSet;
}

string ViewMerchantResult::GetTaxCollectionNo() const
{
    return m_taxCollectionNo;
}

void ViewMerchantResult::SetTaxCollectionNo(const string& _taxCollectionNo)
{
    m_taxCollectionNo = _taxCollectionNo;
    m_taxCollectionNoHasBeenSet = true;
}

bool ViewMerchantResult::TaxCollectionNoHasBeenSet() const
{
    return m_taxCollectionNoHasBeenSet;
}

