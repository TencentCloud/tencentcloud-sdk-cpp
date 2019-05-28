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
using namespace rapidjson;
using namespace std;

ActionTimer::ActionTimer() :
    m_externalsHasBeenSet(false),
    m_timerActionHasBeenSet(false),
    m_actionTimeHasBeenSet(false)
{
}

CoreInternalOutcome ActionTimer::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Externals") && !value["Externals"].IsNull())
    {
        if (!value["Externals"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ActionTimer.Externals` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_externals.Deserialize(value["Externals"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalsHasBeenSet = true;
    }

    if (value.HasMember("TimerAction") && !value["TimerAction"].IsNull())
    {
        if (!value["TimerAction"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActionTimer.TimerAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timerAction = string(value["TimerAction"].GetString());
        m_timerActionHasBeenSet = true;
    }

    if (value.HasMember("ActionTime") && !value["ActionTime"].IsNull())
    {
        if (!value["ActionTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActionTimer.ActionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTime = string(value["ActionTime"].GetString());
        m_actionTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActionTimer::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_externalsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Externals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_externals.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timerActionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimerAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_timerAction.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_actionTime.c_str(), allocator).Move(), allocator);
    }

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

