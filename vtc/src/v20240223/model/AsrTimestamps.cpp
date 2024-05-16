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

#include <tencentcloud/vtc/v20240223/model/AsrTimestamps.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vtc::V20240223::Model;
using namespace std;

AsrTimestamps::AsrTimestamps() :
    m_textHasBeenSet(false),
    m_startMsHasBeenSet(false),
    m_endMsHasBeenSet(false)
{
}

CoreInternalOutcome AsrTimestamps::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrTimestamps.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("StartMs") && !value["StartMs"].IsNull())
    {
        if (!value["StartMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrTimestamps.StartMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startMs = value["StartMs"].GetInt64();
        m_startMsHasBeenSet = true;
    }

    if (value.HasMember("EndMs") && !value["EndMs"].IsNull())
    {
        if (!value["EndMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrTimestamps.EndMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endMs = value["EndMs"].GetInt64();
        m_endMsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsrTimestamps::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_startMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startMs, allocator);
    }

    if (m_endMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endMs, allocator);
    }

}


string AsrTimestamps::GetText() const
{
    return m_text;
}

void AsrTimestamps::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool AsrTimestamps::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

int64_t AsrTimestamps::GetStartMs() const
{
    return m_startMs;
}

void AsrTimestamps::SetStartMs(const int64_t& _startMs)
{
    m_startMs = _startMs;
    m_startMsHasBeenSet = true;
}

bool AsrTimestamps::StartMsHasBeenSet() const
{
    return m_startMsHasBeenSet;
}

int64_t AsrTimestamps::GetEndMs() const
{
    return m_endMs;
}

void AsrTimestamps::SetEndMs(const int64_t& _endMs)
{
    m_endMs = _endMs;
    m_endMsHasBeenSet = true;
}

bool AsrTimestamps::EndMsHasBeenSet() const
{
    return m_endMsHasBeenSet;
}

