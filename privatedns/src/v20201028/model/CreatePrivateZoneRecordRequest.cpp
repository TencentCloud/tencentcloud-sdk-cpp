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

#include <tencentcloud/privatedns/v20201028/model/CreatePrivateZoneRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

CreatePrivateZoneRecordRequest::CreatePrivateZoneRecordRequest() :
    m_zoneIdHasBeenSet(false),
    m_recordTypeHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_recordValueHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_mXHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreatePrivateZoneRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordValue.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_weight, allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePrivateZoneRecordRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreatePrivateZoneRecordRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreatePrivateZoneRecordRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreatePrivateZoneRecordRequest::GetRecordType() const
{
    return m_recordType;
}

void CreatePrivateZoneRecordRequest::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool CreatePrivateZoneRecordRequest::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string CreatePrivateZoneRecordRequest::GetSubDomain() const
{
    return m_subDomain;
}

void CreatePrivateZoneRecordRequest::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool CreatePrivateZoneRecordRequest::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string CreatePrivateZoneRecordRequest::GetRecordValue() const
{
    return m_recordValue;
}

void CreatePrivateZoneRecordRequest::SetRecordValue(const string& _recordValue)
{
    m_recordValue = _recordValue;
    m_recordValueHasBeenSet = true;
}

bool CreatePrivateZoneRecordRequest::RecordValueHasBeenSet() const
{
    return m_recordValueHasBeenSet;
}

int64_t CreatePrivateZoneRecordRequest::GetWeight() const
{
    return m_weight;
}

void CreatePrivateZoneRecordRequest::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool CreatePrivateZoneRecordRequest::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

int64_t CreatePrivateZoneRecordRequest::GetMX() const
{
    return m_mX;
}

void CreatePrivateZoneRecordRequest::SetMX(const int64_t& _mX)
{
    m_mX = _mX;
    m_mXHasBeenSet = true;
}

bool CreatePrivateZoneRecordRequest::MXHasBeenSet() const
{
    return m_mXHasBeenSet;
}

int64_t CreatePrivateZoneRecordRequest::GetTTL() const
{
    return m_tTL;
}

void CreatePrivateZoneRecordRequest::SetTTL(const int64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool CreatePrivateZoneRecordRequest::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

string CreatePrivateZoneRecordRequest::GetRemark() const
{
    return m_remark;
}

void CreatePrivateZoneRecordRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreatePrivateZoneRecordRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


