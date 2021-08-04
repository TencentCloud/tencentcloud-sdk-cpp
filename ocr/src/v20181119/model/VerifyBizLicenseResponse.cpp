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

#include <tencentcloud/ocr/v20181119/model/VerifyBizLicenseResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VerifyBizLicenseResponse::VerifyBizLicenseResponse() :
    m_errorCodeHasBeenSet(false),
    m_creditCodeHasBeenSet(false),
    m_orgCodeHasBeenSet(false),
    m_openFromHasBeenSet(false),
    m_openToHasBeenSet(false),
    m_frNameHasBeenSet(false),
    m_enterpriseStatusHasBeenSet(false),
    m_operateScopeAndFormHasBeenSet(false),
    m_regCapHasBeenSet(false),
    m_regCapCurHasBeenSet(false),
    m_regOrgHasBeenSet(false),
    m_esDateHasBeenSet(false),
    m_enterpriseTypeHasBeenSet(false),
    m_cancelDateHasBeenSet(false),
    m_revokeDateHasBeenSet(false),
    m_abuItemHasBeenSet(false),
    m_cbuItemHasBeenSet(false),
    m_apprDateHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countyHasBeenSet(false),
    m_areaCodeHasBeenSet(false),
    m_industryPhyCodeHasBeenSet(false),
    m_industryPhyNameHasBeenSet(false),
    m_industryCodeHasBeenSet(false),
    m_industryNameHasBeenSet(false),
    m_operateScopeHasBeenSet(false),
    m_verifyRegNoHasBeenSet(false),
    m_regNoHasBeenSet(false),
    m_verifyEnterpriseNameHasBeenSet(false),
    m_enterpriseNameHasBeenSet(false),
    m_verifyAddressHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_regNumResultHasBeenSet(false)
{
}

