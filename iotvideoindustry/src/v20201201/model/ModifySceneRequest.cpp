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

#include <tencentcloud/iotvideoindustry/v20201201/model/ModifySceneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

ModifySceneRequest::ModifySceneRequest() :
    m_intIdHasBeenSet(false),
    m_sceneNameHasBeenSet(false),
    m_sceneTriggerHasBeenSet(false),
    m_recordDurationHasBeenSet(false)
{
}

string ModifySceneRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_intIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_intId, allocator);
    }

    if (m_sceneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneName.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTriggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneTrigger";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneTrigger.c_str(), allocator).Move(), allocator);
    }

    if (m_recordDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordDuration, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifySceneRequest::GetIntId() const
{
    return m_intId;
}

void ModifySceneRequest::SetIntId(const int64_t& _intId)
{
    m_intId = _intId;
    m_intIdHasBeenSet = true;
}

bool ModifySceneRequest::IntIdHasBeenSet() const
{
    return m_intIdHasBeenSet;
}

string ModifySceneRequest::GetSceneName() const
{
    return m_sceneName;
}

void ModifySceneRequest::SetSceneName(const string& _sceneName)
{
    m_sceneName = _sceneName;
    m_sceneNameHasBeenSet = true;
}

bool ModifySceneRequest::SceneNameHasBeenSet() const
{
    return m_sceneNameHasBeenSet;
}

string ModifySceneRequest::GetSceneTrigger() const
{
    return m_sceneTrigger;
}

void ModifySceneRequest::SetSceneTrigger(const string& _sceneTrigger)
{
    m_sceneTrigger = _sceneTrigger;
    m_sceneTriggerHasBeenSet = true;
}

bool ModifySceneRequest::SceneTriggerHasBeenSet() const
{
    return m_sceneTriggerHasBeenSet;
}

int64_t ModifySceneRequest::GetRecordDuration() const
{
    return m_recordDuration;
}

void ModifySceneRequest::SetRecordDuration(const int64_t& _recordDuration)
{
    m_recordDuration = _recordDuration;
    m_recordDurationHasBeenSet = true;
}

bool ModifySceneRequest::RecordDurationHasBeenSet() const
{
    return m_recordDurationHasBeenSet;
}


