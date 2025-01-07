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

#include <tencentcloud/billing/v20180709/model/DescribeVoucherInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeVoucherInfoRequest::DescribeVoucherInfoRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_voucherIdHasBeenSet(false),
    m_codeIdHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_activityIdHasBeenSet(false),
    m_voucherNameHasBeenSet(false),
    m_timeFromHasBeenSet(false),
    m_timeToHasBeenSet(false),
    m_sortFieldHasBeenSet(false),
    m_sortOrderHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_paySceneHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_voucherMainTypeHasBeenSet(false),
    m_voucherSubTypeHasBeenSet(false),
    m_startTimeFromHasBeenSet(false),
    m_startTimeToHasBeenSet(false),
    m_endTimeFromHasBeenSet(false),
    m_endTimeToHasBeenSet(false),
    m_createTimeFromHasBeenSet(false),
    m_createTimeToHasBeenSet(false)
{
}

string DescribeVoucherInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voucherId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeId.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_activityId.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voucherName.c_str(), allocator).Move(), allocator);
    }

    if (m_timeFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_timeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeTo.c_str(), allocator).Move(), allocator);
    }

    if (m_sortFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortField.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_paySceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payScene.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherMainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherMainType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voucherMainType.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherSubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voucherSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTimeFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTimeTo.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTimeFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTimeTo.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTimeFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTimeTo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeVoucherInfoRequest::GetLimit() const
{
    return m_limit;
}

void DescribeVoucherInfoRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeVoucherInfoRequest::GetOffset() const
{
    return m_offset;
}

void DescribeVoucherInfoRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeVoucherInfoRequest::GetStatus() const
{
    return m_status;
}

void DescribeVoucherInfoRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeVoucherInfoRequest::GetVoucherId() const
{
    return m_voucherId;
}

void DescribeVoucherInfoRequest::SetVoucherId(const string& _voucherId)
{
    m_voucherId = _voucherId;
    m_voucherIdHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::VoucherIdHasBeenSet() const
{
    return m_voucherIdHasBeenSet;
}

string DescribeVoucherInfoRequest::GetCodeId() const
{
    return m_codeId;
}

void DescribeVoucherInfoRequest::SetCodeId(const string& _codeId)
{
    m_codeId = _codeId;
    m_codeIdHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::CodeIdHasBeenSet() const
{
    return m_codeIdHasBeenSet;
}

string DescribeVoucherInfoRequest::GetProductCode() const
{
    return m_productCode;
}

void DescribeVoucherInfoRequest::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string DescribeVoucherInfoRequest::GetActivityId() const
{
    return m_activityId;
}

void DescribeVoucherInfoRequest::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string DescribeVoucherInfoRequest::GetVoucherName() const
{
    return m_voucherName;
}

void DescribeVoucherInfoRequest::SetVoucherName(const string& _voucherName)
{
    m_voucherName = _voucherName;
    m_voucherNameHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::VoucherNameHasBeenSet() const
{
    return m_voucherNameHasBeenSet;
}

string DescribeVoucherInfoRequest::GetTimeFrom() const
{
    return m_timeFrom;
}

void DescribeVoucherInfoRequest::SetTimeFrom(const string& _timeFrom)
{
    m_timeFrom = _timeFrom;
    m_timeFromHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::TimeFromHasBeenSet() const
{
    return m_timeFromHasBeenSet;
}

string DescribeVoucherInfoRequest::GetTimeTo() const
{
    return m_timeTo;
}

void DescribeVoucherInfoRequest::SetTimeTo(const string& _timeTo)
{
    m_timeTo = _timeTo;
    m_timeToHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::TimeToHasBeenSet() const
{
    return m_timeToHasBeenSet;
}

string DescribeVoucherInfoRequest::GetSortField() const
{
    return m_sortField;
}

void DescribeVoucherInfoRequest::SetSortField(const string& _sortField)
{
    m_sortField = _sortField;
    m_sortFieldHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::SortFieldHasBeenSet() const
{
    return m_sortFieldHasBeenSet;
}

string DescribeVoucherInfoRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeVoucherInfoRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

string DescribeVoucherInfoRequest::GetPayMode() const
{
    return m_payMode;
}

void DescribeVoucherInfoRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeVoucherInfoRequest::GetPayScene() const
{
    return m_payScene;
}

void DescribeVoucherInfoRequest::SetPayScene(const string& _payScene)
{
    m_payScene = _payScene;
    m_paySceneHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::PaySceneHasBeenSet() const
{
    return m_paySceneHasBeenSet;
}

string DescribeVoucherInfoRequest::GetOperator() const
{
    return m_operator;
}

void DescribeVoucherInfoRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DescribeVoucherInfoRequest::GetVoucherMainType() const
{
    return m_voucherMainType;
}

void DescribeVoucherInfoRequest::SetVoucherMainType(const string& _voucherMainType)
{
    m_voucherMainType = _voucherMainType;
    m_voucherMainTypeHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::VoucherMainTypeHasBeenSet() const
{
    return m_voucherMainTypeHasBeenSet;
}

string DescribeVoucherInfoRequest::GetVoucherSubType() const
{
    return m_voucherSubType;
}

void DescribeVoucherInfoRequest::SetVoucherSubType(const string& _voucherSubType)
{
    m_voucherSubType = _voucherSubType;
    m_voucherSubTypeHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::VoucherSubTypeHasBeenSet() const
{
    return m_voucherSubTypeHasBeenSet;
}

string DescribeVoucherInfoRequest::GetStartTimeFrom() const
{
    return m_startTimeFrom;
}

void DescribeVoucherInfoRequest::SetStartTimeFrom(const string& _startTimeFrom)
{
    m_startTimeFrom = _startTimeFrom;
    m_startTimeFromHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::StartTimeFromHasBeenSet() const
{
    return m_startTimeFromHasBeenSet;
}

string DescribeVoucherInfoRequest::GetStartTimeTo() const
{
    return m_startTimeTo;
}

void DescribeVoucherInfoRequest::SetStartTimeTo(const string& _startTimeTo)
{
    m_startTimeTo = _startTimeTo;
    m_startTimeToHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::StartTimeToHasBeenSet() const
{
    return m_startTimeToHasBeenSet;
}

string DescribeVoucherInfoRequest::GetEndTimeFrom() const
{
    return m_endTimeFrom;
}

void DescribeVoucherInfoRequest::SetEndTimeFrom(const string& _endTimeFrom)
{
    m_endTimeFrom = _endTimeFrom;
    m_endTimeFromHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::EndTimeFromHasBeenSet() const
{
    return m_endTimeFromHasBeenSet;
}

string DescribeVoucherInfoRequest::GetEndTimeTo() const
{
    return m_endTimeTo;
}

void DescribeVoucherInfoRequest::SetEndTimeTo(const string& _endTimeTo)
{
    m_endTimeTo = _endTimeTo;
    m_endTimeToHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::EndTimeToHasBeenSet() const
{
    return m_endTimeToHasBeenSet;
}

string DescribeVoucherInfoRequest::GetCreateTimeFrom() const
{
    return m_createTimeFrom;
}

void DescribeVoucherInfoRequest::SetCreateTimeFrom(const string& _createTimeFrom)
{
    m_createTimeFrom = _createTimeFrom;
    m_createTimeFromHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::CreateTimeFromHasBeenSet() const
{
    return m_createTimeFromHasBeenSet;
}

string DescribeVoucherInfoRequest::GetCreateTimeTo() const
{
    return m_createTimeTo;
}

void DescribeVoucherInfoRequest::SetCreateTimeTo(const string& _createTimeTo)
{
    m_createTimeTo = _createTimeTo;
    m_createTimeToHasBeenSet = true;
}

bool DescribeVoucherInfoRequest::CreateTimeToHasBeenSet() const
{
    return m_createTimeToHasBeenSet;
}


