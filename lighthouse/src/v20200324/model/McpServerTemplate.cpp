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

#include <tencentcloud/lighthouse/v20200324/model/McpServerTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

McpServerTemplate::McpServerTemplate() :
    m_nameHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_communityUrlHasBeenSet(false),
    m_platformUrlHasBeenSet(false),
    m_envSetHasBeenSet(false)
{
}

CoreInternalOutcome McpServerTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServerTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServerTemplate.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServerTemplate.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServerTemplate.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("CommunityUrl") && !value["CommunityUrl"].IsNull())
    {
        if (!value["CommunityUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServerTemplate.CommunityUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_communityUrl = string(value["CommunityUrl"].GetString());
        m_communityUrlHasBeenSet = true;
    }

    if (value.HasMember("PlatformUrl") && !value["PlatformUrl"].IsNull())
    {
        if (!value["PlatformUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServerTemplate.PlatformUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platformUrl = string(value["PlatformUrl"].GetString());
        m_platformUrlHasBeenSet = true;
    }

    if (value.HasMember("EnvSet") && !value["EnvSet"].IsNull())
    {
        if (!value["EnvSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `McpServerTemplate.EnvSet` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            McpServerTemplateEnv item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envSet.push_back(item);
        }
        m_envSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McpServerTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_communityUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommunityUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_communityUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_platformUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platformUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_envSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envSet.begin(); itr != m_envSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string McpServerTemplate::GetName() const
{
    return m_name;
}

void McpServerTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool McpServerTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string McpServerTemplate::GetCommand() const
{
    return m_command;
}

void McpServerTemplate::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool McpServerTemplate::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string McpServerTemplate::GetDescription() const
{
    return m_description;
}

void McpServerTemplate::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool McpServerTemplate::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string McpServerTemplate::GetIconUrl() const
{
    return m_iconUrl;
}

void McpServerTemplate::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool McpServerTemplate::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string McpServerTemplate::GetCommunityUrl() const
{
    return m_communityUrl;
}

void McpServerTemplate::SetCommunityUrl(const string& _communityUrl)
{
    m_communityUrl = _communityUrl;
    m_communityUrlHasBeenSet = true;
}

bool McpServerTemplate::CommunityUrlHasBeenSet() const
{
    return m_communityUrlHasBeenSet;
}

string McpServerTemplate::GetPlatformUrl() const
{
    return m_platformUrl;
}

void McpServerTemplate::SetPlatformUrl(const string& _platformUrl)
{
    m_platformUrl = _platformUrl;
    m_platformUrlHasBeenSet = true;
}

bool McpServerTemplate::PlatformUrlHasBeenSet() const
{
    return m_platformUrlHasBeenSet;
}

vector<McpServerTemplateEnv> McpServerTemplate::GetEnvSet() const
{
    return m_envSet;
}

void McpServerTemplate::SetEnvSet(const vector<McpServerTemplateEnv>& _envSet)
{
    m_envSet = _envSet;
    m_envSetHasBeenSet = true;
}

bool McpServerTemplate::EnvSetHasBeenSet() const
{
    return m_envSetHasBeenSet;
}

