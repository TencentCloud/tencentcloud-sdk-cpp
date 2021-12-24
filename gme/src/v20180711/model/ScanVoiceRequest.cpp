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

#include <tencentcloud/gme/v20180711/model/ScanVoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

ScanVoiceRequest::ScanVoiceRequest() :
    m_bizIdHasBeenSet(false),
    m_scenesHasBeenSet(false),
    m_liveHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_callbackHasBeenSet(false),
    m_langHasBeenSet(false)
{
}

string ScanVoiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bizId, allocator);
    }

    if (m_scenesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scenes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scenes.begin(); itr != m_scenes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_liveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Live";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_live, allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callback.c_str(), allocator).Move(), allocator);
    }

    if (m_langHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lang.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ScanVoiceRequest::GetBizId() const
{
    return m_bizId;
}

void ScanVoiceRequest::SetBizId(const uint64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool ScanVoiceRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

vector<string> ScanVoiceRequest::GetScenes() const
{
    return m_scenes;
}

void ScanVoiceRequest::SetScenes(const vector<string>& _scenes)
{
    m_scenes = _scenes;
    m_scenesHasBeenSet = true;
}

bool ScanVoiceRequest::ScenesHasBeenSet() const
{
    return m_scenesHasBeenSet;
}

bool ScanVoiceRequest::GetLive() const
{
    return m_live;
}

void ScanVoiceRequest::SetLive(const bool& _live)
{
    m_live = _live;
    m_liveHasBeenSet = true;
}

bool ScanVoiceRequest::LiveHasBeenSet() const
{
    return m_liveHasBeenSet;
}

vector<Task> ScanVoiceRequest::GetTasks() const
{
    return m_tasks;
}

void ScanVoiceRequest::SetTasks(const vector<Task>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool ScanVoiceRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string ScanVoiceRequest::GetCallback() const
{
    return m_callback;
}

void ScanVoiceRequest::SetCallback(const string& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool ScanVoiceRequest::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}

string ScanVoiceRequest::GetLang() const
{
    return m_lang;
}

void ScanVoiceRequest::SetLang(const string& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool ScanVoiceRequest::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}


