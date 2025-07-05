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

#include <tencentcloud/ivld/v20210903/model/TextInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

TextInfo::TextInfo() :
    m_contentHasBeenSet(false),
    m_startTimeStampHasBeenSet(false),
    m_endTimeStampHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

CoreInternalOutcome TextInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("StartTimeStamp") && !value["StartTimeStamp"].IsNull())
    {
        if (!value["StartTimeStamp"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TextInfo.StartTimeStamp` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeStamp = value["StartTimeStamp"].GetDouble();
        m_startTimeStampHasBeenSet = true;
    }

    if (value.HasMember("EndTimeStamp") && !value["EndTimeStamp"].IsNull())
    {
        if (!value["EndTimeStamp"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TextInfo.EndTimeStamp` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeStamp = value["EndTimeStamp"].GetDouble();
        m_endTimeStampHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextInfo.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeStamp, allocator);
    }

    if (m_endTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeStamp, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

}


string TextInfo::GetContent() const
{
    return m_content;
}

void TextInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TextInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

double TextInfo::GetStartTimeStamp() const
{
    return m_startTimeStamp;
}

void TextInfo::SetStartTimeStamp(const double& _startTimeStamp)
{
    m_startTimeStamp = _startTimeStamp;
    m_startTimeStampHasBeenSet = true;
}

bool TextInfo::StartTimeStampHasBeenSet() const
{
    return m_startTimeStampHasBeenSet;
}

double TextInfo::GetEndTimeStamp() const
{
    return m_endTimeStamp;
}

void TextInfo::SetEndTimeStamp(const double& _endTimeStamp)
{
    m_endTimeStamp = _endTimeStamp;
    m_endTimeStampHasBeenSet = true;
}

bool TextInfo::EndTimeStampHasBeenSet() const
{
    return m_endTimeStampHasBeenSet;
}

string TextInfo::GetTag() const
{
    return m_tag;
}

void TextInfo::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool TextInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

