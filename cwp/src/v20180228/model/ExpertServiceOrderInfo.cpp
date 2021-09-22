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

#include <tencentcloud/cwp/v20180228/model/ExpertServiceOrderInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ExpertServiceOrderInfo::ExpertServiceOrderInfo() :
    m_orderIdHasBeenSet(false),
    m_inquireTypeHasBeenSet(false),
    m_inquireNumHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_serviceTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ExpertServiceOrderInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertServiceOrderInfo.OrderId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = value["OrderId"].GetUint64();
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("InquireType") && !value["InquireType"].IsNull())
    {
        if (!value["InquireType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertServiceOrderInfo.InquireType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inquireType = value["InquireType"].GetUint64();
        m_inquireTypeHasBeenSet = true;
    }

    if (value.HasMember("InquireNum") && !value["InquireNum"].IsNull())
    {
        if (!value["InquireNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertServiceOrderInfo.InquireNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inquireNum = value["InquireNum"].GetUint64();
        m_inquireNumHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertServiceOrderInfo.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertServiceOrderInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceTime") && !value["ServiceTime"].IsNull())
    {
        if (!value["ServiceTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertServiceOrderInfo.ServiceTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTime = value["ServiceTime"].GetUint64();
        m_serviceTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertServiceOrderInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExpertServiceOrderInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderId, allocator);
    }

    if (m_inquireTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inquireType, allocator);
    }

    if (m_inquireNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inquireNum, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


uint64_t ExpertServiceOrderInfo::GetOrderId() const
{
    return m_orderId;
}

void ExpertServiceOrderInfo::SetOrderId(const uint64_t& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool ExpertServiceOrderInfo::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

uint64_t ExpertServiceOrderInfo::GetInquireType() const
{
    return m_inquireType;
}

void ExpertServiceOrderInfo::SetInquireType(const uint64_t& _inquireType)
{
    m_inquireType = _inquireType;
    m_inquireTypeHasBeenSet = true;
}

bool ExpertServiceOrderInfo::InquireTypeHasBeenSet() const
{
    return m_inquireTypeHasBeenSet;
}

uint64_t ExpertServiceOrderInfo::GetInquireNum() const
{
    return m_inquireNum;
}

void ExpertServiceOrderInfo::SetInquireNum(const uint64_t& _inquireNum)
{
    m_inquireNum = _inquireNum;
    m_inquireNumHasBeenSet = true;
}

bool ExpertServiceOrderInfo::InquireNumHasBeenSet() const
{
    return m_inquireNumHasBeenSet;
}

string ExpertServiceOrderInfo::GetBeginTime() const
{
    return m_beginTime;
}

void ExpertServiceOrderInfo::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool ExpertServiceOrderInfo::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string ExpertServiceOrderInfo::GetEndTime() const
{
    return m_endTime;
}

void ExpertServiceOrderInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ExpertServiceOrderInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t ExpertServiceOrderInfo::GetServiceTime() const
{
    return m_serviceTime;
}

void ExpertServiceOrderInfo::SetServiceTime(const uint64_t& _serviceTime)
{
    m_serviceTime = _serviceTime;
    m_serviceTimeHasBeenSet = true;
}

bool ExpertServiceOrderInfo::ServiceTimeHasBeenSet() const
{
    return m_serviceTimeHasBeenSet;
}

uint64_t ExpertServiceOrderInfo::GetStatus() const
{
    return m_status;
}

void ExpertServiceOrderInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExpertServiceOrderInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

