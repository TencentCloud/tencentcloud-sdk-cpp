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

#include <tencentcloud/oceanus/v20190422/model/DescribeJobSubmissionLogResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DescribeJobSubmissionLogResponse::DescribeJobSubmissionLogResponse() :
    m_cursorHasBeenSet(false),
    m_listOverHasBeenSet(false),
    m_jobRequestIdHasBeenSet(false),
    m_jobInstanceListHasBeenSet(false),
    m_logListHasBeenSet(false),
    m_logContentListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeJobSubmissionLogResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Cursor") && !rsp["Cursor"].IsNull())
    {
        if (!rsp["Cursor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cursor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cursor = string(rsp["Cursor"].GetString());
        m_cursorHasBeenSet = true;
    }

    if (rsp.HasMember("ListOver") && !rsp["ListOver"].IsNull())
    {
        if (!rsp["ListOver"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListOver` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_listOver = rsp["ListOver"].GetBool();
        m_listOverHasBeenSet = true;
    }

    if (rsp.HasMember("JobRequestId") && !rsp["JobRequestId"].IsNull())
    {
        if (!rsp["JobRequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobRequestId = string(rsp["JobRequestId"].GetString());
        m_jobRequestIdHasBeenSet = true;
    }

    if (rsp.HasMember("JobInstanceList") && !rsp["JobInstanceList"].IsNull())
    {
        if (!rsp["JobInstanceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `JobInstanceList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["JobInstanceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            JobInstanceForSubmissionLog item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_jobInstanceList.push_back(item);
        }
        m_jobInstanceListHasBeenSet = true;
    }

    if (rsp.HasMember("LogList") && !rsp["LogList"].IsNull())
    {
        if (!rsp["LogList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LogList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logList.push_back((*itr).GetString());
        }
        m_logListHasBeenSet = true;
    }

    if (rsp.HasMember("LogContentList") && !rsp["LogContentList"].IsNull())
    {
        if (!rsp["LogContentList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogContentList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LogContentList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logContentList.push_back(item);
        }
        m_logContentListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeJobSubmissionLogResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
    }

    if (m_listOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListOver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listOver, allocator);
    }

    if (m_jobRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobInstanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobInstanceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_jobInstanceList.begin(); itr != m_jobInstanceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_logListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logList.begin(); itr != m_logList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logContentListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogContentList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logContentList.begin(); itr != m_logContentList.end(); ++itr, ++i)
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


string DescribeJobSubmissionLogResponse::GetCursor() const
{
    return m_cursor;
}

bool DescribeJobSubmissionLogResponse::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

bool DescribeJobSubmissionLogResponse::GetListOver() const
{
    return m_listOver;
}

bool DescribeJobSubmissionLogResponse::ListOverHasBeenSet() const
{
    return m_listOverHasBeenSet;
}

string DescribeJobSubmissionLogResponse::GetJobRequestId() const
{
    return m_jobRequestId;
}

bool DescribeJobSubmissionLogResponse::JobRequestIdHasBeenSet() const
{
    return m_jobRequestIdHasBeenSet;
}

vector<JobInstanceForSubmissionLog> DescribeJobSubmissionLogResponse::GetJobInstanceList() const
{
    return m_jobInstanceList;
}

bool DescribeJobSubmissionLogResponse::JobInstanceListHasBeenSet() const
{
    return m_jobInstanceListHasBeenSet;
}

vector<string> DescribeJobSubmissionLogResponse::GetLogList() const
{
    return m_logList;
}

bool DescribeJobSubmissionLogResponse::LogListHasBeenSet() const
{
    return m_logListHasBeenSet;
}

vector<LogContent> DescribeJobSubmissionLogResponse::GetLogContentList() const
{
    return m_logContentList;
}

bool DescribeJobSubmissionLogResponse::LogContentListHasBeenSet() const
{
    return m_logContentListHasBeenSet;
}


