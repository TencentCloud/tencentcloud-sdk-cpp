/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/iotexplorer/v20190423/model/InvokeTWeSeeComprehensionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

InvokeTWeSeeComprehensionResponse::InvokeTWeSeeComprehensionResponse() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_comprehensionResultHasBeenSet(false),
    m_costBasicHasBeenSet(false),
    m_costAdvancedHasBeenSet(false)
{
}

CoreInternalOutcome InvokeTWeSeeComprehensionResponse::Deserialize(const string &payload)
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
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ComprehensionResult") && !rsp["ComprehensionResult"].IsNull())
    {
        if (!rsp["ComprehensionResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComprehensionResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_comprehensionResult.Deserialize(rsp["ComprehensionResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_comprehensionResultHasBeenSet = true;
    }

    if (rsp.HasMember("CostBasic") && !rsp["CostBasic"].IsNull())
    {
        if (!rsp["CostBasic"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CostBasic` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costBasic = rsp["CostBasic"].GetInt64();
        m_costBasicHasBeenSet = true;
    }

    if (rsp.HasMember("CostAdvanced") && !rsp["CostAdvanced"].IsNull())
    {
        if (!rsp["CostAdvanced"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CostAdvanced` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costAdvanced = rsp["CostAdvanced"].GetInt64();
        m_costAdvancedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string InvokeTWeSeeComprehensionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_comprehensionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComprehensionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_comprehensionResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_costBasicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostBasic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costBasic, allocator);
    }

    if (m_costAdvancedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostAdvanced";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costAdvanced, allocator);
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


string InvokeTWeSeeComprehensionResponse::GetTaskId() const
{
    return m_taskId;
}

bool InvokeTWeSeeComprehensionResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t InvokeTWeSeeComprehensionResponse::GetStatus() const
{
    return m_status;
}

bool InvokeTWeSeeComprehensionResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

SeeComprehensionResult InvokeTWeSeeComprehensionResponse::GetComprehensionResult() const
{
    return m_comprehensionResult;
}

bool InvokeTWeSeeComprehensionResponse::ComprehensionResultHasBeenSet() const
{
    return m_comprehensionResultHasBeenSet;
}

int64_t InvokeTWeSeeComprehensionResponse::GetCostBasic() const
{
    return m_costBasic;
}

bool InvokeTWeSeeComprehensionResponse::CostBasicHasBeenSet() const
{
    return m_costBasicHasBeenSet;
}

int64_t InvokeTWeSeeComprehensionResponse::GetCostAdvanced() const
{
    return m_costAdvanced;
}

bool InvokeTWeSeeComprehensionResponse::CostAdvancedHasBeenSet() const
{
    return m_costAdvancedHasBeenSet;
}


