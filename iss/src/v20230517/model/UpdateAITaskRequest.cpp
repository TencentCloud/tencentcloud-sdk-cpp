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

#include <tencentcloud/iss/v20230517/model/UpdateAITaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

UpdateAITaskRequest::UpdateAITaskRequest() :
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_channelListHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_isStartTheTaskHasBeenSet(false),
    m_templatesHasBeenSet(false)
{
}

string UpdateAITaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateAITaskRequest::GetTaskId() const
{
    return m_taskId;
}

void UpdateAITaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool UpdateAITaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string UpdateAITaskRequest::GetName() const
{
    return m_name;
}

void UpdateAITaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateAITaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateAITaskRequest::GetDesc() const
{
    return m_desc;
}

void UpdateAITaskRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool UpdateAITaskRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

vector<string> UpdateAITaskRequest::GetChannelList() const
{
    return m_channelList;
}

void UpdateAITaskRequest::SetChannelList(const vector<string>& _channelList)
{
    m_channelList = _channelList;
    m_channelListHasBeenSet = true;
}

bool UpdateAITaskRequest::ChannelListHasBeenSet() const
{
    return m_channelListHasBeenSet;
}

string UpdateAITaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void UpdateAITaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool UpdateAITaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

bool UpdateAITaskRequest::GetIsStartTheTask() const
{
    return m_isStartTheTask;
}

void UpdateAITaskRequest::SetIsStartTheTask(const bool& _isStartTheTask)
{
    m_isStartTheTask = _isStartTheTask;
    m_isStartTheTaskHasBeenSet = true;
}

bool UpdateAITaskRequest::IsStartTheTaskHasBeenSet() const
{
    return m_isStartTheTaskHasBeenSet;
}

vector<AITemplates> UpdateAITaskRequest::GetTemplates() const
{
    return m_templates;
}

void UpdateAITaskRequest::SetTemplates(const vector<AITemplates>& _templates)
{
    m_templates = _templates;
    m_templatesHasBeenSet = true;
}

bool UpdateAITaskRequest::TemplatesHasBeenSet() const
{
    return m_templatesHasBeenSet;
}


