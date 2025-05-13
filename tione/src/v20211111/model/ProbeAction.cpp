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

#include <tencentcloud/tione/v20211111/model/ProbeAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ProbeAction::ProbeAction() :
    m_hTTPGetHasBeenSet(false),
    m_execHasBeenSet(false),
    m_tCPSocketHasBeenSet(false),
    m_actionTypeHasBeenSet(false)
{
}

CoreInternalOutcome ProbeAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HTTPGet") && !value["HTTPGet"].IsNull())
    {
        if (!value["HTTPGet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeAction.HTTPGet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hTTPGet.Deserialize(value["HTTPGet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hTTPGetHasBeenSet = true;
    }

    if (value.HasMember("Exec") && !value["Exec"].IsNull())
    {
        if (!value["Exec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeAction.Exec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_exec.Deserialize(value["Exec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_execHasBeenSet = true;
    }

    if (value.HasMember("TCPSocket") && !value["TCPSocket"].IsNull())
    {
        if (!value["TCPSocket"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeAction.TCPSocket` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tCPSocket.Deserialize(value["TCPSocket"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tCPSocketHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProbeAction.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProbeAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hTTPGetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HTTPGet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hTTPGet.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_execHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_exec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tCPSocketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCPSocket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tCPSocket.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

}


HTTPGetAction ProbeAction::GetHTTPGet() const
{
    return m_hTTPGet;
}

void ProbeAction::SetHTTPGet(const HTTPGetAction& _hTTPGet)
{
    m_hTTPGet = _hTTPGet;
    m_hTTPGetHasBeenSet = true;
}

bool ProbeAction::HTTPGetHasBeenSet() const
{
    return m_hTTPGetHasBeenSet;
}

ExecAction ProbeAction::GetExec() const
{
    return m_exec;
}

void ProbeAction::SetExec(const ExecAction& _exec)
{
    m_exec = _exec;
    m_execHasBeenSet = true;
}

bool ProbeAction::ExecHasBeenSet() const
{
    return m_execHasBeenSet;
}

TCPSocketAction ProbeAction::GetTCPSocket() const
{
    return m_tCPSocket;
}

void ProbeAction::SetTCPSocket(const TCPSocketAction& _tCPSocket)
{
    m_tCPSocket = _tCPSocket;
    m_tCPSocketHasBeenSet = true;
}

bool ProbeAction::TCPSocketHasBeenSet() const
{
    return m_tCPSocketHasBeenSet;
}

string ProbeAction::GetActionType() const
{
    return m_actionType;
}

void ProbeAction::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ProbeAction::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

