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
    m_deployableHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_rootCertHasBeenSet(false),
    m_encryptCertHasBeenSet(false),
    m_encryptPrivateKeyHasBeenSet(false),
    m_certFingerprintHasBeenSet(false),
    m_encryptCertFingerprintHasBeenSet(false),
    m_encryptAlgorithmHasBeenSet(false),
    m_dvRevokeAuthDetailHasBeenSet(false),
    m_certChainInfoHasBeenSet(false),
    m_domainTypeHasBeenSet(false),
    m_certTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCertificateDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OwnerUin") && !rsp["OwnerUin"].IsNull())
    {
        if (!rsp["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(rsp["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectId") && !rsp["ProjectId"].IsNull())
    {
        if (!rsp["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(rsp["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (rsp.HasMember("From") && !rsp["From"].IsNull())
    {
        if (!rsp["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(rsp["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (rsp.HasMember("CertificateType") && !rsp["CertificateType"].IsNull())
    {
        if (!rsp["CertificateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateType = string(rsp["CertificateType"].GetString());
        m_certificateTypeHasBeenSet = true;
    }

    if (rsp.HasMember("PackageType") && !rsp["PackageType"].IsNull())
    {
        if (!rsp["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(rsp["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ProductZhName") && !rsp["ProductZhName"].IsNull())
    {
        if (!rsp["ProductZhName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductZhName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productZhName = string(rsp["ProductZhName"].GetString());
        m_productZhNameHasBeenSet = true;
    }

    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (rsp.HasMember("Alias") && !rsp["Alias"].IsNull())
    {
        if (!rsp["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(rsp["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("StatusMsg") && !rsp["StatusMsg"].IsNull())
    {
        if (!rsp["StatusMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMsg = string(rsp["StatusMsg"].GetString());
        m_statusMsgHasBeenSet = true;
    }

    if (rsp.HasMember("VerifyType") && !rsp["VerifyType"].IsNull())
    {
        if (!rsp["VerifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VerifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyType = string(rsp["VerifyType"].GetString());
        m_verifyTypeHasBeenSet = true;
    }

    if (rsp.HasMember("VulnerabilityStatus") && !rsp["VulnerabilityStatus"].IsNull())
    {
        if (!rsp["VulnerabilityStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulnerabilityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulnerabilityStatus = string(rsp["VulnerabilityStatus"].GetString());
        m_vulnerabilityStatusHasBeenSet = true;
    }

    if (rsp.HasMember("CertBeginTime") && !rsp["CertBeginTime"].IsNull())
    {
        if (!rsp["CertBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certBeginTime = string(rsp["CertBeginTime"].GetString());
        m_certBeginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CertEndTime") && !rsp["CertEndTime"].IsNull())
    {
        if (!rsp["CertEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certEndTime = string(rsp["CertEndTime"].GetString());
        m_certEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ValidityPeriod") && !rsp["ValidityPeriod"].IsNull())
    {
        if (!rsp["ValidityPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValidityPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validityPeriod = string(rsp["ValidityPeriod"].GetString());
        m_validityPeriodHasBeenSet = true;
    }

    if (rsp.HasMember("InsertTime") && !rsp["InsertTime"].IsNull())
    {
        if (!rsp["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(rsp["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (rsp.HasMember("OrderId") && !rsp["OrderId"].IsNull())
    {
        if (!rsp["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(rsp["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (rsp.HasMember("CertificateExtra") && !rsp["CertificateExtra"].IsNull())
    {
        if (!rsp["CertificateExtra"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateExtra` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `CertificatePrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificatePrivateKey = string(rsp["CertificatePrivateKey"].GetString());
        m_certificatePrivateKeyHasBeenSet = true;
    }

    if (rsp.HasMember("CertificatePublicKey") && !rsp["CertificatePublicKey"].IsNull())
    {
        if (!rsp["CertificatePublicKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificatePublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificatePublicKey = string(rsp["CertificatePublicKey"].GetString());
        m_certificatePublicKeyHasBeenSet = true;
    }

    if (rsp.HasMember("DvAuthDetail") && !rsp["DvAuthDetail"].IsNull())
    {
        if (!rsp["DvAuthDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DvAuthDetail` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `VulnerabilityReport` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulnerabilityReport = string(rsp["VulnerabilityReport"].GetString());
        m_vulnerabilityReportHasBeenSet = true;
    }

    if (rsp.HasMember("CertificateId") && !rsp["CertificateId"].IsNull())
    {
        if (!rsp["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(rsp["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (rsp.HasMember("TypeName") && !rsp["TypeName"].IsNull())
    {
        if (!rsp["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(rsp["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (rsp.HasMember("StatusName") && !rsp["StatusName"].IsNull())
    {
        if (!rsp["StatusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusName = string(rsp["StatusName"].GetString());
        m_statusNameHasBeenSet = true;
    }

    if (rsp.HasMember("SubjectAltName") && !rsp["SubjectAltName"].IsNull())
    {
        if (!rsp["SubjectAltName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubjectAltName` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SubjectAltName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subjectAltName.push_back((*itr).GetString());
        }
        m_subjectAltNameHasBeenSet = true;
    }

    if (rsp.HasMember("IsVip") && !rsp["IsVip"].IsNull())
    {
        if (!rsp["IsVip"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsVip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVip = rsp["IsVip"].GetBool();
        m_isVipHasBeenSet = true;
    }

    if (rsp.HasMember("IsWildcard") && !rsp["IsWildcard"].IsNull())
    {
        if (!rsp["IsWildcard"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsWildcard` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWildcard = rsp["IsWildcard"].GetBool();
        m_isWildcardHasBeenSet = true;
    }

    if (rsp.HasMember("IsDv") && !rsp["IsDv"].IsNull())
    {
        if (!rsp["IsDv"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsDv` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDv = rsp["IsDv"].GetBool();
        m_isDvHasBeenSet = true;
    }

    if (rsp.HasMember("IsVulnerability") && !rsp["IsVulnerability"].IsNull())
    {
        if (!rsp["IsVulnerability"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsVulnerability` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVulnerability = rsp["IsVulnerability"].GetBool();
        m_isVulnerabilityHasBeenSet = true;
    }

    if (rsp.HasMember("SubmittedData") && !rsp["SubmittedData"].IsNull())
    {
        if (!rsp["SubmittedData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RenewAble` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_renewAble = rsp["RenewAble"].GetBool();
        m_renewAbleHasBeenSet = true;
    }

    if (rsp.HasMember("Deployable") && !rsp["Deployable"].IsNull())
    {
        if (!rsp["Deployable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Deployable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deployable = rsp["Deployable"].GetBool();
        m_deployableHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tags item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("RootCert") && !rsp["RootCert"].IsNull())
    {
        if (!rsp["RootCert"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RootCert` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rootCert.Deserialize(rsp["RootCert"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rootCertHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptCert") && !rsp["EncryptCert"].IsNull())
    {
        if (!rsp["EncryptCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptCert = string(rsp["EncryptCert"].GetString());
        m_encryptCertHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptPrivateKey") && !rsp["EncryptPrivateKey"].IsNull())
    {
        if (!rsp["EncryptPrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptPrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptPrivateKey = string(rsp["EncryptPrivateKey"].GetString());
        m_encryptPrivateKeyHasBeenSet = true;
    }

    if (rsp.HasMember("CertFingerprint") && !rsp["CertFingerprint"].IsNull())
    {
        if (!rsp["CertFingerprint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertFingerprint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certFingerprint = string(rsp["CertFingerprint"].GetString());
        m_certFingerprintHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptCertFingerprint") && !rsp["EncryptCertFingerprint"].IsNull())
    {
        if (!rsp["EncryptCertFingerprint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptCertFingerprint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptCertFingerprint = string(rsp["EncryptCertFingerprint"].GetString());
        m_encryptCertFingerprintHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptAlgorithm") && !rsp["EncryptAlgorithm"].IsNull())
    {
        if (!rsp["EncryptAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptAlgorithm = string(rsp["EncryptAlgorithm"].GetString());
        m_encryptAlgorithmHasBeenSet = true;
    }

    if (rsp.HasMember("DvRevokeAuthDetail") && !rsp["DvRevokeAuthDetail"].IsNull())
    {
        if (!rsp["DvRevokeAuthDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DvRevokeAuthDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DvRevokeAuthDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DvAuths item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dvRevokeAuthDetail.push_back(item);
        }
        m_dvRevokeAuthDetailHasBeenSet = true;
    }

    if (rsp.HasMember("CertChainInfo") && !rsp["CertChainInfo"].IsNull())
    {
        if (!rsp["CertChainInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CertChainInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CertChainInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CertBasicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_certChainInfo.push_back(item);
        }
        m_certChainInfoHasBeenSet = true;
    }

    if (rsp.HasMember("DomainType") && !rsp["DomainType"].IsNull())
    {
        if (!rsp["DomainType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainType = rsp["DomainType"].GetUint64();
        m_domainTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CertType") && !rsp["CertType"].IsNull())
    {
        if (!rsp["CertType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certType = string(rsp["CertType"].GetString());
        m_certTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCertificateDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_certificateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
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

    if (m_vulnerabilityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulnerabilityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulnerabilityStatus.c_str(), allocator).Move(), allocator);
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

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateExtraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateExtra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certificateExtra.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_certificatePrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificatePrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificatePrivateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_certificatePublicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificatePublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificatePublicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_dvAuthDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DvAuthDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dvAuthDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vulnerabilityReportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulnerabilityReport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulnerabilityReport.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
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

    if (m_isVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVip, allocator);
    }

    if (m_isWildcardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWildcard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWildcard, allocator);
    }

    if (m_isDvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDv, allocator);
    }

    if (m_isVulnerabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVulnerability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVulnerability, allocator);
    }

    if (m_submittedDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmittedData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_submittedData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_renewAbleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewAble";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewAble, allocator);
    }

    if (m_deployableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deployable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployable, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rootCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rootCert.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_encryptCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptCert.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptPrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptPrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptPrivateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_certFingerprintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertFingerprint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certFingerprint.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptCertFingerprintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptCertFingerprint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptCertFingerprint.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_dvRevokeAuthDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DvRevokeAuthDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dvRevokeAuthDetail.begin(); itr != m_dvRevokeAuthDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_certChainInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertChainInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_certChainInfo.begin(); itr != m_certChainInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_domainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainType, allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certType.c_str(), allocator).Move(), allocator);
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

vector<Tags> DescribeCertificateDetailResponse::GetTags() const
{
    return m_tags;
}

bool DescribeCertificateDetailResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

RootCertificates DescribeCertificateDetailResponse::GetRootCert() const
{
    return m_rootCert;
}

bool DescribeCertificateDetailResponse::RootCertHasBeenSet() const
{
    return m_rootCertHasBeenSet;
}

string DescribeCertificateDetailResponse::GetEncryptCert() const
{
    return m_encryptCert;
}

bool DescribeCertificateDetailResponse::EncryptCertHasBeenSet() const
{
    return m_encryptCertHasBeenSet;
}

string DescribeCertificateDetailResponse::GetEncryptPrivateKey() const
{
    return m_encryptPrivateKey;
}

bool DescribeCertificateDetailResponse::EncryptPrivateKeyHasBeenSet() const
{
    return m_encryptPrivateKeyHasBeenSet;
}

string DescribeCertificateDetailResponse::GetCertFingerprint() const
{
    return m_certFingerprint;
}

bool DescribeCertificateDetailResponse::CertFingerprintHasBeenSet() const
{
    return m_certFingerprintHasBeenSet;
}

string DescribeCertificateDetailResponse::GetEncryptCertFingerprint() const
{
    return m_encryptCertFingerprint;
}

bool DescribeCertificateDetailResponse::EncryptCertFingerprintHasBeenSet() const
{
    return m_encryptCertFingerprintHasBeenSet;
}

string DescribeCertificateDetailResponse::GetEncryptAlgorithm() const
{
    return m_encryptAlgorithm;
}

bool DescribeCertificateDetailResponse::EncryptAlgorithmHasBeenSet() const
{
    return m_encryptAlgorithmHasBeenSet;
}

vector<DvAuths> DescribeCertificateDetailResponse::GetDvRevokeAuthDetail() const
{
    return m_dvRevokeAuthDetail;
}

bool DescribeCertificateDetailResponse::DvRevokeAuthDetailHasBeenSet() const
{
    return m_dvRevokeAuthDetailHasBeenSet;
}

vector<CertBasicInfo> DescribeCertificateDetailResponse::GetCertChainInfo() const
{
    return m_certChainInfo;
}

bool DescribeCertificateDetailResponse::CertChainInfoHasBeenSet() const
{
    return m_certChainInfoHasBeenSet;
}

uint64_t DescribeCertificateDetailResponse::GetDomainType() const
{
    return m_domainType;
}

bool DescribeCertificateDetailResponse::DomainTypeHasBeenSet() const
{
    return m_domainTypeHasBeenSet;
}

string DescribeCertificateDetailResponse::GetCertType() const
{
    return m_certType;
}

bool DescribeCertificateDetailResponse::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}


