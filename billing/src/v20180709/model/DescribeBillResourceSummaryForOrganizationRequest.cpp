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

#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryForOrganizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeBillResourceSummaryForOrganizationRequest::DescribeBillResourceSummaryForOrganizationRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_monthHasBeenSet(false),
    m_periodTypeHasBeenSet(false),
    m_needRecordNumHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false)
{
}

string DescribeBillResourceSummaryForOrganizationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_periodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_periodType.c_str(), allocator).Move(), allocator);
    }

    if (m_needRecordNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRecordNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needRecordNum, allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeBillResourceSummaryForOrganizationRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBillResourceSummaryForOrganizationRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBillResourceSummaryForOrganizationRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeBillResourceSummaryForOrganizationRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBillResourceSummaryForOrganizationRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBillResourceSummaryForOrganizationRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeBillResourceSummaryForOrganizationRequest::GetMonth() const
{
    return m_month;
}

void DescribeBillResourceSummaryForOrganizationRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeBillResourceSummaryForOrganizationRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

string DescribeBillResourceSummaryForOrganizationRequest::GetPeriodType() const
{
    return m_periodType;
}

void DescribeBillResourceSummaryForOrganizationRequest::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool DescribeBillResourceSummaryForOrganizationRequest::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

int64_t DescribeBillResourceSummaryForOrganizationRequest::GetNeedRecordNum() const
{
    return m_needRecordNum;
}

void DescribeBillResourceSummaryForOrganizationRequest::SetNeedRecordNum(const int64_t& _needRecordNum)
{
    m_needRecordNum = _needRecordNum;
    m_needRecordNumHasBeenSet = true;
}

bool DescribeBillResourceSummaryForOrganizationRequest::NeedRecordNumHasBeenSet() const
{
    return m_needRecordNumHasBeenSet;
}

string DescribeBillResourceSummaryForOrganizationRequest::GetActionType() const
{
    return m_actionType;
}

void DescribeBillResourceSummaryForOrganizationRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DescribeBillResourceSummaryForOrganizationRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string DescribeBillResourceSummaryForOrganizationRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeBillResourceSummaryForOrganizationRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeBillResourceSummaryForOrganizationRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeBillResourceSummaryForOrganizationRequest::GetPayMode() const
{
    return m_payMode;
}

void DescribeBillResourceSummaryForOrganizationRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DescribeBillResourceSummaryForOrganizationRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeBillResourceSummaryForOrganizationRequest::GetBusinessCode() const
{
    return m_businessCode;
}

void DescribeBillResourceSummaryForOrganizationRequest::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool DescribeBillResourceSummaryForOrganizationRequest::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string DescribeBillResourceSummaryForOrganizationRequest::GetTagKey() const
{
    return m_tagKey;
}

void DescribeBillResourceSummaryForOrganizationRequest::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool DescribeBillResourceSummaryForOrganizationRequest::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

string DescribeBillResourceSummaryForOrganizationRequest::GetTagValue() const
{
    return m_tagValue;
}

void DescribeBillResourceSummaryForOrganizationRequest::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool DescribeBillResourceSummaryForOrganizationRequest::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}


