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

#include <tencentcloud/ocr/v20181119/model/QueryEnterpriseBasicInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

QueryEnterpriseBasicInfoResponse::QueryEnterpriseBasicInfoResponse() :
    m_statusCodeHasBeenSet(false),
    m_creditCodeHasBeenSet(false),
    m_entNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_lrNameHasBeenSet(false),
    m_capitalHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_registrationAuthorityHasBeenSet(false),
    m_operatingStatusHasBeenSet(false),
    m_rawOperatingStatusHasBeenSet(false),
    m_setDateHasBeenSet(false),
    m_operatingPeriodHasBeenSet(false),
    m_approvalDateHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_provinceCodeHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_cityCodeHasBeenSet(false),
    m_districtHasBeenSet(false),
    m_districtCodeHasBeenSet(false),
    m_capitalCurrencyHasBeenSet(false),
    m_organizationCodeHasBeenSet(false),
    m_englishNameHasBeenSet(false),
    m_formerNamesHasBeenSet(false),
    m_originalRegNumHasBeenSet(false),
    m_paidInCapitalHasBeenSet(false),
    m_revokeDateHasBeenSet(false),
    m_revokeReasonHasBeenSet(false),
    m_cancellationDateHasBeenSet(false),
    m_cancellationReasonHasBeenSet(false)
{
}

