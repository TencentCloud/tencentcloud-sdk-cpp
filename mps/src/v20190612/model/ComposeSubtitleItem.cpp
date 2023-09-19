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

#include <tencentcloud/mps/v20190612/model/ComposeSubtitleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeSubtitleItem::ComposeSubtitleItem() :
    m_styleIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_trackTimeHasBeenSet(false)
{
}

CoreInternalOutcome ComposeSubtitleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StyleId") && !value["StyleId"].IsNull())
    {
        if (!value["StyleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleItem.StyleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_styleId = string(value["StyleId"].GetString());
        m_styleIdHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleItem.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("TrackTime") && !value["TrackTime"].IsNull())
    {
        if (!value["TrackTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleItem.TrackTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trackTime.Deserialize(value["TrackTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trackTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeSubtitleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_styleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StyleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_styleId.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_trackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trackTime.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ComposeSubtitleItem::GetStyleId() const
{
    return m_styleId;
}

void ComposeSubtitleItem::SetStyleId(const string& _styleId)
{
    m_styleId = _styleId;
    m_styleIdHasBeenSet = true;
}

bool ComposeSubtitleItem::StyleIdHasBeenSet() const
{
    return m_styleIdHasBeenSet;
}

string ComposeSubtitleItem::GetText() const
{
    return m_text;
}

void ComposeSubtitleItem::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ComposeSubtitleItem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

ComposeTrackTime ComposeSubtitleItem::GetTrackTime() const
{
    return m_trackTime;
}

void ComposeSubtitleItem::SetTrackTime(const ComposeTrackTime& _trackTime)
{
    m_trackTime = _trackTime;
    m_trackTimeHasBeenSet = true;
}

bool ComposeSubtitleItem::TrackTimeHasBeenSet() const
{
    return m_trackTimeHasBeenSet;
}

