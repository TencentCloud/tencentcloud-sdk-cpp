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

#include <tencentcloud/zj/v20190121/model/PushMmsContentResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

PushMmsContentResp::PushMmsContentResp() :
    m_returnCodeHasBeenSet(false),
    m_returnMsgHasBeenSet(false),
    m_messageIdHasBeenSet(false)
{
}

CoreInternalOutcome PushMmsContentResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReturnCode") && !value["ReturnCode"].IsNull())
    {
        if (!value["ReturnCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PushMmsContentResp.ReturnCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = value["ReturnCode"].GetInt64();
        m_returnCodeHasBeenSet = true;
    }

    if (value.HasMember("ReturnMsg") && !value["ReturnMsg"].IsNull())
    {
        if (!value["ReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `PushMmsContentResp.ReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnMsg = string(value["ReturnMsg"].GetString());
        m_returnMsgHasBeenSet = true;
    }

    if (value.HasMember("MessageId") && !value["MessageId"].IsNull())
    {
        if (!value["MessageId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PushMmsContentResp.MessageId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageId = value["MessageId"].GetInt64();
        m_messageIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PushMmsContentResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_returnCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_returnCode, allocator);
    }

    if (m_returnMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_returnMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_messageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageId, allocator);
    }

}


int64_t PushMmsContentResp::GetReturnCode() const
{
    return m_returnCode;
}

void PushMmsContentResp::SetReturnCode(const int64_t& _returnCode)
{
    m_returnCode = _returnCode;
    m_returnCodeHasBeenSet = true;
}

bool PushMmsContentResp::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

string PushMmsContentResp::GetReturnMsg() const
{
    return m_returnMsg;
}

void PushMmsContentResp::SetReturnMsg(const string& _returnMsg)
{
    m_returnMsg = _returnMsg;
    m_returnMsgHasBeenSet = true;
}

bool PushMmsContentResp::ReturnMsgHasBeenSet() const
{
    return m_returnMsgHasBeenSet;
}

int64_t PushMmsContentResp::GetMessageId() const
{
    return m_messageId;
}

void PushMmsContentResp::SetMessageId(const int64_t& _messageId)
{
    m_messageId = _messageId;
    m_messageIdHasBeenSet = true;
}

bool PushMmsContentResp::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

