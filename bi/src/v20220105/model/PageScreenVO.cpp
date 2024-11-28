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

#include <tencentcloud/bi/v20220105/model/PageScreenVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

PageScreenVO::PageScreenVO() :
    m_contentHasBeenSet(false),
    m_widgetIdHasBeenSet(false)
{
}

CoreInternalOutcome PageScreenVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PageScreenVO.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("WidgetId") && !value["WidgetId"].IsNull())
    {
        if (!value["WidgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PageScreenVO.WidgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetId = string(value["WidgetId"].GetString());
        m_widgetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PageScreenVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_widgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_widgetId.c_str(), allocator).Move(), allocator);
    }

}


string PageScreenVO::GetContent() const
{
    return m_content;
}

void PageScreenVO::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool PageScreenVO::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string PageScreenVO::GetWidgetId() const
{
    return m_widgetId;
}

void PageScreenVO::SetWidgetId(const string& _widgetId)
{
    m_widgetId = _widgetId;
    m_widgetIdHasBeenSet = true;
}

bool PageScreenVO::WidgetIdHasBeenSet() const
{
    return m_widgetIdHasBeenSet;
}

