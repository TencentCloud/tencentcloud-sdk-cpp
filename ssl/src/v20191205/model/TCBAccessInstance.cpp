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

#include <tencentcloud/ssl/v20191205/model/TCBAccessInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

TCBAccessInstance::TCBAccessInstance() :
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_unionStatusHasBeenSet(false),
    m_isPreemptedHasBeenSet(false),
    m_iCPStatusHasBeenSet(false),
    m_oldCertificateIdHasBeenSet(false)
{
}

CoreInternalOutcome TCBAccessInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCBAccessInstance.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TCBAccessInstance.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UnionStatus") && !value["UnionStatus"].IsNull())
    {
        if (!value["UnionStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TCBAccessInstance.UnionStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unionStatus = value["UnionStatus"].GetInt64();
        m_unionStatusHasBeenSet = true;
    }

    if (value.HasMember("IsPreempted") && !value["IsPreempted"].IsNull())
    {
        if (!value["IsPreempted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TCBAccessInstance.IsPreempted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPreempted = value["IsPreempted"].GetBool();
        m_isPreemptedHasBeenSet = true;
    }

    if (value.HasMember("ICPStatus") && !value["ICPStatus"].IsNull())
    {
        if (!value["ICPStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TCBAccessInstance.ICPStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iCPStatus = value["ICPStatus"].GetInt64();
        m_iCPStatusHasBeenSet = true;
    }

    if (value.HasMember("OldCertificateId") && !value["OldCertificateId"].IsNull())
    {
        if (!value["OldCertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCBAccessInstance.OldCertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldCertificateId = string(value["OldCertificateId"].GetString());
        m_oldCertificateIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TCBAccessInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_unionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unionStatus, allocator);
    }

    if (m_isPreemptedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPreempted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPreempted, allocator);
    }

    if (m_iCPStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ICPStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iCPStatus, allocator);
    }

    if (m_oldCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldCertificateId.c_str(), allocator).Move(), allocator);
    }

}


string TCBAccessInstance::GetDomain() const
{
    return m_domain;
}

void TCBAccessInstance::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool TCBAccessInstance::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t TCBAccessInstance::GetStatus() const
{
    return m_status;
}

void TCBAccessInstance::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TCBAccessInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t TCBAccessInstance::GetUnionStatus() const
{
    return m_unionStatus;
}

void TCBAccessInstance::SetUnionStatus(const int64_t& _unionStatus)
{
    m_unionStatus = _unionStatus;
    m_unionStatusHasBeenSet = true;
}

bool TCBAccessInstance::UnionStatusHasBeenSet() const
{
    return m_unionStatusHasBeenSet;
}

bool TCBAccessInstance::GetIsPreempted() const
{
    return m_isPreempted;
}

void TCBAccessInstance::SetIsPreempted(const bool& _isPreempted)
{
    m_isPreempted = _isPreempted;
    m_isPreemptedHasBeenSet = true;
}

bool TCBAccessInstance::IsPreemptedHasBeenSet() const
{
    return m_isPreemptedHasBeenSet;
}

int64_t TCBAccessInstance::GetICPStatus() const
{
    return m_iCPStatus;
}

void TCBAccessInstance::SetICPStatus(const int64_t& _iCPStatus)
{
    m_iCPStatus = _iCPStatus;
    m_iCPStatusHasBeenSet = true;
}

bool TCBAccessInstance::ICPStatusHasBeenSet() const
{
    return m_iCPStatusHasBeenSet;
}

string TCBAccessInstance::GetOldCertificateId() const
{
    return m_oldCertificateId;
}

void TCBAccessInstance::SetOldCertificateId(const string& _oldCertificateId)
{
    m_oldCertificateId = _oldCertificateId;
    m_oldCertificateIdHasBeenSet = true;
}

bool TCBAccessInstance::OldCertificateIdHasBeenSet() const
{
    return m_oldCertificateIdHasBeenSet;
}

