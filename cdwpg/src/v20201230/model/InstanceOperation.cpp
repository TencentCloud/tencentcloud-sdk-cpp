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

#include <tencentcloud/cdwpg/v20201230/model/InstanceOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

InstanceOperation::InstanceOperation() :
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome InstanceOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Context") && !value["Context"].IsNull())
    {
        if (!value["Context"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(value["Context"].GetString());
        m_contextHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceOperation.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

}


int64_t InstanceOperation::GetId() const
{
    return m_id;
}

void InstanceOperation::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool InstanceOperation::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string InstanceOperation::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceOperation::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceOperation::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceOperation::GetAction() const
{
    return m_action;
}

void InstanceOperation::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool InstanceOperation::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t InstanceOperation::GetStatus() const
{
    return m_status;
}

void InstanceOperation::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceOperation::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceOperation::GetStartTime() const
{
    return m_startTime;
}

void InstanceOperation::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InstanceOperation::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InstanceOperation::GetEndTime() const
{
    return m_endTime;
}

void InstanceOperation::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InstanceOperation::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string InstanceOperation::GetContext() const
{
    return m_context;
}

void InstanceOperation::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool InstanceOperation::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string InstanceOperation::GetUpdateTime() const
{
    return m_updateTime;
}

void InstanceOperation::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool InstanceOperation::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string InstanceOperation::GetUin() const
{
    return m_uin;
}

void InstanceOperation::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool InstanceOperation::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

