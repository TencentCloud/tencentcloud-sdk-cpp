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

#include <tencentcloud/batch/v20170312/model/AgentRunningMode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

AgentRunningMode::AgentRunningMode() :
    m_sceneHasBeenSet(false),
    m_userHasBeenSet(false),
    m_sessionHasBeenSet(false)
{
}

CoreInternalOutcome AgentRunningMode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRunningMode.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRunningMode.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Session") && !value["Session"].IsNull())
    {
        if (!value["Session"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRunningMode.Session` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_session = string(value["Session"].GetString());
        m_sessionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentRunningMode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Session";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_session.c_str(), allocator).Move(), allocator);
    }

}


string AgentRunningMode::GetScene() const
{
    return m_scene;
}

void AgentRunningMode::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool AgentRunningMode::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string AgentRunningMode::GetUser() const
{
    return m_user;
}

void AgentRunningMode::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AgentRunningMode::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AgentRunningMode::GetSession() const
{
    return m_session;
}

void AgentRunningMode::SetSession(const string& _session)
{
    m_session = _session;
    m_sessionHasBeenSet = true;
}

bool AgentRunningMode::SessionHasBeenSet() const
{
    return m_sessionHasBeenSet;
}

