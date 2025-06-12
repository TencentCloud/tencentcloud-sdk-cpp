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

#include <tencentcloud/lke/v20231130/model/CreateWorkflowRunResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

CreateWorkflowRunResponse::CreateWorkflowRunResponse() :
    m_appBizIdHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false),
    m_runEnvHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_customVariablesHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome CreateWorkflowRunResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppBizId") && !rsp["AppBizId"].IsNull())
    {
        if (!rsp["AppBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appBizId = string(rsp["AppBizId"].GetString());
        m_appBizIdHasBeenSet = true;
    }

    if (rsp.HasMember("WorkflowRunId") && !rsp["WorkflowRunId"].IsNull())
    {
        if (!rsp["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(rsp["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }

    if (rsp.HasMember("RunEnv") && !rsp["RunEnv"].IsNull())
    {
        if (!rsp["RunEnv"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RunEnv` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runEnv = rsp["RunEnv"].GetUint64();
        m_runEnvHasBeenSet = true;
    }

    if (rsp.HasMember("Query") && !rsp["Query"].IsNull())
    {
        if (!rsp["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(rsp["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (rsp.HasMember("CustomVariables") && !rsp["CustomVariables"].IsNull())
    {
        if (!rsp["CustomVariables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomVariables` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CustomVariables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomVariable item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customVariables.push_back(item);
        }
        m_customVariablesHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateWorkflowRunResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_runEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runEnv, allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_customVariablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customVariables.begin(); itr != m_customVariables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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


string CreateWorkflowRunResponse::GetAppBizId() const
{
    return m_appBizId;
}

bool CreateWorkflowRunResponse::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

string CreateWorkflowRunResponse::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

bool CreateWorkflowRunResponse::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

uint64_t CreateWorkflowRunResponse::GetRunEnv() const
{
    return m_runEnv;
}

bool CreateWorkflowRunResponse::RunEnvHasBeenSet() const
{
    return m_runEnvHasBeenSet;
}

string CreateWorkflowRunResponse::GetQuery() const
{
    return m_query;
}

bool CreateWorkflowRunResponse::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

vector<CustomVariable> CreateWorkflowRunResponse::GetCustomVariables() const
{
    return m_customVariables;
}

bool CreateWorkflowRunResponse::CustomVariablesHasBeenSet() const
{
    return m_customVariablesHasBeenSet;
}

string CreateWorkflowRunResponse::GetCreateTime() const
{
    return m_createTime;
}

bool CreateWorkflowRunResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


