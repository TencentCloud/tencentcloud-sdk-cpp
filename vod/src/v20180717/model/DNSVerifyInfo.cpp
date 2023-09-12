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

#include <tencentcloud/vod/v20180717/model/DNSVerifyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DNSVerifyInfo::DNSVerifyInfo() :
    m_subDomainHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_recordTypeHasBeenSet(false)
{
}

CoreInternalOutcome DNSVerifyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubDomain") && !value["SubDomain"].IsNull())
    {
        if (!value["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNSVerifyInfo.SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(value["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }

    if (value.HasMember("Record") && !value["Record"].IsNull())
    {
        if (!value["Record"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNSVerifyInfo.Record` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_record = string(value["Record"].GetString());
        m_recordHasBeenSet = true;
    }

    if (value.HasMember("RecordType") && !value["RecordType"].IsNull())
    {
        if (!value["RecordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNSVerifyInfo.RecordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordType = string(value["RecordType"].GetString());
        m_recordTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DNSVerifyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_record.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordType.c_str(), allocator).Move(), allocator);
    }

}


string DNSVerifyInfo::GetSubDomain() const
{
    return m_subDomain;
}

void DNSVerifyInfo::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool DNSVerifyInfo::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string DNSVerifyInfo::GetRecord() const
{
    return m_record;
}

void DNSVerifyInfo::SetRecord(const string& _record)
{
    m_record = _record;
    m_recordHasBeenSet = true;
}

bool DNSVerifyInfo::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

string DNSVerifyInfo::GetRecordType() const
{
    return m_recordType;
}

void DNSVerifyInfo::SetRecordType(const string& _recordType)
{
    m_recordType = _recordType;
    m_recordTypeHasBeenSet = true;
}

bool DNSVerifyInfo::RecordTypeHasBeenSet() const
{
    return m_recordTypeHasBeenSet;
}

