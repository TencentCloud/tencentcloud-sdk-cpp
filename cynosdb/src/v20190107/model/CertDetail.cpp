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

#include <tencentcloud/cynosdb/v20190107/model/CertDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CertDetail::CertDetail() :
    m_certIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_remainDaysHasBeenSet(false),
    m_certStatusHasBeenSet(false)
{
}

CoreInternalOutcome CertDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertDetail.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertDetail.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertDetail.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CertDetail.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("RemainDays") && !value["RemainDays"].IsNull())
    {
        if (!value["RemainDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CertDetail.RemainDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainDays = value["RemainDays"].GetInt64();
        m_remainDaysHasBeenSet = true;
    }

    if (value.HasMember("CertStatus") && !value["CertStatus"].IsNull())
    {
        if (!value["CertStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CertDetail.CertStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certStatus = value["CertStatus"].GetInt64();
        m_certStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_remainDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainDays, allocator);
    }

    if (m_certStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certStatus, allocator);
    }

}


string CertDetail::GetCertId() const
{
    return m_certId;
}

void CertDetail::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CertDetail::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string CertDetail::GetAlias() const
{
    return m_alias;
}

void CertDetail::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool CertDetail::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string CertDetail::GetDomain() const
{
    return m_domain;
}

void CertDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CertDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CertDetail::GetSource() const
{
    return m_source;
}

void CertDetail::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CertDetail::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t CertDetail::GetEndTime() const
{
    return m_endTime;
}

void CertDetail::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CertDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t CertDetail::GetRemainDays() const
{
    return m_remainDays;
}

void CertDetail::SetRemainDays(const int64_t& _remainDays)
{
    m_remainDays = _remainDays;
    m_remainDaysHasBeenSet = true;
}

bool CertDetail::RemainDaysHasBeenSet() const
{
    return m_remainDaysHasBeenSet;
}

int64_t CertDetail::GetCertStatus() const
{
    return m_certStatus;
}

void CertDetail::SetCertStatus(const int64_t& _certStatus)
{
    m_certStatus = _certStatus;
    m_certStatusHasBeenSet = true;
}

bool CertDetail::CertStatusHasBeenSet() const
{
    return m_certStatusHasBeenSet;
}

