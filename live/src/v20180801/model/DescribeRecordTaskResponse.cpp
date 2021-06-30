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

#include <tencentcloud/live/v20180801/model/DescribeRecordTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeRecordTaskResponse::DescribeRecordTaskResponse() :
    m_scrollTokenHasBeenSet(false),
    m_taskListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRecordTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ScrollToken") && !rsp["ScrollToken"].IsNull())
    {
        if (!rsp["ScrollToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScrollToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scrollToken = string(rsp["ScrollToken"].GetString());
        m_scrollTokenHasBeenSet = true;
    }

    if (rsp.HasMember("TaskList") && !rsp["TaskList"].IsNull())
    {
        if (!rsp["TaskList"].IsArray())
            return CoreInternalOutcome(Error("response `TaskList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TaskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskList.push_back(item);
        }
        m_taskListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeRecordTaskResponse::GetScrollToken() const
{
    return m_scrollToken;
}

bool DescribeRecordTaskResponse::ScrollTokenHasBeenSet() const
{
    return m_scrollTokenHasBeenSet;
}

vector<RecordTask> DescribeRecordTaskResponse::GetTaskList() const
{
    return m_taskList;
}

bool DescribeRecordTaskResponse::TaskListHasBeenSet() const
{
    return m_taskListHasBeenSet;
}

