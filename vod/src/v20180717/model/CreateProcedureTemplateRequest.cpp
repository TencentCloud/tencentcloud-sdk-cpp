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

#include <tencentcloud/vod/v20180717/model/CreateProcedureTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateProcedureTemplateRequest::CreateProcedureTemplateRequest() :
    m_nameHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_mediaProcessTaskHasBeenSet(false),
    m_aiContentReviewTaskHasBeenSet(false),
    m_aiAnalysisTaskHasBeenSet(false),
    m_aiRecognitionTaskHasBeenSet(false),
    m_reviewAudioVideoTaskHasBeenSet(false)
{
}

string CreateProcedureTemplateRequest::ToJsonString() const
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

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaProcessTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaProcessTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaProcessTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aiContentReviewTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiContentReviewTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiContentReviewTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aiAnalysisTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiAnalysisTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiAnalysisTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aiRecognitionTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiRecognitionTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiRecognitionTask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_reviewAudioVideoTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewAudioVideoTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reviewAudioVideoTask.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProcedureTemplateRequest::GetName() const
{
    return m_name;
}

void CreateProcedureTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateProcedureTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateProcedureTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateProcedureTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateProcedureTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateProcedureTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateProcedureTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateProcedureTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

MediaProcessTaskInput CreateProcedureTemplateRequest::GetMediaProcessTask() const
{
    return m_mediaProcessTask;
}

void CreateProcedureTemplateRequest::SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask)
{
    m_mediaProcessTask = _mediaProcessTask;
    m_mediaProcessTaskHasBeenSet = true;
}

bool CreateProcedureTemplateRequest::MediaProcessTaskHasBeenSet() const
{
    return m_mediaProcessTaskHasBeenSet;
}

AiContentReviewTaskInput CreateProcedureTemplateRequest::GetAiContentReviewTask() const
{
    return m_aiContentReviewTask;
}

void CreateProcedureTemplateRequest::SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask)
{
    m_aiContentReviewTask = _aiContentReviewTask;
    m_aiContentReviewTaskHasBeenSet = true;
}

bool CreateProcedureTemplateRequest::AiContentReviewTaskHasBeenSet() const
{
    return m_aiContentReviewTaskHasBeenSet;
}

AiAnalysisTaskInput CreateProcedureTemplateRequest::GetAiAnalysisTask() const
{
    return m_aiAnalysisTask;
}

void CreateProcedureTemplateRequest::SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask)
{
    m_aiAnalysisTask = _aiAnalysisTask;
    m_aiAnalysisTaskHasBeenSet = true;
}

bool CreateProcedureTemplateRequest::AiAnalysisTaskHasBeenSet() const
{
    return m_aiAnalysisTaskHasBeenSet;
}

AiRecognitionTaskInput CreateProcedureTemplateRequest::GetAiRecognitionTask() const
{
    return m_aiRecognitionTask;
}

void CreateProcedureTemplateRequest::SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask)
{
    m_aiRecognitionTask = _aiRecognitionTask;
    m_aiRecognitionTaskHasBeenSet = true;
}

bool CreateProcedureTemplateRequest::AiRecognitionTaskHasBeenSet() const
{
    return m_aiRecognitionTaskHasBeenSet;
}

ProcedureReviewAudioVideoTaskInput CreateProcedureTemplateRequest::GetReviewAudioVideoTask() const
{
    return m_reviewAudioVideoTask;
}

void CreateProcedureTemplateRequest::SetReviewAudioVideoTask(const ProcedureReviewAudioVideoTaskInput& _reviewAudioVideoTask)
{
    m_reviewAudioVideoTask = _reviewAudioVideoTask;
    m_reviewAudioVideoTaskHasBeenSet = true;
}

bool CreateProcedureTemplateRequest::ReviewAudioVideoTaskHasBeenSet() const
{
    return m_reviewAudioVideoTaskHasBeenSet;
}


