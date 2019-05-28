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

#include <tencentcloud/redis/v20180412/model/DescribeTaskInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

DescribeTaskInfoResponse::DescribeTaskInfoResponse() :
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_taskMessageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
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

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskMessage") && !rsp["TaskMessage"].IsNull())
    {
        if (!rsp["TaskMessage"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskMessage = string(rsp["TaskMessage"].GetString());
        m_taskMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeTaskInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeTaskInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeTaskInfoResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeTaskInfoResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTaskInfoResponse::GetTaskType() const
{
    return m_taskType;
}

bool DescribeTaskInfoResponse::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string DescribeTaskInfoResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeTaskInfoResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeTaskInfoResponse::GetTaskMessage() const
{
    return m_taskMessage;
}

bool DescribeTaskInfoResponse::TaskMessageHasBeenSet() const
{
    return m_taskMessageHasBeenSet;
}


