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

#include <tencentcloud/cvm/v20170312/model/ActionTimer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ActionTimer::ActionTimer() :
    m_timerActionHasBeenSet(false),
    m_actionTimeHasBeenSet(false),
    m_externalsHasBeenSet(false),
    m_actionTimerIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome ActionTimer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimerAction") && !value["TimerAction"].IsNull())
    {
        if (!value["TimerAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionTimer.TimerAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timerAction = string(value["TimerAction"].GetString());
        m_timerActionHasBeenSet = true;
    }

    if (value.HasMember("ActionTime") && !value["ActionTime"].IsNull())
    {
        if (!value["ActionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionTimer.ActionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTime = string(value["ActionTime"].GetString());
        m_actionTimeHasBeenSet = true;
    }

    if (value.HasMember("Externals") && !value["Externals"].IsNull())
    {
        if (!value["Externals"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActionTimer.Externals` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_externals.Deserialize(value["Externals"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalsHasBeenSet = true;
    }

    if (value.HasMember("ActionTimerId") && !value["ActionTimerId"].IsNull())
    {
        if (!value["ActionTimerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionTimer.ActionTimerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTimerId = string(value["ActionTimerId"].GetString());
        m_actionTimerIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionTimer.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionTimer.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActionTimer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timerActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timerAction.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_externalsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Externals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_externals.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionTimerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTimerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionTimerId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string ActionTimer::GetTimerAction() const
{
    return m_timerAction;
}

void ActionTimer::SetTimerAction(const string& _timerAction)
{
    m_timerAction = _timerAction;
    m_timerActionHasBeenSet = true;
}

bool ActionTimer::TimerActionHasBeenSet() const
{
    return m_timerActionHasBeenSet;
}

string ActionTimer::GetActionTime() const
{
    return m_actionTime;
}

void ActionTimer::SetActionTime(const string& _actionTime)
{
    m_actionTime = _actionTime;
    m_actionTimeHasBeenSet = true;
}

bool ActionTimer::ActionTimeHasBeenSet() const
{
    return m_actionTimeHasBeenSet;
}

Externals ActionTimer::GetExternals() const
{
    return m_externals;
}

void ActionTimer::SetExternals(const Externals& _externals)
{
    m_externals = _externals;
    m_externalsHasBeenSet = true;
}

bool ActionTimer::ExternalsHasBeenSet() const
{
    return m_externalsHasBeenSet;
}

string ActionTimer::GetActionTimerId() const
{
    return m_actionTimerId;
}

void ActionTimer::SetActionTimerId(const string& _actionTimerId)
{
    m_actionTimerId = _actionTimerId;
    m_actionTimerIdHasBeenSet = true;
}

bool ActionTimer::ActionTimerIdHasBeenSet() const
{
    return m_actionTimerIdHasBeenSet;
}

string ActionTimer::GetStatus() const
{
    return m_status;
}

void ActionTimer::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ActionTimer::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ActionTimer::GetInstanceId() const
{
    return m_instanceId;
}

void ActionTimer::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ActionTimer::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

