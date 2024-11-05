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

#include <tencentcloud/hunyuan/v20230901/model/Timeline.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Timeline::Timeline() :
    m_titleHasBeenSet(false),
    m_datetimeHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome Timeline::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Timeline.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Datetime") && !value["Datetime"].IsNull())
    {
        if (!value["Datetime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Timeline.Datetime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datetime = string(value["Datetime"].GetString());
        m_datetimeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Timeline.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Timeline::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_datetimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Datetime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datetime.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string Timeline::GetTitle() const
{
    return m_title;
}

void Timeline::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool Timeline::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string Timeline::GetDatetime() const
{
    return m_datetime;
}

void Timeline::SetDatetime(const string& _datetime)
{
    m_datetime = _datetime;
    m_datetimeHasBeenSet = true;
}

bool Timeline::DatetimeHasBeenSet() const
{
    return m_datetimeHasBeenSet;
}

string Timeline::GetUrl() const
{
    return m_url;
}

void Timeline::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool Timeline::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

