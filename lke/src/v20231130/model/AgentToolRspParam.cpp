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

#include <tencentcloud/lke/v20231130/model/AgentToolRspParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentToolRspParam::AgentToolRspParam() :
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_subParamsHasBeenSet(false),
    m_agentHiddenHasBeenSet(false),
    m_globalHiddenHasBeenSet(false),
    m_analysisMethodHasBeenSet(false)
{
}

CoreInternalOutcome AgentToolRspParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolRspParam.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolRspParam.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolRspParam.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SubParams") && !value["SubParams"].IsNull())
    {
        if (!value["SubParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolRspParam.SubParams` is not array type"));

        const rapidjson::Value &tmpValue = value["SubParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolRspParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subParams.push_back(item);
        }
        m_subParamsHasBeenSet = true;
    }

    if (value.HasMember("AgentHidden") && !value["AgentHidden"].IsNull())
    {
        if (!value["AgentHidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolRspParam.AgentHidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_agentHidden = value["AgentHidden"].GetBool();
        m_agentHiddenHasBeenSet = true;
    }

    if (value.HasMember("GlobalHidden") && !value["GlobalHidden"].IsNull())
    {
        if (!value["GlobalHidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolRspParam.GlobalHidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_globalHidden = value["GlobalHidden"].GetBool();
        m_globalHiddenHasBeenSet = true;
    }

    if (value.HasMember("AnalysisMethod") && !value["AnalysisMethod"].IsNull())
    {
        if (!value["AnalysisMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolRspParam.AnalysisMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisMethod = string(value["AnalysisMethod"].GetString());
        m_analysisMethodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentToolRspParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_subParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subParams.begin(); itr != m_subParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_agentHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentHidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentHidden, allocator);
    }

    if (m_globalHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalHidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_globalHidden, allocator);
    }

    if (m_analysisMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analysisMethod.c_str(), allocator).Move(), allocator);
    }

}


string AgentToolRspParam::GetName() const
{
    return m_name;
}

void AgentToolRspParam::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentToolRspParam::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AgentToolRspParam::GetDesc() const
{
    return m_desc;
}

void AgentToolRspParam::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AgentToolRspParam::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

int64_t AgentToolRspParam::GetType() const
{
    return m_type;
}

void AgentToolRspParam::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AgentToolRspParam::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<AgentToolRspParam> AgentToolRspParam::GetSubParams() const
{
    return m_subParams;
}

void AgentToolRspParam::SetSubParams(const vector<AgentToolRspParam>& _subParams)
{
    m_subParams = _subParams;
    m_subParamsHasBeenSet = true;
}

bool AgentToolRspParam::SubParamsHasBeenSet() const
{
    return m_subParamsHasBeenSet;
}

bool AgentToolRspParam::GetAgentHidden() const
{
    return m_agentHidden;
}

void AgentToolRspParam::SetAgentHidden(const bool& _agentHidden)
{
    m_agentHidden = _agentHidden;
    m_agentHiddenHasBeenSet = true;
}

bool AgentToolRspParam::AgentHiddenHasBeenSet() const
{
    return m_agentHiddenHasBeenSet;
}

bool AgentToolRspParam::GetGlobalHidden() const
{
    return m_globalHidden;
}

void AgentToolRspParam::SetGlobalHidden(const bool& _globalHidden)
{
    m_globalHidden = _globalHidden;
    m_globalHiddenHasBeenSet = true;
}

bool AgentToolRspParam::GlobalHiddenHasBeenSet() const
{
    return m_globalHiddenHasBeenSet;
}

string AgentToolRspParam::GetAnalysisMethod() const
{
    return m_analysisMethod;
}

void AgentToolRspParam::SetAnalysisMethod(const string& _analysisMethod)
{
    m_analysisMethod = _analysisMethod;
    m_analysisMethodHasBeenSet = true;
}

bool AgentToolRspParam::AnalysisMethodHasBeenSet() const
{
    return m_analysisMethodHasBeenSet;
}

