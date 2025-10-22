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

#include <tencentcloud/ctem/v20231128/model/DisplayEnterprise.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayEnterprise::DisplayEnterprise() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_parentEnterpriseUidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_abbreviationHasBeenSet(false),
    m_creditCodeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_registeredCapitalHasBeenSet(false),
    m_shareholdingRatioHasBeenSet(false),
    m_legalPersonHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_industryHasBeenSet(false),
    m_enterpriseUidHasBeenSet(false),
    m_domainCountHasBeenSet(false),
    m_subDomainCountHasBeenSet(false),
    m_httpCountHasBeenSet(false),
    m_vulCountHasBeenSet(false)
{
}

CoreInternalOutcome DisplayEnterprise::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("ParentEnterpriseUid") && !value["ParentEnterpriseUid"].IsNull())
    {
        if (!value["ParentEnterpriseUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.ParentEnterpriseUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentEnterpriseUid = string(value["ParentEnterpriseUid"].GetString());
        m_parentEnterpriseUidHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Abbreviation") && !value["Abbreviation"].IsNull())
    {
        if (!value["Abbreviation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.Abbreviation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_abbreviation = string(value["Abbreviation"].GetString());
        m_abbreviationHasBeenSet = true;
    }

    if (value.HasMember("CreditCode") && !value["CreditCode"].IsNull())
    {
        if (!value["CreditCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.CreditCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creditCode = string(value["CreditCode"].GetString());
        m_creditCodeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RegisteredCapital") && !value["RegisteredCapital"].IsNull())
    {
        if (!value["RegisteredCapital"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.RegisteredCapital` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registeredCapital = string(value["RegisteredCapital"].GetString());
        m_registeredCapitalHasBeenSet = true;
    }

    if (value.HasMember("ShareholdingRatio") && !value["ShareholdingRatio"].IsNull())
    {
        if (!value["ShareholdingRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.ShareholdingRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareholdingRatio = string(value["ShareholdingRatio"].GetString());
        m_shareholdingRatioHasBeenSet = true;
    }

    if (value.HasMember("LegalPerson") && !value["LegalPerson"].IsNull())
    {
        if (!value["LegalPerson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.LegalPerson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalPerson = string(value["LegalPerson"].GetString());
        m_legalPersonHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Industry") && !value["Industry"].IsNull())
    {
        if (!value["Industry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.Industry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_industry = string(value["Industry"].GetString());
        m_industryHasBeenSet = true;
    }

    if (value.HasMember("EnterpriseUid") && !value["EnterpriseUid"].IsNull())
    {
        if (!value["EnterpriseUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.EnterpriseUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseUid = string(value["EnterpriseUid"].GetString());
        m_enterpriseUidHasBeenSet = true;
    }

    if (value.HasMember("DomainCount") && !value["DomainCount"].IsNull())
    {
        if (!value["DomainCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.DomainCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_domainCount = value["DomainCount"].GetInt64();
        m_domainCountHasBeenSet = true;
    }

    if (value.HasMember("SubDomainCount") && !value["SubDomainCount"].IsNull())
    {
        if (!value["SubDomainCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.SubDomainCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subDomainCount = value["SubDomainCount"].GetInt64();
        m_subDomainCountHasBeenSet = true;
    }

    if (value.HasMember("HttpCount") && !value["HttpCount"].IsNull())
    {
        if (!value["HttpCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.HttpCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_httpCount = value["HttpCount"].GetInt64();
        m_httpCountHasBeenSet = true;
    }

    if (value.HasMember("VulCount") && !value["VulCount"].IsNull())
    {
        if (!value["VulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayEnterprise.VulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCount = value["VulCount"].GetInt64();
        m_vulCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayEnterprise::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_parentEnterpriseUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentEnterpriseUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentEnterpriseUid.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_abbreviationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Abbreviation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_abbreviation.c_str(), allocator).Move(), allocator);
    }

    if (m_creditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_registeredCapitalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisteredCapital";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registeredCapital.c_str(), allocator).Move(), allocator);
    }

    if (m_shareholdingRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareholdingRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareholdingRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_legalPersonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalPerson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalPerson.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_industryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Industry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_industry.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterpriseUid.c_str(), allocator).Move(), allocator);
    }

    if (m_domainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainCount, allocator);
    }

    if (m_subDomainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subDomainCount, allocator);
    }

    if (m_httpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpCount, allocator);
    }

    if (m_vulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCount, allocator);
    }

}


int64_t DisplayEnterprise::GetId() const
{
    return m_id;
}

void DisplayEnterprise::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayEnterprise::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayEnterprise::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayEnterprise::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayEnterprise::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayEnterprise::GetParentEnterpriseUid() const
{
    return m_parentEnterpriseUid;
}

void DisplayEnterprise::SetParentEnterpriseUid(const string& _parentEnterpriseUid)
{
    m_parentEnterpriseUid = _parentEnterpriseUid;
    m_parentEnterpriseUidHasBeenSet = true;
}

bool DisplayEnterprise::ParentEnterpriseUidHasBeenSet() const
{
    return m_parentEnterpriseUidHasBeenSet;
}

string DisplayEnterprise::GetName() const
{
    return m_name;
}

void DisplayEnterprise::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DisplayEnterprise::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DisplayEnterprise::GetAbbreviation() const
{
    return m_abbreviation;
}

void DisplayEnterprise::SetAbbreviation(const string& _abbreviation)
{
    m_abbreviation = _abbreviation;
    m_abbreviationHasBeenSet = true;
}

bool DisplayEnterprise::AbbreviationHasBeenSet() const
{
    return m_abbreviationHasBeenSet;
}

string DisplayEnterprise::GetCreditCode() const
{
    return m_creditCode;
}

void DisplayEnterprise::SetCreditCode(const string& _creditCode)
{
    m_creditCode = _creditCode;
    m_creditCodeHasBeenSet = true;
}

bool DisplayEnterprise::CreditCodeHasBeenSet() const
{
    return m_creditCodeHasBeenSet;
}

string DisplayEnterprise::GetStatus() const
{
    return m_status;
}

void DisplayEnterprise::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DisplayEnterprise::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DisplayEnterprise::GetRegisteredCapital() const
{
    return m_registeredCapital;
}

void DisplayEnterprise::SetRegisteredCapital(const string& _registeredCapital)
{
    m_registeredCapital = _registeredCapital;
    m_registeredCapitalHasBeenSet = true;
}

bool DisplayEnterprise::RegisteredCapitalHasBeenSet() const
{
    return m_registeredCapitalHasBeenSet;
}

string DisplayEnterprise::GetShareholdingRatio() const
{
    return m_shareholdingRatio;
}

void DisplayEnterprise::SetShareholdingRatio(const string& _shareholdingRatio)
{
    m_shareholdingRatio = _shareholdingRatio;
    m_shareholdingRatioHasBeenSet = true;
}

bool DisplayEnterprise::ShareholdingRatioHasBeenSet() const
{
    return m_shareholdingRatioHasBeenSet;
}

string DisplayEnterprise::GetLegalPerson() const
{
    return m_legalPerson;
}

void DisplayEnterprise::SetLegalPerson(const string& _legalPerson)
{
    m_legalPerson = _legalPerson;
    m_legalPersonHasBeenSet = true;
}

bool DisplayEnterprise::LegalPersonHasBeenSet() const
{
    return m_legalPersonHasBeenSet;
}

string DisplayEnterprise::GetType() const
{
    return m_type;
}

void DisplayEnterprise::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DisplayEnterprise::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DisplayEnterprise::GetIndustry() const
{
    return m_industry;
}

void DisplayEnterprise::SetIndustry(const string& _industry)
{
    m_industry = _industry;
    m_industryHasBeenSet = true;
}

bool DisplayEnterprise::IndustryHasBeenSet() const
{
    return m_industryHasBeenSet;
}

string DisplayEnterprise::GetEnterpriseUid() const
{
    return m_enterpriseUid;
}

void DisplayEnterprise::SetEnterpriseUid(const string& _enterpriseUid)
{
    m_enterpriseUid = _enterpriseUid;
    m_enterpriseUidHasBeenSet = true;
}

bool DisplayEnterprise::EnterpriseUidHasBeenSet() const
{
    return m_enterpriseUidHasBeenSet;
}

int64_t DisplayEnterprise::GetDomainCount() const
{
    return m_domainCount;
}

void DisplayEnterprise::SetDomainCount(const int64_t& _domainCount)
{
    m_domainCount = _domainCount;
    m_domainCountHasBeenSet = true;
}

bool DisplayEnterprise::DomainCountHasBeenSet() const
{
    return m_domainCountHasBeenSet;
}

int64_t DisplayEnterprise::GetSubDomainCount() const
{
    return m_subDomainCount;
}

void DisplayEnterprise::SetSubDomainCount(const int64_t& _subDomainCount)
{
    m_subDomainCount = _subDomainCount;
    m_subDomainCountHasBeenSet = true;
}

bool DisplayEnterprise::SubDomainCountHasBeenSet() const
{
    return m_subDomainCountHasBeenSet;
}

int64_t DisplayEnterprise::GetHttpCount() const
{
    return m_httpCount;
}

void DisplayEnterprise::SetHttpCount(const int64_t& _httpCount)
{
    m_httpCount = _httpCount;
    m_httpCountHasBeenSet = true;
}

bool DisplayEnterprise::HttpCountHasBeenSet() const
{
    return m_httpCountHasBeenSet;
}

int64_t DisplayEnterprise::GetVulCount() const
{
    return m_vulCount;
}

void DisplayEnterprise::SetVulCount(const int64_t& _vulCount)
{
    m_vulCount = _vulCount;
    m_vulCountHasBeenSet = true;
}

bool DisplayEnterprise::VulCountHasBeenSet() const
{
    return m_vulCountHasBeenSet;
}

