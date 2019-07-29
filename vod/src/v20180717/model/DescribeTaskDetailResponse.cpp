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

#include <tencentcloud/vod/v20180717/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

DescribeTaskDetailResponse::DescribeTaskDetailResponse() :
    m_taskTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_beginProcessTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_procedureTaskHasBeenSet(false),
    m_editMediaTaskHasBeenSet(false),
    m_wechatPublishTaskHasBeenSet(false),
    m_composeMediaTaskHasBeenSet(false),
    m_pullUploadTaskHasBeenSet(false),
    m_transcodeTaskHasBeenSet(false),
    m_snapshotByTimeOffsetTaskHasBeenSet(false),
    m_concatTaskHasBeenSet(false),
    m_clipTaskHasBeenSet(false),
    m_createImageSpriteTaskHasBeenSet(false),
    m_wechatMiniProgramPublishTaskHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskDetailResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TaskType") && !rsp["TaskType"].IsNull())
    {
        if (!rsp["TaskType"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(rsp["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BeginProcessTime") && !rsp["BeginProcessTime"].IsNull())
    {
        if (!rsp["BeginProcessTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BeginProcessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginProcessTime = string(rsp["BeginProcessTime"].GetString());
        m_beginProcessTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FinishTime") && !rsp["FinishTime"].IsNull())
    {
        if (!rsp["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(rsp["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ProcedureTask") && !rsp["ProcedureTask"].IsNull())
    {
        if (!rsp["ProcedureTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ProcedureTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_procedureTask.Deserialize(rsp["ProcedureTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_procedureTaskHasBeenSet = true;
    }

    if (rsp.HasMember("EditMediaTask") && !rsp["EditMediaTask"].IsNull())
    {
        if (!rsp["EditMediaTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EditMediaTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_editMediaTask.Deserialize(rsp["EditMediaTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_editMediaTaskHasBeenSet = true;
    }

    if (rsp.HasMember("WechatPublishTask") && !rsp["WechatPublishTask"].IsNull())
    {
        if (!rsp["WechatPublishTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `WechatPublishTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wechatPublishTask.Deserialize(rsp["WechatPublishTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wechatPublishTaskHasBeenSet = true;
    }

    if (rsp.HasMember("ComposeMediaTask") && !rsp["ComposeMediaTask"].IsNull())
    {
        if (!rsp["ComposeMediaTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ComposeMediaTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_composeMediaTask.Deserialize(rsp["ComposeMediaTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_composeMediaTaskHasBeenSet = true;
    }

    if (rsp.HasMember("PullUploadTask") && !rsp["PullUploadTask"].IsNull())
    {
        if (!rsp["PullUploadTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `PullUploadTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pullUploadTask.Deserialize(rsp["PullUploadTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pullUploadTaskHasBeenSet = true;
    }

    if (rsp.HasMember("TranscodeTask") && !rsp["TranscodeTask"].IsNull())
    {
        if (!rsp["TranscodeTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TranscodeTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transcodeTask.Deserialize(rsp["TranscodeTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transcodeTaskHasBeenSet = true;
    }

    if (rsp.HasMember("SnapshotByTimeOffsetTask") && !rsp["SnapshotByTimeOffsetTask"].IsNull())
    {
        if (!rsp["SnapshotByTimeOffsetTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SnapshotByTimeOffsetTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_snapshotByTimeOffsetTask.Deserialize(rsp["SnapshotByTimeOffsetTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_snapshotByTimeOffsetTaskHasBeenSet = true;
    }

    if (rsp.HasMember("ConcatTask") && !rsp["ConcatTask"].IsNull())
    {
        if (!rsp["ConcatTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ConcatTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_concatTask.Deserialize(rsp["ConcatTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_concatTaskHasBeenSet = true;
    }

    if (rsp.HasMember("ClipTask") && !rsp["ClipTask"].IsNull())
    {
        if (!rsp["ClipTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ClipTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clipTask.Deserialize(rsp["ClipTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clipTaskHasBeenSet = true;
    }

    if (rsp.HasMember("CreateImageSpriteTask") && !rsp["CreateImageSpriteTask"].IsNull())
    {
        if (!rsp["CreateImageSpriteTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CreateImageSpriteTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_createImageSpriteTask.Deserialize(rsp["CreateImageSpriteTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_createImageSpriteTaskHasBeenSet = true;
    }

    if (rsp.HasMember("WechatMiniProgramPublishTask") && !rsp["WechatMiniProgramPublishTask"].IsNull())
    {
        if (!rsp["WechatMiniProgramPublishTask"].IsObject())
        {
            return CoreInternalOutcome(Error("response `WechatMiniProgramPublishTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wechatMiniProgramPublishTask.Deserialize(rsp["WechatMiniProgramPublishTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wechatMiniProgramPublishTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeTaskDetailResponse::GetTaskType() const
{
    return m_taskType;
}

bool DescribeTaskDetailResponse::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string DescribeTaskDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeTaskDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeTaskDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeTaskDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeTaskDetailResponse::GetBeginProcessTime() const
{
    return m_beginProcessTime;
}

bool DescribeTaskDetailResponse::BeginProcessTimeHasBeenSet() const
{
    return m_beginProcessTimeHasBeenSet;
}

string DescribeTaskDetailResponse::GetFinishTime() const
{
    return m_finishTime;
}

bool DescribeTaskDetailResponse::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

ProcedureTask DescribeTaskDetailResponse::GetProcedureTask() const
{
    return m_procedureTask;
}

bool DescribeTaskDetailResponse::ProcedureTaskHasBeenSet() const
{
    return m_procedureTaskHasBeenSet;
}

EditMediaTask DescribeTaskDetailResponse::GetEditMediaTask() const
{
    return m_editMediaTask;
}

bool DescribeTaskDetailResponse::EditMediaTaskHasBeenSet() const
{
    return m_editMediaTaskHasBeenSet;
}

WechatPublishTask DescribeTaskDetailResponse::GetWechatPublishTask() const
{
    return m_wechatPublishTask;
}

bool DescribeTaskDetailResponse::WechatPublishTaskHasBeenSet() const
{
    return m_wechatPublishTaskHasBeenSet;
}

ComposeMediaTask DescribeTaskDetailResponse::GetComposeMediaTask() const
{
    return m_composeMediaTask;
}

bool DescribeTaskDetailResponse::ComposeMediaTaskHasBeenSet() const
{
    return m_composeMediaTaskHasBeenSet;
}

PullUploadTask DescribeTaskDetailResponse::GetPullUploadTask() const
{
    return m_pullUploadTask;
}

bool DescribeTaskDetailResponse::PullUploadTaskHasBeenSet() const
{
    return m_pullUploadTaskHasBeenSet;
}

TranscodeTask2017 DescribeTaskDetailResponse::GetTranscodeTask() const
{
    return m_transcodeTask;
}

bool DescribeTaskDetailResponse::TranscodeTaskHasBeenSet() const
{
    return m_transcodeTaskHasBeenSet;
}

SnapshotByTimeOffsetTask2017 DescribeTaskDetailResponse::GetSnapshotByTimeOffsetTask() const
{
    return m_snapshotByTimeOffsetTask;
}

bool DescribeTaskDetailResponse::SnapshotByTimeOffsetTaskHasBeenSet() const
{
    return m_snapshotByTimeOffsetTaskHasBeenSet;
}

ConcatTask2017 DescribeTaskDetailResponse::GetConcatTask() const
{
    return m_concatTask;
}

bool DescribeTaskDetailResponse::ConcatTaskHasBeenSet() const
{
    return m_concatTaskHasBeenSet;
}

ClipTask2017 DescribeTaskDetailResponse::GetClipTask() const
{
    return m_clipTask;
}

bool DescribeTaskDetailResponse::ClipTaskHasBeenSet() const
{
    return m_clipTaskHasBeenSet;
}

CreateImageSpriteTask2017 DescribeTaskDetailResponse::GetCreateImageSpriteTask() const
{
    return m_createImageSpriteTask;
}

bool DescribeTaskDetailResponse::CreateImageSpriteTaskHasBeenSet() const
{
    return m_createImageSpriteTaskHasBeenSet;
}

WechatMiniProgramPublishTask DescribeTaskDetailResponse::GetWechatMiniProgramPublishTask() const
{
    return m_wechatMiniProgramPublishTask;
}

bool DescribeTaskDetailResponse::WechatMiniProgramPublishTaskHasBeenSet() const
{
    return m_wechatMiniProgramPublishTaskHasBeenSet;
}


