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

#include <tencentcloud/cls/v20201016/model/ModifySearchViewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifySearchViewRequest::ModifySearchViewRequest() :
    m_viewIdHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_viewTypeHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifySearchViewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_viewIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viewId.c_str(), allocator).Move(), allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_viewTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viewType.c_str(), allocator).Move(), allocator);
    }

    if (m_topicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topics.begin(); itr != m_topics.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySearchViewRequest::GetViewId() const
{
    return m_viewId;
}

void ModifySearchViewRequest::SetViewId(const string& _viewId)
{
    m_viewId = _viewId;
    m_viewIdHasBeenSet = true;
}

bool ModifySearchViewRequest::ViewIdHasBeenSet() const
{
    return m_viewIdHasBeenSet;
}

string ModifySearchViewRequest::GetViewName() const
{
    return m_viewName;
}

void ModifySearchViewRequest::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool ModifySearchViewRequest::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string ModifySearchViewRequest::GetViewType() const
{
    return m_viewType;
}

void ModifySearchViewRequest::SetViewType(const string& _viewType)
{
    m_viewType = _viewType;
    m_viewTypeHasBeenSet = true;
}

bool ModifySearchViewRequest::ViewTypeHasBeenSet() const
{
    return m_viewTypeHasBeenSet;
}

vector<ViewSearchTopic> ModifySearchViewRequest::GetTopics() const
{
    return m_topics;
}

void ModifySearchViewRequest::SetTopics(const vector<ViewSearchTopic>& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool ModifySearchViewRequest::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}

string ModifySearchViewRequest::GetDescription() const
{
    return m_description;
}

void ModifySearchViewRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifySearchViewRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


