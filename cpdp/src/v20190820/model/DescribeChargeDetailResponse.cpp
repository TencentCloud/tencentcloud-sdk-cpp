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

#include <tencentcloud/cpdp/v20190820/model/DescribeChargeDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

DescribeChargeDetailResponse::DescribeChargeDetailResponse() :
    m_orderStatusHasBeenSet(false),
    m_orderAmountHasBeenSet(false),
    m_commissionAmountHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_orderDateHasBeenSet(false),
    m_orderTimeHasBeenSet(false),
    m_orderActualInSubAccountNameHasBeenSet(false),
    m_orderActualInSubAccountNumberHasBeenSet(false),
    m_orderInSubAccountNameHasBeenSet(false),
    m_orderInSubAccountNumberHasBeenSet(false),
    m_frontSequenceNumberHasBeenSet(false),
    m_failMessageHasBeenSet(false),
    m_requestTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeChargeDetailResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("OrderStatus") && !rsp["OrderStatus"].IsNull())
    {
        if (!rsp["OrderStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderStatus = string(rsp["OrderStatus"].GetString());
        m_orderStatusHasBeenSet = true;
    }

    if (rsp.HasMember("OrderAmount") && !rsp["OrderAmount"].IsNull())
    {
        if (!rsp["OrderAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderAmount = string(rsp["OrderAmount"].GetString());
        m_orderAmountHasBeenSet = true;
    }

    if (rsp.HasMember("CommissionAmount") && !rsp["CommissionAmount"].IsNull())
    {
        if (!rsp["CommissionAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `CommissionAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commissionAmount = string(rsp["CommissionAmount"].GetString());
        m_commissionAmountHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(rsp["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("OrderDate") && !rsp["OrderDate"].IsNull())
    {
        if (!rsp["OrderDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderDate = string(rsp["OrderDate"].GetString());
        m_orderDateHasBeenSet = true;
    }

    if (rsp.HasMember("OrderTime") && !rsp["OrderTime"].IsNull())
    {
        if (!rsp["OrderTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderTime = string(rsp["OrderTime"].GetString());
        m_orderTimeHasBeenSet = true;
    }

    if (rsp.HasMember("OrderActualInSubAccountName") && !rsp["OrderActualInSubAccountName"].IsNull())
    {
        if (!rsp["OrderActualInSubAccountName"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderActualInSubAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderActualInSubAccountName = string(rsp["OrderActualInSubAccountName"].GetString());
        m_orderActualInSubAccountNameHasBeenSet = true;
    }

    if (rsp.HasMember("OrderActualInSubAccountNumber") && !rsp["OrderActualInSubAccountNumber"].IsNull())
    {
        if (!rsp["OrderActualInSubAccountNumber"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderActualInSubAccountNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderActualInSubAccountNumber = string(rsp["OrderActualInSubAccountNumber"].GetString());
        m_orderActualInSubAccountNumberHasBeenSet = true;
    }

    if (rsp.HasMember("OrderInSubAccountName") && !rsp["OrderInSubAccountName"].IsNull())
    {
        if (!rsp["OrderInSubAccountName"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderInSubAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderInSubAccountName = string(rsp["OrderInSubAccountName"].GetString());
        m_orderInSubAccountNameHasBeenSet = true;
    }

    if (rsp.HasMember("OrderInSubAccountNumber") && !rsp["OrderInSubAccountNumber"].IsNull())
    {
        if (!rsp["OrderInSubAccountNumber"].IsString())
        {
            return CoreInternalOutcome(Error("response `OrderInSubAccountNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderInSubAccountNumber = string(rsp["OrderInSubAccountNumber"].GetString());
        m_orderInSubAccountNumberHasBeenSet = true;
    }

    if (rsp.HasMember("FrontSequenceNumber") && !rsp["FrontSequenceNumber"].IsNull())
    {
        if (!rsp["FrontSequenceNumber"].IsString())
        {
            return CoreInternalOutcome(Error("response `FrontSequenceNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frontSequenceNumber = string(rsp["FrontSequenceNumber"].GetString());
        m_frontSequenceNumberHasBeenSet = true;
    }

    if (rsp.HasMember("FailMessage") && !rsp["FailMessage"].IsNull())
    {
        if (!rsp["FailMessage"].IsString())
        {
            return CoreInternalOutcome(Error("response `FailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMessage = string(rsp["FailMessage"].GetString());
        m_failMessageHasBeenSet = true;
    }

    if (rsp.HasMember("RequestType") && !rsp["RequestType"].IsNull())
    {
        if (!rsp["RequestType"].IsString())
        {
            return CoreInternalOutcome(Error("response `RequestType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestType = string(rsp["RequestType"].GetString());
        m_requestTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeChargeDetailResponse::GetOrderStatus() const
{
    return m_orderStatus;
}

bool DescribeChargeDetailResponse::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

string DescribeChargeDetailResponse::GetOrderAmount() const
{
    return m_orderAmount;
}

bool DescribeChargeDetailResponse::OrderAmountHasBeenSet() const
{
    return m_orderAmountHasBeenSet;
}

string DescribeChargeDetailResponse::GetCommissionAmount() const
{
    return m_commissionAmount;
}

bool DescribeChargeDetailResponse::CommissionAmountHasBeenSet() const
{
    return m_commissionAmountHasBeenSet;
}

string DescribeChargeDetailResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeChargeDetailResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeChargeDetailResponse::GetOrderDate() const
{
    return m_orderDate;
}

bool DescribeChargeDetailResponse::OrderDateHasBeenSet() const
{
    return m_orderDateHasBeenSet;
}

string DescribeChargeDetailResponse::GetOrderTime() const
{
    return m_orderTime;
}

bool DescribeChargeDetailResponse::OrderTimeHasBeenSet() const
{
    return m_orderTimeHasBeenSet;
}

string DescribeChargeDetailResponse::GetOrderActualInSubAccountName() const
{
    return m_orderActualInSubAccountName;
}

bool DescribeChargeDetailResponse::OrderActualInSubAccountNameHasBeenSet() const
{
    return m_orderActualInSubAccountNameHasBeenSet;
}

string DescribeChargeDetailResponse::GetOrderActualInSubAccountNumber() const
{
    return m_orderActualInSubAccountNumber;
}

bool DescribeChargeDetailResponse::OrderActualInSubAccountNumberHasBeenSet() const
{
    return m_orderActualInSubAccountNumberHasBeenSet;
}

string DescribeChargeDetailResponse::GetOrderInSubAccountName() const
{
    return m_orderInSubAccountName;
}

bool DescribeChargeDetailResponse::OrderInSubAccountNameHasBeenSet() const
{
    return m_orderInSubAccountNameHasBeenSet;
}

string DescribeChargeDetailResponse::GetOrderInSubAccountNumber() const
{
    return m_orderInSubAccountNumber;
}

bool DescribeChargeDetailResponse::OrderInSubAccountNumberHasBeenSet() const
{
    return m_orderInSubAccountNumberHasBeenSet;
}

string DescribeChargeDetailResponse::GetFrontSequenceNumber() const
{
    return m_frontSequenceNumber;
}

bool DescribeChargeDetailResponse::FrontSequenceNumberHasBeenSet() const
{
    return m_frontSequenceNumberHasBeenSet;
}

string DescribeChargeDetailResponse::GetFailMessage() const
{
    return m_failMessage;
}

bool DescribeChargeDetailResponse::FailMessageHasBeenSet() const
{
    return m_failMessageHasBeenSet;
}

string DescribeChargeDetailResponse::GetRequestType() const
{
    return m_requestType;
}

bool DescribeChargeDetailResponse::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}


