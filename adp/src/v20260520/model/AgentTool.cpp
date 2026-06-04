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

#include <tencentcloud/adp/v20260520/model/AgentTool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentTool::AgentTool() :
    m_configHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_streamModeHasBeenSet(false),
    m_toolAccessModeHasBeenSet(false)
{
}

CoreInternalOutcome AgentTool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTool.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTool.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTool.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StreamMode") && !value["StreamMode"].IsNull())
    {
        if (!value["StreamMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTool.StreamMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_streamMode = value["StreamMode"].GetInt64();
        m_streamModeHasBeenSet = true;
    }

    if (value.HasMember("ToolAccessMode") && !value["ToolAccessMode"].IsNull())
    {
        if (!value["ToolAccessMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTool.ToolAccessMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_toolAccessMode = value["ToolAccessMode"].GetInt64();
        m_toolAccessModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentTool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_streamModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamMode, allocator);
    }

    if (m_toolAccessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolAccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toolAccessMode, allocator);
    }

}


AgentToolBasicConfig AgentTool::GetConfig() const
{
    return m_config;
}

void AgentTool::SetConfig(const AgentToolBasicConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool AgentTool::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string AgentTool::GetName() const
{
    return m_name;
}

void AgentTool::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentTool::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AgentTool::GetStatus() const
{
    return m_status;
}

void AgentTool::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgentTool::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AgentTool::GetStreamMode() const
{
    return m_streamMode;
}

void AgentTool::SetStreamMode(const int64_t& _streamMode)
{
    m_streamMode = _streamMode;
    m_streamModeHasBeenSet = true;
}

bool AgentTool::StreamModeHasBeenSet() const
{
    return m_streamModeHasBeenSet;
}

int64_t AgentTool::GetToolAccessMode() const
{
    return m_toolAccessMode;
}

void AgentTool::SetToolAccessMode(const int64_t& _toolAccessMode)
{
    m_toolAccessMode = _toolAccessMode;
    m_toolAccessModeHasBeenSet = true;
}

bool AgentTool::ToolAccessModeHasBeenSet() const
{
    return m_toolAccessModeHasBeenSet;
}

