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

#include <tencentcloud/tbp/v20190627/model/TextProcessResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbp::V20190627::Model;
using namespace std;

TextProcessResponse::TextProcessResponse() :
    m_dialogStatusHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_intentNameHasBeenSet(false),
    m_slotInfoListHasBeenSet(false),
    m_inputTextHasBeenSet(false),
    m_responseMessageHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_responseTextHasBeenSet(false)
{
}

CoreInternalOutcome TextProcessResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DialogStatus") && !rsp["DialogStatus"].IsNull())
    {
        if (!rsp["DialogStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialogStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dialogStatus = string(rsp["DialogStatus"].GetString());
        m_dialogStatusHasBeenSet = true;
    }

    if (rsp.HasMember("BotName") && !rsp["BotName"].IsNull())
    {
        if (!rsp["BotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botName = string(rsp["BotName"].GetString());
        m_botNameHasBeenSet = true;
    }

    if (rsp.HasMember("IntentName") && !rsp["IntentName"].IsNull())
    {
        if (!rsp["IntentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentName = string(rsp["IntentName"].GetString());
        m_intentNameHasBeenSet = true;
    }

    if (rsp.HasMember("SlotInfoList") && !rsp["SlotInfoList"].IsNull())
    {
        if (!rsp["SlotInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SlotInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SlotInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlotInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slotInfoList.push_back(item);
        }
        m_slotInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("InputText") && !rsp["InputText"].IsNull())
    {
        if (!rsp["InputText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputText = string(rsp["InputText"].GetString());
        m_inputTextHasBeenSet = true;
    }

    if (rsp.HasMember("ResponseMessage") && !rsp["ResponseMessage"].IsNull())
    {
        if (!rsp["ResponseMessage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseMessage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_responseMessage.Deserialize(rsp["ResponseMessage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_responseMessageHasBeenSet = true;
    }

    if (rsp.HasMember("SessionAttributes") && !rsp["SessionAttributes"].IsNull())
    {
        if (!rsp["SessionAttributes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionAttributes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionAttributes = string(rsp["SessionAttributes"].GetString());
        m_sessionAttributesHasBeenSet = true;
    }

    if (rsp.HasMember("ResultType") && !rsp["ResultType"].IsNull())
    {
        if (!rsp["ResultType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultType = string(rsp["ResultType"].GetString());
        m_resultTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ResponseText") && !rsp["ResponseText"].IsNull())
    {
        if (!rsp["ResponseText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseText = string(rsp["ResponseText"].GetString());
        m_responseTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string TextProcessResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dialogStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DialogStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dialogStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_botNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_botName.c_str(), allocator).Move(), allocator);
    }

    if (m_intentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intentName.c_str(), allocator).Move(), allocator);
    }

    if (m_slotInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlotInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slotInfoList.begin(); itr != m_slotInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inputTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputText.c_str(), allocator).Move(), allocator);
    }

    if (m_responseMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_responseMessage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sessionAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionAttributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionAttributes.c_str(), allocator).Move(), allocator);
    }

    if (m_resultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultType.c_str(), allocator).Move(), allocator);
    }

    if (m_responseTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseText.c_str(), allocator).Move(), allocator);
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


string TextProcessResponse::GetDialogStatus() const
{
    return m_dialogStatus;
}

bool TextProcessResponse::DialogStatusHasBeenSet() const
{
    return m_dialogStatusHasBeenSet;
}

string TextProcessResponse::GetBotName() const
{
    return m_botName;
}

bool TextProcessResponse::BotNameHasBeenSet() const
{
    return m_botNameHasBeenSet;
}

string TextProcessResponse::GetIntentName() const
{
    return m_intentName;
}

bool TextProcessResponse::IntentNameHasBeenSet() const
{
    return m_intentNameHasBeenSet;
}

vector<SlotInfo> TextProcessResponse::GetSlotInfoList() const
{
    return m_slotInfoList;
}

bool TextProcessResponse::SlotInfoListHasBeenSet() const
{
    return m_slotInfoListHasBeenSet;
}

string TextProcessResponse::GetInputText() const
{
    return m_inputText;
}

bool TextProcessResponse::InputTextHasBeenSet() const
{
    return m_inputTextHasBeenSet;
}

ResponseMessage TextProcessResponse::GetResponseMessage() const
{
    return m_responseMessage;
}

bool TextProcessResponse::ResponseMessageHasBeenSet() const
{
    return m_responseMessageHasBeenSet;
}

string TextProcessResponse::GetSessionAttributes() const
{
    return m_sessionAttributes;
}

bool TextProcessResponse::SessionAttributesHasBeenSet() const
{
    return m_sessionAttributesHasBeenSet;
}

string TextProcessResponse::GetResultType() const
{
    return m_resultType;
}

bool TextProcessResponse::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

string TextProcessResponse::GetResponseText() const
{
    return m_responseText;
}

bool TextProcessResponse::ResponseTextHasBeenSet() const
{
    return m_responseTextHasBeenSet;
}


