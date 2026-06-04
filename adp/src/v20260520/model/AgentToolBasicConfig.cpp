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

#include <tencentcloud/adp/v20260520/model/AgentToolBasicConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentToolBasicConfig::AgentToolBasicConfig() :
    m_pluginIdHasBeenSet(false),
    m_toolIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inputListHasBeenSet(false),
    m_outputListHasBeenSet(false),
    m_headerParameterListHasBeenSet(false),
    m_queryParameterListHasBeenSet(false),
    m_toolSourceHasBeenSet(false),
    m_isDisabledHasBeenSet(false)
{
}

CoreInternalOutcome AgentToolBasicConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolBasicConfig.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("ToolId") && !value["ToolId"].IsNull())
    {
        if (!value["ToolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolBasicConfig.ToolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolId = string(value["ToolId"].GetString());
        m_toolIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolBasicConfig.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InputList") && !value["InputList"].IsNull())
    {
        if (!value["InputList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolBasicConfig.InputList` is not array type"));

        const rapidjson::Value &tmpValue = value["InputList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolInputParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputList.push_back(item);
        }
        m_inputListHasBeenSet = true;
    }

    if (value.HasMember("OutputList") && !value["OutputList"].IsNull())
    {
        if (!value["OutputList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolBasicConfig.OutputList` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolOutputParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputList.push_back(item);
        }
        m_outputListHasBeenSet = true;
    }

    if (value.HasMember("HeaderParameterList") && !value["HeaderParameterList"].IsNull())
    {
        if (!value["HeaderParameterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolBasicConfig.HeaderParameterList` is not array type"));

        const rapidjson::Value &tmpValue = value["HeaderParameterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentPluginParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headerParameterList.push_back(item);
        }
        m_headerParameterListHasBeenSet = true;
    }

    if (value.HasMember("QueryParameterList") && !value["QueryParameterList"].IsNull())
    {
        if (!value["QueryParameterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolBasicConfig.QueryParameterList` is not array type"));

        const rapidjson::Value &tmpValue = value["QueryParameterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentPluginParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_queryParameterList.push_back(item);
        }
        m_queryParameterListHasBeenSet = true;
    }

    if (value.HasMember("ToolSource") && !value["ToolSource"].IsNull())
    {
        if (!value["ToolSource"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolBasicConfig.ToolSource` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_toolSource = value["ToolSource"].GetUint64();
        m_toolSourceHasBeenSet = true;
    }

    if (value.HasMember("IsDisabled") && !value["IsDisabled"].IsNull())
    {
        if (!value["IsDisabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolBasicConfig.IsDisabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDisabled = value["IsDisabled"].GetBool();
        m_isDisabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentToolBasicConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_inputListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputList.begin(); itr != m_inputList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputList.begin(); itr != m_outputList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_headerParameterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderParameterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headerParameterList.begin(); itr != m_headerParameterList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_queryParameterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryParameterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_queryParameterList.begin(); itr != m_queryParameterList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_toolSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toolSource, allocator);
    }

    if (m_isDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDisabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDisabled, allocator);
    }

}


string AgentToolBasicConfig::GetPluginId() const
{
    return m_pluginId;
}

void AgentToolBasicConfig::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool AgentToolBasicConfig::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string AgentToolBasicConfig::GetToolId() const
{
    return m_toolId;
}

void AgentToolBasicConfig::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool AgentToolBasicConfig::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

string AgentToolBasicConfig::GetDescription() const
{
    return m_description;
}

void AgentToolBasicConfig::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentToolBasicConfig::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<AgentToolInputParameter> AgentToolBasicConfig::GetInputList() const
{
    return m_inputList;
}

void AgentToolBasicConfig::SetInputList(const vector<AgentToolInputParameter>& _inputList)
{
    m_inputList = _inputList;
    m_inputListHasBeenSet = true;
}

bool AgentToolBasicConfig::InputListHasBeenSet() const
{
    return m_inputListHasBeenSet;
}

vector<AgentToolOutputParameter> AgentToolBasicConfig::GetOutputList() const
{
    return m_outputList;
}

void AgentToolBasicConfig::SetOutputList(const vector<AgentToolOutputParameter>& _outputList)
{
    m_outputList = _outputList;
    m_outputListHasBeenSet = true;
}

bool AgentToolBasicConfig::OutputListHasBeenSet() const
{
    return m_outputListHasBeenSet;
}

vector<AgentPluginParameter> AgentToolBasicConfig::GetHeaderParameterList() const
{
    return m_headerParameterList;
}

void AgentToolBasicConfig::SetHeaderParameterList(const vector<AgentPluginParameter>& _headerParameterList)
{
    m_headerParameterList = _headerParameterList;
    m_headerParameterListHasBeenSet = true;
}

bool AgentToolBasicConfig::HeaderParameterListHasBeenSet() const
{
    return m_headerParameterListHasBeenSet;
}

vector<AgentPluginParameter> AgentToolBasicConfig::GetQueryParameterList() const
{
    return m_queryParameterList;
}

void AgentToolBasicConfig::SetQueryParameterList(const vector<AgentPluginParameter>& _queryParameterList)
{
    m_queryParameterList = _queryParameterList;
    m_queryParameterListHasBeenSet = true;
}

bool AgentToolBasicConfig::QueryParameterListHasBeenSet() const
{
    return m_queryParameterListHasBeenSet;
}

uint64_t AgentToolBasicConfig::GetToolSource() const
{
    return m_toolSource;
}

void AgentToolBasicConfig::SetToolSource(const uint64_t& _toolSource)
{
    m_toolSource = _toolSource;
    m_toolSourceHasBeenSet = true;
}

bool AgentToolBasicConfig::ToolSourceHasBeenSet() const
{
    return m_toolSourceHasBeenSet;
}

bool AgentToolBasicConfig::GetIsDisabled() const
{
    return m_isDisabled;
}

void AgentToolBasicConfig::SetIsDisabled(const bool& _isDisabled)
{
    m_isDisabled = _isDisabled;
    m_isDisabledHasBeenSet = true;
}

bool AgentToolBasicConfig::IsDisabledHasBeenSet() const
{
    return m_isDisabledHasBeenSet;
}

