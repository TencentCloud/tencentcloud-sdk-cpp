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

#include <tencentcloud/tcss/v20201101/model/CreateRefreshTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateRefreshTaskResponse::CreateRefreshTaskResponse() :
    m_taskIdHasBeenSet(false),
    m_createResultHasBeenSet(false),
    m_newTaskIDHasBeenSet(false)
{
}

CoreInternalOutcome CreateRefreshTaskResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("CreateResult") && !rsp["CreateResult"].IsNull())
    {
        if (!rsp["CreateResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createResult = string(rsp["CreateResult"].GetString());
        m_createResultHasBeenSet = true;
    }

    if (rsp.HasMember("NewTaskID") && !rsp["NewTaskID"].IsNull())
    {
        if (!rsp["NewTaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewTaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newTaskID = string(rsp["NewTaskID"].GetString());
        m_newTaskIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateRefreshTaskResponse::ToJsonString() const
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

    if (m_createResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createResult.c_str(), allocator).Move(), allocator);
    }

    if (m_newTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewTaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newTaskID.c_str(), allocator).Move(), allocator);
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


uint64_t CreateRefreshTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool CreateRefreshTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateRefreshTaskResponse::GetCreateResult() const
{
    return m_createResult;
}

bool CreateRefreshTaskResponse::CreateResultHasBeenSet() const
{
    return m_createResultHasBeenSet;
}

string CreateRefreshTaskResponse::GetNewTaskID() const
{
    return m_newTaskID;
}

bool CreateRefreshTaskResponse::NewTaskIDHasBeenSet() const
{
    return m_newTaskIDHasBeenSet;
}