CoreInternalOutcome VerifyBizLicenseResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = rsp["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("CreditCode") && !rsp["CreditCode"].IsNull())
    {
        if (!rsp["CreditCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreditCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creditCode = string(rsp["CreditCode"].GetString());
        m_creditCodeHasBeenSet = true;
    }

    if (rsp.HasMember("OrgCode") && !rsp["OrgCode"].IsNull())
    {
        if (!rsp["OrgCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrgCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgCode = string(rsp["OrgCode"].GetString());
        m_orgCodeHasBeenSet = true;
    }

    if (rsp.HasMember("OpenFrom") && !rsp["OpenFrom"].IsNull())
    {
        if (!rsp["OpenFrom"].IsString())
        {
            return CoreInternalOutcome(Error("response `OpenFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openFrom = string(rsp["OpenFrom"].GetString());
        m_openFromHasBeenSet = true;
    }

    if (rsp.HasMember("OpenTo") && !rsp["OpenTo"].IsNull())
    {
        if (!rsp["OpenTo"].IsString())
        {
            return CoreInternalOutcome(Error("response `OpenTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openTo = string(rsp["OpenTo"].GetString());
        m_openToHasBeenSet = true;
    }

    if (rsp.HasMember("FrName") && !rsp["FrName"].IsNull())
    {
        if (!rsp["FrName"].IsString())
        {
            return CoreInternalOutcome(Error("response `FrName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frName = string(rsp["FrName"].GetString());
        m_frNameHasBeenSet = true;
    }

    if (rsp.HasMember("EnterpriseStatus") && !rsp["EnterpriseStatus"].IsNull())
    {
        if (!rsp["EnterpriseStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnterpriseStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseStatus = string(rsp["EnterpriseStatus"].GetString());
        m_enterpriseStatusHasBeenSet = true;
    }

    if (rsp.HasMember("OperateScopeAndForm") && !rsp["OperateScopeAndForm"].IsNull())
    {
        if (!rsp["OperateScopeAndForm"].IsString())
        {
            return CoreInternalOutcome(Error("response `OperateScopeAndForm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateScopeAndForm = string(rsp["OperateScopeAndForm"].GetString());
        m_operateScopeAndFormHasBeenSet = true;
    }

    if (rsp.HasMember("RegCap") && !rsp["RegCap"].IsNull())
    {
        if (!rsp["RegCap"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegCap` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regCap = string(rsp["RegCap"].GetString());
        m_regCapHasBeenSet = true;
    }

    if (rsp.HasMember("RegCapCur") && !rsp["RegCapCur"].IsNull())
    {
        if (!rsp["RegCapCur"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegCapCur` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regCapCur = string(rsp["RegCapCur"].GetString());
        m_regCapCurHasBeenSet = true;
    }

    if (rsp.HasMember("RegOrg") && !rsp["RegOrg"].IsNull())
    {
        if (!rsp["RegOrg"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegOrg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regOrg = string(rsp["RegOrg"].GetString());
        m_regOrgHasBeenSet = true;
    }

    if (rsp.HasMember("EsDate") && !rsp["EsDate"].IsNull())
    {
        if (!rsp["EsDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `EsDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_esDate = string(rsp["EsDate"].GetString());
        m_esDateHasBeenSet = true;
    }

    if (rsp.HasMember("EnterpriseType") && !rsp["EnterpriseType"].IsNull())
    {
        if (!rsp["EnterpriseType"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnterpriseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseType = string(rsp["EnterpriseType"].GetString());
        m_enterpriseTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CancelDate") && !rsp["CancelDate"].IsNull())
    {
        if (!rsp["CancelDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `CancelDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cancelDate = string(rsp["CancelDate"].GetString());
        m_cancelDateHasBeenSet = true;
    }

    if (rsp.HasMember("RevokeDate") && !rsp["RevokeDate"].IsNull())
    {
        if (!rsp["RevokeDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `RevokeDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_revokeDate = string(rsp["RevokeDate"].GetString());
        m_revokeDateHasBeenSet = true;
    }

    if (rsp.HasMember("AbuItem") && !rsp["AbuItem"].IsNull())
    {
        if (!rsp["AbuItem"].IsString())
        {
            return CoreInternalOutcome(Error("response `AbuItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_abuItem = string(rsp["AbuItem"].GetString());
        m_abuItemHasBeenSet = true;
    }

    if (rsp.HasMember("CbuItem") && !rsp["CbuItem"].IsNull())
    {
        if (!rsp["CbuItem"].IsString())
        {
            return CoreInternalOutcome(Error("response `CbuItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cbuItem = string(rsp["CbuItem"].GetString());
        m_cbuItemHasBeenSet = true;
    }

    if (rsp.HasMember("ApprDate") && !rsp["ApprDate"].IsNull())
    {
        if (!rsp["ApprDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `ApprDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apprDate = string(rsp["ApprDate"].GetString());
        m_apprDateHasBeenSet = true;
    }

    if (rsp.HasMember("Province") && !rsp["Province"].IsNull())
    {
        if (!rsp["Province"].IsString())
        {
            return CoreInternalOutcome(Error("response `Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(rsp["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (rsp.HasMember("City") && !rsp["City"].IsNull())
    {
        if (!rsp["City"].IsString())
        {
            return CoreInternalOutcome(Error("response `City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(rsp["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (rsp.HasMember("County") && !rsp["County"].IsNull())
    {
        if (!rsp["County"].IsString())
        {
            return CoreInternalOutcome(Error("response `County` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_county = string(rsp["County"].GetString());
        m_countyHasBeenSet = true;
    }

    if (rsp.HasMember("AreaCode") && !rsp["AreaCode"].IsNull())
    {
        if (!rsp["AreaCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `AreaCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaCode = string(rsp["AreaCode"].GetString());
        m_areaCodeHasBeenSet = true;
    }

    if (rsp.HasMember("IndustryPhyCode") && !rsp["IndustryPhyCode"].IsNull())
    {
        if (!rsp["IndustryPhyCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndustryPhyCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_industryPhyCode = string(rsp["IndustryPhyCode"].GetString());
        m_industryPhyCodeHasBeenSet = true;
    }

    if (rsp.HasMember("IndustryPhyName") && !rsp["IndustryPhyName"].IsNull())
    {
        if (!rsp["IndustryPhyName"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndustryPhyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_industryPhyName = string(rsp["IndustryPhyName"].GetString());
        m_industryPhyNameHasBeenSet = true;
    }

    if (rsp.HasMember("IndustryCode") && !rsp["IndustryCode"].IsNull())
    {
        if (!rsp["IndustryCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndustryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_industryCode = string(rsp["IndustryCode"].GetString());
        m_industryCodeHasBeenSet = true;
    }

    if (rsp.HasMember("IndustryName") && !rsp["IndustryName"].IsNull())
    {
        if (!rsp["IndustryName"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndustryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_industryName = string(rsp["IndustryName"].GetString());
        m_industryNameHasBeenSet = true;
    }

    if (rsp.HasMember("OperateScope") && !rsp["OperateScope"].IsNull())
    {
        if (!rsp["OperateScope"].IsString())
        {
            return CoreInternalOutcome(Error("response `OperateScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateScope = string(rsp["OperateScope"].GetString());
        m_operateScopeHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyRegNo") && !rsp["VerifyRegNo"].IsNull())
    {
        if (!rsp["VerifyRegNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `VerifyRegNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyRegNo = string(rsp["VerifyRegNo"].GetString());
        m_verifyRegNoHasBeenSet = true;
    }

    if (rsp.HasMember("RegNo") && !rsp["RegNo"].IsNull())
    {
        if (!rsp["RegNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regNo = string(rsp["RegNo"].GetString());
        m_regNoHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyEnterpriseName") && !rsp["VerifyEnterpriseName"].IsNull())
    {
        if (!rsp["VerifyEnterpriseName"].IsString())
        {
            return CoreInternalOutcome(Error("response `VerifyEnterpriseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyEnterpriseName = string(rsp["VerifyEnterpriseName"].GetString());
        m_verifyEnterpriseNameHasBeenSet = true;
    }

    if (rsp.HasMember("EnterpriseName") && !rsp["EnterpriseName"].IsNull())
    {
        if (!rsp["EnterpriseName"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnterpriseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseName = string(rsp["EnterpriseName"].GetString());
        m_enterpriseNameHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyAddress") && !rsp["VerifyAddress"].IsNull())
    {
        if (!rsp["VerifyAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `VerifyAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyAddress = string(rsp["VerifyAddress"].GetString());
        m_verifyAddressHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("RegNumResult") && !rsp["RegNumResult"].IsNull())
    {
        if (!rsp["RegNumResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RegNumResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regNumResult.Deserialize(rsp["RegNumResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regNumResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string VerifyBizLicenseResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_creditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_orgCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgCode.c_str(), allocator).Move(), allocator);
    }

    if (m_openFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_openToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openTo.c_str(), allocator).Move(), allocator);
    }

    if (m_frNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frName.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterpriseStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_operateScopeAndFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateScopeAndForm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateScopeAndForm.c_str(), allocator).Move(), allocator);
    }

    if (m_regCapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegCap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regCap.c_str(), allocator).Move(), allocator);
    }

    if (m_regCapCurHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegCapCur";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regCapCur.c_str(), allocator).Move(), allocator);
    }

    if (m_regOrgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegOrg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regOrg.c_str(), allocator).Move(), allocator);
    }

    if (m_esDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_esDate.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterpriseType.c_str(), allocator).Move(), allocator);
    }

    if (m_cancelDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cancelDate.c_str(), allocator).Move(), allocator);
    }

    if (m_revokeDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RevokeDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_revokeDate.c_str(), allocator).Move(), allocator);
    }

    if (m_abuItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbuItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_abuItem.c_str(), allocator).Move(), allocator);
    }

    if (m_cbuItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CbuItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cbuItem.c_str(), allocator).Move(), allocator);
    }

    if (m_apprDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apprDate.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_countyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "County";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_county.c_str(), allocator).Move(), allocator);
    }

    if (m_areaCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaCode.c_str(), allocator).Move(), allocator);
    }

    if (m_industryPhyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndustryPhyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_industryPhyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_industryPhyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndustryPhyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_industryPhyName.c_str(), allocator).Move(), allocator);
    }

    if (m_industryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndustryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_industryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_industryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndustryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_industryName.c_str(), allocator).Move(), allocator);
    }

    if (m_operateScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateScope.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyRegNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyRegNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyRegNo.c_str(), allocator).Move(), allocator);
    }

    if (m_regNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regNo.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyEnterpriseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyEnterpriseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyEnterpriseName.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterpriseName.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_regNumResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegNumResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regNumResult.ToJsonObject(value[key.c_str()], allocator);
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


int64_t VerifyBizLicenseResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool VerifyBizLicenseResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string VerifyBizLicenseResponse::GetCreditCode() const
{
    return m_creditCode;
}

bool VerifyBizLicenseResponse::CreditCodeHasBeenSet() const
{
    return m_creditCodeHasBeenSet;
}

string VerifyBizLicenseResponse::GetOrgCode() const
{
    return m_orgCode;
}

bool VerifyBizLicenseResponse::OrgCodeHasBeenSet() const
{
    return m_orgCodeHasBeenSet;
}

string VerifyBizLicenseResponse::GetOpenFrom() const
{
    return m_openFrom;
}

bool VerifyBizLicenseResponse::OpenFromHasBeenSet() const
{
    return m_openFromHasBeenSet;
}

string VerifyBizLicenseResponse::GetOpenTo() const
{
    return m_openTo;
}

bool VerifyBizLicenseResponse::OpenToHasBeenSet() const
{
    return m_openToHasBeenSet;
}

string VerifyBizLicenseResponse::GetFrName() const
{
    return m_frName;
}

bool VerifyBizLicenseResponse::FrNameHasBeenSet() const
{
    return m_frNameHasBeenSet;
}

string VerifyBizLicenseResponse::GetEnterpriseStatus() const
{
    return m_enterpriseStatus;
}

bool VerifyBizLicenseResponse::EnterpriseStatusHasBeenSet() const
{
    return m_enterpriseStatusHasBeenSet;
}

string VerifyBizLicenseResponse::GetOperateScopeAndForm() const
{
    return m_operateScopeAndForm;
}

bool VerifyBizLicenseResponse::OperateScopeAndFormHasBeenSet() const
{
    return m_operateScopeAndFormHasBeenSet;
}

string VerifyBizLicenseResponse::GetRegCap() const
{
    return m_regCap;
}

bool VerifyBizLicenseResponse::RegCapHasBeenSet() const
{
    return m_regCapHasBeenSet;
}

string VerifyBizLicenseResponse::GetRegCapCur() const
{
    return m_regCapCur;
}

bool VerifyBizLicenseResponse::RegCapCurHasBeenSet() const
{
    return m_regCapCurHasBeenSet;
}

string VerifyBizLicenseResponse::GetRegOrg() const
{
    return m_regOrg;
}

bool VerifyBizLicenseResponse::RegOrgHasBeenSet() const
{
    return m_regOrgHasBeenSet;
}

string VerifyBizLicenseResponse::GetEsDate() const
{
    return m_esDate;
}

bool VerifyBizLicenseResponse::EsDateHasBeenSet() const
{
    return m_esDateHasBeenSet;
}

string VerifyBizLicenseResponse::GetEnterpriseType() const
{
    return m_enterpriseType;
}

bool VerifyBizLicenseResponse::EnterpriseTypeHasBeenSet() const
{
    return m_enterpriseTypeHasBeenSet;
}

string VerifyBizLicenseResponse::GetCancelDate() const
{
    return m_cancelDate;
}

bool VerifyBizLicenseResponse::CancelDateHasBeenSet() const
{
    return m_cancelDateHasBeenSet;
}

string VerifyBizLicenseResponse::GetRevokeDate() const
{
    return m_revokeDate;
}

bool VerifyBizLicenseResponse::RevokeDateHasBeenSet() const
{
    return m_revokeDateHasBeenSet;
}

string VerifyBizLicenseResponse::GetAbuItem() const
{
    return m_abuItem;
}

bool VerifyBizLicenseResponse::AbuItemHasBeenSet() const
{
    return m_abuItemHasBeenSet;
}

string VerifyBizLicenseResponse::GetCbuItem() const
{
    return m_cbuItem;
}

bool VerifyBizLicenseResponse::CbuItemHasBeenSet() const
{
    return m_cbuItemHasBeenSet;
}

string VerifyBizLicenseResponse::GetApprDate() const
{
    return m_apprDate;
}

bool VerifyBizLicenseResponse::ApprDateHasBeenSet() const
{
    return m_apprDateHasBeenSet;
}

string VerifyBizLicenseResponse::GetProvince() const
{
    return m_province;
}

bool VerifyBizLicenseResponse::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string VerifyBizLicenseResponse::GetCity() const
{
    return m_city;
}

bool VerifyBizLicenseResponse::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string VerifyBizLicenseResponse::GetCounty() const
{
    return m_county;
}

bool VerifyBizLicenseResponse::CountyHasBeenSet() const
{
    return m_countyHasBeenSet;
}

string VerifyBizLicenseResponse::GetAreaCode() const
{
    return m_areaCode;
}

bool VerifyBizLicenseResponse::AreaCodeHasBeenSet() const
{
    return m_areaCodeHasBeenSet;
}

string VerifyBizLicenseResponse::GetIndustryPhyCode() const
{
    return m_industryPhyCode;
}

bool VerifyBizLicenseResponse::IndustryPhyCodeHasBeenSet() const
{
    return m_industryPhyCodeHasBeenSet;
}

string VerifyBizLicenseResponse::GetIndustryPhyName() const
{
    return m_industryPhyName;
}

bool VerifyBizLicenseResponse::IndustryPhyNameHasBeenSet() const
{
    return m_industryPhyNameHasBeenSet;
}

string VerifyBizLicenseResponse::GetIndustryCode() const
{
    return m_industryCode;
}

bool VerifyBizLicenseResponse::IndustryCodeHasBeenSet() const
{
    return m_industryCodeHasBeenSet;
}

string VerifyBizLicenseResponse::GetIndustryName() const
{
    return m_industryName;
}

bool VerifyBizLicenseResponse::IndustryNameHasBeenSet() const
{
    return m_industryNameHasBeenSet;
}

string VerifyBizLicenseResponse::GetOperateScope() const
{
    return m_operateScope;
}

bool VerifyBizLicenseResponse::OperateScopeHasBeenSet() const
{
    return m_operateScopeHasBeenSet;
}

string VerifyBizLicenseResponse::GetVerifyRegNo() const
{
    return m_verifyRegNo;
}

bool VerifyBizLicenseResponse::VerifyRegNoHasBeenSet() const
{
    return m_verifyRegNoHasBeenSet;
}

string VerifyBizLicenseResponse::GetRegNo() const
{
    return m_regNo;
}

bool VerifyBizLicenseResponse::RegNoHasBeenSet() const
{
    return m_regNoHasBeenSet;
}

string VerifyBizLicenseResponse::GetVerifyEnterpriseName() const
{
    return m_verifyEnterpriseName;
}

bool VerifyBizLicenseResponse::VerifyEnterpriseNameHasBeenSet() const
{
    return m_verifyEnterpriseNameHasBeenSet;
}

string VerifyBizLicenseResponse::GetEnterpriseName() const
{
    return m_enterpriseName;
}

bool VerifyBizLicenseResponse::EnterpriseNameHasBeenSet() const
{
    return m_enterpriseNameHasBeenSet;
}

string VerifyBizLicenseResponse::GetVerifyAddress() const
{
    return m_verifyAddress;
}

bool VerifyBizLicenseResponse::VerifyAddressHasBeenSet() const
{
    return m_verifyAddressHasBeenSet;
}

string VerifyBizLicenseResponse::GetAddress() const
{
    return m_address;
}

bool VerifyBizLicenseResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

BizLicenseVerifyResult VerifyBizLicenseResponse::GetRegNumResult() const
{
    return m_regNumResult;
}

bool VerifyBizLicenseResponse::RegNumResultHasBeenSet() const
{
    return m_regNumResultHasBeenSet;
}


