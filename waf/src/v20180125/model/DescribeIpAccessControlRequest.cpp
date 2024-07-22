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

#include <tencentcloud/waf/v20180125/model/DescribeIpAccessControlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeIpAccessControlRequest::DescribeIpAccessControlRequest() :
    m_domainHasBeenSet(false),
    m_countHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_vtsMinHasBeenSet(false),
    m_vtsMaxHasBeenSet(false),
    m_ctsMinHasBeenSet(false),
    m_ctsMaxHasBeenSet(false),
    m_offSetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_validStatusHasBeenSet(false),
    m_validTimeStampMinHasBeenSet(false),
    m_validTimeStampMaxHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_timerTypeHasBeenSet(false)
{
}

string DescribeIpAccessControlRequest::ToJsonString() const
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

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actionType, allocator);
    }

    if (m_vtsMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VtsMin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vtsMin, allocator);
    }

    if (m_vtsMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VtsMax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vtsMax, allocator);
    }

    if (m_ctsMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CtsMin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ctsMin, allocator);
    }

    if (m_ctsMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CtsMax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ctsMax, allocator);
    }

    if (m_offSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offSet, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_validStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_validStatus, allocator);
    }

    if (m_validTimeStampMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTimeStampMin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validTimeStampMin.c_str(), allocator).Move(), allocator);
    }

    if (m_validTimeStampMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTimeStampMax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validTimeStampMax.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_timerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timerType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIpAccessControlRequest::GetDomain() const
{
    return m_domain;
}

void DescribeIpAccessControlRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t DescribeIpAccessControlRequest::GetCount() const
{
    return m_count;
}

void DescribeIpAccessControlRequest::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

uint64_t DescribeIpAccessControlRequest::GetActionType() const
{
    return m_actionType;
}

void DescribeIpAccessControlRequest::SetActionType(const uint64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

uint64_t DescribeIpAccessControlRequest::GetVtsMin() const
{
    return m_vtsMin;
}

void DescribeIpAccessControlRequest::SetVtsMin(const uint64_t& _vtsMin)
{
    m_vtsMin = _vtsMin;
    m_vtsMinHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::VtsMinHasBeenSet() const
{
    return m_vtsMinHasBeenSet;
}

uint64_t DescribeIpAccessControlRequest::GetVtsMax() const
{
    return m_vtsMax;
}

void DescribeIpAccessControlRequest::SetVtsMax(const uint64_t& _vtsMax)
{
    m_vtsMax = _vtsMax;
    m_vtsMaxHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::VtsMaxHasBeenSet() const
{
    return m_vtsMaxHasBeenSet;
}

uint64_t DescribeIpAccessControlRequest::GetCtsMin() const
{
    return m_ctsMin;
}

void DescribeIpAccessControlRequest::SetCtsMin(const uint64_t& _ctsMin)
{
    m_ctsMin = _ctsMin;
    m_ctsMinHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::CtsMinHasBeenSet() const
{
    return m_ctsMinHasBeenSet;
}

uint64_t DescribeIpAccessControlRequest::GetCtsMax() const
{
    return m_ctsMax;
}

void DescribeIpAccessControlRequest::SetCtsMax(const uint64_t& _ctsMax)
{
    m_ctsMax = _ctsMax;
    m_ctsMaxHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::CtsMaxHasBeenSet() const
{
    return m_ctsMaxHasBeenSet;
}

uint64_t DescribeIpAccessControlRequest::GetOffSet() const
{
    return m_offSet;
}

void DescribeIpAccessControlRequest::SetOffSet(const uint64_t& _offSet)
{
    m_offSet = _offSet;
    m_offSetHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::OffSetHasBeenSet() const
{
    return m_offSetHasBeenSet;
}

uint64_t DescribeIpAccessControlRequest::GetLimit() const
{
    return m_limit;
}

void DescribeIpAccessControlRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeIpAccessControlRequest::GetSource() const
{
    return m_source;
}

void DescribeIpAccessControlRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DescribeIpAccessControlRequest::GetSort() const
{
    return m_sort;
}

void DescribeIpAccessControlRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeIpAccessControlRequest::GetIp() const
{
    return m_ip;
}

void DescribeIpAccessControlRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t DescribeIpAccessControlRequest::GetValidStatus() const
{
    return m_validStatus;
}

void DescribeIpAccessControlRequest::SetValidStatus(const int64_t& _validStatus)
{
    m_validStatus = _validStatus;
    m_validStatusHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::ValidStatusHasBeenSet() const
{
    return m_validStatusHasBeenSet;
}

string DescribeIpAccessControlRequest::GetValidTimeStampMin() const
{
    return m_validTimeStampMin;
}

void DescribeIpAccessControlRequest::SetValidTimeStampMin(const string& _validTimeStampMin)
{
    m_validTimeStampMin = _validTimeStampMin;
    m_validTimeStampMinHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::ValidTimeStampMinHasBeenSet() const
{
    return m_validTimeStampMinHasBeenSet;
}

string DescribeIpAccessControlRequest::GetValidTimeStampMax() const
{
    return m_validTimeStampMax;
}

void DescribeIpAccessControlRequest::SetValidTimeStampMax(const string& _validTimeStampMax)
{
    m_validTimeStampMax = _validTimeStampMax;
    m_validTimeStampMaxHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::ValidTimeStampMaxHasBeenSet() const
{
    return m_validTimeStampMaxHasBeenSet;
}

uint64_t DescribeIpAccessControlRequest::GetRuleId() const
{
    return m_ruleId;
}

void DescribeIpAccessControlRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t DescribeIpAccessControlRequest::GetTimerType() const
{
    return m_timerType;
}

void DescribeIpAccessControlRequest::SetTimerType(const int64_t& _timerType)
{
    m_timerType = _timerType;
    m_timerTypeHasBeenSet = true;
}

bool DescribeIpAccessControlRequest::TimerTypeHasBeenSet() const
{
    return m_timerTypeHasBeenSet;
}


