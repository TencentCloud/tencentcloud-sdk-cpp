/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cpdp/v20190820/model/RefundMemberTransactionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

RefundMemberTransactionResponse::RefundMemberTransactionResponse() :
    m_requestTypeHasBeenSet(false),
    m_frontSequenceNumberHasBeenSet(false),
    m_reservedMessageHasBeenSet(false)
{
}

CoreInternalOutcome RefundMemberTransactionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RequestType") && !rsp["RequestType"].IsNull())
    {
        if (!rsp["RequestType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestType = string(rsp["RequestType"].GetString());
        m_requestTypeHasBeenSet = true;
    }

    if (rsp.HasMember("FrontSequenceNumber") && !rsp["FrontSequenceNumber"].IsNull())
    {
        if (!rsp["FrontSequenceNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrontSequenceNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frontSequenceNumber = string(rsp["FrontSequenceNumber"].GetString());
        m_frontSequenceNumberHasBeenSet = true;
    }

    if (rsp.HasMember("ReservedMessage") && !rsp["ReservedMessage"].IsNull())
    {
        if (!rsp["ReservedMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedMessage = string(rsp["ReservedMessage"].GetString());
        m_reservedMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RefundMemberTransactionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_requestTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestType.c_str(), allocator).Move(), allocator);
    }

    if (m_frontSequenceNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontSequenceNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frontSequenceNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reservedMessage.c_str(), allocator).Move(), allocator);
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


string RefundMemberTransactionResponse::GetRequestType() const
{
    return m_requestType;
}

bool RefundMemberTransactionResponse::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}

string RefundMemberTransactionResponse::GetFrontSequenceNumber() const
{
    return m_frontSequenceNumber;
}

bool RefundMemberTransactionResponse::FrontSequenceNumberHasBeenSet() const
{
    return m_frontSequenceNumberHasBeenSet;
}

string RefundMemberTransactionResponse::GetReservedMessage() const
{
    return m_reservedMessage;
}

bool RefundMemberTransactionResponse::ReservedMessageHasBeenSet() const
{
    return m_reservedMessageHasBeenSet;
}


