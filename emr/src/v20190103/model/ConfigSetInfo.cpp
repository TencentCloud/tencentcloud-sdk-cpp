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

#include <tencentcloud/emr/v20190103/model/ConfigSetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ConfigSetInfo::ConfigSetInfo() :
    m_configSetHasBeenSet(false),
    m_labelParamsHasBeenSet(false),
    m_basicParamsHasBeenSet(false)
{
}

CoreInternalOutcome ConfigSetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigSet") && !value["ConfigSet"].IsNull())
    {
        if (!value["ConfigSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigSetInfo.ConfigSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configSet = string(value["ConfigSet"].GetString());
        m_configSetHasBeenSet = true;
    }

    if (value.HasMember("LabelParams") && !value["LabelParams"].IsNull())
    {
        if (!value["LabelParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigSetInfo.LabelParams` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ItemSeq item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelParams.push_back(item);
        }
        m_labelParamsHasBeenSet = true;
    }

    if (value.HasMember("BasicParams") && !value["BasicParams"].IsNull())
    {
        if (!value["BasicParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigSetInfo.BasicParams` is not array type"));

        const rapidjson::Value &tmpValue = value["BasicParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Item item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_basicParams.push_back(item);
        }
        m_basicParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigSetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configSet.c_str(), allocator).Move(), allocator);
    }

    if (m_labelParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelParams.begin(); itr != m_labelParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_basicParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_basicParams.begin(); itr != m_basicParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ConfigSetInfo::GetConfigSet() const
{
    return m_configSet;
}

void ConfigSetInfo::SetConfigSet(const string& _configSet)
{
    m_configSet = _configSet;
    m_configSetHasBeenSet = true;
}

bool ConfigSetInfo::ConfigSetHasBeenSet() const
{
    return m_configSetHasBeenSet;
}

vector<ItemSeq> ConfigSetInfo::GetLabelParams() const
{
    return m_labelParams;
}

void ConfigSetInfo::SetLabelParams(const vector<ItemSeq>& _labelParams)
{
    m_labelParams = _labelParams;
    m_labelParamsHasBeenSet = true;
}

bool ConfigSetInfo::LabelParamsHasBeenSet() const
{
    return m_labelParamsHasBeenSet;
}

vector<Item> ConfigSetInfo::GetBasicParams() const
{
    return m_basicParams;
}

void ConfigSetInfo::SetBasicParams(const vector<Item>& _basicParams)
{
    m_basicParams = _basicParams;
    m_basicParamsHasBeenSet = true;
}

bool ConfigSetInfo::BasicParamsHasBeenSet() const
{
    return m_basicParamsHasBeenSet;
}

