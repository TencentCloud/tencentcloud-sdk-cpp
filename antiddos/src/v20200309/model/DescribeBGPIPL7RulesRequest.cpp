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

#include <tencentcloud/antiddos/v20200309/model/DescribeBGPIPL7RulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeBGPIPL7RulesRequest::DescribeBGPIPL7RulesRequest() :
    m_businessHasBeenSet(false),
    m_statusListHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_protocolListHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_exportHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

string DescribeBGPIPL7RulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_statusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusList.begin(); itr != m_statusList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_protocolListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_protocolList.begin(); itr != m_protocolList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_exportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Export";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_export, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBGPIPL7RulesRequest::GetBusiness() const
{
    return m_business;
}

void DescribeBGPIPL7RulesRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DescribeBGPIPL7RulesRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

vector<uint64_t> DescribeBGPIPL7RulesRequest::GetStatusList() const
{
    return m_statusList;
}

void DescribeBGPIPL7RulesRequest::SetStatusList(const vector<uint64_t>& _statusList)
{
    m_statusList = _statusList;
    m_statusListHasBeenSet = true;
}

bool DescribeBGPIPL7RulesRequest::StatusListHasBeenSet() const
{
    return m_statusListHasBeenSet;
}

string DescribeBGPIPL7RulesRequest::GetDomain() const
{
    return m_domain;
}

void DescribeBGPIPL7RulesRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeBGPIPL7RulesRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeBGPIPL7RulesRequest::GetIp() const
{
    return m_ip;
}

void DescribeBGPIPL7RulesRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeBGPIPL7RulesRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t DescribeBGPIPL7RulesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBGPIPL7RulesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBGPIPL7RulesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeBGPIPL7RulesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBGPIPL7RulesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBGPIPL7RulesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<string> DescribeBGPIPL7RulesRequest::GetProtocolList() const
{
    return m_protocolList;
}

void DescribeBGPIPL7RulesRequest::SetProtocolList(const vector<string>& _protocolList)
{
    m_protocolList = _protocolList;
    m_protocolListHasBeenSet = true;
}

bool DescribeBGPIPL7RulesRequest::ProtocolListHasBeenSet() const
{
    return m_protocolListHasBeenSet;
}

string DescribeBGPIPL7RulesRequest::GetCname() const
{
    return m_cname;
}

void DescribeBGPIPL7RulesRequest::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool DescribeBGPIPL7RulesRequest::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

bool DescribeBGPIPL7RulesRequest::GetExport() const
{
    return m_export;
}

void DescribeBGPIPL7RulesRequest::SetExport(const bool& _export)
{
    m_export = _export;
    m_exportHasBeenSet = true;
}

bool DescribeBGPIPL7RulesRequest::ExportHasBeenSet() const
{
    return m_exportHasBeenSet;
}

string DescribeBGPIPL7RulesRequest::GetSource() const
{
    return m_source;
}

void DescribeBGPIPL7RulesRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeBGPIPL7RulesRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}


