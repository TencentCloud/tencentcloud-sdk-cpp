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

#include <tencentcloud/ie/v20200304/model/CoverEditingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

CoverEditingInfo::CoverEditingInfo() :
    m_switchHasBeenSet(false),
    m_customInfoHasBeenSet(false)
{
}

CoreInternalOutcome CoverEditingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CoverEditingInfo.Switch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switch = value["Switch"].GetInt64();
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("CustomInfo") && !value["CustomInfo"].IsNull())
    {
        if (!value["CustomInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoverEditingInfo.CustomInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customInfo = string(value["CustomInfo"].GetString());
        m_customInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CoverEditingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switch, allocator);
    }

    if (m_customInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customInfo.c_str(), allocator).Move(), allocator);
    }

}


int64_t CoverEditingInfo::GetSwitch() const
{
    return m_switch;
}

void CoverEditingInfo::SetSwitch(const int64_t& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool CoverEditingInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string CoverEditingInfo::GetCustomInfo() const
{
    return m_customInfo;
}

void CoverEditingInfo::SetCustomInfo(const string& _customInfo)
{
    m_customInfo = _customInfo;
    m_customInfoHasBeenSet = true;
}

bool CoverEditingInfo::CustomInfoHasBeenSet() const
{
    return m_customInfoHasBeenSet;
}

