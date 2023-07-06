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

#include <tencentcloud/teo/v20220901/model/StandardDebug.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

StandardDebug::StandardDebug() :
    m_switchHasBeenSet(false),
    m_allowClientIPListHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome StandardDebug::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardDebug.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("AllowClientIPList") && !value["AllowClientIPList"].IsNull())
    {
        if (!value["AllowClientIPList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandardDebug.AllowClientIPList` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowClientIPList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowClientIPList.push_back((*itr).GetString());
        }
        m_allowClientIPListHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardDebug.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StandardDebug::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_allowClientIPListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowClientIPList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowClientIPList.begin(); itr != m_allowClientIPList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string StandardDebug::GetSwitch() const
{
    return m_switch;
}

void StandardDebug::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool StandardDebug::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<string> StandardDebug::GetAllowClientIPList() const
{
    return m_allowClientIPList;
}

void StandardDebug::SetAllowClientIPList(const vector<string>& _allowClientIPList)
{
    m_allowClientIPList = _allowClientIPList;
    m_allowClientIPListHasBeenSet = true;
}

bool StandardDebug::AllowClientIPListHasBeenSet() const
{
    return m_allowClientIPListHasBeenSet;
}

string StandardDebug::GetExpireTime() const
{
    return m_expireTime;
}

void StandardDebug::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool StandardDebug::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

