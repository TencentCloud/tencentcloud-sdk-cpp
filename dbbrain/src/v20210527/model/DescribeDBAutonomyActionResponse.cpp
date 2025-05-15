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

#include <tencentcloud/dbbrain/v20210527/model/DescribeDBAutonomyActionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeDBAutonomyActionResponse::DescribeDBAutonomyActionResponse() :
    m_actionIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_triggerTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_infoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBAutonomyActionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ActionId") && !rsp["ActionId"].IsNull())
    {
        if (!rsp["ActionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionId = rsp["ActionId"].GetInt64();
        m_actionIdHasBeenSet = true;
    }

    if (rsp.HasMember("EventId") && !rsp["EventId"].IsNull())
    {
        if (!rsp["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = rsp["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = rsp["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("TriggerTime") && !rsp["TriggerTime"].IsNull())
    {
        if (!rsp["TriggerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerTime = string(rsp["TriggerTime"].GetString());
        m_triggerTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FinishTime") && !rsp["FinishTime"].IsNull())
    {
        if (!rsp["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(rsp["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = rsp["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Reason") && !rsp["Reason"].IsNull())
    {
        if (!rsp["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(rsp["Reason"].GetString());
        m_reasonHasBeenSet = true;
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

    if (rsp.HasMember("Info") && !rsp["Info"].IsNull())
    {
        if (!rsp["Info"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Info` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_info = string(rsp["Info"].GetString());
        m_infoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBAutonomyActionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_actionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionId, allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_info.c_str(), allocator).Move(), allocator);
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


int64_t DescribeDBAutonomyActionResponse::GetActionId() const
{
    return m_actionId;
}

bool DescribeDBAutonomyActionResponse::ActionIdHasBeenSet() const
{
    return m_actionIdHasBeenSet;
}

int64_t DescribeDBAutonomyActionResponse::GetEventId() const
{
    return m_eventId;
}

bool DescribeDBAutonomyActionResponse::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

int64_t DescribeDBAutonomyActionResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeDBAutonomyActionResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeDBAutonomyActionResponse::GetType() const
{
    return m_type;
}

bool DescribeDBAutonomyActionResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeDBAutonomyActionResponse::GetTriggerTime() const
{
    return m_triggerTime;
}

bool DescribeDBAutonomyActionResponse::TriggerTimeHasBeenSet() const
{
    return m_triggerTimeHasBeenSet;
}

string DescribeDBAutonomyActionResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeDBAutonomyActionResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeDBAutonomyActionResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeDBAutonomyActionResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeDBAutonomyActionResponse::GetFinishTime() const
{
    return m_finishTime;
}

bool DescribeDBAutonomyActionResponse::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

int64_t DescribeDBAutonomyActionResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeDBAutonomyActionResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeDBAutonomyActionResponse::GetReason() const
{
    return m_reason;
}

bool DescribeDBAutonomyActionResponse::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string DescribeDBAutonomyActionResponse::GetStatus() const
{
    return m_status;
}

bool DescribeDBAutonomyActionResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDBAutonomyActionResponse::GetInfo() const
{
    return m_info;
}

bool DescribeDBAutonomyActionResponse::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}


