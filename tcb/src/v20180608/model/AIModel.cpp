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

#include <tencentcloud/tcb/v20180608/model/AIModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

AIModel::AIModel() :
    m_modelHasBeenSet(false),
    m_enableMCPHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome AIModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIModel.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("EnableMCP") && !value["EnableMCP"].IsNull())
    {
        if (!value["EnableMCP"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIModel.EnableMCP` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableMCP = value["EnableMCP"].GetBool();
        m_enableMCPHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIModel.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_enableMCPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMCP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMCP, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AIModel::GetModel() const
{
    return m_model;
}

void AIModel::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AIModel::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

bool AIModel::GetEnableMCP() const
{
    return m_enableMCP;
}

void AIModel::SetEnableMCP(const bool& _enableMCP)
{
    m_enableMCP = _enableMCP;
    m_enableMCPHasBeenSet = true;
}

bool AIModel::EnableMCPHasBeenSet() const
{
    return m_enableMCPHasBeenSet;
}

vector<string> AIModel::GetTags() const
{
    return m_tags;
}

void AIModel::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AIModel::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

