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

#include <tencentcloud/emr/v20190103/model/DescribeYarnScheduleHistoryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeYarnScheduleHistoryResponse::DescribeYarnScheduleHistoryResponse() :
    m_tasksHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_schedulerNameListHasBeenSet(false),
    m_stateListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeYarnScheduleHistoryResponse::Deserialize(const string &payload)
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
        if (!rsp["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tasks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SchedulerTaskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasks.push_back(item);
        }
        m_tasksHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("SchedulerNameList") && !rsp["SchedulerNameList"].IsNull())
    {
        if (!rsp["SchedulerNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SchedulerNameList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SchedulerNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_schedulerNameList.push_back((*itr).GetString());
        }
        m_schedulerNameListHasBeenSet = true;
    }

    if (rsp.HasMember("StateList") && !rsp["StateList"].IsNull())
    {
        if (!rsp["StateList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StateList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StateList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_stateList.push_back((*itr).GetInt64());
        }
        m_stateListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeYarnScheduleHistoryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_schedulerNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_schedulerNameList.begin(); itr != m_schedulerNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_stateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stateList.begin(); itr != m_stateList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
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


vector<SchedulerTaskInfo> DescribeYarnScheduleHistoryResponse::GetTasks() const
{
    return m_tasks;
}

bool DescribeYarnScheduleHistoryResponse::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

uint64_t DescribeYarnScheduleHistoryResponse::GetTotal() const
{
    return m_total;
}

bool DescribeYarnScheduleHistoryResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<string> DescribeYarnScheduleHistoryResponse::GetSchedulerNameList() const
{
    return m_schedulerNameList;
}

bool DescribeYarnScheduleHistoryResponse::SchedulerNameListHasBeenSet() const
{
    return m_schedulerNameListHasBeenSet;
}

vector<int64_t> DescribeYarnScheduleHistoryResponse::GetStateList() const
{
    return m_stateList;
}

bool DescribeYarnScheduleHistoryResponse::StateListHasBeenSet() const
{
    return m_stateListHasBeenSet;
}


