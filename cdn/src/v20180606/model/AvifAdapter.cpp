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

#include <tencentcloud/cdn/v20180606/model/AvifAdapter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AvifAdapter::AvifAdapter() :
    m_switchHasBeenSet(false),
    m_fallbackFormatsHasBeenSet(false)
{
}

CoreInternalOutcome AvifAdapter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvifAdapter.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("FallbackFormats") && !value["FallbackFormats"].IsNull())
    {
        if (!value["FallbackFormats"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvifAdapter.FallbackFormats` is not array type"));

        const rapidjson::Value &tmpValue = value["FallbackFormats"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fallbackFormats.push_back((*itr).GetString());
        }
        m_fallbackFormatsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvifAdapter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_fallbackFormatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FallbackFormats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fallbackFormats.begin(); itr != m_fallbackFormats.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AvifAdapter::GetSwitch() const
{
    return m_switch;
}

void AvifAdapter::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AvifAdapter::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<string> AvifAdapter::GetFallbackFormats() const
{
    return m_fallbackFormats;
}

void AvifAdapter::SetFallbackFormats(const vector<string>& _fallbackFormats)
{
    m_fallbackFormats = _fallbackFormats;
    m_fallbackFormatsHasBeenSet = true;
}

bool AvifAdapter::FallbackFormatsHasBeenSet() const
{
    return m_fallbackFormatsHasBeenSet;
}

