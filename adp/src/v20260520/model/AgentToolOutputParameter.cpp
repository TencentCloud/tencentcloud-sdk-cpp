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

#include <tencentcloud/adp/v20260520/model/AgentToolOutputParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentToolOutputParameter::AgentToolOutputParameter() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_subParameterListHasBeenSet(false),
    m_renderModeHasBeenSet(false)
{
}

CoreInternalOutcome AgentToolOutputParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolOutputParameter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolOutputParameter.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolOutputParameter.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SubParameterList") && !value["SubParameterList"].IsNull())
    {
        if (!value["SubParameterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolOutputParameter.SubParameterList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubParameterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolOutputParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subParameterList.push_back(item);
        }
        m_subParameterListHasBeenSet = true;
    }

    if (value.HasMember("RenderMode") && !value["RenderMode"].IsNull())
    {
        if (!value["RenderMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolOutputParameter.RenderMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renderMode = value["RenderMode"].GetInt64();
        m_renderModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentToolOutputParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_subParameterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubParameterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subParameterList.begin(); itr != m_subParameterList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_renderModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renderMode, allocator);
    }

}


string AgentToolOutputParameter::GetName() const
{
    return m_name;
}

void AgentToolOutputParameter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentToolOutputParameter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AgentToolOutputParameter::GetDescription() const
{
    return m_description;
}

void AgentToolOutputParameter::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentToolOutputParameter::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t AgentToolOutputParameter::GetType() const
{
    return m_type;
}

void AgentToolOutputParameter::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AgentToolOutputParameter::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<AgentToolOutputParameter> AgentToolOutputParameter::GetSubParameterList() const
{
    return m_subParameterList;
}

void AgentToolOutputParameter::SetSubParameterList(const vector<AgentToolOutputParameter>& _subParameterList)
{
    m_subParameterList = _subParameterList;
    m_subParameterListHasBeenSet = true;
}

bool AgentToolOutputParameter::SubParameterListHasBeenSet() const
{
    return m_subParameterListHasBeenSet;
}

int64_t AgentToolOutputParameter::GetRenderMode() const
{
    return m_renderMode;
}

void AgentToolOutputParameter::SetRenderMode(const int64_t& _renderMode)
{
    m_renderMode = _renderMode;
    m_renderModeHasBeenSet = true;
}

bool AgentToolOutputParameter::RenderModeHasBeenSet() const
{
    return m_renderModeHasBeenSet;
}

