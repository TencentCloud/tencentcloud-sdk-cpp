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

#include <tencentcloud/teo/v20220901/model/CompressionParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CompressionParameters::CompressionParameters() :
    m_switchHasBeenSet(false),
    m_algorithmsHasBeenSet(false)
{
}

CoreInternalOutcome CompressionParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompressionParameters.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Algorithms") && !value["Algorithms"].IsNull())
    {
        if (!value["Algorithms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompressionParameters.Algorithms` is not array type"));

        const rapidjson::Value &tmpValue = value["Algorithms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_algorithms.push_back((*itr).GetString());
        }
        m_algorithmsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompressionParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_algorithms.begin(); itr != m_algorithms.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CompressionParameters::GetSwitch() const
{
    return m_switch;
}

void CompressionParameters::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool CompressionParameters::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<string> CompressionParameters::GetAlgorithms() const
{
    return m_algorithms;
}

void CompressionParameters::SetAlgorithms(const vector<string>& _algorithms)
{
    m_algorithms = _algorithms;
    m_algorithmsHasBeenSet = true;
}

bool CompressionParameters::AlgorithmsHasBeenSet() const
{
    return m_algorithmsHasBeenSet;
}

