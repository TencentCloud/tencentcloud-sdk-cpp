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

#include <tencentcloud/dayu/v20180709/model/DescribeResourceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DescribeResourceListRequest::DescribeResourceListRequest() :
    m_businessHasBeenSet(false),
    m_regionListHasBeenSet(false),
    m_lineHasBeenSet(false),
    m_idListHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ipListHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_expireHasBeenSet(false),
    m_oderByHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_cNameHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

string DescribeResourceListRequest::ToJsonString() const
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

    if (m_regionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionList.begin(); itr != m_regionList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Line";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_line.begin(); itr != m_line.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_idListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idList.begin(); itr != m_idList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expire, allocator);
    }

    if (m_oderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_oderBy.begin(); itr != m_oderBy.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_cNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeResourceListRequest::GetBusiness() const
{
    return m_business;
}

void DescribeResourceListRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DescribeResourceListRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

vector<string> DescribeResourceListRequest::GetRegionList() const
{
    return m_regionList;
}

void DescribeResourceListRequest::SetRegionList(const vector<string>& _regionList)
{
    m_regionList = _regionList;
    m_regionListHasBeenSet = true;
}

bool DescribeResourceListRequest::RegionListHasBeenSet() const
{
    return m_regionListHasBeenSet;
}

vector<uint64_t> DescribeResourceListRequest::GetLine() const
{
    return m_line;
}

void DescribeResourceListRequest::SetLine(const vector<uint64_t>& _line)
{
    m_line = _line;
    m_lineHasBeenSet = true;
}

bool DescribeResourceListRequest::LineHasBeenSet() const
{
    return m_lineHasBeenSet;
}

vector<string> DescribeResourceListRequest::GetIdList() const
{
    return m_idList;
}

void DescribeResourceListRequest::SetIdList(const vector<string>& _idList)
{
    m_idList = _idList;
    m_idListHasBeenSet = true;
}

bool DescribeResourceListRequest::IdListHasBeenSet() const
{
    return m_idListHasBeenSet;
}

string DescribeResourceListRequest::GetName() const
{
    return m_name;
}

void DescribeResourceListRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeResourceListRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> DescribeResourceListRequest::GetIpList() const
{
    return m_ipList;
}

void DescribeResourceListRequest::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool DescribeResourceListRequest::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

vector<uint64_t> DescribeResourceListRequest::GetStatus() const
{
    return m_status;
}

void DescribeResourceListRequest::SetStatus(const vector<uint64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeResourceListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeResourceListRequest::GetExpire() const
{
    return m_expire;
}

void DescribeResourceListRequest::SetExpire(const uint64_t& _expire)
{
    m_expire = _expire;
    m_expireHasBeenSet = true;
}

bool DescribeResourceListRequest::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}

vector<OrderBy> DescribeResourceListRequest::GetOderBy() const
{
    return m_oderBy;
}

void DescribeResourceListRequest::SetOderBy(const vector<OrderBy>& _oderBy)
{
    m_oderBy = _oderBy;
    m_oderByHasBeenSet = true;
}

bool DescribeResourceListRequest::OderByHasBeenSet() const
{
    return m_oderByHasBeenSet;
}

uint64_t DescribeResourceListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeResourceListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeResourceListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeResourceListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeResourceListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeResourceListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeResourceListRequest::GetCName() const
{
    return m_cName;
}

void DescribeResourceListRequest::SetCName(const string& _cName)
{
    m_cName = _cName;
    m_cNameHasBeenSet = true;
}

bool DescribeResourceListRequest::CNameHasBeenSet() const
{
    return m_cNameHasBeenSet;
}

string DescribeResourceListRequest::GetDomain() const
{
    return m_domain;
}

void DescribeResourceListRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeResourceListRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}


