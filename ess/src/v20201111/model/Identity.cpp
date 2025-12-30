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

#include <tencentcloud/ess/v20201111/model/Identity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

Identity::Identity() :
    m_creditCodeHasBeenSet(false),
    m_orgCodeHasBeenSet(false),
    m_regNoHasBeenSet(false),
    m_entNameHasBeenSet(false),
    m_legalRepNameHasBeenSet(false),
    m_opStateHasBeenSet(false),
    m_opFromDateHasBeenSet(false),
    m_opToDateHasBeenSet(false),
    m_estabDateHasBeenSet(false),
    m_apprDateHasBeenSet(false),
    m_revoDateHasBeenSet(false),
    m_cancelDateHasBeenSet(false),
    m_regOrgHasBeenSet(false),
    m_entTypeCodeHasBeenSet(false),
    m_entTypeHasBeenSet(false),
    m_bizScopeHasBeenSet(false),
    m_licenseBizItemHasBeenSet(false),
    m_regAreaCodeHasBeenSet(false),
    m_regAddressHasBeenSet(false),
    m_regCapitalCurtypeHasBeenSet(false),
    m_regCapitalHasBeenSet(false),
    m_paidCapitalHasBeenSet(false),
    m_oriRegNoHasBeenSet(false),
    m_entNameEngHasBeenSet(false),
    m_oriEntNameHasBeenSet(false),
    m_opStateCodeHasBeenSet(false),
    m_searchDateHasBeenSet(false)
{
}

