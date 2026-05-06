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

#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DMotionJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ai3d::V20250513::Model;
using namespace std;

SubmitHunyuanTo3DMotionJobRequest::SubmitHunyuanTo3DMotionJobRequest() :
    m_promptHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_retargetFileHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_enableMeshHasBeenSet(false),
    m_enableRewriteHasBeenSet(false),
    m_enableDurationEstHasBeenSet(false)
{
}

string SubmitHunyuanTo3DMotionJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_retargetFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetargetFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_retargetFile.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_enableMeshHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMesh";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableMesh, allocator);
    }

    if (m_enableRewriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRewrite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableRewrite, allocator);
    }

    if (m_enableDurationEstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDurationEst";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDurationEst, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitHunyuanTo3DMotionJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitHunyuanTo3DMotionJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitHunyuanTo3DMotionJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string SubmitHunyuanTo3DMotionJobRequest::GetModel() const
{
    return m_model;
}

void SubmitHunyuanTo3DMotionJobRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool SubmitHunyuanTo3DMotionJobRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

InputFile3D SubmitHunyuanTo3DMotionJobRequest::GetRetargetFile() const
{
    return m_retargetFile;
}

void SubmitHunyuanTo3DMotionJobRequest::SetRetargetFile(const InputFile3D& _retargetFile)
{
    m_retargetFile = _retargetFile;
    m_retargetFileHasBeenSet = true;
}

bool SubmitHunyuanTo3DMotionJobRequest::RetargetFileHasBeenSet() const
{
    return m_retargetFileHasBeenSet;
}

int64_t SubmitHunyuanTo3DMotionJobRequest::GetDuration() const
{
    return m_duration;
}

void SubmitHunyuanTo3DMotionJobRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SubmitHunyuanTo3DMotionJobRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

bool SubmitHunyuanTo3DMotionJobRequest::GetEnableMesh() const
{
    return m_enableMesh;
}

void SubmitHunyuanTo3DMotionJobRequest::SetEnableMesh(const bool& _enableMesh)
{
    m_enableMesh = _enableMesh;
    m_enableMeshHasBeenSet = true;
}

bool SubmitHunyuanTo3DMotionJobRequest::EnableMeshHasBeenSet() const
{
    return m_enableMeshHasBeenSet;
}

bool SubmitHunyuanTo3DMotionJobRequest::GetEnableRewrite() const
{
    return m_enableRewrite;
}

void SubmitHunyuanTo3DMotionJobRequest::SetEnableRewrite(const bool& _enableRewrite)
{
    m_enableRewrite = _enableRewrite;
    m_enableRewriteHasBeenSet = true;
}

bool SubmitHunyuanTo3DMotionJobRequest::EnableRewriteHasBeenSet() const
{
    return m_enableRewriteHasBeenSet;
}

bool SubmitHunyuanTo3DMotionJobRequest::GetEnableDurationEst() const
{
    return m_enableDurationEst;
}

void SubmitHunyuanTo3DMotionJobRequest::SetEnableDurationEst(const bool& _enableDurationEst)
{
    m_enableDurationEst = _enableDurationEst;
    m_enableDurationEstHasBeenSet = true;
}

bool SubmitHunyuanTo3DMotionJobRequest::EnableDurationEstHasBeenSet() const
{
    return m_enableDurationEstHasBeenSet;
}


