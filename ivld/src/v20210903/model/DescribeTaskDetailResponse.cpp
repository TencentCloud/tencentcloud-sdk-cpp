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

#include <tencentcloud/ivld/v20210903/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

DescribeTaskDetailResponse::DescribeTaskDetailResponse() :
    m_taskInfoHasBeenSet(false),
    m_taskDataHasBeenSet(false),
    m_imageTaskDataHasBeenSet(false),
    m_audioTaskDataHasBeenSet(false),
    m_textTaskDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskInfo") && !rsp["TaskInfo"].IsNull())
    {
        if (!rsp["TaskInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskInfo.Deserialize(rsp["TaskInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskInfoHasBeenSet = true;
    }

    if (rsp.HasMember("TaskData") && !rsp["TaskData"].IsNull())
    {
        if (!rsp["TaskData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskData.Deserialize(rsp["TaskData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskDataHasBeenSet = true;
    }

    if (rsp.HasMember("ImageTaskData") && !rsp["ImageTaskData"].IsNull())
    {
        if (!rsp["ImageTaskData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageTaskData.Deserialize(rsp["ImageTaskData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageTaskDataHasBeenSet = true;
    }

    if (rsp.HasMember("AudioTaskData") && !rsp["AudioTaskData"].IsNull())
    {
        if (!rsp["AudioTaskData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTaskData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioTaskData.Deserialize(rsp["AudioTaskData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioTaskDataHasBeenSet = true;
    }

    if (rsp.HasMember("TextTaskData") && !rsp["TextTaskData"].IsNull())
    {
        if (!rsp["TextTaskData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TextTaskData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textTaskData.Deserialize(rsp["TextTaskData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textTaskDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTaskDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageTaskDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTaskData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageTaskData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioTaskDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTaskData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioTaskData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_textTaskDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextTaskData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textTaskData.ToJsonObject(value[key.c_str()], allocator);
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


TaskInfo DescribeTaskDetailResponse::GetTaskInfo() const
{
    return m_taskInfo;
}

bool DescribeTaskDetailResponse::TaskInfoHasBeenSet() const
{
    return m_taskInfoHasBeenSet;
}

Data DescribeTaskDetailResponse::GetTaskData() const
{
    return m_taskData;
}

bool DescribeTaskDetailResponse::TaskDataHasBeenSet() const
{
    return m_taskDataHasBeenSet;
}

ImageData DescribeTaskDetailResponse::GetImageTaskData() const
{
    return m_imageTaskData;
}

bool DescribeTaskDetailResponse::ImageTaskDataHasBeenSet() const
{
    return m_imageTaskDataHasBeenSet;
}

AudioData DescribeTaskDetailResponse::GetAudioTaskData() const
{
    return m_audioTaskData;
}

bool DescribeTaskDetailResponse::AudioTaskDataHasBeenSet() const
{
    return m_audioTaskDataHasBeenSet;
}

TextData DescribeTaskDetailResponse::GetTextTaskData() const
{
    return m_textTaskData;
}

bool DescribeTaskDetailResponse::TextTaskDataHasBeenSet() const
{
    return m_textTaskDataHasBeenSet;
}


