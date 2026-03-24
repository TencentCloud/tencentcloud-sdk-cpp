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

#include <tencentcloud/config/v20220802/model/RemediationExecutions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

RemediationExecutions::RemediationExecutions() :
    m_executionStatusHasBeenSet(false),
    m_executionResourceTypeHasBeenSet(false),
    m_executionCreateDateHasBeenSet(false),
    m_executionStatusMessageHasBeenSet(false),
    m_executionResourceIdsHasBeenSet(false)
{
}

CoreInternalOutcome RemediationExecutions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutionStatus") && !value["ExecutionStatus"].IsNull())
    {
        if (!value["ExecutionStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RemediationExecutions.ExecutionStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_executionStatus = value["ExecutionStatus"].GetUint64();
        m_executionStatusHasBeenSet = true;
    }

    if (value.HasMember("ExecutionResourceType") && !value["ExecutionResourceType"].IsNull())
    {
        if (!value["ExecutionResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemediationExecutions.ExecutionResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionResourceType = string(value["ExecutionResourceType"].GetString());
        m_executionResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionCreateDate") && !value["ExecutionCreateDate"].IsNull())
    {
        if (!value["ExecutionCreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemediationExecutions.ExecutionCreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionCreateDate = string(value["ExecutionCreateDate"].GetString());
        m_executionCreateDateHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStatusMessage") && !value["ExecutionStatusMessage"].IsNull())
    {
        if (!value["ExecutionStatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemediationExecutions.ExecutionStatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStatusMessage = string(value["ExecutionStatusMessage"].GetString());
        m_executionStatusMessageHasBeenSet = true;
    }

    if (value.HasMember("ExecutionResourceIds") && !value["ExecutionResourceIds"].IsNull())
    {
        if (!value["ExecutionResourceIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemediationExecutions.ExecutionResourceIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionResourceIds = string(value["ExecutionResourceIds"].GetString());
        m_executionResourceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RemediationExecutions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionStatus, allocator);
    }

    if (m_executionResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_executionCreateDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionCreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionCreateDate.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStatusMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStatusMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionStatusMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_executionResourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionResourceIds.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RemediationExecutions::GetExecutionStatus() const
{
    return m_executionStatus;
}

void RemediationExecutions::SetExecutionStatus(const uint64_t& _executionStatus)
{
    m_executionStatus = _executionStatus;
    m_executionStatusHasBeenSet = true;
}

bool RemediationExecutions::ExecutionStatusHasBeenSet() const
{
    return m_executionStatusHasBeenSet;
}

string RemediationExecutions::GetExecutionResourceType() const
{
    return m_executionResourceType;
}

void RemediationExecutions::SetExecutionResourceType(const string& _executionResourceType)
{
    m_executionResourceType = _executionResourceType;
    m_executionResourceTypeHasBeenSet = true;
}

bool RemediationExecutions::ExecutionResourceTypeHasBeenSet() const
{
    return m_executionResourceTypeHasBeenSet;
}

string RemediationExecutions::GetExecutionCreateDate() const
{
    return m_executionCreateDate;
}

void RemediationExecutions::SetExecutionCreateDate(const string& _executionCreateDate)
{
    m_executionCreateDate = _executionCreateDate;
    m_executionCreateDateHasBeenSet = true;
}

bool RemediationExecutions::ExecutionCreateDateHasBeenSet() const
{
    return m_executionCreateDateHasBeenSet;
}

string RemediationExecutions::GetExecutionStatusMessage() const
{
    return m_executionStatusMessage;
}

void RemediationExecutions::SetExecutionStatusMessage(const string& _executionStatusMessage)
{
    m_executionStatusMessage = _executionStatusMessage;
    m_executionStatusMessageHasBeenSet = true;
}

bool RemediationExecutions::ExecutionStatusMessageHasBeenSet() const
{
    return m_executionStatusMessageHasBeenSet;
}

string RemediationExecutions::GetExecutionResourceIds() const
{
    return m_executionResourceIds;
}

void RemediationExecutions::SetExecutionResourceIds(const string& _executionResourceIds)
{
    m_executionResourceIds = _executionResourceIds;
    m_executionResourceIdsHasBeenSet = true;
}

bool RemediationExecutions::ExecutionResourceIdsHasBeenSet() const
{
    return m_executionResourceIdsHasBeenSet;
}

