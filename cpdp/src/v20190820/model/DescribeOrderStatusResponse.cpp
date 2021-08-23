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

#include <tencentcloud/cpdp/v20190820/model/DescribeOrderStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DescribeOrderStatusResponse::DescribeOrderStatusResponse() :
    m_orderStatusHasBeenSet(false),
    m_orderAmountHasBeenSet(false),
    m_orderDateHasBeenSet(false),
    m_orderTimeHasBeenSet(false),
    m_outSubAccountNumberHasBeenSet(false),
    m_inSubAccountNumberHasBeenSet(false),
    m_bookingFlagHasBeenSet(false),
    m_failMessageHasBeenSet(false),
    m_requestTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOrderStatusResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("OrderStatus") && !rsp["OrderStatus"].IsNull())
    {
        if (!rsp["OrderStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderStatus = string(rsp["OrderStatus"].GetString());
        m_orderStatusHasBeenSet = true;
    }

    if (rsp.HasMember("OrderAmount") && !rsp["OrderAmount"].IsNull())
    {
        if (!rsp["OrderAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderAmount = string(rsp["OrderAmount"].GetString());
        m_orderAmountHasBeenSet = true;
    }

    if (rsp.HasMember("OrderDate") && !rsp["OrderDate"].IsNull())
    {
        if (!rsp["OrderDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderDate = string(rsp["OrderDate"].GetString());
        m_orderDateHasBeenSet = true;
    }

    if (rsp.HasMember("OrderTime") && !rsp["OrderTime"].IsNull())
    {
        if (!rsp["OrderTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderTime = string(rsp["OrderTime"].GetString());
        m_orderTimeHasBeenSet = true;
    }

    if (rsp.HasMember("OutSubAccountNumber") && !rsp["OutSubAccountNumber"].IsNull())
    {
        if (!rsp["OutSubAccountNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutSubAccountNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outSubAccountNumber = string(rsp["OutSubAccountNumber"].GetString());
        m_outSubAccountNumberHasBeenSet = true;
    }

    if (rsp.HasMember("InSubAccountNumber") && !rsp["InSubAccountNumber"].IsNull())
    {
        if (!rsp["InSubAccountNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InSubAccountNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inSubAccountNumber = string(rsp["InSubAccountNumber"].GetString());
        m_inSubAccountNumberHasBeenSet = true;
    }

    if (rsp.HasMember("BookingFlag") && !rsp["BookingFlag"].IsNull())
    {
        if (!rsp["BookingFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BookingFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bookingFlag = string(rsp["BookingFlag"].GetString());
        m_bookingFlagHasBeenSet = true;
    }

    if (rsp.HasMember("FailMessage") && !rsp["FailMessage"].IsNull())
    {
        if (!rsp["FailMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMessage = string(rsp["FailMessage"].GetString());
        m_failMessageHasBeenSet = true;
    }

    if (rsp.HasMember("RequestType") && !rsp["RequestType"].IsNull())
    {
        if (!rsp["RequestType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestType = string(rsp["RequestType"].GetString());
        m_requestTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOrderStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_orderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_orderAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderDate.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderTime.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outSubAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_inSubAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InSubAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inSubAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_bookingFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BookingFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bookingFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_failMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_requestTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestType.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeOrderStatusResponse::GetOrderStatus() const
{
    return m_orderStatus;
}

bool DescribeOrderStatusResponse::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

string DescribeOrderStatusResponse::GetOrderAmount() const
{
    return m_orderAmount;
}

bool DescribeOrderStatusResponse::OrderAmountHasBeenSet() const
{
    return m_orderAmountHasBeenSet;
}

string DescribeOrderStatusResponse::GetOrderDate() const
{
    return m_orderDate;
}

bool DescribeOrderStatusResponse::OrderDateHasBeenSet() const
{
    return m_orderDateHasBeenSet;
}

string DescribeOrderStatusResponse::GetOrderTime() const
{
    return m_orderTime;
}

bool DescribeOrderStatusResponse::OrderTimeHasBeenSet() const
{
    return m_orderTimeHasBeenSet;
}

string DescribeOrderStatusResponse::GetOutSubAccountNumber() const
{
    return m_outSubAccountNumber;
}

bool DescribeOrderStatusResponse::OutSubAccountNumberHasBeenSet() const
{
    return m_outSubAccountNumberHasBeenSet;
}

string DescribeOrderStatusResponse::GetInSubAccountNumber() const
{
    return m_inSubAccountNumber;
}

bool DescribeOrderStatusResponse::InSubAccountNumberHasBeenSet() const
{
    return m_inSubAccountNumberHasBeenSet;
}

string DescribeOrderStatusResponse::GetBookingFlag() const
{
    return m_bookingFlag;
}

bool DescribeOrderStatusResponse::BookingFlagHasBeenSet() const
{
    return m_bookingFlagHasBeenSet;
}

string DescribeOrderStatusResponse::GetFailMessage() const
{
    return m_failMessage;
}

bool DescribeOrderStatusResponse::FailMessageHasBeenSet() const
{
    return m_failMessageHasBeenSet;
}

string DescribeOrderStatusResponse::GetRequestType() const
{
    return m_requestType;
}

bool DescribeOrderStatusResponse::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}


