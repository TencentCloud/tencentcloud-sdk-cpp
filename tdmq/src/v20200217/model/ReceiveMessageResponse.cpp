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

#include <tencentcloud/tdmq/v20200217/model/ReceiveMessageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ReceiveMessageResponse::ReceiveMessageResponse() :
    m_messageIDHasBeenSet(false),
    m_messagePayloadHasBeenSet(false),
    m_ackTopicHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_subNameHasBeenSet(false)
{
}

CoreInternalOutcome ReceiveMessageResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("MessageID") && !rsp["MessageID"].IsNull())
    {
        if (!rsp["MessageID"].IsString())
        {
            return CoreInternalOutcome(Error("response `MessageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageID = string(rsp["MessageID"].GetString());
        m_messageIDHasBeenSet = true;
    }

    if (rsp.HasMember("MessagePayload") && !rsp["MessagePayload"].IsNull())
    {
        if (!rsp["MessagePayload"].IsString())
        {
            return CoreInternalOutcome(Error("response `MessagePayload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messagePayload = string(rsp["MessagePayload"].GetString());
        m_messagePayloadHasBeenSet = true;
    }

    if (rsp.HasMember("AckTopic") && !rsp["AckTopic"].IsNull())
    {
        if (!rsp["AckTopic"].IsString())
        {
            return CoreInternalOutcome(Error("response `AckTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ackTopic = string(rsp["AckTopic"].GetString());
        m_ackTopicHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMsg") && !rsp["ErrorMsg"].IsNull())
    {
        if (!rsp["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(rsp["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (rsp.HasMember("SubName") && !rsp["SubName"].IsNull())
    {
        if (!rsp["SubName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subName = string(rsp["SubName"].GetString());
        m_subNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string ReceiveMessageResponse::GetMessageID() const
{
    return m_messageID;
}

bool ReceiveMessageResponse::MessageIDHasBeenSet() const
{
    return m_messageIDHasBeenSet;
}

string ReceiveMessageResponse::GetMessagePayload() const
{
    return m_messagePayload;
}

bool ReceiveMessageResponse::MessagePayloadHasBeenSet() const
{
    return m_messagePayloadHasBeenSet;
}

string ReceiveMessageResponse::GetAckTopic() const
{
    return m_ackTopic;
}

bool ReceiveMessageResponse::AckTopicHasBeenSet() const
{
    return m_ackTopicHasBeenSet;
}

string ReceiveMessageResponse::GetErrorMsg() const
{
    return m_errorMsg;
}

bool ReceiveMessageResponse::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string ReceiveMessageResponse::GetSubName() const
{
    return m_subName;
}

bool ReceiveMessageResponse::SubNameHasBeenSet() const
{
    return m_subNameHasBeenSet;
}


