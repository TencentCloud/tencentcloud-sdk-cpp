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

#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeScheduledTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

DescribeScheduledTaskResponse::DescribeScheduledTaskResponse() :
    m_taskIdHasBeenSet(false),
    m_taskKeyHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_cronExprHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastRunTimeHasBeenSet(false),
    m_nextRunTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_agentConfigHasBeenSet(false),
    m_effectiveStartHasBeenSet(false),
    m_effectiveEndHasBeenSet(false),
    m_deliveryTargetSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScheduledTaskResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("TaskKey") && !rsp["TaskKey"].IsNull())
    {
        if (!rsp["TaskKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskKey = string(rsp["TaskKey"].GetString());
        m_taskKeyHasBeenSet = true;
    }

    if (rsp.HasMember("TaskName") && !rsp["TaskName"].IsNull())
    {
        if (!rsp["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(rsp["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("AgentId") && !rsp["AgentId"].IsNull())
    {
        if (!rsp["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(rsp["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (rsp.HasMember("CronExpr") && !rsp["CronExpr"].IsNull())
    {
        if (!rsp["CronExpr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronExpr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronExpr = string(rsp["CronExpr"].GetString());
        m_cronExprHasBeenSet = true;
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

    if (rsp.HasMember("LastRunTime") && !rsp["LastRunTime"].IsNull())
    {
        if (!rsp["LastRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRunTime = string(rsp["LastRunTime"].GetString());
        m_lastRunTimeHasBeenSet = true;
    }

    if (rsp.HasMember("NextRunTime") && !rsp["NextRunTime"].IsNull())
    {
        if (!rsp["NextRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NextRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextRunTime = string(rsp["NextRunTime"].GetString());
        m_nextRunTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(rsp["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ModifiedTime") && !rsp["ModifiedTime"].IsNull())
    {
        if (!rsp["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(rsp["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AgentConfig") && !rsp["AgentConfig"].IsNull())
    {
        if (!rsp["AgentConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agentConfig.Deserialize(rsp["AgentConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentConfigHasBeenSet = true;
    }

    if (rsp.HasMember("EffectiveStart") && !rsp["EffectiveStart"].IsNull())
    {
        if (!rsp["EffectiveStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveStart = string(rsp["EffectiveStart"].GetString());
        m_effectiveStartHasBeenSet = true;
    }

    if (rsp.HasMember("EffectiveEnd") && !rsp["EffectiveEnd"].IsNull())
    {
        if (!rsp["EffectiveEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveEnd = string(rsp["EffectiveEnd"].GetString());
        m_effectiveEndHasBeenSet = true;
    }

    if (rsp.HasMember("DeliveryTargetSet") && !rsp["DeliveryTargetSet"].IsNull())
    {
        if (!rsp["DeliveryTargetSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeliveryTargetSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DeliveryTargetSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeliveryTarget item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deliveryTargetSet.push_back(item);
        }
        m_deliveryTargetSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeScheduledTaskResponse::ToJsonString() const
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

    if (m_taskKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskKey.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_cronExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronExpr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronExpr.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nextRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_agentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_effectiveStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectiveStart.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectiveEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryTargetSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryTargetSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deliveryTargetSet.begin(); itr != m_deliveryTargetSet.end(); ++itr, ++i)
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


string DescribeScheduledTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeScheduledTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeScheduledTaskResponse::GetTaskKey() const
{
    return m_taskKey;
}

bool DescribeScheduledTaskResponse::TaskKeyHasBeenSet() const
{
    return m_taskKeyHasBeenSet;
}

string DescribeScheduledTaskResponse::GetTaskName() const
{
    return m_taskName;
}

bool DescribeScheduledTaskResponse::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DescribeScheduledTaskResponse::GetDescription() const
{
    return m_description;
}

bool DescribeScheduledTaskResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeScheduledTaskResponse::GetAgentId() const
{
    return m_agentId;
}

bool DescribeScheduledTaskResponse::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string DescribeScheduledTaskResponse::GetCronExpr() const
{
    return m_cronExpr;
}

bool DescribeScheduledTaskResponse::CronExprHasBeenSet() const
{
    return m_cronExprHasBeenSet;
}

string DescribeScheduledTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeScheduledTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeScheduledTaskResponse::GetLastRunTime() const
{
    return m_lastRunTime;
}

bool DescribeScheduledTaskResponse::LastRunTimeHasBeenSet() const
{
    return m_lastRunTimeHasBeenSet;
}

string DescribeScheduledTaskResponse::GetNextRunTime() const
{
    return m_nextRunTime;
}

bool DescribeScheduledTaskResponse::NextRunTimeHasBeenSet() const
{
    return m_nextRunTimeHasBeenSet;
}

string DescribeScheduledTaskResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeScheduledTaskResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string DescribeScheduledTaskResponse::GetModifiedTime() const
{
    return m_modifiedTime;
}

bool DescribeScheduledTaskResponse::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

AgentConfig DescribeScheduledTaskResponse::GetAgentConfig() const
{
    return m_agentConfig;
}

bool DescribeScheduledTaskResponse::AgentConfigHasBeenSet() const
{
    return m_agentConfigHasBeenSet;
}

string DescribeScheduledTaskResponse::GetEffectiveStart() const
{
    return m_effectiveStart;
}

bool DescribeScheduledTaskResponse::EffectiveStartHasBeenSet() const
{
    return m_effectiveStartHasBeenSet;
}

string DescribeScheduledTaskResponse::GetEffectiveEnd() const
{
    return m_effectiveEnd;
}

bool DescribeScheduledTaskResponse::EffectiveEndHasBeenSet() const
{
    return m_effectiveEndHasBeenSet;
}

vector<DeliveryTarget> DescribeScheduledTaskResponse::GetDeliveryTargetSet() const
{
    return m_deliveryTargetSet;
}

bool DescribeScheduledTaskResponse::DeliveryTargetSetHasBeenSet() const
{
    return m_deliveryTargetSetHasBeenSet;
}


