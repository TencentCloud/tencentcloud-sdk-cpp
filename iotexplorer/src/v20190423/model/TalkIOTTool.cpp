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

#include <tencentcloud/iotexplorer/v20190423/model/TalkIOTTool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkIOTTool::TalkIOTTool() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_requiredHasBeenSet(false)
{
}

CoreInternalOutcome TalkIOTTool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkIOTTool.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkIOTTool.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkIOTTool.Parameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameters = string(value["Parameters"].GetString());
        m_parametersHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TalkIOTTool.Required` is not array type"));

        const rapidjson::Value &tmpValue = value["Required"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_required.push_back((*itr).GetString());
        }
        m_requiredHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkIOTTool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameters.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_required.begin(); itr != m_required.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TalkIOTTool::GetName() const
{
    return m_name;
}

void TalkIOTTool::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TalkIOTTool::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TalkIOTTool::GetDescription() const
{
    return m_description;
}

void TalkIOTTool::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TalkIOTTool::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TalkIOTTool::GetParameters() const
{
    return m_parameters;
}

void TalkIOTTool::SetParameters(const string& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool TalkIOTTool::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

vector<string> TalkIOTTool::GetRequired() const
{
    return m_required;
}

void TalkIOTTool::SetRequired(const vector<string>& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool TalkIOTTool::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

