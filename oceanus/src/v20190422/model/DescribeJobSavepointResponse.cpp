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

#include <tencentcloud/oceanus/v20190422/model/DescribeJobSavepointResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DescribeJobSavepointResponse::DescribeJobSavepointResponse() :
    m_totalNumberHasBeenSet(false),
    m_savepointHasBeenSet(false),
    m_runningSavepointHasBeenSet(false),
    m_runningTotalNumberHasBeenSet(false)
{
}

CoreInternalOutcome DescribeJobSavepointResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalNumber") && !rsp["TotalNumber"].IsNull())
    {
        if (!rsp["TotalNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNumber = rsp["TotalNumber"].GetInt64();
        m_totalNumberHasBeenSet = true;
    }

    if (rsp.HasMember("Savepoint") && !rsp["Savepoint"].IsNull())
    {
        if (!rsp["Savepoint"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Savepoint` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Savepoint"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Savepoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_savepoint.push_back(item);
        }
        m_savepointHasBeenSet = true;
    }

    if (rsp.HasMember("RunningSavepoint") && !rsp["RunningSavepoint"].IsNull())
    {
        if (!rsp["RunningSavepoint"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RunningSavepoint` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RunningSavepoint"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Savepoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_runningSavepoint.push_back(item);
        }
        m_runningSavepointHasBeenSet = true;
    }

    if (rsp.HasMember("RunningTotalNumber") && !rsp["RunningTotalNumber"].IsNull())
    {
        if (!rsp["RunningTotalNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunningTotalNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningTotalNumber = rsp["RunningTotalNumber"].GetInt64();
        m_runningTotalNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeJobSavepointResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNumber, allocator);
    }

    if (m_savepointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Savepoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_savepoint.begin(); itr != m_savepoint.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runningSavepointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningSavepoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_runningSavepoint.begin(); itr != m_runningSavepoint.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runningTotalNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningTotalNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningTotalNumber, allocator);
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


int64_t DescribeJobSavepointResponse::GetTotalNumber() const
{
    return m_totalNumber;
}

bool DescribeJobSavepointResponse::TotalNumberHasBeenSet() const
{
    return m_totalNumberHasBeenSet;
}

vector<Savepoint> DescribeJobSavepointResponse::GetSavepoint() const
{
    return m_savepoint;
}

bool DescribeJobSavepointResponse::SavepointHasBeenSet() const
{
    return m_savepointHasBeenSet;
}

vector<Savepoint> DescribeJobSavepointResponse::GetRunningSavepoint() const
{
    return m_runningSavepoint;
}

bool DescribeJobSavepointResponse::RunningSavepointHasBeenSet() const
{
    return m_runningSavepointHasBeenSet;
}

int64_t DescribeJobSavepointResponse::GetRunningTotalNumber() const
{
    return m_runningTotalNumber;
}

bool DescribeJobSavepointResponse::RunningTotalNumberHasBeenSet() const
{
    return m_runningTotalNumberHasBeenSet;
}