CoreInternalOutcome QueryEnterpriseBasicInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("StatusCode") && !rsp["StatusCode"].IsNull())
    {
        if (!rsp["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = rsp["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (rsp.HasMember("CreditCode") && !rsp["CreditCode"].IsNull())
    {
        if (!rsp["CreditCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreditCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creditCode = string(rsp["CreditCode"].GetString());
        m_creditCodeHasBeenSet = true;
    }

    if (rsp.HasMember("EntName") && !rsp["EntName"].IsNull())
    {
        if (!rsp["EntName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entName = string(rsp["EntName"].GetString());
        m_entNameHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("LrName") && !rsp["LrName"].IsNull())
    {
        if (!rsp["LrName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LrName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lrName = string(rsp["LrName"].GetString());
        m_lrNameHasBeenSet = true;
    }

    if (rsp.HasMember("Capital") && !rsp["Capital"].IsNull())
    {
        if (!rsp["Capital"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Capital` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capital = string(rsp["Capital"].GetString());
        m_capitalHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("Business") && !rsp["Business"].IsNull())
    {
        if (!rsp["Business"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(rsp["Business"].GetString());
        m_businessHasBeenSet = true;
    }

    if (rsp.HasMember("RegistrationAuthority") && !rsp["RegistrationAuthority"].IsNull())
    {
        if (!rsp["RegistrationAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationAuthority = string(rsp["RegistrationAuthority"].GetString());
        m_registrationAuthorityHasBeenSet = true;
    }

    if (rsp.HasMember("OperatingStatus") && !rsp["OperatingStatus"].IsNull())
    {
        if (!rsp["OperatingStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperatingStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatingStatus = string(rsp["OperatingStatus"].GetString());
        m_operatingStatusHasBeenSet = true;
    }

    if (rsp.HasMember("RawOperatingStatus") && !rsp["RawOperatingStatus"].IsNull())
    {
        if (!rsp["RawOperatingStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawOperatingStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rawOperatingStatus = string(rsp["RawOperatingStatus"].GetString());
        m_rawOperatingStatusHasBeenSet = true;
    }

    if (rsp.HasMember("SetDate") && !rsp["SetDate"].IsNull())
    {
        if (!rsp["SetDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setDate = string(rsp["SetDate"].GetString());
        m_setDateHasBeenSet = true;
    }

    if (rsp.HasMember("OperatingPeriod") && !rsp["OperatingPeriod"].IsNull())
    {
        if (!rsp["OperatingPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperatingPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatingPeriod = string(rsp["OperatingPeriod"].GetString());
        m_operatingPeriodHasBeenSet = true;
    }

    if (rsp.HasMember("ApprovalDate") && !rsp["ApprovalDate"].IsNull())
    {
        if (!rsp["ApprovalDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApprovalDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalDate = string(rsp["ApprovalDate"].GetString());
        m_approvalDateHasBeenSet = true;
    }

    if (rsp.HasMember("Province") && !rsp["Province"].IsNull())
    {
        if (!rsp["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(rsp["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (rsp.HasMember("ProvinceCode") && !rsp["ProvinceCode"].IsNull())
    {
        if (!rsp["ProvinceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProvinceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinceCode = string(rsp["ProvinceCode"].GetString());
        m_provinceCodeHasBeenSet = true;
    }

    if (rsp.HasMember("City") && !rsp["City"].IsNull())
    {
        if (!rsp["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(rsp["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (rsp.HasMember("CityCode") && !rsp["CityCode"].IsNull())
    {
        if (!rsp["CityCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CityCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityCode = string(rsp["CityCode"].GetString());
        m_cityCodeHasBeenSet = true;
    }

    if (rsp.HasMember("District") && !rsp["District"].IsNull())
    {
        if (!rsp["District"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `District` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_district = string(rsp["District"].GetString());
        m_districtHasBeenSet = true;
    }

    if (rsp.HasMember("DistrictCode") && !rsp["DistrictCode"].IsNull())
    {
        if (!rsp["DistrictCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_districtCode = string(rsp["DistrictCode"].GetString());
        m_districtCodeHasBeenSet = true;
    }

    if (rsp.HasMember("CapitalCurrency") && !rsp["CapitalCurrency"].IsNull())
    {
        if (!rsp["CapitalCurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CapitalCurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capitalCurrency = string(rsp["CapitalCurrency"].GetString());
        m_capitalCurrencyHasBeenSet = true;
    }

    if (rsp.HasMember("OrganizationCode") && !rsp["OrganizationCode"].IsNull())
    {
        if (!rsp["OrganizationCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationCode = string(rsp["OrganizationCode"].GetString());
        m_organizationCodeHasBeenSet = true;
    }

    if (rsp.HasMember("EnglishName") && !rsp["EnglishName"].IsNull())
    {
        if (!rsp["EnglishName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnglishName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_englishName = string(rsp["EnglishName"].GetString());
        m_englishNameHasBeenSet = true;
    }

    if (rsp.HasMember("FormerNames") && !rsp["FormerNames"].IsNull())
    {
        if (!rsp["FormerNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FormerNames` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FormerNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_formerNames.push_back((*itr).GetString());
        }
        m_formerNamesHasBeenSet = true;
    }

    if (rsp.HasMember("OriginalRegNum") && !rsp["OriginalRegNum"].IsNull())
    {
        if (!rsp["OriginalRegNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginalRegNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalRegNum = string(rsp["OriginalRegNum"].GetString());
        m_originalRegNumHasBeenSet = true;
    }

    if (rsp.HasMember("PaidInCapital") && !rsp["PaidInCapital"].IsNull())
    {
        if (!rsp["PaidInCapital"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaidInCapital` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paidInCapital = string(rsp["PaidInCapital"].GetString());
        m_paidInCapitalHasBeenSet = true;
    }

    if (rsp.HasMember("RevokeDate") && !rsp["RevokeDate"].IsNull())
    {
        if (!rsp["RevokeDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RevokeDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_revokeDate = string(rsp["RevokeDate"].GetString());
        m_revokeDateHasBeenSet = true;
    }

    if (rsp.HasMember("RevokeReason") && !rsp["RevokeReason"].IsNull())
    {
        if (!rsp["RevokeReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RevokeReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_revokeReason = string(rsp["RevokeReason"].GetString());
        m_revokeReasonHasBeenSet = true;
    }

    if (rsp.HasMember("CancellationDate") && !rsp["CancellationDate"].IsNull())
    {
        if (!rsp["CancellationDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CancellationDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cancellationDate = string(rsp["CancellationDate"].GetString());
        m_cancellationDateHasBeenSet = true;
    }

    if (rsp.HasMember("CancellationReason") && !rsp["CancellationReason"].IsNull())
    {
        if (!rsp["CancellationReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CancellationReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cancellationReason = string(rsp["CancellationReason"].GetString());
        m_cancellationReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryEnterpriseBasicInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_creditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_entNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_lrNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LrName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lrName.c_str(), allocator).Move(), allocator);
    }

    if (m_capitalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capital";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capital.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_registrationAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_operatingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatingStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_rawOperatingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawOperatingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rawOperatingStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_setDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setDate.c_str(), allocator).Move(), allocator);
    }

    if (m_operatingPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatingPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatingPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalDate.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provinceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_cityCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityCode.c_str(), allocator).Move(), allocator);
    }

    if (m_districtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "District";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_district.c_str(), allocator).Move(), allocator);
    }

    if (m_districtCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistrictCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_districtCode.c_str(), allocator).Move(), allocator);
    }

    if (m_capitalCurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapitalCurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capitalCurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_englishNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnglishName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_englishName.c_str(), allocator).Move(), allocator);
    }

    if (m_formerNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormerNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_formerNames.begin(); itr != m_formerNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originalRegNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalRegNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalRegNum.c_str(), allocator).Move(), allocator);
    }

    if (m_paidInCapitalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidInCapital";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paidInCapital.c_str(), allocator).Move(), allocator);
    }

    if (m_revokeDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RevokeDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_revokeDate.c_str(), allocator).Move(), allocator);
    }

    if (m_revokeReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RevokeReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_revokeReason.c_str(), allocator).Move(), allocator);
    }

    if (m_cancellationDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancellationDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cancellationDate.c_str(), allocator).Move(), allocator);
    }

    if (m_cancellationReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancellationReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cancellationReason.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t QueryEnterpriseBasicInfoResponse::GetStatusCode() const
{
    return m_statusCode;
}

bool QueryEnterpriseBasicInfoResponse::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetCreditCode() const
{
    return m_creditCode;
}

bool QueryEnterpriseBasicInfoResponse::CreditCodeHasBeenSet() const
{
    return m_creditCodeHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetEntName() const
{
    return m_entName;
}

bool QueryEnterpriseBasicInfoResponse::EntNameHasBeenSet() const
{
    return m_entNameHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetType() const
{
    return m_type;
}

bool QueryEnterpriseBasicInfoResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetLrName() const
{
    return m_lrName;
}

bool QueryEnterpriseBasicInfoResponse::LrNameHasBeenSet() const
{
    return m_lrNameHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetCapital() const
{
    return m_capital;
}

bool QueryEnterpriseBasicInfoResponse::CapitalHasBeenSet() const
{
    return m_capitalHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetAddress() const
{
    return m_address;
}

bool QueryEnterpriseBasicInfoResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetBusiness() const
{
    return m_business;
}

bool QueryEnterpriseBasicInfoResponse::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetRegistrationAuthority() const
{
    return m_registrationAuthority;
}

bool QueryEnterpriseBasicInfoResponse::RegistrationAuthorityHasBeenSet() const
{
    return m_registrationAuthorityHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetOperatingStatus() const
{
    return m_operatingStatus;
}

bool QueryEnterpriseBasicInfoResponse::OperatingStatusHasBeenSet() const
{
    return m_operatingStatusHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetRawOperatingStatus() const
{
    return m_rawOperatingStatus;
}

bool QueryEnterpriseBasicInfoResponse::RawOperatingStatusHasBeenSet() const
{
    return m_rawOperatingStatusHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetSetDate() const
{
    return m_setDate;
}

bool QueryEnterpriseBasicInfoResponse::SetDateHasBeenSet() const
{
    return m_setDateHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetOperatingPeriod() const
{
    return m_operatingPeriod;
}

bool QueryEnterpriseBasicInfoResponse::OperatingPeriodHasBeenSet() const
{
    return m_operatingPeriodHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetApprovalDate() const
{
    return m_approvalDate;
}

bool QueryEnterpriseBasicInfoResponse::ApprovalDateHasBeenSet() const
{
    return m_approvalDateHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetProvince() const
{
    return m_province;
}

bool QueryEnterpriseBasicInfoResponse::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetProvinceCode() const
{
    return m_provinceCode;
}

bool QueryEnterpriseBasicInfoResponse::ProvinceCodeHasBeenSet() const
{
    return m_provinceCodeHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetCity() const
{
    return m_city;
}

bool QueryEnterpriseBasicInfoResponse::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetCityCode() const
{
    return m_cityCode;
}

bool QueryEnterpriseBasicInfoResponse::CityCodeHasBeenSet() const
{
    return m_cityCodeHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetDistrict() const
{
    return m_district;
}

bool QueryEnterpriseBasicInfoResponse::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetDistrictCode() const
{
    return m_districtCode;
}

bool QueryEnterpriseBasicInfoResponse::DistrictCodeHasBeenSet() const
{
    return m_districtCodeHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetCapitalCurrency() const
{
    return m_capitalCurrency;
}

bool QueryEnterpriseBasicInfoResponse::CapitalCurrencyHasBeenSet() const
{
    return m_capitalCurrencyHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetOrganizationCode() const
{
    return m_organizationCode;
}

bool QueryEnterpriseBasicInfoResponse::OrganizationCodeHasBeenSet() const
{
    return m_organizationCodeHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetEnglishName() const
{
    return m_englishName;
}

bool QueryEnterpriseBasicInfoResponse::EnglishNameHasBeenSet() const
{
    return m_englishNameHasBeenSet;
}

vector<string> QueryEnterpriseBasicInfoResponse::GetFormerNames() const
{
    return m_formerNames;
}

bool QueryEnterpriseBasicInfoResponse::FormerNamesHasBeenSet() const
{
    return m_formerNamesHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetOriginalRegNum() const
{
    return m_originalRegNum;
}

bool QueryEnterpriseBasicInfoResponse::OriginalRegNumHasBeenSet() const
{
    return m_originalRegNumHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetPaidInCapital() const
{
    return m_paidInCapital;
}

bool QueryEnterpriseBasicInfoResponse::PaidInCapitalHasBeenSet() const
{
    return m_paidInCapitalHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetRevokeDate() const
{
    return m_revokeDate;
}

bool QueryEnterpriseBasicInfoResponse::RevokeDateHasBeenSet() const
{
    return m_revokeDateHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetRevokeReason() const
{
    return m_revokeReason;
}

bool QueryEnterpriseBasicInfoResponse::RevokeReasonHasBeenSet() const
{
    return m_revokeReasonHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetCancellationDate() const
{
    return m_cancellationDate;
}

bool QueryEnterpriseBasicInfoResponse::CancellationDateHasBeenSet() const
{
    return m_cancellationDateHasBeenSet;
}

string QueryEnterpriseBasicInfoResponse::GetCancellationReason() const
{
    return m_cancellationReason;
}

bool QueryEnterpriseBasicInfoResponse::CancellationReasonHasBeenSet() const
{
    return m_cancellationReasonHasBeenSet;
}


