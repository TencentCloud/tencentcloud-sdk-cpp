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

#include <tencentcloud/cls/v20201016/model/AnalysisDimensional.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AnalysisDimensional::AnalysisDimensional() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_configInfoHasBeenSet(false)
{
}

CoreInternalOutcome AnalysisDimensional::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisDimensional.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisDimensional.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisDimensional.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ConfigInfo") && !value["ConfigInfo"].IsNull())
    {
        if (!value["ConfigInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalysisDimensional.ConfigInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmAnalysisConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configInfo.push_back(item);
        }
        m_configInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalysisDimensional::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_configInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configInfo.begin(); itr != m_configInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AnalysisDimensional::GetName() const
{
    return m_name;
}

void AnalysisDimensional::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AnalysisDimensional::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AnalysisDimensional::GetType() const
{
    return m_type;
}

void AnalysisDimensional::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AnalysisDimensional::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AnalysisDimensional::GetContent() const
{
    return m_content;
}

void AnalysisDimensional::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AnalysisDimensional::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<AlarmAnalysisConfig> AnalysisDimensional::GetConfigInfo() const
{
    return m_configInfo;
}

void AnalysisDimensional::SetConfigInfo(const vector<AlarmAnalysisConfig>& _configInfo)
{
    m_configInfo = _configInfo;
    m_configInfoHasBeenSet = true;
}

bool AnalysisDimensional::ConfigInfoHasBeenSet() const
{
    return m_configInfoHasBeenSet;
}

