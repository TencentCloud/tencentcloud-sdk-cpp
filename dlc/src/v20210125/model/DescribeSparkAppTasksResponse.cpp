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

#include <tencentcloud/dlc/v20210125/model/DescribeSparkAppTasksResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeSparkAppTasksResponse::DescribeSparkAppTasksResponse() :
    m_tasksHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_sparkAppTasksHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSparkAppTasksResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Tasks") && !rsp["Tasks"].IsNull())
    {
        if (!rsp["Tasks"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Tasks` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tasks.Deserialize(rsp["Tasks"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tasksHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("SparkAppTasks") && !rsp["SparkAppTasks"].IsNull())
    {
        if (!rsp["SparkAppTasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SparkAppTasks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SparkAppTasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskResponseInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sparkAppTasks.push_back(item);
        }
        m_sparkAppTasksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSparkAppTasksResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tasks.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_sparkAppTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkAppTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sparkAppTasks.begin(); itr != m_sparkAppTasks.end(); ++itr, ++i)
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


TaskResponseInfo DescribeSparkAppTasksResponse::GetTasks() const
{
    return m_tasks;
}

bool DescribeSparkAppTasksResponse::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

int64_t DescribeSparkAppTasksResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeSparkAppTasksResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<TaskResponseInfo> DescribeSparkAppTasksResponse::GetSparkAppTasks() const
{
    return m_sparkAppTasks;
}

bool DescribeSparkAppTasksResponse::SparkAppTasksHasBeenSet() const
{
    return m_sparkAppTasksHasBeenSet;
}


