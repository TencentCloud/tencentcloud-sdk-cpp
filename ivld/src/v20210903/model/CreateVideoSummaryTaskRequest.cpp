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

#include <tencentcloud/ivld/v20210903/model/CreateVideoSummaryTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

CreateVideoSummaryTaskRequest::CreateVideoSummaryTaskRequest() :
    m_summaryTypeHasBeenSet(false),
    m_videoURLHasBeenSet(false),
    m_callbackURLHasBeenSet(false),
    m_writeBackCosPathHasBeenSet(false),
    m_activeVideoGenerateHasBeenSet(false),
    m_videoRotationModeHasBeenSet(false),
    m_tTSModeHasBeenSet(false),
    m_activeTTSOutputHasBeenSet(false),
    m_exactAsrSetHasBeenSet(false),
    m_exactTextSummaryHasBeenSet(false),
    m_exactTextSegSetHasBeenSet(false),
    m_exactShotSegSetHasBeenSet(false)
{
}

string CreateVideoSummaryTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_summaryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_summaryType, allocator);
    }

    if (m_videoURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoURL.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackURL.c_str(), allocator).Move(), allocator);
    }

    if (m_writeBackCosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteBackCosPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_writeBackCosPath.c_str(), allocator).Move(), allocator);
    }

    if (m_activeVideoGenerateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveVideoGenerate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_activeVideoGenerate, allocator);
    }

    if (m_videoRotationModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoRotationMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoRotationMode.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tTSModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tTSMode.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_activeTTSOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTTSOutput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_activeTTSOutput, allocator);
    }

    if (m_exactAsrSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExactAsrSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exactAsrSet.begin(); itr != m_exactAsrSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_exactTextSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExactTextSummary";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exactTextSummary.c_str(), allocator).Move(), allocator);
    }

    if (m_exactTextSegSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExactTextSegSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exactTextSegSet.begin(); itr != m_exactTextSegSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exactShotSegSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExactShotSegSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exactShotSegSet.begin(); itr != m_exactShotSegSet.end(); ++itr, ++i)
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


int64_t CreateVideoSummaryTaskRequest::GetSummaryType() const
{
    return m_summaryType;
}

void CreateVideoSummaryTaskRequest::SetSummaryType(const int64_t& _summaryType)
{
    m_summaryType = _summaryType;
    m_summaryTypeHasBeenSet = true;
}

bool CreateVideoSummaryTaskRequest::SummaryTypeHasBeenSet() const
{
    return m_summaryTypeHasBeenSet;
}

string CreateVideoSummaryTaskRequest::GetVideoURL() const
{
    return m_videoURL;
}

void CreateVideoSummaryTaskRequest::SetVideoURL(const string& _videoURL)
{
    m_videoURL = _videoURL;
    m_videoURLHasBeenSet = true;
}

bool CreateVideoSummaryTaskRequest::VideoURLHasBeenSet() const
{
    return m_videoURLHasBeenSet;
}

string CreateVideoSummaryTaskRequest::GetCallbackURL() const
{
    return m_callbackURL;
}

void CreateVideoSummaryTaskRequest::SetCallbackURL(const string& _callbackURL)
{
    m_callbackURL = _callbackURL;
    m_callbackURLHasBeenSet = true;
}

bool CreateVideoSummaryTaskRequest::CallbackURLHasBeenSet() const
{
    return m_callbackURLHasBeenSet;
}

string CreateVideoSummaryTaskRequest::GetWriteBackCosPath() const
{
    return m_writeBackCosPath;
}

void CreateVideoSummaryTaskRequest::SetWriteBackCosPath(const string& _writeBackCosPath)
{
    m_writeBackCosPath = _writeBackCosPath;
    m_writeBackCosPathHasBeenSet = true;
}

bool CreateVideoSummaryTaskRequest::WriteBackCosPathHasBeenSet() const
{
    return m_writeBackCosPathHasBeenSet;
}

bool CreateVideoSummaryTaskRequest::GetActiveVideoGenerate() const
{
    return m_activeVideoGenerate;
}

