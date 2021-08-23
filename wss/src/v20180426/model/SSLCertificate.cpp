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

#include <tencentcloud/wss/v20180426/model/SSLCertificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wss::V20180426::Model;
using namespace std;

SSLCertificate::SSLCertificate() :
    m_ownerUinHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_productZhNameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vulnerabilityStatusHasBeenSet(false),
    m_statusMsgHasBeenSet(false),
    m_verifyTypeHasBeenSet(false),
    m_certBeginTimeHasBeenSet(false),
    m_certEndTimeHasBeenSet(false),
    m_validityPeriodHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_projectInfoHasBeenSet(false),
    m_idHasBeenSet(false),
    m_subjectAltNameHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_statusNameHasBeenSet(false),
    m_isVipHasBeenSet(false),
    m_isDvHasBeenSet(false),
    m_isWildcardHasBeenSet(false),
    m_isVulnerabilityHasBeenSet(false),
    m_certHasBeenSet(false)
{
}

CoreInternalOutcome SSLCertificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CertType") && !value["CertType"].IsNull())
    {
        if (!value["CertType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.CertType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certType = string(value["CertType"].GetString());
        m_certTypeHasBeenSet = true;
    }

    if (value.HasMember("ProductZhName") && !value["ProductZhName"].IsNull())
    {
        if (!value["ProductZhName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.ProductZhName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productZhName = string(value["ProductZhName"].GetString());
        m_productZhNameHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("VulnerabilityStatus") && !value["VulnerabilityStatus"].IsNull())
    {
        if (!value["VulnerabilityStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.VulnerabilityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulnerabilityStatus = string(value["VulnerabilityStatus"].GetString());
        m_vulnerabilityStatusHasBeenSet = true;
    }

    if (value.HasMember("StatusMsg") && !value["StatusMsg"].IsNull())
    {
        if (!value["StatusMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.StatusMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMsg = string(value["StatusMsg"].GetString());
        m_statusMsgHasBeenSet = true;
    }

    if (value.HasMember("VerifyType") && !value["VerifyType"].IsNull())
    {
        if (!value["VerifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.VerifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyType = string(value["VerifyType"].GetString());
        m_verifyTypeHasBeenSet = true;
    }

    if (value.HasMember("CertBeginTime") && !value["CertBeginTime"].IsNull())
    {
        if (!value["CertBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.CertBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certBeginTime = string(value["CertBeginTime"].GetString());
        m_certBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("CertEndTime") && !value["CertEndTime"].IsNull())
    {
        if (!value["CertEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.CertEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certEndTime = string(value["CertEndTime"].GetString());
        m_certEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ValidityPeriod") && !value["ValidityPeriod"].IsNull())
    {
        if (!value["ValidityPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.ValidityPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validityPeriod = string(value["ValidityPeriod"].GetString());
        m_validityPeriodHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectInfo") && !value["ProjectInfo"].IsNull())
    {
        if (!value["ProjectInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.ProjectInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_projectInfo.Deserialize(value["ProjectInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_projectInfoHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SubjectAltName") && !value["SubjectAltName"].IsNull())
    {
        if (!value["SubjectAltName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.SubjectAltName` is not array type"));

        const rapidjson::Value &tmpValue = value["SubjectAltName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subjectAltName.push_back((*itr).GetString());
        }
        m_subjectAltNameHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("StatusName") && !value["StatusName"].IsNull())
    {
        if (!value["StatusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.StatusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusName = string(value["StatusName"].GetString());
        m_statusNameHasBeenSet = true;
    }

    if (value.HasMember("IsVip") && !value["IsVip"].IsNull())
    {
        if (!value["IsVip"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.IsVip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVip = value["IsVip"].GetBool();
        m_isVipHasBeenSet = true;
    }

    if (value.HasMember("IsDv") && !value["IsDv"].IsNull())
    {
        if (!value["IsDv"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.IsDv` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDv = value["IsDv"].GetBool();
        m_isDvHasBeenSet = true;
    }

    if (value.HasMember("IsWildcard") && !value["IsWildcard"].IsNull())
    {
        if (!value["IsWildcard"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.IsWildcard` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWildcard = value["IsWildcard"].GetBool();
        m_isWildcardHasBeenSet = true;
    }

    if (value.HasMember("IsVulnerability") && !value["IsVulnerability"].IsNull())
    {
        if (!value["IsVulnerability"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.IsVulnerability` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVulnerability = value["IsVulnerability"].GetBool();
        m_isVulnerabilityHasBeenSet = true;
    }

    if (value.HasMember("Cert") && !value["Cert"].IsNull())
    {
        if (!value["Cert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLCertificate.Cert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cert = string(value["Cert"].GetString());
        m_certHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SSLCertificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certType.c_str(), allocator).Move(), allocator);
    }

    if (m_productZhNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductZhName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productZhName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_vulnerabilityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulnerabilityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulnerabilityStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_statusMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_certBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_certEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_validityPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidityPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validityPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_projectInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectAltNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectAltName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subjectAltName.begin(); itr != m_subjectAltName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusName.c_str(), allocator).Move(), allocator);
    }

    if (m_isVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVip, allocator);
    }

    if (m_isDvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDv, allocator);
    }

    if (m_isWildcardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWildcard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWildcard, allocator);
    }

    if (m_isVulnerabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVulnerability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVulnerability, allocator);
    }

    if (m_certHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cert.c_str(), allocator).Move(), allocator);
    }

}


string SSLCertificate::GetOwnerUin() const
{
    return m_ownerUin;
}

void SSLCertificate::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool SSLCertificate::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string SSLCertificate::GetProjectId() const
{
    return m_projectId;
}

void SSLCertificate::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SSLCertificate::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SSLCertificate::GetFrom() const
{
    return m_from;
}

void SSLCertificate::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool SSLCertificate::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string SSLCertificate::GetType() const
{
    return m_type;
}

void SSLCertificate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SSLCertificate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SSLCertificate::GetCertType() const
{
    return m_certType;
}

void SSLCertificate::SetCertType(const string& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool SSLCertificate::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string SSLCertificate::GetProductZhName() const
{
    return m_productZhName;
}

void SSLCertificate::SetProductZhName(const string& _productZhName)
{
    m_productZhName = _productZhName;
    m_productZhNameHasBeenSet = true;
}

bool SSLCertificate::ProductZhNameHasBeenSet() const
{
    return m_productZhNameHasBeenSet;
}

string SSLCertificate::GetDomain() const
{
    return m_domain;
}

void SSLCertificate::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SSLCertificate::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string SSLCertificate::GetAlias() const
{
    return m_alias;
}

void SSLCertificate::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool SSLCertificate::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t SSLCertificate::GetStatus() const
{
    return m_status;
}

void SSLCertificate::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SSLCertificate::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SSLCertificate::GetVulnerabilityStatus() const
{
    return m_vulnerabilityStatus;
}

void SSLCertificate::SetVulnerabilityStatus(const string& _vulnerabilityStatus)
{
    m_vulnerabilityStatus = _vulnerabilityStatus;
    m_vulnerabilityStatusHasBeenSet = true;
}

bool SSLCertificate::VulnerabilityStatusHasBeenSet() const
{
    return m_vulnerabilityStatusHasBeenSet;
}

string SSLCertificate::GetStatusMsg() const
{
    return m_statusMsg;
}

void SSLCertificate::SetStatusMsg(const string& _statusMsg)
{
    m_statusMsg = _statusMsg;
    m_statusMsgHasBeenSet = true;
}

bool SSLCertificate::StatusMsgHasBeenSet() const
{
    return m_statusMsgHasBeenSet;
}

string SSLCertificate::GetVerifyType() const
{
    return m_verifyType;
}

void SSLCertificate::SetVerifyType(const string& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool SSLCertificate::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}

string SSLCertificate::GetCertBeginTime() const
{
    return m_certBeginTime;
}

void SSLCertificate::SetCertBeginTime(const string& _certBeginTime)
{
    m_certBeginTime = _certBeginTime;
    m_certBeginTimeHasBeenSet = true;
}

bool SSLCertificate::CertBeginTimeHasBeenSet() const
{
    return m_certBeginTimeHasBeenSet;
}

string SSLCertificate::GetCertEndTime() const
{
    return m_certEndTime;
}

void SSLCertificate::SetCertEndTime(const string& _certEndTime)
{
    m_certEndTime = _certEndTime;
    m_certEndTimeHasBeenSet = true;
}

bool SSLCertificate::CertEndTimeHasBeenSet() const
{
    return m_certEndTimeHasBeenSet;
}

string SSLCertificate::GetValidityPeriod() const
{
    return m_validityPeriod;
}

void SSLCertificate::SetValidityPeriod(const string& _validityPeriod)
{
    m_validityPeriod = _validityPeriod;
    m_validityPeriodHasBeenSet = true;
}

bool SSLCertificate::ValidityPeriodHasBeenSet() const
{
    return m_validityPeriodHasBeenSet;
}

string SSLCertificate::GetInsertTime() const
{
    return m_insertTime;
}

void SSLCertificate::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool SSLCertificate::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

SSLProjectInfo SSLCertificate::GetProjectInfo() const
{
    return m_projectInfo;
}

void SSLCertificate::SetProjectInfo(const SSLProjectInfo& _projectInfo)
{
    m_projectInfo = _projectInfo;
    m_projectInfoHasBeenSet = true;
}

bool SSLCertificate::ProjectInfoHasBeenSet() const
{
    return m_projectInfoHasBeenSet;
}

string SSLCertificate::GetId() const
{
    return m_id;
}

void SSLCertificate::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SSLCertificate::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> SSLCertificate::GetSubjectAltName() const
{
    return m_subjectAltName;
}

void SSLCertificate::SetSubjectAltName(const vector<string>& _subjectAltName)
{
    m_subjectAltName = _subjectAltName;
    m_subjectAltNameHasBeenSet = true;
}

bool SSLCertificate::SubjectAltNameHasBeenSet() const
{
    return m_subjectAltNameHasBeenSet;
}

string SSLCertificate::GetTypeName() const
{
    return m_typeName;
}

void SSLCertificate::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool SSLCertificate::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string SSLCertificate::GetStatusName() const
{
    return m_statusName;
}

void SSLCertificate::SetStatusName(const string& _statusName)
{
    m_statusName = _statusName;
    m_statusNameHasBeenSet = true;
}

bool SSLCertificate::StatusNameHasBeenSet() const
{
    return m_statusNameHasBeenSet;
}

bool SSLCertificate::GetIsVip() const
{
    return m_isVip;
}

void SSLCertificate::SetIsVip(const bool& _isVip)
{
    m_isVip = _isVip;
    m_isVipHasBeenSet = true;
}

bool SSLCertificate::IsVipHasBeenSet() const
{
    return m_isVipHasBeenSet;
}

bool SSLCertificate::GetIsDv() const
{
    return m_isDv;
}

void SSLCertificate::SetIsDv(const bool& _isDv)
{
    m_isDv = _isDv;
    m_isDvHasBeenSet = true;
}

bool SSLCertificate::IsDvHasBeenSet() const
{
    return m_isDvHasBeenSet;
}

bool SSLCertificate::GetIsWildcard() const
{
    return m_isWildcard;
}

void SSLCertificate::SetIsWildcard(const bool& _isWildcard)
{
    m_isWildcard = _isWildcard;
    m_isWildcardHasBeenSet = true;
}

bool SSLCertificate::IsWildcardHasBeenSet() const
{
    return m_isWildcardHasBeenSet;
}

bool SSLCertificate::GetIsVulnerability() const
{
    return m_isVulnerability;
}

void SSLCertificate::SetIsVulnerability(const bool& _isVulnerability)
{
    m_isVulnerability = _isVulnerability;
    m_isVulnerabilityHasBeenSet = true;
}

bool SSLCertificate::IsVulnerabilityHasBeenSet() const
{
    return m_isVulnerabilityHasBeenSet;
}

string SSLCertificate::GetCert() const
{
    return m_cert;
}

void SSLCertificate::SetCert(const string& _cert)
{
    m_cert = _cert;
    m_certHasBeenSet = true;
}

bool SSLCertificate::CertHasBeenSet() const
{
    return m_certHasBeenSet;
}

