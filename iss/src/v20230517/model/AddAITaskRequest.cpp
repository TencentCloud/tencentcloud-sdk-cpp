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

#include <tencentcloud/iss/v20230517/model/AddAITaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AddAITaskRequest::AddAITaskRequest() :
    m_nameHasBeenSet(false),
    m_channelListHasBeenSet(false),
    m_templatesHasBeenSet(false),
    m_descHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_isStartTheTaskHasBeenSet(false)
{
}

string AddAITaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_channelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelList.begin(); itr != m_channelList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Templates";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templates.begin(); itr != m_templates.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_isStartTheTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsStartTheTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isStartTheTask, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddAITaskRequest::GetName() const
{
    return m_name;
}

void AddAITaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddAITaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> AddAITaskRequest::GetChannelList() const
{
    return m_channelList;
}

void AddAITaskRequest::SetChannelList(const vector<string>& _channelList)
{
    m_channelList = _channelList;
    m_channelListHasBeenSet = true;
}

bool AddAITaskRequest::ChannelListHasBeenSet() const
{
    return m_channelListHasBeenSet;
}

vector<AITemplates> AddAITaskRequest::GetTemplates() const
{
    return m_templates;
}

void AddAITaskRequest::SetTemplates(const vector<AITemplates>& _templates)
{
    m_templates = _templates;
    m_templatesHasBeenSet = true;
}

bool AddAITaskRequest::TemplatesHasBeenSet() const
{
    return m_templatesHasBeenSet;
}

string AddAITaskRequest::GetDesc() const
{
    return m_desc;
}

void AddAITaskRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AddAITaskRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string AddAITaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void AddAITaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool AddAITaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

bool AddAITaskRequest::GetIsStartTheTask() const
{
    return m_isStartTheTask;
}

void AddAITaskRequest::SetIsStartTheTask(const bool& _isStartTheTask)
{
    m_isStartTheTask = _isStartTheTask;
    m_isStartTheTaskHasBeenSet = true;
}

bool AddAITaskRequest::IsStartTheTaskHasBeenSet() const
{
    return m_isStartTheTaskHasBeenSet;
}


