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

#include <tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace rapidjson;
using namespace std;

ModifyPrivateZoneRecordRequest::ModifyPrivateZoneRecordRequest() :
    m_zoneIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_recordValueHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_mXHasBeenSet(false),
    m_tTLHasBeenSet(false)
{
}

string ModifyPrivateZoneRecordRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recordValue.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_weight, allocator);
    }

    if (m_mXHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MX";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mX, allocator);
    }

    if (m_tTLHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tTL, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPrivateZoneRecordRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyPrivateZoneRecordRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyPrivateZoneRecordRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyPrivateZoneRecordRequest::GetRecordId() const
{
    return m_recordId;
}

void ModifyPrivateZoneRecordRequest::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool ModifyPrivateZoneRecordRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string ModifyPrivateZoneRecordRequest::GetRecordType() const
{
    return m_recordType;
}

void ModifyPrivateZoneRecordRequest::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool ModifyPrivateZoneRecordRequest::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string ModifyPrivateZoneRecordRequest::GetSubDomain() const
{
    return m_subDomain;
}

void ModifyPrivateZoneRecordRequest::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool ModifyPrivateZoneRecordRequest::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string ModifyPrivateZoneRecordRequest::GetRecordValue() const
{
    return m_recordValue;
}

void ModifyPrivateZoneRecordRequest::SetRecordValue(const string& _recordValue)
{
    m_recordValue = _recordValue;
    m_recordValueHasBeenSet = true;
}

bool ModifyPrivateZoneRecordRequest::RecordValueHasBeenSet() const
{
    return m_recordValueHasBeenSet;
}

int64_t ModifyPrivateZoneRecordRequest::GetWeight() const
{
    return m_weight;
}

void ModifyPrivateZoneRecordRequest::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool ModifyPrivateZoneRecordRequest::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

int64_t ModifyPrivateZoneRecordRequest::GetMX() const
{
    return m_mX;
}

void ModifyPrivateZoneRecordRequest::SetMX(const int64_t& _mX)
{
    m_mX = _mX;
    m_mXHasBeenSet = true;
}

bool ModifyPrivateZoneRecordRequest::MXHasBeenSet() const
{
    return m_mXHasBeenSet;
}

int64_t ModifyPrivateZoneRecordRequest::GetTTL() const
{
    return m_tTL;
}

void ModifyPrivateZoneRecordRequest::SetTTL(const int64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool ModifyPrivateZoneRecordRequest::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}


