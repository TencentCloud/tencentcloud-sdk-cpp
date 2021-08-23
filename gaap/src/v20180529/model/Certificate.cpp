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

#include <tencentcloud/gaap/v20180529/model/Certificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

Certificate::Certificate() :
    m_certificateIdHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_certificateTypeHasBeenSet(false),
    m_certificateAliasHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_issuerCNHasBeenSet(false),
    m_subjectCNHasBeenSet(false)
{
}

CoreInternalOutcome Certificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertificateId") && !value["CertificateId"].IsNull())
    {
        if (!value["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificate.CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(value["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (value.HasMember("CertificateName") && !value["CertificateName"].IsNull())
    {
        if (!value["CertificateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificate.CertificateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateName = string(value["CertificateName"].GetString());
        m_certificateNameHasBeenSet = true;
    }

    if (value.HasMember("CertificateType") && !value["CertificateType"].IsNull())
    {
        if (!value["CertificateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Certificate.CertificateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certificateType = value["CertificateType"].GetInt64();
        m_certificateTypeHasBeenSet = true;
    }

    if (value.HasMember("CertificateAlias") && !value["CertificateAlias"].IsNull())
    {
        if (!value["CertificateAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificate.CertificateAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateAlias = string(value["CertificateAlias"].GetString());
        m_certificateAliasHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Certificate.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Certificate.BeginTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = value["BeginTime"].GetUint64();
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Certificate.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("IssuerCN") && !value["IssuerCN"].IsNull())
    {
        if (!value["IssuerCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificate.IssuerCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuerCN = string(value["IssuerCN"].GetString());
        m_issuerCNHasBeenSet = true;
    }

    if (value.HasMember("SubjectCN") && !value["SubjectCN"].IsNull())
    {
        if (!value["SubjectCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Certificate.SubjectCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectCN = string(value["SubjectCN"].GetString());
        m_subjectCNHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Certificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateName.c_str(), allocator).Move(), allocator);
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


string Certificate::GetCertificateId() const
{
    return m_certificateId;
}

void Certificate::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool Certificate::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string Certificate::GetCertificateName() const
{
    return m_certificateName;
}

void Certificate::SetCertificateName(const string& _certificateName)
{
    m_certificateName = _certificateName;
    m_certificateNameHasBeenSet = true;
}

bool Certificate::CertificateNameHasBeenSet() const
{
    return m_certificateNameHasBeenSet;
}

int64_t Certificate::GetCertificateType() const
{
    return m_certificateType;
}

void Certificate::SetCertificateType(const int64_t& _certificateType)
{
    m_certificateType = _certificateType;
    m_certificateTypeHasBeenSet = true;
}

bool Certificate::CertificateTypeHasBeenSet() const
{
    return m_certificateTypeHasBeenSet;
}

string Certificate::GetCertificateAlias() const
{
    return m_certificateAlias;
}

void Certificate::SetCertificateAlias(const string& _certificateAlias)
{
    m_certificateAlias = _certificateAlias;
    m_certificateAliasHasBeenSet = true;
}

bool Certificate::CertificateAliasHasBeenSet() const
{
    return m_certificateAliasHasBeenSet;
}

uint64_t Certificate::GetCreateTime() const
{
    return m_createTime;
}

void Certificate::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Certificate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t Certificate::GetBeginTime() const
{
    return m_beginTime;
}

void Certificate::SetBeginTime(const uint64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool Certificate::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

uint64_t Certificate::GetEndTime() const
{
    return m_endTime;
}

void Certificate::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Certificate::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string Certificate::GetIssuerCN() const
{
    return m_issuerCN;
}

void Certificate::SetIssuerCN(const string& _issuerCN)
{
    m_issuerCN = _issuerCN;
    m_issuerCNHasBeenSet = true;
}

bool Certificate::IssuerCNHasBeenSet() const
{
    return m_issuerCNHasBeenSet;
}

string Certificate::GetSubjectCN() const
{
    return m_subjectCN;
}

void Certificate::SetSubjectCN(const string& _subjectCN)
{
    m_subjectCN = _subjectCN;
    m_subjectCNHasBeenSet = true;
}

bool Certificate::SubjectCNHasBeenSet() const
{
    return m_subjectCNHasBeenSet;
}

