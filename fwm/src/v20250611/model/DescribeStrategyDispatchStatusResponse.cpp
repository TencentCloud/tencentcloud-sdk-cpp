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

#include <tencentcloud/fwm/v20250611/model/DescribeStrategyDispatchStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

DescribeStrategyDispatchStatusResponse::DescribeStrategyDispatchStatusResponse() :
    m_progressHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleGroupNumHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_dispatchStrategyListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeStrategyDispatchStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("RuleGroupNum") && !rsp["RuleGroupNum"].IsNull())
    {
        if (!rsp["RuleGroupNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupNum = rsp["RuleGroupNum"].GetInt64();
        m_ruleGroupNumHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMsg") && !rsp["ErrorMsg"].IsNull())
    {
        if (!rsp["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(rsp["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (rsp.HasMember("DispatchStrategyList") && !rsp["DispatchStrategyList"].IsNull())
    {
        if (!rsp["DispatchStrategyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DispatchStrategyList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DispatchStrategyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dispatchStrategyList.push_back((*itr).GetString());
        }
        m_dispatchStrategyListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeStrategyDispatchStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleGroupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupNum, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_dispatchStrategyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispatchStrategyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dispatchStrategyList.begin(); itr != m_dispatchStrategyList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


double DescribeStrategyDispatchStatusResponse::GetProgress() const
{
    return m_progress;
}

bool DescribeStrategyDispatchStatusResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string DescribeStrategyDispatchStatusResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeStrategyDispatchStatusResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeStrategyDispatchStatusResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeStrategyDispatchStatusResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeStrategyDispatchStatusResponse::GetStatus() const
{
    return m_status;
}

bool DescribeStrategyDispatchStatusResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeStrategyDispatchStatusResponse::GetRuleGroupNum() const
{
    return m_ruleGroupNum;
}

bool DescribeStrategyDispatchStatusResponse::RuleGroupNumHasBeenSet() const
{
    return m_ruleGroupNumHasBeenSet;
}

string DescribeStrategyDispatchStatusResponse::GetErrorMsg() const
{
    return m_errorMsg;
}

bool DescribeStrategyDispatchStatusResponse::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

vector<string> DescribeStrategyDispatchStatusResponse::GetDispatchStrategyList() const
{
    return m_dispatchStrategyList;
}

bool DescribeStrategyDispatchStatusResponse::DispatchStrategyListHasBeenSet() const
{
    return m_dispatchStrategyListHasBeenSet;
}


