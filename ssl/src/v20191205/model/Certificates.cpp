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

#include <tencentcloud/ssl/v20191205/model/Certificates.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

Certificates::Certificates() :
    m_ownerUinHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_certificateTypeHasBeenSet(false),
    m_productZhNameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_certificateExtraHasBeenSet(false),
    m_vulnerabilityStatusHasBeenSet(false),
    m_statusMsgHasBeenSet(false),
    m_verifyTypeHasBeenSet(false),
    m_certBeginTimeHasBeenSet(false),
    m_certEndTimeHasBeenSet(false),
    m_validityPeriodHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_certificateIdHasBeenSet(false),
    m_subjectAltNameHasBeenSet(false),
    m_packageTypeNameHasBeenSet(false),
    m_statusNameHasBeenSet(false),
    m_isVipHasBeenSet(false),
    m_isDvHasBeenSet(false),
    m_isWildcardHasBeenSet(false),
    m_isVulnerabilityHasBeenSet(false),
    m_renewAbleHasBeenSet(false),
    m_projectInfoHasBeenSet(false),
    m_boundResourceHasBeenSet(false),
    m_deployableHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_isIgnoreHasBeenSet(false),
    m_isSMHasBeenSet(false),
    m_encryptAlgorithmHasBeenSet(false),
    m_cAEncryptAlgorithmsHasBeenSet(false),
    m_cAEndTimesHasBeenSet(false),
    m_cACommonNamesHasBeenSet(false),
    m_preAuditInfoHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_hostingStatusHasBeenSet(false),
    m_hostingCompleteTimeHasBeenSet(false),
    m_hostingRenewCertIdHasBeenSet(false)
{
}

