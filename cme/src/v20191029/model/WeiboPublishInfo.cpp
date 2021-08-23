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

#include <tencentcloud/cme/v20191029/model/WeiboPublishInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

WeiboPublishInfo::WeiboPublishInfo() :
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_visibleHasBeenSet(false)
{
}

CoreInternalOutcome WeiboPublishInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeiboPublishInfo.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeiboPublishInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Visible") && !value["Visible"].IsNull())
    {
        if (!value["Visible"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeiboPublishInfo.Visible` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_visible = string(value["Visible"].GetString());
        m_visibleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeiboPublishInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_visibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Visible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_visible.c_str(), allocator).Move(), allocator);
    }

}


string WeiboPublishInfo::GetTitle() const
{
    return m_title;
}

void WeiboPublishInfo::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool WeiboPublishInfo::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string WeiboPublishInfo::GetDescription() const
{
    return m_description;
}

void WeiboPublishInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WeiboPublishInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string WeiboPublishInfo::GetVisible() const
{
    return m_visible;
}

void WeiboPublishInfo::SetVisible(const string& _visible)
{
    m_visible = _visible;
    m_visibleHasBeenSet = true;
}

bool WeiboPublishInfo::VisibleHasBeenSet() const
{
    return m_visibleHasBeenSet;
}

