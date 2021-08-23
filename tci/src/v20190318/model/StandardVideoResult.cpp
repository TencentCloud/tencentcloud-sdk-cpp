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

#include <tencentcloud/tci/v20190318/model/StandardVideoResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

StandardVideoResult::StandardVideoResult() :
    m_highlightsInfoHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome StandardVideoResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HighlightsInfo") && !value["HighlightsInfo"].IsNull())
    {
        if (!value["HighlightsInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandardVideoResult.HighlightsInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["HighlightsInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HighlightsInfomation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highlightsInfo.push_back(item);
        }
        m_highlightsInfoHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardVideoResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardVideoResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StandardVideoResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_highlightsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighlightsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highlightsInfo.begin(); itr != m_highlightsInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


vector<HighlightsInfomation> StandardVideoResult::GetHighlightsInfo() const
{
    return m_highlightsInfo;
}

void StandardVideoResult::SetHighlightsInfo(const vector<HighlightsInfomation>& _highlightsInfo)
{
    m_highlightsInfo = _highlightsInfo;
    m_highlightsInfoHasBeenSet = true;
}

bool StandardVideoResult::HighlightsInfoHasBeenSet() const
{
    return m_highlightsInfoHasBeenSet;
}

string StandardVideoResult::GetMessage() const
{
    return m_message;
}

void StandardVideoResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool StandardVideoResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string StandardVideoResult::GetStatus() const
{
    return m_status;
}

void StandardVideoResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StandardVideoResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

