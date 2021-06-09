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

#include <tencentcloud/cme/v20191029/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

DescribeTaskDetailResponse::DescribeTaskDetailResponse() :
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_videoEditProjectOutputHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("ErrCode") && !rsp["ErrCode"].IsNull())
    {
        if (!rsp["ErrCode"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ErrCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = rsp["ErrCode"].GetUint64();
        m_errCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrMsg") && !rsp["ErrMsg"].IsNull())
    {
        if (!rsp["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(rsp["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
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

    if (rsp.HasMember("VideoEditProjectOutput") && !rsp["VideoEditProjectOutput"].IsNull())
    {
        if (!rsp["VideoEditProjectOutput"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VideoEditProjectOutput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoEditProjectOutput.Deserialize(rsp["VideoEditProjectOutput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoEditProjectOutputHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}


string DescribeTaskDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeTaskDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeTaskDetailResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeTaskDetailResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t DescribeTaskDetailResponse::GetErrCode() const
{
    return m_errCode;
}

bool DescribeTaskDetailResponse::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string DescribeTaskDetailResponse::GetErrMsg() const
{
    return m_errMsg;
}

bool DescribeTaskDetailResponse::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

string DescribeTaskDetailResponse::GetTaskType() const
{
    return m_taskType;
}

bool DescribeTaskDetailResponse::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

VideoEditProjectOutput DescribeTaskDetailResponse::GetVideoEditProjectOutput() const
{
    return m_videoEditProjectOutput;
}

bool DescribeTaskDetailResponse::VideoEditProjectOutputHasBeenSet() const
{
    return m_videoEditProjectOutputHasBeenSet;
}

string DescribeTaskDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeTaskDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


