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

#include <tencentcloud/wedata/v20210820/model/DryRunDIOfflineTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DryRunDIOfflineTaskResponse::DryRunDIOfflineTaskResponse() :
    m_currentRunDateHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskInstanceKeyHasBeenSet(false)
{
}

CoreInternalOutcome DryRunDIOfflineTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CurrentRunDate") && !rsp["CurrentRunDate"].IsNull())
    {
        if (!rsp["CurrentRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentRunDate = string(rsp["CurrentRunDate"].GetString());
        m_currentRunDateHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectId") && !rsp["ProjectId"].IsNull())
    {
        if (!rsp["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(rsp["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
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

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskInstanceKey") && !rsp["TaskInstanceKey"].IsNull())
    {
        if (!rsp["TaskInstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskInstanceKey = string(rsp["TaskInstanceKey"].GetString());
        m_taskInstanceKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DryRunDIOfflineTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_currentRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInstanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskInstanceKey.c_str(), allocator).Move(), allocator);
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


string DryRunDIOfflineTaskResponse::GetCurrentRunDate() const
{
    return m_currentRunDate;
}

bool DryRunDIOfflineTaskResponse::CurrentRunDateHasBeenSet() const
{
    return m_currentRunDateHasBeenSet;
}

string DryRunDIOfflineTaskResponse::GetProjectId() const
{
    return m_projectId;
}

bool DryRunDIOfflineTaskResponse::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DryRunDIOfflineTaskResponse::GetStatus() const
{
    return m_status;
}

bool DryRunDIOfflineTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DryRunDIOfflineTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool DryRunDIOfflineTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DryRunDIOfflineTaskResponse::GetTaskInstanceKey() const
{
    return m_taskInstanceKey;
}

bool DryRunDIOfflineTaskResponse::TaskInstanceKeyHasBeenSet() const
{
    return m_taskInstanceKeyHasBeenSet;
}


