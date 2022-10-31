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

#include <tencentcloud/dts/v20211206/model/DescribeCheckSyncJobResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DescribeCheckSyncJobResultResponse::DescribeCheckSyncJobResultResponse() :
    m_statusHasBeenSet(false),
    m_stepCountHasBeenSet(false),
    m_stepCurHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_stepInfosHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCheckSyncJobResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("StepCount") && !rsp["StepCount"].IsNull())
    {
        if (!rsp["StepCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StepCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepCount = rsp["StepCount"].GetUint64();
        m_stepCountHasBeenSet = true;
    }

    if (rsp.HasMember("StepCur") && !rsp["StepCur"].IsNull())
    {
        if (!rsp["StepCur"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StepCur` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepCur = rsp["StepCur"].GetUint64();
        m_stepCurHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("StepInfos") && !rsp["StepInfos"].IsNull())
    {
        if (!rsp["StepInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StepInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StepInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StepInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stepInfos.push_back(item);
        }
        m_stepInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCheckSyncJobResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_stepCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepCount, allocator);
    }

    if (m_stepCurHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepCur";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepCur, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_stepInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stepInfos.begin(); itr != m_stepInfos.end(); ++itr, ++i)
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


string DescribeCheckSyncJobResultResponse::GetStatus() const
{
    return m_status;
}

bool DescribeCheckSyncJobResultResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeCheckSyncJobResultResponse::GetStepCount() const
{
    return m_stepCount;
}

bool DescribeCheckSyncJobResultResponse::StepCountHasBeenSet() const
{
    return m_stepCountHasBeenSet;
}

uint64_t DescribeCheckSyncJobResultResponse::GetStepCur() const
{
    return m_stepCur;
}

bool DescribeCheckSyncJobResultResponse::StepCurHasBeenSet() const
{
    return m_stepCurHasBeenSet;
}

uint64_t DescribeCheckSyncJobResultResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeCheckSyncJobResultResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

vector<StepInfo> DescribeCheckSyncJobResultResponse::GetStepInfos() const
{
    return m_stepInfos;
}

bool DescribeCheckSyncJobResultResponse::StepInfosHasBeenSet() const
{
    return m_stepInfosHasBeenSet;
}


