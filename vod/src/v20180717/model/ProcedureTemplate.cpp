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

#include <tencentcloud/vod/v20180717/model/ProcedureTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProcedureTemplate::ProcedureTemplate() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_mediaProcessTaskHasBeenSet(false),
    m_aiContentReviewTaskHasBeenSet(false),
    m_aiAnalysisTaskHasBeenSet(false),
    m_aiRecognitionTaskHasBeenSet(false),
    m_miniProgramPublishTaskHasBeenSet(false),
    m_reviewAudioVideoTaskHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ProcedureTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("MediaProcessTask") && !value["MediaProcessTask"].IsNull())
    {
        if (!value["MediaProcessTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTemplate.MediaProcessTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaProcessTask.Deserialize(value["MediaProcessTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaProcessTaskHasBeenSet = true;
    }

    if (value.HasMember("AiContentReviewTask") && !value["AiContentReviewTask"].IsNull())
    {
        if (!value["AiContentReviewTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTemplate.AiContentReviewTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiContentReviewTask.Deserialize(value["AiContentReviewTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiContentReviewTaskHasBeenSet = true;
    }

    if (value.HasMember("AiAnalysisTask") && !value["AiAnalysisTask"].IsNull())
    {
        if (!value["AiAnalysisTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTemplate.AiAnalysisTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiAnalysisTask.Deserialize(value["AiAnalysisTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiAnalysisTaskHasBeenSet = true;
    }

    if (value.HasMember("AiRecognitionTask") && !value["AiRecognitionTask"].IsNull())
    {
        if (!value["AiRecognitionTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTemplate.AiRecognitionTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiRecognitionTask.Deserialize(value["AiRecognitionTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiRecognitionTaskHasBeenSet = true;
    }

    if (value.HasMember("MiniProgramPublishTask") && !value["MiniProgramPublishTask"].IsNull())
    {
        if (!value["MiniProgramPublishTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTemplate.MiniProgramPublishTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_miniProgramPublishTask.Deserialize(value["MiniProgramPublishTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_miniProgramPublishTaskHasBeenSet = true;
    }

    if (value.HasMember("ReviewAudioVideoTask") && !value["ReviewAudioVideoTask"].IsNull())
    {
        if (!value["ReviewAudioVideoTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTemplate.ReviewAudioVideoTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reviewAudioVideoTask.Deserialize(value["ReviewAudioVideoTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reviewAudioVideoTaskHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcedureTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcedureTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaProcessTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaProcessTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaProcessTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiContentReviewTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiContentReviewTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiContentReviewTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiAnalysisTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiAnalysisTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiAnalysisTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiRecognitionTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiRecognitionTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiRecognitionTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_miniProgramPublishTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniProgramPublishTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_miniProgramPublishTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reviewAudioVideoTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewAudioVideoTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reviewAudioVideoTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string ProcedureTemplate::GetName() const
{
    return m_name;
}

void ProcedureTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProcedureTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ProcedureTemplate::GetType() const
{
    return m_type;
}

void ProcedureTemplate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ProcedureTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ProcedureTemplate::GetComment() const
{
    return m_comment;
}

void ProcedureTemplate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ProcedureTemplate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

MediaProcessTaskInput ProcedureTemplate::GetMediaProcessTask() const
{
    return m_mediaProcessTask;
}

void ProcedureTemplate::SetMediaProcessTask(const MediaProcessTaskInput& _mediaProcessTask)
{
    m_mediaProcessTask = _mediaProcessTask;
    m_mediaProcessTaskHasBeenSet = true;
}

bool ProcedureTemplate::MediaProcessTaskHasBeenSet() const
{
    return m_mediaProcessTaskHasBeenSet;
}

AiContentReviewTaskInput ProcedureTemplate::GetAiContentReviewTask() const
{
    return m_aiContentReviewTask;
}

void ProcedureTemplate::SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask)
{
    m_aiContentReviewTask = _aiContentReviewTask;
    m_aiContentReviewTaskHasBeenSet = true;
}

bool ProcedureTemplate::AiContentReviewTaskHasBeenSet() const
{
    return m_aiContentReviewTaskHasBeenSet;
}

AiAnalysisTaskInput ProcedureTemplate::GetAiAnalysisTask() const
{
    return m_aiAnalysisTask;
}

void ProcedureTemplate::SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask)
{
    m_aiAnalysisTask = _aiAnalysisTask;
    m_aiAnalysisTaskHasBeenSet = true;
}

bool ProcedureTemplate::AiAnalysisTaskHasBeenSet() const
{
    return m_aiAnalysisTaskHasBeenSet;
}

AiRecognitionTaskInput ProcedureTemplate::GetAiRecognitionTask() const
{
    return m_aiRecognitionTask;
}

void ProcedureTemplate::SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask)
{
    m_aiRecognitionTask = _aiRecognitionTask;
    m_aiRecognitionTaskHasBeenSet = true;
}

bool ProcedureTemplate::AiRecognitionTaskHasBeenSet() const
{
    return m_aiRecognitionTaskHasBeenSet;
}

WechatMiniProgramPublishTaskInput ProcedureTemplate::GetMiniProgramPublishTask() const
{
    return m_miniProgramPublishTask;
}

void ProcedureTemplate::SetMiniProgramPublishTask(const WechatMiniProgramPublishTaskInput& _miniProgramPublishTask)
{
    m_miniProgramPublishTask = _miniProgramPublishTask;
    m_miniProgramPublishTaskHasBeenSet = true;
}

bool ProcedureTemplate::MiniProgramPublishTaskHasBeenSet() const
{
    return m_miniProgramPublishTaskHasBeenSet;
}

ProcedureReviewAudioVideoTaskInput ProcedureTemplate::GetReviewAudioVideoTask() const
{
    return m_reviewAudioVideoTask;
}

void ProcedureTemplate::SetReviewAudioVideoTask(const ProcedureReviewAudioVideoTaskInput& _reviewAudioVideoTask)
{
    m_reviewAudioVideoTask = _reviewAudioVideoTask;
    m_reviewAudioVideoTaskHasBeenSet = true;
}

bool ProcedureTemplate::ReviewAudioVideoTaskHasBeenSet() const
{
    return m_reviewAudioVideoTaskHasBeenSet;
}

string ProcedureTemplate::GetCreateTime() const
{
    return m_createTime;
}

void ProcedureTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProcedureTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ProcedureTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void ProcedureTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ProcedureTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

