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

#include <tencentcloud/vod/v20180717/model/AudioBeautifyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AudioBeautifyInfo::AudioBeautifyInfo() :
    m_switchHasBeenSet(false),
    m_typesHasBeenSet(false)
{
}

CoreInternalOutcome AudioBeautifyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioBeautifyInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Types") && !value["Types"].IsNull())
    {
        if (!value["Types"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AudioBeautifyInfo.Types` is not array type"));

        const rapidjson::Value &tmpValue = value["Types"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_types.push_back((*itr).GetString());
        }
        m_typesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioBeautifyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_typesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Types";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_types.begin(); itr != m_types.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AudioBeautifyInfo::GetSwitch() const
{
    return m_switch;
}

void AudioBeautifyInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AudioBeautifyInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<string> AudioBeautifyInfo::GetTypes() const
{
    return m_types;
}

void AudioBeautifyInfo::SetTypes(const vector<string>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool AudioBeautifyInfo::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}

