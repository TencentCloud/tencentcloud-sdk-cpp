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
using namespace std;

DescribeVideoGenerationTaskResponse::DescribeVideoGenerationTaskResponse() :
    m_groupIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_totalTimeHasBeenSet(false),
    m_videoInfosHasBeenSet(false),
    m_videoInfoListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVideoGenerationTaskResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("RoomId") && !rsp["RoomId"].IsNull())
    {
        if (!rsp["RoomId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = rsp["RoomId"].GetInt64();
        m_roomIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("TotalTime") && !rsp["TotalTime"].IsNull())
    {
        if (!rsp["TotalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = rsp["TotalTime"].GetInt64();
        m_totalTimeHasBeenSet = true;
    }

    if (rsp.HasMember("VideoInfos") && !rsp["VideoInfos"].IsNull())
    {
        if (!rsp["VideoInfos"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoInfos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoInfos.Deserialize(rsp["VideoInfos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoInfosHasBeenSet = true;
    }

    if (rsp.HasMember("VideoInfoList") && !rsp["VideoInfoList"].IsNull())
    {
        if (!rsp["VideoInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VideoInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoInfoList.push_back(item);
        }
        m_videoInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVideoGenerationTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTime, allocator);
    }

    if (m_videoInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoInfos.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoInfoList.begin(); itr != m_videoInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
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

vector<VideoInfo> DescribeVideoGenerationTaskResponse::GetVideoInfoList() const
{
    return m_videoInfoList;
}

bool DescribeVideoGenerationTaskResponse::VideoInfoListHasBeenSet() const
{
    return m_videoInfoListHasBeenSet;
}


