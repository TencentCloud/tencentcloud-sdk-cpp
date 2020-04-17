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

#include <tencentcloud/ssl/v20191205/model/DescribeCertificateDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace rapidjson;
using namespace std;

DescribeCertificateDetailResponse::DescribeCertificateDetailResponse() :
    m_ownerUinHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_certificateTypeHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_productZhNameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMsgHasBeenSet(false),
    m_verifyTypeHasBeenSet(false),
    m_vulnerabilityStatusHasBeenSet(false),
    m_certBeginTimeHasBeenSet(false),
    m_certEndTimeHasBeenSet(false),
    m_validityPeriodHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_certificateExtraHasBeenSet(false),
    m_certificatePrivateKeyHasBeenSet(false),
    m_certificatePublicKeyHasBeenSet(false),
    m_dvAuthDetailHasBeenSet(false),
    m_vulnerabilityReportHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_statusNameHasBeenSet(false),
    m_subjectAltNameHasBeenSet(false),
    m_isVipHasBeenSet(false),
    m_isWildcardHasBeenSet(false),
    m_isDvHasBeenSet(false),
    m_isVulnerabilityHasBeenSet(false),
    m_submittedDataHasBeenSet(false),
    m_renewAbleHasBeenSet(false),
    m_deployableHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCertificateDetailResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
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


    if (rsp.HasMember("OwnerUin") && !rsp["OwnerUin"].IsNull())
    {
        if (!rsp["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(rsp["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectId") && !rsp["ProjectId"].IsNull())
    {
        if (!rsp["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(rsp["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (rsp.HasMember("From") && !rsp["From"].IsNull())
    {
        if (!rsp["From"].IsString())
        {
            return CoreInternalOutcome(Error("response `From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(rsp["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (rsp.HasMember("CertificateType") && !rsp["CertificateType"].IsNull())
    {
        if (!rsp["CertificateType"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateType = string(rsp["CertificateType"].GetString());
        m_certificateTypeHasBeenSet = true;
    }

    if (rsp.HasMember("PackageType") && !rsp["PackageType"].IsNull())
    {
        if (!rsp["PackageType"].IsString())
        {
            return CoreInternalOutcome(Error("response `PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(rsp["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ProductZhName") && !rsp["ProductZhName"].IsNull())
    {
        if (!rsp["ProductZhName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductZhName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productZhName = string(rsp["ProductZhName"].GetString());
        m_productZhNameHasBeenSet = true;
    }

    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (rsp.HasMember("Alias") && !rsp["Alias"].IsNull())
    {
        if (!rsp["Alias"].IsString())
        {
            return CoreInternalOutcome(Error("response `Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(rsp["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("StatusMsg") && !rsp["StatusMsg"].IsNull())
    {
        if (!rsp["StatusMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `StatusMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMsg = string(rsp["StatusMsg"].GetString());
        m_statusMsgHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyType") && !rsp["VerifyType"].IsNull())
    {
        if (!rsp["VerifyType"].IsString())
        {
            return CoreInternalOutcome(Error("response `VerifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyType = string(rsp["VerifyType"].GetString());
        m_verifyTypeHasBeenSet = true;
    }

    if (rsp.HasMember("VulnerabilityStatus") && !rsp["VulnerabilityStatus"].IsNull())
    {
        if (!rsp["VulnerabilityStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `VulnerabilityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulnerabilityStatus = string(rsp["VulnerabilityStatus"].GetString());
        m_vulnerabilityStatusHasBeenSet = true;
    }

    if (rsp.HasMember("CertBeginTime") && !rsp["CertBeginTime"].IsNull())
    {
        if (!rsp["CertBeginTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certBeginTime = string(rsp["CertBeginTime"].GetString());
        m_certBeginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CertEndTime") && !rsp["CertEndTime"].IsNull())
    {
        if (!rsp["CertEndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certEndTime = string(rsp["CertEndTime"].GetString());
        m_certEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ValidityPeriod") && !rsp["ValidityPeriod"].IsNull())
    {
        if (!rsp["ValidityPeriod"].IsString())
        {
            return CoreInternalOutcome(Error("response `ValidityPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validityPeriod = string(rsp["ValidityPeriod"].GetString());
        m_validityPeriodHasBeenSet = true;
    }

    if (rsp.HasMember("InsertTime") && !rsp["InsertTime"].IsNull())
    {
        if (!rsp["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(rsp["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (rsp.HasMember("OrderId") && !rsp["OrderId"].IsNull())
    {
        if (!rsp["OrderId"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(rsp["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (rsp.HasMember("CertificateExtra") && !rsp["CertificateExtra"].IsNull())
    {
        if (!rsp["CertificateExtra"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CertificateExtra` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certificateExtra.Deserialize(rsp["CertificateExtra"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certificateExtraHasBeenSet = true;
    }

    if (rsp.HasMember("CertificatePrivateKey") && !rsp["CertificatePrivateKey"].IsNull())
    {
        if (!rsp["CertificatePrivateKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificatePrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificatePrivateKey = string(rsp["CertificatePrivateKey"].GetString());
        m_certificatePrivateKeyHasBeenSet = true;
    }

    if (rsp.HasMember("CertificatePublicKey") && !rsp["CertificatePublicKey"].IsNull())
    {
        if (!rsp["CertificatePublicKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificatePublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificatePublicKey = string(rsp["CertificatePublicKey"].GetString());
        m_certificatePublicKeyHasBeenSet = true;
    }

    if (rsp.HasMember("DvAuthDetail") && !rsp["DvAuthDetail"].IsNull())
    {
        if (!rsp["DvAuthDetail"].IsObject())
        {
            return CoreInternalOutcome(Error("response `DvAuthDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dvAuthDetail.Deserialize(rsp["DvAuthDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dvAuthDetailHasBeenSet = true;
    }

    if (rsp.HasMember("VulnerabilityReport") && !rsp["VulnerabilityReport"].IsNull())
    {
        if (!rsp["VulnerabilityReport"].IsString())
        {
            return CoreInternalOutcome(Error("response `VulnerabilityReport` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulnerabilityReport = string(rsp["VulnerabilityReport"].GetString());
        m_vulnerabilityReportHasBeenSet = true;
    }

    if (rsp.HasMember("CertificateId") && !rsp["CertificateId"].IsNull())
    {
        if (!rsp["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(rsp["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (rsp.HasMember("TypeName") && !rsp["TypeName"].IsNull())
    {
        if (!rsp["TypeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(rsp["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (rsp.HasMember("StatusName") && !rsp["StatusName"].IsNull())
    {
        if (!rsp["StatusName"].IsString())
        {
            return CoreInternalOutcome(Error("response `StatusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusName = string(rsp["StatusName"].GetString());
        m_statusNameHasBeenSet = true;
    }

    if (rsp.HasMember("SubjectAltName") && !rsp["SubjectAltName"].IsNull())
    {
        if (!rsp["SubjectAltName"].IsArray())
            return CoreInternalOutcome(Error("response `SubjectAltName` is not array type"));

        const Value &tmpValue = rsp["SubjectAltName"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subjectAltName.push_back((*itr).GetString());
        }
        m_subjectAltNameHasBeenSet = true;
    }

    if (rsp.HasMember("IsVip") && !rsp["IsVip"].IsNull())
    {
        if (!rsp["IsVip"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsVip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVip = rsp["IsVip"].GetBool();
        m_isVipHasBeenSet = true;
    }

    if (rsp.HasMember("IsWildcard") && !rsp["IsWildcard"].IsNull())
    {
        if (!rsp["IsWildcard"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsWildcard` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWildcard = rsp["IsWildcard"].GetBool();
        m_isWildcardHasBeenSet = true;
    }

    if (rsp.HasMember("IsDv") && !rsp["IsDv"].IsNull())
    {
        if (!rsp["IsDv"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsDv` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDv = rsp["IsDv"].GetBool();
        m_isDvHasBeenSet = true;
    }

    if (rsp.HasMember("IsVulnerability") && !rsp["IsVulnerability"].IsNull())
    {
        if (!rsp["IsVulnerability"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsVulnerability` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVulnerability = rsp["IsVulnerability"].GetBool();
        m_isVulnerabilityHasBeenSet = true;
    }

    if (rsp.HasMember("SubmittedData") && !rsp["SubmittedData"].IsNull())
    {
        if (!rsp["SubmittedData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SubmittedData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_submittedData.Deserialize(rsp["SubmittedData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_submittedDataHasBeenSet = true;
    }

    if (rsp.HasMember("RenewAble") && !rsp["RenewAble"].IsNull())
    {
        if (!rsp["RenewAble"].IsBool())
        {
            return CoreInternalOutcome(Error("response `RenewAble` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_renewAble = rsp["RenewAble"].GetBool();
        m_renewAbleHasBeenSet = true;
    }

    if (rsp.HasMember("Deployable") && !rsp["Deployable"].IsNull())
    {
        if (!rsp["Deployable"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Deployable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deployable = rsp["Deployable"].GetBool();
        m_deployableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeCertificateDetailResponse::GetOwnerUin() const
{
    return m_ownerUin;
}

bool DescribeCertificateDetailResponse::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string DescribeCertificateDetailResponse::GetProjectId() const
{
    return m_projectId;
}

bool DescribeCertificateDetailResponse::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeCertificateDetailResponse::GetFrom() const
{
    return m_from;
}

bool DescribeCertificateDetailResponse::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string DescribeCertificateDetailResponse::GetCertificateType() const
{
    return m_certificateType;
}

bool DescribeCertificateDetailResponse::CertificateTypeHasBeenSet() const
{
    return m_certificateTypeHasBeenSet;
}

string DescribeCertificateDetailResponse::GetPackageType() const
{
    return m_packageType;
}

bool DescribeCertificateDetailResponse::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string DescribeCertificateDetailResponse::GetProductZhName() const
{
    return m_productZhName;
}

bool DescribeCertificateDetailResponse::ProductZhNameHasBeenSet() const
{
    return m_productZhNameHasBeenSet;
}

string DescribeCertificateDetailResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeCertificateDetailResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeCertificateDetailResponse::GetAlias() const
{
    return m_alias;
}

bool DescribeCertificateDetailResponse::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t DescribeCertificateDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeCertificateDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeCertificateDetailResponse::GetStatusMsg() const
{
    return m_statusMsg;
}

bool DescribeCertificateDetailResponse::StatusMsgHasBeenSet() const
{
    return m_statusMsgHasBeenSet;
}

string DescribeCertificateDetailResponse::GetVerifyType() const
{
    return m_verifyType;
}

bool DescribeCertificateDetailResponse::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}

string DescribeCertificateDetailResponse::GetVulnerabilityStatus() const
{
    return m_vulnerabilityStatus;
}

bool DescribeCertificateDetailResponse::VulnerabilityStatusHasBeenSet() const
{
    return m_vulnerabilityStatusHasBeenSet;
}

string DescribeCertificateDetailResponse::GetCertBeginTime() const
{
    return m_certBeginTime;
}

bool DescribeCertificateDetailResponse::CertBeginTimeHasBeenSet() const
{
    return m_certBeginTimeHasBeenSet;
}

string DescribeCertificateDetailResponse::GetCertEndTime() const
{
    return m_certEndTime;
}

bool DescribeCertificateDetailResponse::CertEndTimeHasBeenSet() const
{
    return m_certEndTimeHasBeenSet;
}

string DescribeCertificateDetailResponse::GetValidityPeriod() const
{
    return m_validityPeriod;
}

bool DescribeCertificateDetailResponse::ValidityPeriodHasBeenSet() const
{
    return m_validityPeriodHasBeenSet;
}

string DescribeCertificateDetailResponse::GetInsertTime() const
{
    return m_insertTime;
}

bool DescribeCertificateDetailResponse::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string DescribeCertificateDetailResponse::GetOrderId() const
{
    return m_orderId;
}

bool DescribeCertificateDetailResponse::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

CertificateExtra DescribeCertificateDetailResponse::GetCertificateExtra() const
{
    return m_certificateExtra;
}

bool DescribeCertificateDetailResponse::CertificateExtraHasBeenSet() const
{
    return m_certificateExtraHasBeenSet;
}

string DescribeCertificateDetailResponse::GetCertificatePrivateKey() const
{
    return m_certificatePrivateKey;
}

bool DescribeCertificateDetailResponse::CertificatePrivateKeyHasBeenSet() const
{
    return m_certificatePrivateKeyHasBeenSet;
}

string DescribeCertificateDetailResponse::GetCertificatePublicKey() const
{
    return m_certificatePublicKey;
}

bool DescribeCertificateDetailResponse::CertificatePublicKeyHasBeenSet() const
{
    return m_certificatePublicKeyHasBeenSet;
}

DvAuthDetail DescribeCertificateDetailResponse::GetDvAuthDetail() const
{
    return m_dvAuthDetail;
}

bool DescribeCertificateDetailResponse::DvAuthDetailHasBeenSet() const
{
    return m_dvAuthDetailHasBeenSet;
}

string DescribeCertificateDetailResponse::GetVulnerabilityReport() const
{
    return m_vulnerabilityReport;
}

bool DescribeCertificateDetailResponse::VulnerabilityReportHasBeenSet() const
{
    return m_vulnerabilityReportHasBeenSet;
}

string DescribeCertificateDetailResponse::GetCertificateId() const
{
    return m_certificateId;
}

bool DescribeCertificateDetailResponse::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string DescribeCertificateDetailResponse::GetTypeName() const
{
    return m_typeName;
}

bool DescribeCertificateDetailResponse::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string DescribeCertificateDetailResponse::GetStatusName() const
{
    return m_statusName;
}

bool DescribeCertificateDetailResponse::StatusNameHasBeenSet() const
{
    return m_statusNameHasBeenSet;
}

vector<string> DescribeCertificateDetailResponse::GetSubjectAltName() const
{
    return m_subjectAltName;
}

bool DescribeCertificateDetailResponse::SubjectAltNameHasBeenSet() const
{
    return m_subjectAltNameHasBeenSet;
}

bool DescribeCertificateDetailResponse::GetIsVip() const
{
    return m_isVip;
}

bool DescribeCertificateDetailResponse::IsVipHasBeenSet() const
{
    return m_isVipHasBeenSet;
}

bool DescribeCertificateDetailResponse::GetIsWildcard() const
{
    return m_isWildcard;
}

bool DescribeCertificateDetailResponse::IsWildcardHasBeenSet() const
{
    return m_isWildcardHasBeenSet;
}

bool DescribeCertificateDetailResponse::GetIsDv() const
{
    return m_isDv;
}

bool DescribeCertificateDetailResponse::IsDvHasBeenSet() const
{
    return m_isDvHasBeenSet;
}

bool DescribeCertificateDetailResponse::GetIsVulnerability() const
{
    return m_isVulnerability;
}

bool DescribeCertificateDetailResponse::IsVulnerabilityHasBeenSet() const
{
    return m_isVulnerabilityHasBeenSet;
}

SubmittedData DescribeCertificateDetailResponse::GetSubmittedData() const
{
    return m_submittedData;
}

bool DescribeCertificateDetailResponse::SubmittedDataHasBeenSet() const
{
    return m_submittedDataHasBeenSet;
}

bool DescribeCertificateDetailResponse::GetRenewAble() const
{
    return m_renewAble;
}

bool DescribeCertificateDetailResponse::RenewAbleHasBeenSet() const
{
    return m_renewAbleHasBeenSet;
}

bool DescribeCertificateDetailResponse::GetDeployable() const
{
    return m_deployable;
}

bool DescribeCertificateDetailResponse::DeployableHasBeenSet() const
{
    return m_deployableHasBeenSet;
}


