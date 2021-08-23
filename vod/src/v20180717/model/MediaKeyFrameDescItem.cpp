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

#include <tencentcloud/vod/v20180717/model/MediaKeyFrameDescItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaKeyFrameDescItem::MediaKeyFrameDescItem() :
    m_timeOffsetHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome MediaKeyFrameDescItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeOffset") && !value["TimeOffset"].IsNull())
    {
        if (!value["TimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaKeyFrameDescItem.TimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeOffset = value["TimeOffset"].GetDouble();
        m_timeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaKeyFrameDescItem.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaKeyFrameDescItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOffset, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


double MediaKeyFrameDescItem::GetTimeOffset() const
{
    return m_timeOffset;
}

void MediaKeyFrameDescItem::SetTimeOffset(const double& _timeOffset)
{
    m_timeOffset = _timeOffset;
    m_timeOffsetHasBeenSet = true;
}

bool MediaKeyFrameDescItem::TimeOffsetHasBeenSet() const
{
    return m_timeOffsetHasBeenSet;
}

string MediaKeyFrameDescItem::GetContent() const
{
    return m_content;
}

void MediaKeyFrameDescItem::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool MediaKeyFrameDescItem::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

