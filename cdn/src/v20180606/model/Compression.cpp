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

#include <tencentcloud/cdn/v20180606/model/Compression.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

Compression::Compression() :
    m_switchHasBeenSet(false),
    m_compressionRulesHasBeenSet(false)
{
}

CoreInternalOutcome Compression::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Compression.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("CompressionRules") && !value["CompressionRules"].IsNull())
    {
        if (!value["CompressionRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Compression.CompressionRules` is not array type"));

        const rapidjson::Value &tmpValue = value["CompressionRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CompressionRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_compressionRules.push_back(item);
        }
        m_compressionRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Compression::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_compressionRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressionRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_compressionRules.begin(); itr != m_compressionRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Compression::GetSwitch() const
{
    return m_switch;
}

void Compression::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool Compression::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<CompressionRule> Compression::GetCompressionRules() const
{
    return m_compressionRules;
}

void Compression::SetCompressionRules(const vector<CompressionRule>& _compressionRules)
{
    m_compressionRules = _compressionRules;
    m_compressionRulesHasBeenSet = true;
}

bool Compression::CompressionRulesHasBeenSet() const
{
    return m_compressionRulesHasBeenSet;
}

