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

#include <tencentcloud/mps/v20190612/model/VideoComprehensionResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

VideoComprehensionResultItem::VideoComprehensionResultItem() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_keywordsHasBeenSet(false)
{
}

CoreInternalOutcome VideoComprehensionResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoComprehensionResultItem.StartTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetDouble();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoComprehensionResultItem.EndTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetDouble();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoComprehensionResultItem.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoComprehensionResultItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoComprehensionResultItem.Keywords` is not array type"));

        const rapidjson::Value &tmpValue = value["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoComprehensionResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


double VideoComprehensionResultItem::GetStartTime() const
{
    return m_startTime;
}

void VideoComprehensionResultItem::SetStartTime(const double& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool VideoComprehensionResultItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

double VideoComprehensionResultItem::GetEndTime() const
{
    return m_endTime;
}

void VideoComprehensionResultItem::SetEndTime(const double& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool VideoComprehensionResultItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string VideoComprehensionResultItem::GetTitle() const
{
    return m_title;
}

void VideoComprehensionResultItem::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool VideoComprehensionResultItem::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string VideoComprehensionResultItem::GetDescription() const
{
    return m_description;
}

void VideoComprehensionResultItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VideoComprehensionResultItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> VideoComprehensionResultItem::GetKeywords() const
{
    return m_keywords;
}

void VideoComprehensionResultItem::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool VideoComprehensionResultItem::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

