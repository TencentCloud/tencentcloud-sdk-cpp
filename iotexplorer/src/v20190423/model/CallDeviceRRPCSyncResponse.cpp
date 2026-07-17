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

#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceRRPCSyncResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CallDeviceRRPCSyncResponse::CallDeviceRRPCSyncResponse() :
    m_clientTokenHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_payloadBase64HasBeenSet(false),
    m_replyTopicHasBeenSet(false)
{
}

CoreInternalOutcome CallDeviceRRPCSyncResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClientToken") && !rsp["ClientToken"].IsNull())
    {
        if (!rsp["ClientToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientToken = string(rsp["ClientToken"].GetString());
        m_clientTokenHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("MessageId") && !rsp["MessageId"].IsNull())
    {
        if (!rsp["MessageId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_messageId = rsp["MessageId"].GetUint64();
        m_messageIdHasBeenSet = true;
    }

    if (rsp.HasMember("PayloadBase64") && !rsp["PayloadBase64"].IsNull())
    {
        if (!rsp["PayloadBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payloadBase64 = string(rsp["PayloadBase64"].GetString());
        m_payloadBase64HasBeenSet = true;
    }

    if (rsp.HasMember("ReplyTopic") && !rsp["ReplyTopic"].IsNull())
    {
        if (!rsp["ReplyTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplyTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replyTopic = string(rsp["ReplyTopic"].GetString());
        m_replyTopicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CallDeviceRRPCSyncResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageId, allocator);
    }

    if (m_payloadBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayloadBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payloadBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_replyTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replyTopic.c_str(), allocator).Move(), allocator);
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


string CallDeviceRRPCSyncResponse::GetClientToken() const
{
    return m_clientToken;
}

bool CallDeviceRRPCSyncResponse::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CallDeviceRRPCSyncResponse::GetStatus() const
{
    return m_status;
}

bool CallDeviceRRPCSyncResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t CallDeviceRRPCSyncResponse::GetMessageId() const
{
    return m_messageId;
}

bool CallDeviceRRPCSyncResponse::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

string CallDeviceRRPCSyncResponse::GetPayloadBase64() const
{
    return m_payloadBase64;
}

bool CallDeviceRRPCSyncResponse::PayloadBase64HasBeenSet() const
{
    return m_payloadBase64HasBeenSet;
}

string CallDeviceRRPCSyncResponse::GetReplyTopic() const
{
    return m_replyTopic;
}

bool CallDeviceRRPCSyncResponse::ReplyTopicHasBeenSet() const
{
    return m_replyTopicHasBeenSet;
}