CoreInternalOutcome Identity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreditCode") && !value["CreditCode"].IsNull())
    {
        if (!value["CreditCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.CreditCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creditCode = string(value["CreditCode"].GetString());
        m_creditCodeHasBeenSet = true;
    }

    if (value.HasMember("OrgCode") && !value["OrgCode"].IsNull())
    {
        if (!value["OrgCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.OrgCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgCode = string(value["OrgCode"].GetString());
        m_orgCodeHasBeenSet = true;
    }

    if (value.HasMember("RegNo") && !value["RegNo"].IsNull())
    {
        if (!value["RegNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.RegNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regNo = string(value["RegNo"].GetString());
        m_regNoHasBeenSet = true;
    }

    if (value.HasMember("EntName") && !value["EntName"].IsNull())
    {
        if (!value["EntName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.EntName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entName = string(value["EntName"].GetString());
        m_entNameHasBeenSet = true;
    }

    if (value.HasMember("LegalRepName") && !value["LegalRepName"].IsNull())
    {
        if (!value["LegalRepName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.LegalRepName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalRepName = string(value["LegalRepName"].GetString());
        m_legalRepNameHasBeenSet = true;
    }

    if (value.HasMember("OpState") && !value["OpState"].IsNull())
    {
        if (!value["OpState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.OpState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_opState = string(value["OpState"].GetString());
        m_opStateHasBeenSet = true;
    }

    if (value.HasMember("OpFromDate") && !value["OpFromDate"].IsNull())
    {
        if (!value["OpFromDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.OpFromDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_opFromDate = string(value["OpFromDate"].GetString());
        m_opFromDateHasBeenSet = true;
    }

    if (value.HasMember("OpToDate") && !value["OpToDate"].IsNull())
    {
        if (!value["OpToDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.OpToDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_opToDate = string(value["OpToDate"].GetString());
        m_opToDateHasBeenSet = true;
    }

    if (value.HasMember("EstabDate") && !value["EstabDate"].IsNull())
    {
        if (!value["EstabDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.EstabDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_estabDate = string(value["EstabDate"].GetString());
        m_estabDateHasBeenSet = true;
    }

    if (value.HasMember("ApprDate") && !value["ApprDate"].IsNull())
    {
        if (!value["ApprDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.ApprDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apprDate = string(value["ApprDate"].GetString());
        m_apprDateHasBeenSet = true;
    }

    if (value.HasMember("RevoDate") && !value["RevoDate"].IsNull())
    {
        if (!value["RevoDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.RevoDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_revoDate = string(value["RevoDate"].GetString());
        m_revoDateHasBeenSet = true;
    }

    if (value.HasMember("CancelDate") && !value["CancelDate"].IsNull())
    {
        if (!value["CancelDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.CancelDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cancelDate = string(value["CancelDate"].GetString());
        m_cancelDateHasBeenSet = true;
    }

    if (value.HasMember("RegOrg") && !value["RegOrg"].IsNull())
    {
        if (!value["RegOrg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.RegOrg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regOrg = string(value["RegOrg"].GetString());
        m_regOrgHasBeenSet = true;
    }

    if (value.HasMember("EntTypeCode") && !value["EntTypeCode"].IsNull())
    {
        if (!value["EntTypeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.EntTypeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entTypeCode = string(value["EntTypeCode"].GetString());
        m_entTypeCodeHasBeenSet = true;
    }

    if (value.HasMember("EntType") && !value["EntType"].IsNull())
    {
        if (!value["EntType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.EntType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entType = string(value["EntType"].GetString());
        m_entTypeHasBeenSet = true;
    }

    if (value.HasMember("BizScope") && !value["BizScope"].IsNull())
    {
        if (!value["BizScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.BizScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizScope = string(value["BizScope"].GetString());
        m_bizScopeHasBeenSet = true;
    }

    if (value.HasMember("LicenseBizItem") && !value["LicenseBizItem"].IsNull())
    {
        if (!value["LicenseBizItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.LicenseBizItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseBizItem = string(value["LicenseBizItem"].GetString());
        m_licenseBizItemHasBeenSet = true;
    }

    if (value.HasMember("RegAreaCode") && !value["RegAreaCode"].IsNull())
    {
        if (!value["RegAreaCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.RegAreaCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regAreaCode = string(value["RegAreaCode"].GetString());
        m_regAreaCodeHasBeenSet = true;
    }

    if (value.HasMember("RegAddress") && !value["RegAddress"].IsNull())
    {
        if (!value["RegAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.RegAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regAddress = string(value["RegAddress"].GetString());
        m_regAddressHasBeenSet = true;
    }

    if (value.HasMember("RegCapitalCurtype") && !value["RegCapitalCurtype"].IsNull())
    {
        if (!value["RegCapitalCurtype"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.RegCapitalCurtype` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regCapitalCurtype = string(value["RegCapitalCurtype"].GetString());
        m_regCapitalCurtypeHasBeenSet = true;
    }

    if (value.HasMember("RegCapital") && !value["RegCapital"].IsNull())
    {
        if (!value["RegCapital"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.RegCapital` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regCapital = string(value["RegCapital"].GetString());
        m_regCapitalHasBeenSet = true;
    }

    if (value.HasMember("PaidCapital") && !value["PaidCapital"].IsNull())
    {
        if (!value["PaidCapital"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.PaidCapital` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paidCapital = string(value["PaidCapital"].GetString());
        m_paidCapitalHasBeenSet = true;
    }

    if (value.HasMember("OriRegNo") && !value["OriRegNo"].IsNull())
    {
        if (!value["OriRegNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.OriRegNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oriRegNo = string(value["OriRegNo"].GetString());
        m_oriRegNoHasBeenSet = true;
    }

    if (value.HasMember("EntNameEng") && !value["EntNameEng"].IsNull())
    {
        if (!value["EntNameEng"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.EntNameEng` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entNameEng = string(value["EntNameEng"].GetString());
        m_entNameEngHasBeenSet = true;
    }

    if (value.HasMember("OriEntName") && !value["OriEntName"].IsNull())
    {
        if (!value["OriEntName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.OriEntName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oriEntName = string(value["OriEntName"].GetString());
        m_oriEntNameHasBeenSet = true;
    }

    if (value.HasMember("OpStateCode") && !value["OpStateCode"].IsNull())
    {
        if (!value["OpStateCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.OpStateCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_opStateCode = value["OpStateCode"].GetInt64();
        m_opStateCodeHasBeenSet = true;
    }

    if (value.HasMember("SearchDate") && !value["SearchDate"].IsNull())
    {
        if (!value["SearchDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.SearchDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchDate = string(value["SearchDate"].GetString());
        m_searchDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Identity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_regNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regNo.c_str(), allocator).Move(), allocator);
    }

    if (m_entNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entName.c_str(), allocator).Move(), allocator);
    }

    if (m_legalRepNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalRepName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalRepName.c_str(), allocator).Move(), allocator);
    }

    if (m_opStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_opState.c_str(), allocator).Move(), allocator);
    }

    if (m_opFromDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpFromDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_opFromDate.c_str(), allocator).Move(), allocator);
    }

    if (m_opToDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpToDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_opToDate.c_str(), allocator).Move(), allocator);
    }

    if (m_estabDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstabDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_estabDate.c_str(), allocator).Move(), allocator);
    }

    if (m_apprDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apprDate.c_str(), allocator).Move(), allocator);
    }

    if (m_revoDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RevoDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_revoDate.c_str(), allocator).Move(), allocator);
    }

    if (m_cancelDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cancelDate.c_str(), allocator).Move(), allocator);
    }

    if (m_regOrgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegOrg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regOrg.c_str(), allocator).Move(), allocator);
    }

    if (m_entTypeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntTypeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entTypeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_entTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entType.c_str(), allocator).Move(), allocator);
    }

    if (m_bizScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizScope.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseBizItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseBizItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseBizItem.c_str(), allocator).Move(), allocator);
    }

    if (m_regAreaCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegAreaCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regAreaCode.c_str(), allocator).Move(), allocator);
    }

    if (m_regAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_regCapitalCurtypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegCapitalCurtype";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regCapitalCurtype.c_str(), allocator).Move(), allocator);
    }

    if (m_regCapitalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegCapital";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regCapital.c_str(), allocator).Move(), allocator);
    }

    if (m_paidCapitalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidCapital";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paidCapital.c_str(), allocator).Move(), allocator);
    }

    if (m_oriRegNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriRegNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oriRegNo.c_str(), allocator).Move(), allocator);
    }

    if (m_entNameEngHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntNameEng";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entNameEng.c_str(), allocator).Move(), allocator);
    }

    if (m_oriEntNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriEntName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oriEntName.c_str(), allocator).Move(), allocator);
    }

    if (m_opStateCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpStateCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opStateCode, allocator);
    }

    if (m_searchDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchDate.c_str(), allocator).Move(), allocator);
    }

}


string Identity::GetCreditCode() const
{
    return m_creditCode;
}

void Identity::SetCreditCode(const string& _creditCode)
{
    m_creditCode = _creditCode;
    m_creditCodeHasBeenSet = true;
}

bool Identity::CreditCodeHasBeenSet() const
{
    return m_creditCodeHasBeenSet;
}

string Identity::GetOrgCode() const
{
    return m_orgCode;
}

void Identity::SetOrgCode(const string& _orgCode)
{
    m_orgCode = _orgCode;
    m_orgCodeHasBeenSet = true;
}

bool Identity::OrgCodeHasBeenSet() const
{
    return m_orgCodeHasBeenSet;
}

string Identity::GetRegNo() const
{
    return m_regNo;
}

void Identity::SetRegNo(const string& _regNo)
{
    m_regNo = _regNo;
    m_regNoHasBeenSet = true;
}

bool Identity::RegNoHasBeenSet() const
{
    return m_regNoHasBeenSet;
}

string Identity::GetEntName() const
{
    return m_entName;
}

void Identity::SetEntName(const string& _entName)
{
    m_entName = _entName;
    m_entNameHasBeenSet = true;
}

bool Identity::EntNameHasBeenSet() const
{
    return m_entNameHasBeenSet;
}

string Identity::GetLegalRepName() const
{
    return m_legalRepName;
}

void Identity::SetLegalRepName(const string& _legalRepName)
{
    m_legalRepName = _legalRepName;
    m_legalRepNameHasBeenSet = true;
}

bool Identity::LegalRepNameHasBeenSet() const
{
    return m_legalRepNameHasBeenSet;
}

string Identity::GetOpState() const
{
    return m_opState;
}

void Identity::SetOpState(const string& _opState)
{
    m_opState = _opState;
    m_opStateHasBeenSet = true;
}

bool Identity::OpStateHasBeenSet() const
{
    return m_opStateHasBeenSet;
}

string Identity::GetOpFromDate() const
{
    return m_opFromDate;
}

void Identity::SetOpFromDate(const string& _opFromDate)
{
    m_opFromDate = _opFromDate;
    m_opFromDateHasBeenSet = true;
}

bool Identity::OpFromDateHasBeenSet() const
{
    return m_opFromDateHasBeenSet;
}

string Identity::GetOpToDate() const
{
    return m_opToDate;
}

void Identity::SetOpToDate(const string& _opToDate)
{
    m_opToDate = _opToDate;
    m_opToDateHasBeenSet = true;
}

bool Identity::OpToDateHasBeenSet() const
{
    return m_opToDateHasBeenSet;
}

string Identity::GetEstabDate() const
{
    return m_estabDate;
}

void Identity::SetEstabDate(const string& _estabDate)
{
    m_estabDate = _estabDate;
    m_estabDateHasBeenSet = true;
}

bool Identity::EstabDateHasBeenSet() const
{
    return m_estabDateHasBeenSet;
}

string Identity::GetApprDate() const
{
    return m_apprDate;
}

void Identity::SetApprDate(const string& _apprDate)
{
    m_apprDate = _apprDate;
    m_apprDateHasBeenSet = true;
}

bool Identity::ApprDateHasBeenSet() const
{
    return m_apprDateHasBeenSet;
}

string Identity::GetRevoDate() const
{
    return m_revoDate;
}

void Identity::SetRevoDate(const string& _revoDate)
{
    m_revoDate = _revoDate;
    m_revoDateHasBeenSet = true;
}

bool Identity::RevoDateHasBeenSet() const
{
    return m_revoDateHasBeenSet;
}

string Identity::GetCancelDate() const
{
    return m_cancelDate;
}

void Identity::SetCancelDate(const string& _cancelDate)
{
    m_cancelDate = _cancelDate;
    m_cancelDateHasBeenSet = true;
}

bool Identity::CancelDateHasBeenSet() const
{
    return m_cancelDateHasBeenSet;
}

string Identity::GetRegOrg() const
{
    return m_regOrg;
}

void Identity::SetRegOrg(const string& _regOrg)
{
    m_regOrg = _regOrg;
    m_regOrgHasBeenSet = true;
}

bool Identity::RegOrgHasBeenSet() const
{
    return m_regOrgHasBeenSet;
}

string Identity::GetEntTypeCode() const
{
    return m_entTypeCode;
}

void Identity::SetEntTypeCode(const string& _entTypeCode)
{
    m_entTypeCode = _entTypeCode;
    m_entTypeCodeHasBeenSet = true;
}

bool Identity::EntTypeCodeHasBeenSet() const
{
    return m_entTypeCodeHasBeenSet;
}

string Identity::GetEntType() const
{
    return m_entType;
}

void Identity::SetEntType(const string& _entType)
{
    m_entType = _entType;
    m_entTypeHasBeenSet = true;
}

bool Identity::EntTypeHasBeenSet() const
{
    return m_entTypeHasBeenSet;
}

string Identity::GetBizScope() const
{
    return m_bizScope;
}

void Identity::SetBizScope(const string& _bizScope)
{
    m_bizScope = _bizScope;
    m_bizScopeHasBeenSet = true;
}

bool Identity::BizScopeHasBeenSet() const
{
    return m_bizScopeHasBeenSet;
}

string Identity::GetLicenseBizItem() const
{
    return m_licenseBizItem;
}

void Identity::SetLicenseBizItem(const string& _licenseBizItem)
{
    m_licenseBizItem = _licenseBizItem;
    m_licenseBizItemHasBeenSet = true;
}

bool Identity::LicenseBizItemHasBeenSet() const
{
    return m_licenseBizItemHasBeenSet;
}

string Identity::GetRegAreaCode() const
{
    return m_regAreaCode;
}

void Identity::SetRegAreaCode(const string& _regAreaCode)
{
    m_regAreaCode = _regAreaCode;
    m_regAreaCodeHasBeenSet = true;
}

bool Identity::RegAreaCodeHasBeenSet() const
{
    return m_regAreaCodeHasBeenSet;
}

string Identity::GetRegAddress() const
{
    return m_regAddress;
}

void Identity::SetRegAddress(const string& _regAddress)
{
    m_regAddress = _regAddress;
    m_regAddressHasBeenSet = true;
}

bool Identity::RegAddressHasBeenSet() const
{
    return m_regAddressHasBeenSet;
}

string Identity::GetRegCapitalCurtype() const
{
    return m_regCapitalCurtype;
}

void Identity::SetRegCapitalCurtype(const string& _regCapitalCurtype)
{
    m_regCapitalCurtype = _regCapitalCurtype;
    m_regCapitalCurtypeHasBeenSet = true;
}

bool Identity::RegCapitalCurtypeHasBeenSet() const
{
    return m_regCapitalCurtypeHasBeenSet;
}

string Identity::GetRegCapital() const
{
    return m_regCapital;
}

void Identity::SetRegCapital(const string& _regCapital)
{
    m_regCapital = _regCapital;
    m_regCapitalHasBeenSet = true;
}

bool Identity::RegCapitalHasBeenSet() const
{
    return m_regCapitalHasBeenSet;
}

string Identity::GetPaidCapital() const
{
    return m_paidCapital;
}

void Identity::SetPaidCapital(const string& _paidCapital)
{
    m_paidCapital = _paidCapital;
    m_paidCapitalHasBeenSet = true;
}

bool Identity::PaidCapitalHasBeenSet() const
{
    return m_paidCapitalHasBeenSet;
}

string Identity::GetOriRegNo() const
{
    return m_oriRegNo;
}

void Identity::SetOriRegNo(const string& _oriRegNo)
{
    m_oriRegNo = _oriRegNo;
    m_oriRegNoHasBeenSet = true;
}

bool Identity::OriRegNoHasBeenSet() const
{
    return m_oriRegNoHasBeenSet;
}

string Identity::GetEntNameEng() const
{
    return m_entNameEng;
}

void Identity::SetEntNameEng(const string& _entNameEng)
{
    m_entNameEng = _entNameEng;
    m_entNameEngHasBeenSet = true;
}

bool Identity::EntNameEngHasBeenSet() const
{
    return m_entNameEngHasBeenSet;
}

string Identity::GetOriEntName() const
{
    return m_oriEntName;
}

void Identity::SetOriEntName(const string& _oriEntName)
{
    m_oriEntName = _oriEntName;
    m_oriEntNameHasBeenSet = true;
}

bool Identity::OriEntNameHasBeenSet() const
{
    return m_oriEntNameHasBeenSet;
}

int64_t Identity::GetOpStateCode() const
{
    return m_opStateCode;
}

void Identity::SetOpStateCode(const int64_t& _opStateCode)
{
    m_opStateCode = _opStateCode;
    m_opStateCodeHasBeenSet = true;
}

bool Identity::OpStateCodeHasBeenSet() const
{
    return m_opStateCodeHasBeenSet;
}

string Identity::GetSearchDate() const
{
    return m_searchDate;
}

void Identity::SetSearchDate(const string& _searchDate)
{
    m_searchDate = _searchDate;
    m_searchDateHasBeenSet = true;
}

bool Identity::SearchDateHasBeenSet() const
{
    return m_searchDateHasBeenSet;
}

