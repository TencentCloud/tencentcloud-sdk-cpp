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

#include <tencentcloud/gaap/v20180529/model/CertificateDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CertificateDetail::CertificateDetail() :
    m_certificateIdHasBeenSet(false),
    m_certificateTypeHasBeenSet(false),
    m_certificateAliasHasBeenSet(false),
    m_certificateContentHasBeenSet(false),
    m_certificateKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_issuerCNHasBeenSet(false),
    m_subjectCNHasBeenSet(false)
{
}

CoreInternalOutcome CertificateDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertificateId") && !value["CertificateId"].IsNull())
    {
        if (!value["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateDetail.CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(value["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (value.HasMember("CertificateType") && !value["CertificateType"].IsNull())
    {
        if (!value["CertificateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateDetail.CertificateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certificateType = value["CertificateType"].GetInt64();
        m_certificateTypeHasBeenSet = true;
    }

    if (value.HasMember("CertificateAlias") && !value["CertificateAlias"].IsNull())
    {
        if (!value["CertificateAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateDetail.CertificateAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateAlias = string(value["CertificateAlias"].GetString());
        m_certificateAliasHasBeenSet = true;
    }

    if (value.HasMember("CertificateContent") && !value["CertificateContent"].IsNull())
    {
        if (!value["CertificateContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateDetail.CertificateContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateContent = string(value["CertificateContent"].GetString());
        m_certificateContentHasBeenSet = true;
    }

    if (value.HasMember("CertificateKey") && !value["CertificateKey"].IsNull())
    {
        if (!value["CertificateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateDetail.CertificateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateKey = string(value["CertificateKey"].GetString());
        m_certificateKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateDetail.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateDetail.BeginTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = value["BeginTime"].GetUint64();
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateDetail.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("IssuerCN") && !value["IssuerCN"].IsNull())
    {
        if (!value["IssuerCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateDetail.IssuerCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuerCN = string(value["IssuerCN"].GetString());
        m_issuerCNHasBeenSet = true;
    }

    if (value.HasMember("SubjectCN") && !value["SubjectCN"].IsNull())
    {
        if (!value["SubjectCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateDetail.SubjectCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectCN = string(value["SubjectCN"].GetString());
        m_subjectCNHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertificateDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certificateType, allocator);
    }

    if (m_certificateAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateContent.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_issuerCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuerCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuerCN.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectCN.c_str(), allocator).Move(), allocator);
    }

}


string CertificateDetail::GetCertificateId() const
{
    return m_certificateId;
}

void CertificateDetail::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool CertificateDetail::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

int64_t CertificateDetail::GetCertificateType() const
{
    return m_certificateType;
}

void CertificateDetail::SetCertificateType(const int64_t& _certificateType)
{
    m_certificateType = _certificateType;
    m_certificateTypeHasBeenSet = true;
}

bool CertificateDetail::CertificateTypeHasBeenSet() const
{
    return m_certificateTypeHasBeenSet;
}

string CertificateDetail::GetCertificateAlias() const
{
    return m_certificateAlias;
}

void CertificateDetail::SetCertificateAlias(const string& _certificateAlias)
{
    m_certificateAlias = _certificateAlias;
    m_certificateAliasHasBeenSet = true;
}

bool CertificateDetail::CertificateAliasHasBeenSet() const
{
    return m_certificateAliasHasBeenSet;
}

string CertificateDetail::GetCertificateContent() const
{
    return m_certificateContent;
}

void CertificateDetail::SetCertificateContent(const string& _certificateContent)
{
    m_certificateContent = _certificateContent;
    m_certificateContentHasBeenSet = true;
}

bool CertificateDetail::CertificateContentHasBeenSet() const
{
    return m_certificateContentHasBeenSet;
}

string CertificateDetail::GetCertificateKey() const
{
    return m_certificateKey;
}

void CertificateDetail::SetCertificateKey(const string& _certificateKey)
{
    m_certificateKey = _certificateKey;
    m_certificateKeyHasBeenSet = true;
}

bool CertificateDetail::CertificateKeyHasBeenSet() const
{
    return m_certificateKeyHasBeenSet;
}

uint64_t CertificateDetail::GetCreateTime() const
{
    return m_createTime;
}

void CertificateDetail::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CertificateDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t CertificateDetail::GetBeginTime() const
{
    return m_beginTime;
}

void CertificateDetail::SetBeginTime(const uint64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool CertificateDetail::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

uint64_t CertificateDetail::GetEndTime() const
{
    return m_endTime;
}

void CertificateDetail::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CertificateDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CertificateDetail::GetIssuerCN() const
{
    return m_issuerCN;
}

void CertificateDetail::SetIssuerCN(const string& _issuerCN)
{
    m_issuerCN = _issuerCN;
    m_issuerCNHasBeenSet = true;
}

bool CertificateDetail::IssuerCNHasBeenSet() const
{
    return m_issuerCNHasBeenSet;
}

string CertificateDetail::GetSubjectCN() const
{
    return m_subjectCN;
}

void CertificateDetail::SetSubjectCN(const string& _subjectCN)
{
    m_subjectCN = _subjectCN;
    m_subjectCNHasBeenSet = true;
}

bool CertificateDetail::SubjectCNHasBeenSet() const
{
    return m_subjectCNHasBeenSet;
}

