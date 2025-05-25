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

#include <tencentcloud/dnspod/v20210323/model/AddRecordBatch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

AddRecordBatch::AddRecordBatch() :
    m_recordTypeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_recordLineHasBeenSet(false),
    m_recordLineIdHasBeenSet(false),
    m_mXHasBeenSet(false),
    m_tTLHasBeenSet(false)
{
}

CoreInternalOutcome AddRecordBatch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordType") && !value["RecordType"].IsNull())
    {
        if (!value["RecordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordBatch.RecordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = string(value["RecordType"].GetString());
        m_recordTypeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordBatch.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("SubDomain") && !value["SubDomain"].IsNull())
    {
        if (!value["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordBatch.SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(value["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }

    if (value.HasMember("RecordLine") && !value["RecordLine"].IsNull())
    {
        if (!value["RecordLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordBatch.RecordLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordLine = string(value["RecordLine"].GetString());
        m_recordLineHasBeenSet = true;
    }

    if (value.HasMember("RecordLineId") && !value["RecordLineId"].IsNull())
    {
        if (!value["RecordLineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordBatch.RecordLineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordLineId = string(value["RecordLineId"].GetString());
        m_recordLineIdHasBeenSet = true;
    }

    if (value.HasMember("MX") && !value["MX"].IsNull())
    {
        if (!value["MX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordBatch.MX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mX = value["MX"].GetUint64();
        m_mXHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordBatch.TTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetUint64();
        m_tTLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddRecordBatch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordLine.c_str(), allocator).Move(), allocator);
    }

    if (m_recordLineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordLineId.c_str(), allocator).Move(), allocator);
    }

    if (m_mXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mX, allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTL, allocator);
    }

}


string AddRecordBatch::GetRecordType() const
{
    return m_recordType;
}

void AddRecordBatch::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool AddRecordBatch::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

string AddRecordBatch::GetValue() const
{
    return m_value;
}

void AddRecordBatch::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AddRecordBatch::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string AddRecordBatch::GetSubDomain() const
{
    return m_subDomain;
}

void AddRecordBatch::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool AddRecordBatch::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string AddRecordBatch::GetRecordLine() const
{
    return m_recordLine;
}

void AddRecordBatch::SetRecordLine(const string& _recordLine)
{
    m_recordLine = _recordLine;
    m_recordLineHasBeenSet = true;
}

bool AddRecordBatch::RecordLineHasBeenSet() const
{
    return m_recordLineHasBeenSet;
}

string AddRecordBatch::GetRecordLineId() const
{
    return m_recordLineId;
}

void AddRecordBatch::SetRecordLineId(const string& _recordLineId)
{
    m_recordLineId = _recordLineId;
    m_recordLineIdHasBeenSet = true;
}

bool AddRecordBatch::RecordLineIdHasBeenSet() const
{
    return m_recordLineIdHasBeenSet;
}

uint64_t AddRecordBatch::GetMX() const
{
    return m_mX;
}

void AddRecordBatch::SetMX(const uint64_t& _mX)
{
    m_mX = _mX;
    m_mXHasBeenSet = true;
}

bool AddRecordBatch::MXHasBeenSet() const
{
    return m_mXHasBeenSet;
}

uint64_t AddRecordBatch::GetTTL() const
{
    return m_tTL;
}

void AddRecordBatch::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool AddRecordBatch::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

