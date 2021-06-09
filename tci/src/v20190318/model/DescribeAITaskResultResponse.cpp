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

#include <tencentcloud/tci/v20190318/model/DescribeAITaskResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

DescribeAITaskResultResponse::DescribeAITaskResultResponse() :
    m_audioResultHasBeenSet(false),
    m_imageResultHasBeenSet(false),
    m_videoResultHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAITaskResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AudioResult") && !rsp["AudioResult"].IsNull())
    {
        if (!rsp["AudioResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AudioResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioResult.Deserialize(rsp["AudioResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioResultHasBeenSet = true;
    }

    if (rsp.HasMember("ImageResult") && !rsp["ImageResult"].IsNull())
    {
        if (!rsp["ImageResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ImageResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageResult.Deserialize(rsp["ImageResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageResultHasBeenSet = true;
    }

    if (rsp.HasMember("VideoResult") && !rsp["VideoResult"].IsNull())
    {
        if (!rsp["VideoResult"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VideoResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoResult.Deserialize(rsp["VideoResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoResultHasBeenSet = true;
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

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = rsp["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


StandardAudioResult DescribeAITaskResultResponse::GetAudioResult() const
{
    return m_audioResult;
}

bool DescribeAITaskResultResponse::AudioResultHasBeenSet() const
{
    return m_audioResultHasBeenSet;
}

StandardImageResult DescribeAITaskResultResponse::GetImageResult() const
{
    return m_imageResult;
}

bool DescribeAITaskResultResponse::ImageResultHasBeenSet() const
{
    return m_imageResultHasBeenSet;
}

StandardVideoResult DescribeAITaskResultResponse::GetVideoResult() const
{
    return m_videoResult;
}

bool DescribeAITaskResultResponse::VideoResultHasBeenSet() const
{
    return m_videoResultHasBeenSet;
}

string DescribeAITaskResultResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAITaskResultResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeAITaskResultResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeAITaskResultResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}


