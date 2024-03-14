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

#include <tencentcloud/dnspod/v20210323/model/ModifyRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

ModifyRecordRequest::ModifyRecordRequest() :
    m_domainHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_recordLineHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_recordLineIdHasBeenSet(false),
    m_mXHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_dnssecConflictModeHasBeenSet(false)
{
}

string ModifyRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_recordLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordLine.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordId, allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordLineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordLineId.c_str(), allocator).Move(), allocator);
    }

    if (m_mXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MX";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mX, allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tTL, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_weight, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_dnssecConflictModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnssecConflictMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dnssecConflictMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRecordRequest::GetDomain() const
{
    return m_domain;
}

void ModifyRecordRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyRecordRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyRecordRequest::GetRecordType() const
{
    return m_recordType;
}

void ModifyRecordRequest::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool ModifyRecordRequest::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string ModifyRecordRequest::GetRecordLine() const
{
    return m_recordLine;
}

void ModifyRecordRequest::SetRecordLine(const string& _recordLine)
{
    m_recordLine = _recordLine;
    m_recordLineHasBeenSet = true;
}

bool ModifyRecordRequest::RecordLineHasBeenSet() const
{
    return m_recordLineHasBeenSet;
}

string ModifyRecordRequest::GetValue() const
{
    return m_value;
}

void ModifyRecordRequest::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ModifyRecordRequest::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

uint64_t ModifyRecordRequest::GetRecordId() const
{
    return m_recordId;
}

void ModifyRecordRequest::SetRecordId(const uint64_t& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool ModifyRecordRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

uint64_t ModifyRecordRequest::GetDomainId() const
{
    return m_domainId;
}

void ModifyRecordRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ModifyRecordRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string ModifyRecordRequest::GetSubDomain() const
{
    return m_subDomain;
}

void ModifyRecordRequest::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool ModifyRecordRequest::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string ModifyRecordRequest::GetRecordLineId() const
{
    return m_recordLineId;
}

void ModifyRecordRequest::SetRecordLineId(const string& _recordLineId)
{
    m_recordLineId = _recordLineId;
    m_recordLineIdHasBeenSet = true;
}

bool ModifyRecordRequest::RecordLineIdHasBeenSet() const
{
    return m_recordLineIdHasBeenSet;
}

uint64_t ModifyRecordRequest::GetMX() const
{
    return m_mX;
}

void ModifyRecordRequest::SetMX(const uint64_t& _mX)
{
    m_mX = _mX;
    m_mXHasBeenSet = true;
}

bool ModifyRecordRequest::MXHasBeenSet() const
{
    return m_mXHasBeenSet;
}

uint64_t ModifyRecordRequest::GetTTL() const
{
    return m_tTL;
}

void ModifyRecordRequest::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool ModifyRecordRequest::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

uint64_t ModifyRecordRequest::GetWeight() const
{
    return m_weight;
}

void ModifyRecordRequest::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool ModifyRecordRequest::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string ModifyRecordRequest::GetStatus() const
{
    return m_status;
}

void ModifyRecordRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyRecordRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyRecordRequest::GetRemark() const
{
    return m_remark;
}

void ModifyRecordRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyRecordRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ModifyRecordRequest::GetDnssecConflictMode() const
{
    return m_dnssecConflictMode;
}

void ModifyRecordRequest::SetDnssecConflictMode(const string& _dnssecConflictMode)
{
    m_dnssecConflictMode = _dnssecConflictMode;
    m_dnssecConflictModeHasBeenSet = true;
}

bool ModifyRecordRequest::DnssecConflictModeHasBeenSet() const
{
    return m_dnssecConflictModeHasBeenSet;
}


