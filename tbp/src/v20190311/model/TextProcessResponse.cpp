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

#include <tencentcloud/tbp/v20190311/model/TextProcessResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbp::V20190311::Model;
using namespace std;

TextProcessResponse::TextProcessResponse() :
    m_dialogStatusHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_intentNameHasBeenSet(false),
    m_slotInfoListHasBeenSet(false),
    m_inputTextHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false),
    m_responseTextHasBeenSet(false)
{
}

CoreInternalOutcome TextProcessResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DialogStatus") && !rsp["DialogStatus"].IsNull())
    {
        if (!rsp["DialogStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `DialogStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dialogStatus = string(rsp["DialogStatus"].GetString());
        m_dialogStatusHasBeenSet = true;
    }

    if (rsp.HasMember("BotName") && !rsp["BotName"].IsNull())
    {
        if (!rsp["BotName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_botName = string(rsp["BotName"].GetString());
        m_botNameHasBeenSet = true;
    }

    if (rsp.HasMember("IntentName") && !rsp["IntentName"].IsNull())
    {
        if (!rsp["IntentName"].IsString())
        {
            return CoreInternalOutcome(Error("response `IntentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentName = string(rsp["IntentName"].GetString());
        m_intentNameHasBeenSet = true;
    }

    if (rsp.HasMember("SlotInfoList") && !rsp["SlotInfoList"].IsNull())
    {
        if (!rsp["SlotInfoList"].IsArray())
            return CoreInternalOutcome(Error("response `SlotInfoList` is not array type"));

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
            return CoreInternalOutcome(Error("response `InputText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputText = string(rsp["InputText"].GetString());
        m_inputTextHasBeenSet = true;
    }

    if (rsp.HasMember("SessionAttributes") && !rsp["SessionAttributes"].IsNull())
    {
        if (!rsp["SessionAttributes"].IsString())
        {
            return CoreInternalOutcome(Error("response `SessionAttributes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionAttributes = string(rsp["SessionAttributes"].GetString());
        m_sessionAttributesHasBeenSet = true;
    }

    if (rsp.HasMember("ResponseText") && !rsp["ResponseText"].IsNull())
    {
        if (!rsp["ResponseText"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResponseText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseText = string(rsp["ResponseText"].GetString());
        m_responseTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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

string TextProcessResponse::GetSessionAttributes() const
{
    return m_sessionAttributes;
}

bool TextProcessResponse::SessionAttributesHasBeenSet() const
{
    return m_sessionAttributesHasBeenSet;
}

string TextProcessResponse::GetResponseText() const
{
    return m_responseText;
}

bool TextProcessResponse::ResponseTextHasBeenSet() const
{
    return m_responseTextHasBeenSet;
}


