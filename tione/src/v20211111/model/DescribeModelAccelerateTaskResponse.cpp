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

#include <tencentcloud/tione/v20211111/model/DescribeModelAccelerateTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeModelAccelerateTaskResponse::DescribeModelAccelerateTaskResponse() :
    m_modelAccelerateTaskHasBeenSet(false),
    m_modelAccRuntimeInSecondHasBeenSet(false),
    m_modelAccStartTimeHasBeenSet(false),
    m_modelAccEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeModelAccelerateTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ModelAccelerateTask") && !rsp["ModelAccelerateTask"].IsNull())
    {
        if (!rsp["ModelAccelerateTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccelerateTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelAccelerateTask.Deserialize(rsp["ModelAccelerateTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelAccelerateTaskHasBeenSet = true;
    }

    if (rsp.HasMember("ModelAccRuntimeInSecond") && !rsp["ModelAccRuntimeInSecond"].IsNull())
    {
        if (!rsp["ModelAccRuntimeInSecond"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccRuntimeInSecond` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modelAccRuntimeInSecond = rsp["ModelAccRuntimeInSecond"].GetUint64();
        m_modelAccRuntimeInSecondHasBeenSet = true;
    }

    if (rsp.HasMember("ModelAccStartTime") && !rsp["ModelAccStartTime"].IsNull())
    {
        if (!rsp["ModelAccStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelAccStartTime = string(rsp["ModelAccStartTime"].GetString());
        m_modelAccStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ModelAccEndTime") && !rsp["ModelAccEndTime"].IsNull())
    {
        if (!rsp["ModelAccEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAccEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelAccEndTime = string(rsp["ModelAccEndTime"].GetString());
        m_modelAccEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeModelAccelerateTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_modelAccelerateTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAccelerateTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelAccelerateTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelAccRuntimeInSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAccRuntimeInSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelAccRuntimeInSecond, allocator);
    }

    if (m_modelAccStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAccStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelAccStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modelAccEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAccEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelAccEndTime.c_str(), allocator).Move(), allocator);
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


ModelAccelerateTask DescribeModelAccelerateTaskResponse::GetModelAccelerateTask() const
{
    return m_modelAccelerateTask;
}

bool DescribeModelAccelerateTaskResponse::ModelAccelerateTaskHasBeenSet() const
{
    return m_modelAccelerateTaskHasBeenSet;
}

uint64_t DescribeModelAccelerateTaskResponse::GetModelAccRuntimeInSecond() const
{
    return m_modelAccRuntimeInSecond;
}

bool DescribeModelAccelerateTaskResponse::ModelAccRuntimeInSecondHasBeenSet() const
{
    return m_modelAccRuntimeInSecondHasBeenSet;
}

string DescribeModelAccelerateTaskResponse::GetModelAccStartTime() const
{
    return m_modelAccStartTime;
}

bool DescribeModelAccelerateTaskResponse::ModelAccStartTimeHasBeenSet() const
{
    return m_modelAccStartTimeHasBeenSet;
}

string DescribeModelAccelerateTaskResponse::GetModelAccEndTime() const
{
    return m_modelAccEndTime;
}

bool DescribeModelAccelerateTaskResponse::ModelAccEndTimeHasBeenSet() const
{
    return m_modelAccEndTimeHasBeenSet;
}


