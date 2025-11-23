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

#include <tencentcloud/privatedns/v20201028/model/RecordsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

RecordsInfo::RecordsInfo() :
    m_recordTypeHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_recordValueHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_mXHasBeenSet(false)
{
}

CoreInternalOutcome RecordsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordType") && !value["RecordType"].IsNull())
    {
        if (!value["RecordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordsInfo.RecordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = string(value["RecordType"].GetString());
        m_recordTypeHasBeenSet = true;
    }

    if (value.HasMember("SubDomain") && !value["SubDomain"].IsNull())
    {
        if (!value["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordsInfo.SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(value["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }

    if (value.HasMember("RecordValue") && !value["RecordValue"].IsNull())
    {
        if (!value["RecordValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordsInfo.RecordValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordValue = string(value["RecordValue"].GetString());
        m_recordValueHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordsInfo.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordsInfo.TTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetInt64();
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("MX") && !value["MX"].IsNull())
    {
        if (!value["MX"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordsInfo.MX` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mX = value["MX"].GetInt64();
        m_mXHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordValue.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTL, allocator);
    }

    if (m_mXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mX, allocator);
    }

}


string RecordsInfo::GetRecordType() const
{
    return m_recordType;
}

void RecordsInfo::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool RecordsInfo::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string RecordsInfo::GetSubDomain() const
{
    return m_subDomain;
}

void RecordsInfo::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool RecordsInfo::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string RecordsInfo::GetRecordValue() const
{
    return m_recordValue;
}

void RecordsInfo::SetRecordValue(const string& _recordValue)
{
    m_recordValue = _recordValue;
    m_recordValueHasBeenSet = true;
}

bool RecordsInfo::RecordValueHasBeenSet() const
{
    return m_recordValueHasBeenSet;
}

int64_t RecordsInfo::GetWeight() const
{
    return m_weight;
}

void RecordsInfo::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool RecordsInfo::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

int64_t RecordsInfo::GetTTL() const
{
    return m_tTL;
}

void RecordsInfo::SetTTL(const int64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool RecordsInfo::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

int64_t RecordsInfo::GetMX() const
{
    return m_mX;
}

void RecordsInfo::SetMX(const int64_t& _mX)
{
    m_mX = _mX;
    m_mXHasBeenSet = true;
}

bool RecordsInfo::MXHasBeenSet() const
{
    return m_mXHasBeenSet;
}

