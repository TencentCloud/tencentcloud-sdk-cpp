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

#include <tencentcloud/tmt/v20180321/model/ImageTranslateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

ImageTranslateRequest::ImageTranslateRequest() :
    m_sessionUuidHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string ImageTranslateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sessionUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionUuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImageTranslateRequest::GetSessionUuid() const
{
    return m_sessionUuid;
}

void ImageTranslateRequest::SetSessionUuid(const string& _sessionUuid)
{
    m_sessionUuid = _sessionUuid;
    m_sessionUuidHasBeenSet = true;
}

bool ImageTranslateRequest::SessionUuidHasBeenSet() const
{
    return m_sessionUuidHasBeenSet;
}

string ImageTranslateRequest::GetScene() const
{
    return m_scene;
}

void ImageTranslateRequest::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool ImageTranslateRequest::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string ImageTranslateRequest::GetData() const
{
    return m_data;
}

void ImageTranslateRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool ImageTranslateRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string ImageTranslateRequest::GetSource() const
{
    return m_source;
}

void ImageTranslateRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ImageTranslateRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ImageTranslateRequest::GetTarget() const
{
    return m_target;
}

void ImageTranslateRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool ImageTranslateRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

int64_t ImageTranslateRequest::GetProjectId() const
{
    return m_projectId;
}

void ImageTranslateRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ImageTranslateRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