CoreInternalOutcome Certificates::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("CertificateType") && !value["CertificateType"].IsNull())
    {
        if (!value["CertificateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.CertificateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateType = string(value["CertificateType"].GetString());
        m_certificateTypeHasBeenSet = true;
    }

    if (value.HasMember("ProductZhName") && !value["ProductZhName"].IsNull())
    {
        if (!value["ProductZhName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.ProductZhName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productZhName = string(value["ProductZhName"].GetString());
        m_productZhNameHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CertificateExtra") && !value["CertificateExtra"].IsNull())
    {
        if (!value["CertificateExtra"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.CertificateExtra` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certificateExtra.Deserialize(value["CertificateExtra"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certificateExtraHasBeenSet = true;
    }

    if (value.HasMember("VulnerabilityStatus") && !value["VulnerabilityStatus"].IsNull())
    {
        if (!value["VulnerabilityStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.VulnerabilityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulnerabilityStatus = string(value["VulnerabilityStatus"].GetString());
        m_vulnerabilityStatusHasBeenSet = true;
    }

    if (value.HasMember("StatusMsg") && !value["StatusMsg"].IsNull())
    {
        if (!value["StatusMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.StatusMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMsg = string(value["StatusMsg"].GetString());
        m_statusMsgHasBeenSet = true;
    }

    if (value.HasMember("VerifyType") && !value["VerifyType"].IsNull())
    {
        if (!value["VerifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.VerifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyType = string(value["VerifyType"].GetString());
        m_verifyTypeHasBeenSet = true;
    }

    if (value.HasMember("CertBeginTime") && !value["CertBeginTime"].IsNull())
    {
        if (!value["CertBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.CertBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certBeginTime = string(value["CertBeginTime"].GetString());
        m_certBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("CertEndTime") && !value["CertEndTime"].IsNull())
    {
        if (!value["CertEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.CertEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certEndTime = string(value["CertEndTime"].GetString());
        m_certEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ValidityPeriod") && !value["ValidityPeriod"].IsNull())
    {
        if (!value["ValidityPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.ValidityPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validityPeriod = string(value["ValidityPeriod"].GetString());
        m_validityPeriodHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("CertificateId") && !value["CertificateId"].IsNull())
    {
        if (!value["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(value["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (value.HasMember("SubjectAltName") && !value["SubjectAltName"].IsNull())
    {
        if (!value["SubjectAltName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Certificates.SubjectAltName` is not array type"));

        const rapidjson::Value &tmpValue = value["SubjectAltName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subjectAltName.push_back((*itr).GetString());
        }
        m_subjectAltNameHasBeenSet = true;
    }

    if (value.HasMember("PackageTypeName") && !value["PackageTypeName"].IsNull())
    {
        if (!value["PackageTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.PackageTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageTypeName = string(value["PackageTypeName"].GetString());
        m_packageTypeNameHasBeenSet = true;
    }

    if (value.HasMember("StatusName") && !value["StatusName"].IsNull())
    {
        if (!value["StatusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.StatusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusName = string(value["StatusName"].GetString());
        m_statusNameHasBeenSet = true;
    }

    if (value.HasMember("IsVip") && !value["IsVip"].IsNull())
    {
        if (!value["IsVip"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.IsVip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVip = value["IsVip"].GetBool();
        m_isVipHasBeenSet = true;
    }

    if (value.HasMember("IsDv") && !value["IsDv"].IsNull())
    {
        if (!value["IsDv"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.IsDv` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDv = value["IsDv"].GetBool();
        m_isDvHasBeenSet = true;
    }

    if (value.HasMember("IsWildcard") && !value["IsWildcard"].IsNull())
    {
        if (!value["IsWildcard"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.IsWildcard` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWildcard = value["IsWildcard"].GetBool();
        m_isWildcardHasBeenSet = true;
    }

    if (value.HasMember("IsVulnerability") && !value["IsVulnerability"].IsNull())
    {
        if (!value["IsVulnerability"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.IsVulnerability` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVulnerability = value["IsVulnerability"].GetBool();
        m_isVulnerabilityHasBeenSet = true;
    }

    if (value.HasMember("RenewAble") && !value["RenewAble"].IsNull())
    {
        if (!value["RenewAble"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.RenewAble` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_renewAble = value["RenewAble"].GetBool();
        m_renewAbleHasBeenSet = true;
    }

    if (value.HasMember("ProjectInfo") && !value["ProjectInfo"].IsNull())
    {
        if (!value["ProjectInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.ProjectInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_projectInfo.Deserialize(value["ProjectInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_projectInfoHasBeenSet = true;
    }

    if (value.HasMember("BoundResource") && !value["BoundResource"].IsNull())
    {
        if (!value["BoundResource"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Certificates.BoundResource` is not array type"));

        const rapidjson::Value &tmpValue = value["BoundResource"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_boundResource.push_back((*itr).GetString());
        }
        m_boundResourceHasBeenSet = true;
    }

    if (value.HasMember("Deployable") && !value["Deployable"].IsNull())
    {
        if (!value["Deployable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.Deployable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deployable = value["Deployable"].GetBool();
        m_deployableHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Certificates.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
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

    if (value.HasMember("IsIgnore") && !value["IsIgnore"].IsNull())
    {
        if (!value["IsIgnore"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.IsIgnore` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isIgnore = value["IsIgnore"].GetBool();
        m_isIgnoreHasBeenSet = true;
    }

    if (value.HasMember("IsSM") && !value["IsSM"].IsNull())
    {
        if (!value["IsSM"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.IsSM` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSM = value["IsSM"].GetBool();
        m_isSMHasBeenSet = true;
    }

    if (value.HasMember("EncryptAlgorithm") && !value["EncryptAlgorithm"].IsNull())
    {
        if (!value["EncryptAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.EncryptAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptAlgorithm = string(value["EncryptAlgorithm"].GetString());
        m_encryptAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("CAEncryptAlgorithms") && !value["CAEncryptAlgorithms"].IsNull())
    {
        if (!value["CAEncryptAlgorithms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Certificates.CAEncryptAlgorithms` is not array type"));

        const rapidjson::Value &tmpValue = value["CAEncryptAlgorithms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cAEncryptAlgorithms.push_back((*itr).GetString());
        }
        m_cAEncryptAlgorithmsHasBeenSet = true;
    }

    if (value.HasMember("CAEndTimes") && !value["CAEndTimes"].IsNull())
    {
        if (!value["CAEndTimes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Certificates.CAEndTimes` is not array type"));

        const rapidjson::Value &tmpValue = value["CAEndTimes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cAEndTimes.push_back((*itr).GetString());
        }
        m_cAEndTimesHasBeenSet = true;
    }

    if (value.HasMember("CACommonNames") && !value["CACommonNames"].IsNull())
    {
        if (!value["CACommonNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Certificates.CACommonNames` is not array type"));

        const rapidjson::Value &tmpValue = value["CACommonNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cACommonNames.push_back((*itr).GetString());
        }
        m_cACommonNamesHasBeenSet = true;
    }

    if (value.HasMember("PreAuditInfo") && !value["PreAuditInfo"].IsNull())
    {
        if (!value["PreAuditInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.PreAuditInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_preAuditInfo.Deserialize(value["PreAuditInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_preAuditInfoHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("HostingStatus") && !value["HostingStatus"].IsNull())
    {
        if (!value["HostingStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.HostingStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostingStatus = value["HostingStatus"].GetInt64();
        m_hostingStatusHasBeenSet = true;
    }

    if (value.HasMember("HostingCompleteTime") && !value["HostingCompleteTime"].IsNull())
    {
        if (!value["HostingCompleteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.HostingCompleteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostingCompleteTime = string(value["HostingCompleteTime"].GetString());
        m_hostingCompleteTimeHasBeenSet = true;
    }

    if (value.HasMember("HostingRenewCertId") && !value["HostingRenewCertId"].IsNull())
    {
        if (!value["HostingRenewCertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificates.HostingRenewCertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostingRenewCertId = string(value["HostingRenewCertId"].GetString());
        m_hostingRenewCertIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Certificates::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateType.c_str(), allocator).Move(), allocator);
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

    if (m_certificateExtraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateExtra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certificateExtra.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
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

    if (m_packageTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageTypeName.c_str(), allocator).Move(), allocator);
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

    if (m_renewAbleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewAble";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewAble, allocator);
    }

    if (m_projectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_projectInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_boundResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_boundResource.begin(); itr != m_boundResource.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_isIgnoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIgnore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIgnore, allocator);
    }

    if (m_isSMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSM, allocator);
    }

    if (m_encryptAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_cAEncryptAlgorithmsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CAEncryptAlgorithms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cAEncryptAlgorithms.begin(); itr != m_cAEncryptAlgorithms.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cAEndTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CAEndTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cAEndTimes.begin(); itr != m_cAEndTimes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cACommonNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CACommonNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cACommonNames.begin(); itr != m_cACommonNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_preAuditInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreAuditInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_preAuditInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_hostingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostingStatus, allocator);
    }

    if (m_hostingCompleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostingCompleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostingCompleteTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hostingRenewCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostingRenewCertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostingRenewCertId.c_str(), allocator).Move(), allocator);
    }

}


string Certificates::GetOwnerUin() const
{
    return m_ownerUin;
}

void Certificates::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool Certificates::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string Certificates::GetProjectId() const
{
    return m_projectId;
}

void Certificates::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Certificates::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Certificates::GetFrom() const
{
    return m_from;
}

void Certificates::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool Certificates::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string Certificates::GetPackageType() const
{
    return m_packageType;
}

void Certificates::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool Certificates::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string Certificates::GetCertificateType() const
{
    return m_certificateType;
}

void Certificates::SetCertificateType(const string& _certificateType)
{
    m_certificateType = _certificateType;
    m_certificateTypeHasBeenSet = true;
}

bool Certificates::CertificateTypeHasBeenSet() const
{
    return m_certificateTypeHasBeenSet;
}

string Certificates::GetProductZhName() const
{
    return m_productZhName;
}

void Certificates::SetProductZhName(const string& _productZhName)
{
    m_productZhName = _productZhName;
    m_productZhNameHasBeenSet = true;
}

bool Certificates::ProductZhNameHasBeenSet() const
{
    return m_productZhNameHasBeenSet;
}

string Certificates::GetDomain() const
{
    return m_domain;
}

void Certificates::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool Certificates::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string Certificates::GetAlias() const
{
    return m_alias;
}

void Certificates::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool Certificates::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

uint64_t Certificates::GetStatus() const
{
    return m_status;
}

void Certificates::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Certificates::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

CertificateExtra Certificates::GetCertificateExtra() const
{
    return m_certificateExtra;
}

void Certificates::SetCertificateExtra(const CertificateExtra& _certificateExtra)
{
    m_certificateExtra = _certificateExtra;
    m_certificateExtraHasBeenSet = true;
}

bool Certificates::CertificateExtraHasBeenSet() const
{
    return m_certificateExtraHasBeenSet;
}

string Certificates::GetVulnerabilityStatus() const
{
    return m_vulnerabilityStatus;
}

void Certificates::SetVulnerabilityStatus(const string& _vulnerabilityStatus)
{
    m_vulnerabilityStatus = _vulnerabilityStatus;
    m_vulnerabilityStatusHasBeenSet = true;
}

bool Certificates::VulnerabilityStatusHasBeenSet() const
{
    return m_vulnerabilityStatusHasBeenSet;
}

string Certificates::GetStatusMsg() const
{
    return m_statusMsg;
}

void Certificates::SetStatusMsg(const string& _statusMsg)
{
    m_statusMsg = _statusMsg;
    m_statusMsgHasBeenSet = true;
}

bool Certificates::StatusMsgHasBeenSet() const
{
    return m_statusMsgHasBeenSet;
}

string Certificates::GetVerifyType() const
{
    return m_verifyType;
}

void Certificates::SetVerifyType(const string& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool Certificates::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}

string Certificates::GetCertBeginTime() const
{
    return m_certBeginTime;
}

void Certificates::SetCertBeginTime(const string& _certBeginTime)
{
    m_certBeginTime = _certBeginTime;
    m_certBeginTimeHasBeenSet = true;
}

bool Certificates::CertBeginTimeHasBeenSet() const
{
    return m_certBeginTimeHasBeenSet;
}

string Certificates::GetCertEndTime() const
{
    return m_certEndTime;
}

void Certificates::SetCertEndTime(const string& _certEndTime)
{
    m_certEndTime = _certEndTime;
    m_certEndTimeHasBeenSet = true;
}

bool Certificates::CertEndTimeHasBeenSet() const
{
    return m_certEndTimeHasBeenSet;
}

string Certificates::GetValidityPeriod() const
{
    return m_validityPeriod;
}

void Certificates::SetValidityPeriod(const string& _validityPeriod)
{
    m_validityPeriod = _validityPeriod;
    m_validityPeriodHasBeenSet = true;
}

bool Certificates::ValidityPeriodHasBeenSet() const
{
    return m_validityPeriodHasBeenSet;
}

string Certificates::GetInsertTime() const
{
    return m_insertTime;
}

void Certificates::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool Certificates::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string Certificates::GetCertificateId() const
{
    return m_certificateId;
}

void Certificates::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool Certificates::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

vector<string> Certificates::GetSubjectAltName() const
{
    return m_subjectAltName;
}

void Certificates::SetSubjectAltName(const vector<string>& _subjectAltName)
{
    m_subjectAltName = _subjectAltName;
    m_subjectAltNameHasBeenSet = true;
}

bool Certificates::SubjectAltNameHasBeenSet() const
{
    return m_subjectAltNameHasBeenSet;
}

string Certificates::GetPackageTypeName() const
{
    return m_packageTypeName;
}

void Certificates::SetPackageTypeName(const string& _packageTypeName)
{
    m_packageTypeName = _packageTypeName;
    m_packageTypeNameHasBeenSet = true;
}

bool Certificates::PackageTypeNameHasBeenSet() const
{
    return m_packageTypeNameHasBeenSet;
}

string Certificates::GetStatusName() const
{
    return m_statusName;
}

void Certificates::SetStatusName(const string& _statusName)
{
    m_statusName = _statusName;
    m_statusNameHasBeenSet = true;
}

bool Certificates::StatusNameHasBeenSet() const
{
    return m_statusNameHasBeenSet;
}

bool Certificates::GetIsVip() const
{
    return m_isVip;
}

void Certificates::SetIsVip(const bool& _isVip)
{
    m_isVip = _isVip;
    m_isVipHasBeenSet = true;
}

bool Certificates::IsVipHasBeenSet() const
{
    return m_isVipHasBeenSet;
}

bool Certificates::GetIsDv() const
{
    return m_isDv;
}

void Certificates::SetIsDv(const bool& _isDv)
{
    m_isDv = _isDv;
    m_isDvHasBeenSet = true;
}

bool Certificates::IsDvHasBeenSet() const
{
    return m_isDvHasBeenSet;
}

bool Certificates::GetIsWildcard() const
{
    return m_isWildcard;
}

void Certificates::SetIsWildcard(const bool& _isWildcard)
{
    m_isWildcard = _isWildcard;
    m_isWildcardHasBeenSet = true;
}

bool Certificates::IsWildcardHasBeenSet() const
{
    return m_isWildcardHasBeenSet;
}

bool Certificates::GetIsVulnerability() const
{
    return m_isVulnerability;
}

void Certificates::SetIsVulnerability(const bool& _isVulnerability)
{
    m_isVulnerability = _isVulnerability;
    m_isVulnerabilityHasBeenSet = true;
}

bool Certificates::IsVulnerabilityHasBeenSet() const
{
    return m_isVulnerabilityHasBeenSet;
}

bool Certificates::GetRenewAble() const
{
    return m_renewAble;
}

void Certificates::SetRenewAble(const bool& _renewAble)
{
    m_renewAble = _renewAble;
    m_renewAbleHasBeenSet = true;
}

bool Certificates::RenewAbleHasBeenSet() const
{
    return m_renewAbleHasBeenSet;
}

ProjectInfo Certificates::GetProjectInfo() const
{
    return m_projectInfo;
}

void Certificates::SetProjectInfo(const ProjectInfo& _projectInfo)
{
    m_projectInfo = _projectInfo;
    m_projectInfoHasBeenSet = true;
}

bool Certificates::ProjectInfoHasBeenSet() const
{
    return m_projectInfoHasBeenSet;
}

vector<string> Certificates::GetBoundResource() const
{
    return m_boundResource;
}

void Certificates::SetBoundResource(const vector<string>& _boundResource)
{
    m_boundResource = _boundResource;
    m_boundResourceHasBeenSet = true;
}

bool Certificates::BoundResourceHasBeenSet() const
{
    return m_boundResourceHasBeenSet;
}

bool Certificates::GetDeployable() const
{
    return m_deployable;
}

void Certificates::SetDeployable(const bool& _deployable)
{
    m_deployable = _deployable;
    m_deployableHasBeenSet = true;
}

bool Certificates::DeployableHasBeenSet() const
{
    return m_deployableHasBeenSet;
}

vector<Tags> Certificates::GetTags() const
{
    return m_tags;
}

void Certificates::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Certificates::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool Certificates::GetIsIgnore() const
{
    return m_isIgnore;
}

void Certificates::SetIsIgnore(const bool& _isIgnore)
{
    m_isIgnore = _isIgnore;
    m_isIgnoreHasBeenSet = true;
}

bool Certificates::IsIgnoreHasBeenSet() const
{
    return m_isIgnoreHasBeenSet;
}

bool Certificates::GetIsSM() const
{
    return m_isSM;
}

void Certificates::SetIsSM(const bool& _isSM)
{
    m_isSM = _isSM;
    m_isSMHasBeenSet = true;
}

bool Certificates::IsSMHasBeenSet() const
{
    return m_isSMHasBeenSet;
}

string Certificates::GetEncryptAlgorithm() const
{
    return m_encryptAlgorithm;
}

void Certificates::SetEncryptAlgorithm(const string& _encryptAlgorithm)
{
    m_encryptAlgorithm = _encryptAlgorithm;
    m_encryptAlgorithmHasBeenSet = true;
}

bool Certificates::EncryptAlgorithmHasBeenSet() const
{
    return m_encryptAlgorithmHasBeenSet;
}

vector<string> Certificates::GetCAEncryptAlgorithms() const
{
    return m_cAEncryptAlgorithms;
}

void Certificates::SetCAEncryptAlgorithms(const vector<string>& _cAEncryptAlgorithms)
{
    m_cAEncryptAlgorithms = _cAEncryptAlgorithms;
    m_cAEncryptAlgorithmsHasBeenSet = true;
}

bool Certificates::CAEncryptAlgorithmsHasBeenSet() const
{
    return m_cAEncryptAlgorithmsHasBeenSet;
}

vector<string> Certificates::GetCAEndTimes() const
{
    return m_cAEndTimes;
}

void Certificates::SetCAEndTimes(const vector<string>& _cAEndTimes)
{
    m_cAEndTimes = _cAEndTimes;
    m_cAEndTimesHasBeenSet = true;
}

bool Certificates::CAEndTimesHasBeenSet() const
{
    return m_cAEndTimesHasBeenSet;
}

vector<string> Certificates::GetCACommonNames() const
{
    return m_cACommonNames;
}

void Certificates::SetCACommonNames(const vector<string>& _cACommonNames)
{
    m_cACommonNames = _cACommonNames;
    m_cACommonNamesHasBeenSet = true;
}

bool Certificates::CACommonNamesHasBeenSet() const
{
    return m_cACommonNamesHasBeenSet;
}

PreAuditInfo Certificates::GetPreAuditInfo() const
{
    return m_preAuditInfo;
}

void Certificates::SetPreAuditInfo(const PreAuditInfo& _preAuditInfo)
{
    m_preAuditInfo = _preAuditInfo;
    m_preAuditInfoHasBeenSet = true;
}

bool Certificates::PreAuditInfoHasBeenSet() const
{
    return m_preAuditInfoHasBeenSet;
}

int64_t Certificates::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void Certificates::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool Certificates::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t Certificates::GetHostingStatus() const
{
    return m_hostingStatus;
}

void Certificates::SetHostingStatus(const int64_t& _hostingStatus)
{
    m_hostingStatus = _hostingStatus;
    m_hostingStatusHasBeenSet = true;
}

bool Certificates::HostingStatusHasBeenSet() const
{
    return m_hostingStatusHasBeenSet;
}

string Certificates::GetHostingCompleteTime() const
{
    return m_hostingCompleteTime;
}

void Certificates::SetHostingCompleteTime(const string& _hostingCompleteTime)
{
    m_hostingCompleteTime = _hostingCompleteTime;
    m_hostingCompleteTimeHasBeenSet = true;
}

bool Certificates::HostingCompleteTimeHasBeenSet() const
{
    return m_hostingCompleteTimeHasBeenSet;
}

string Certificates::GetHostingRenewCertId() const
{
    return m_hostingRenewCertId;
}

void Certificates::SetHostingRenewCertId(const string& _hostingRenewCertId)
{
    m_hostingRenewCertId = _hostingRenewCertId;
    m_hostingRenewCertIdHasBeenSet = true;
}

bool Certificates::HostingRenewCertIdHasBeenSet() const
{
    return m_hostingRenewCertIdHasBeenSet;
}

