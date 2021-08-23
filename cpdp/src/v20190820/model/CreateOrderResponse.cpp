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

#include <tencentcloud/cpdp/v20190820/model/CreateOrderResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOrderResponse::CreateOrderResponse() :
    m_merchantAppIdHasBeenSet(false),
    m_traceNoHasBeenSet(false),
    m_orderNoHasBeenSet(false),
    m_payUrlHasBeenSet(false)
{
}

CoreInternalOutcome CreateOrderResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MerchantAppId") && !rsp["MerchantAppId"].IsNull())
    {
        if (!rsp["MerchantAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantAppId = string(rsp["MerchantAppId"].GetString());
        m_merchantAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("TraceNo") && !rsp["TraceNo"].IsNull())
    {
        if (!rsp["TraceNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceNo = string(rsp["TraceNo"].GetString());
        m_traceNoHasBeenSet = true;
    }

    if (rsp.HasMember("OrderNo") && !rsp["OrderNo"].IsNull())
    {
        if (!rsp["OrderNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderNo = string(rsp["OrderNo"].GetString());
        m_orderNoHasBeenSet = true;
    }

    if (rsp.HasMember("PayUrl") && !rsp["PayUrl"].IsNull())
    {
        if (!rsp["PayUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payUrl = string(rsp["PayUrl"].GetString());
        m_payUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateOrderResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_merchantAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_traceNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceNo.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_payUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payUrl.c_str(), allocator).Move(), allocator);
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


string CreateOrderResponse::GetMerchantAppId() const
{
    return m_merchantAppId;
}

bool CreateOrderResponse::MerchantAppIdHasBeenSet() const
{
    return m_merchantAppIdHasBeenSet;
}

string CreateOrderResponse::GetTraceNo() const
{
    return m_traceNo;
}

bool CreateOrderResponse::TraceNoHasBeenSet() const
{
    return m_traceNoHasBeenSet;
}

string CreateOrderResponse::GetOrderNo() const
{
    return m_orderNo;
}

bool CreateOrderResponse::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

string CreateOrderResponse::GetPayUrl() const
{
    return m_payUrl;
}

bool CreateOrderResponse::PayUrlHasBeenSet() const
{
    return m_payUrlHasBeenSet;
}


