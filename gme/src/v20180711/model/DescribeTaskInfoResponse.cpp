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

#include <tencentcloud/gme/v20180711/model/DescribeTaskInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

DescribeTaskInfoResponse::DescribeTaskInfoResponse() :
    m_taskIdHasBeenSet(false),
    m_recordModeHasBeenSet(false),
    m_subscribeRecordUserIdsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = rsp["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("RecordMode") && !rsp["RecordMode"].IsNull())
    {
        if (!rsp["RecordMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordMode = rsp["RecordMode"].GetUint64();
        m_recordModeHasBeenSet = true;
    }

    if (rsp.HasMember("SubscribeRecordUserIds") && !rsp["SubscribeRecordUserIds"].IsNull())
    {
        if (!rsp["SubscribeRecordUserIds"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeRecordUserIds` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subscribeRecordUserIds.Deserialize(rsp["SubscribeRecordUserIds"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subscribeRecordUserIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTaskInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_recordModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordMode, allocator);
    }

    if (m_subscribeRecordUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeRecordUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subscribeRecordUserIds.ToJsonObject(value[key.c_str()], allocator);
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


uint64_t DescribeTaskInfoResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeTaskInfoResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t DescribeTaskInfoResponse::GetRecordMode() const
{
    return m_recordMode;
}

bool DescribeTaskInfoResponse::RecordModeHasBeenSet() const
{
    return m_recordModeHasBeenSet;
}

SubscribeRecordUserIds DescribeTaskInfoResponse::GetSubscribeRecordUserIds() const
{
    return m_subscribeRecordUserIds;
}

bool DescribeTaskInfoResponse::SubscribeRecordUserIdsHasBeenSet() const
{
    return m_subscribeRecordUserIdsHasBeenSet;
}


