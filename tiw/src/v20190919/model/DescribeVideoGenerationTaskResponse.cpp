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

#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace rapidjson;
using namespace std;

DescribeVideoGenerationTaskResponse::DescribeVideoGenerationTaskResponse() :
    m_groupIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_totalTimeHasBeenSet(false),
    m_videoInfosHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVideoGenerationTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("RoomId") && !rsp["RoomId"].IsNull())
    {
        if (!rsp["RoomId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RoomId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = rsp["RoomId"].GetInt64();
        m_roomIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetInt64();
        m_progressHasBeenSet = true;
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

    if (rsp.HasMember("TotalTime") && !rsp["TotalTime"].IsNull())
    {
        if (!rsp["TotalTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = rsp["TotalTime"].GetInt64();
        m_totalTimeHasBeenSet = true;
    }

    if (rsp.HasMember("VideoInfos") && !rsp["VideoInfos"].IsNull())
    {
        if (!rsp["VideoInfos"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VideoInfos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoInfos.Deserialize(rsp["VideoInfos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeVideoGenerationTaskResponse::GetGroupId() const
{
    return m_groupId;
}

bool DescribeVideoGenerationTaskResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t DescribeVideoGenerationTaskResponse::GetRoomId() const
{
    return m_roomId;
}

bool DescribeVideoGenerationTaskResponse::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string DescribeVideoGenerationTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeVideoGenerationTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeVideoGenerationTaskResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeVideoGenerationTaskResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string DescribeVideoGenerationTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeVideoGenerationTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeVideoGenerationTaskResponse::GetTotalTime() const
{
    return m_totalTime;
}

bool DescribeVideoGenerationTaskResponse::TotalTimeHasBeenSet() const
{
    return m_totalTimeHasBeenSet;
}

VideoInfo DescribeVideoGenerationTaskResponse::GetVideoInfos() const
{
    return m_videoInfos;
}

bool DescribeVideoGenerationTaskResponse::VideoInfosHasBeenSet() const
{
    return m_videoInfosHasBeenSet;
}


