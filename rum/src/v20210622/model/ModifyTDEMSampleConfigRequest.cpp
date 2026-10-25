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

#include <tencentcloud/rum/v20210622/model/ModifyTDEMSampleConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ModifyTDEMSampleConfigRequest::ModifyTDEMSampleConfigRequest() :
    m_appIdHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_replayHasBeenSet(false)
{
}

string ModifyTDEMSampleConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Event";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_event.c_str(), allocator).Move(), allocator);
    }

    if (m_replayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replay.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTDEMSampleConfigRequest::GetAppId() const
{
    return m_appId;
}

void ModifyTDEMSampleConfigRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ModifyTDEMSampleConfigRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ModifyTDEMSampleConfigRequest::GetEvent() const
{
    return m_event;
}

void ModifyTDEMSampleConfigRequest::SetEvent(const string& _event)
{
    m_event = _event;
    m_eventHasBeenSet = true;
}

bool ModifyTDEMSampleConfigRequest::EventHasBeenSet() const
{
    return m_eventHasBeenSet;
}

string ModifyTDEMSampleConfigRequest::GetReplay() const
{
    return m_replay;
}

void ModifyTDEMSampleConfigRequest::SetReplay(const string& _replay)
{
    m_replay = _replay;
    m_replayHasBeenSet = true;
}

bool ModifyTDEMSampleConfigRequest::ReplayHasBeenSet() const
{
    return m_replayHasBeenSet;
}