void CreateVideoSummaryTaskRequest::SetActiveVideoGenerate(const bool& _activeVideoGenerate)
{
    m_activeVideoGenerate = _activeVideoGenerate;
    m_activeVideoGenerateHasBeenSet = true;
}

bool CreateVideoSummaryTaskRequest::ActiveVideoGenerateHasBeenSet() const
{
    return m_activeVideoGenerateHasBeenSet;
}

VideoRotationMode CreateVideoSummaryTaskRequest::GetVideoRotationMode() const
{
    return m_videoRotationMode;
}

void CreateVideoSummaryTaskRequest::SetVideoRotationMode(const VideoRotationMode& _videoRotationMode)
{
    m_videoRotationMode = _videoRotationMode;
    m_videoRotationModeHasBeenSet = true;
}

bool CreateVideoSummaryTaskRequest::VideoRotationModeHasBeenSet() const
{
    return m_videoRotationModeHasBeenSet;
}

TTSMode CreateVideoSummaryTaskRequest::GetTTSMode() const
{
    return m_tTSMode;
}

void CreateVideoSummaryTaskRequest::SetTTSMode(const TTSMode& _tTSMode)
{
    m_tTSMode = _tTSMode;
    m_tTSModeHasBeenSet = true;
}

bool CreateVideoSummaryTaskRequest::TTSModeHasBeenSet() const
{
    return m_tTSModeHasBeenSet;
}

bool CreateVideoSummaryTaskRequest::GetActiveTTSOutput() const
{
    return m_activeTTSOutput;
}

void CreateVideoSummaryTaskRequest::SetActiveTTSOutput(const bool& _activeTTSOutput)
{
    m_activeTTSOutput = _activeTTSOutput;
    m_activeTTSOutputHasBeenSet = true;
}

bool CreateVideoSummaryTaskRequest::ActiveTTSOutputHasBeenSet() const
{
    return m_activeTTSOutputHasBeenSet;
}

vector<AsrResult> CreateVideoSummaryTaskRequest::GetExactAsrSet() const
{
    return m_exactAsrSet;
}

void CreateVideoSummaryTaskRequest::SetExactAsrSet(const vector<AsrResult>& _exactAsrSet)
{
    m_exactAsrSet = _exactAsrSet;
    m_exactAsrSetHasBeenSet = true;
}

bool CreateVideoSummaryTaskRequest::ExactAsrSetHasBeenSet() const
{
    return m_exactAsrSetHasBeenSet;
}

string CreateVideoSummaryTaskRequest::GetExactTextSummary() const
{
    return m_exactTextSummary;
}

void CreateVideoSummaryTaskRequest::SetExactTextSummary(const string& _exactTextSummary)
{
    m_exactTextSummary = _exactTextSummary;
    m_exactTextSummaryHasBeenSet = true;
}

bool CreateVideoSummaryTaskRequest::ExactTextSummaryHasBeenSet() const
{
    return m_exactTextSummaryHasBeenSet;
}

vector<string> CreateVideoSummaryTaskRequest::GetExactTextSegSet() const
{
    return m_exactTextSegSet;
}

void CreateVideoSummaryTaskRequest::SetExactTextSegSet(const vector<string>& _exactTextSegSet)
{
    m_exactTextSegSet = _exactTextSegSet;
    m_exactTextSegSetHasBeenSet = true;
}

bool CreateVideoSummaryTaskRequest::ExactTextSegSetHasBeenSet() const
{
    return m_exactTextSegSetHasBeenSet;
}

vector<ShotInfo> CreateVideoSummaryTaskRequest::GetExactShotSegSet() const
{
    return m_exactShotSegSet;
}

void CreateVideoSummaryTaskRequest::SetExactShotSegSet(const vector<ShotInfo>& _exactShotSegSet)
{
    m_exactShotSegSet = _exactShotSegSet;
    m_exactShotSegSetHasBeenSet = true;
}

bool CreateVideoSummaryTaskRequest::ExactShotSegSetHasBeenSet() const
{
    return m_exactShotSegSetHasBeenSet;
}


