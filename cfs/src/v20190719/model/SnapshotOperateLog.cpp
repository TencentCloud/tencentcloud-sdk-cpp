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

#include <tencentcloud/cfs/v20190719/model/SnapshotOperateLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

SnapshotOperateLog::SnapshotOperateLog() :
    m_actionHasBeenSet(false),
    m_actionTimeHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotOperateLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotOperateLog.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("ActionTime") && !value["ActionTime"].IsNull())
    {
        if (!value["ActionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotOperateLog.ActionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTime = string(value["ActionTime"].GetString());
        m_actionTimeHasBeenSet = true;
    }

    if (value.HasMember("ActionName") && !value["ActionName"].IsNull())
    {
        if (!value["ActionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotOperateLog.ActionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionName = string(value["ActionName"].GetString());
        m_actionNameHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotOperateLog.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotOperateLog.Result` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetUint64();
        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotOperateLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionName.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

}


string SnapshotOperateLog::GetAction() const
{
    return m_action;
}

void SnapshotOperateLog::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SnapshotOperateLog::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string SnapshotOperateLog::GetActionTime() const
{
    return m_actionTime;
}

void SnapshotOperateLog::SetActionTime(const string& _actionTime)
{
    m_actionTime = _actionTime;
    m_actionTimeHasBeenSet = true;
}

bool SnapshotOperateLog::ActionTimeHasBeenSet() const
{
    return m_actionTimeHasBeenSet;
}

string SnapshotOperateLog::GetActionName() const
{
    return m_actionName;
}

void SnapshotOperateLog::SetActionName(const string& _actionName)
{
    m_actionName = _actionName;
    m_actionNameHasBeenSet = true;
}

bool SnapshotOperateLog::ActionNameHasBeenSet() const
{
    return m_actionNameHasBeenSet;
}

string SnapshotOperateLog::GetOperator() const
{
    return m_operator;
}

void SnapshotOperateLog::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool SnapshotOperateLog::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t SnapshotOperateLog::GetResult() const
{
    return m_result;
}

void SnapshotOperateLog::SetResult(const uint64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool SnapshotOperateLog::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

