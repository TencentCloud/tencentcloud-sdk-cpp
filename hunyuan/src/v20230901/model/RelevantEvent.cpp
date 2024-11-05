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

#include <tencentcloud/hunyuan/v20230901/model/RelevantEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

RelevantEvent::RelevantEvent() :
    m_titleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_datetimeHasBeenSet(false),
    m_referenceHasBeenSet(false)
{
}

CoreInternalOutcome RelevantEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelevantEvent.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelevantEvent.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Datetime") && !value["Datetime"].IsNull())
    {
        if (!value["Datetime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelevantEvent.Datetime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datetime = string(value["Datetime"].GetString());
        m_datetimeHasBeenSet = true;
    }

    if (value.HasMember("Reference") && !value["Reference"].IsNull())
    {
        if (!value["Reference"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RelevantEvent.Reference` is not array type"));

        const rapidjson::Value &tmpValue = value["Reference"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reference.push_back((*itr).GetInt64());
        }
        m_referenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RelevantEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_datetimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Datetime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datetime.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reference.begin(); itr != m_reference.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string RelevantEvent::GetTitle() const
{
    return m_title;
}

void RelevantEvent::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool RelevantEvent::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string RelevantEvent::GetContent() const
{
    return m_content;
}

void RelevantEvent::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool RelevantEvent::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string RelevantEvent::GetDatetime() const
{
    return m_datetime;
}

void RelevantEvent::SetDatetime(const string& _datetime)
{
    m_datetime = _datetime;
    m_datetimeHasBeenSet = true;
}

bool RelevantEvent::DatetimeHasBeenSet() const
{
    return m_datetimeHasBeenSet;
}

vector<int64_t> RelevantEvent::GetReference() const
{
    return m_reference;
}

void RelevantEvent::SetReference(const vector<int64_t>& _reference)
{
    m_reference = _reference;
    m_referenceHasBeenSet = true;
}

bool RelevantEvent::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

