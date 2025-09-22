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

#include <tencentcloud/wedata/v20250806/model/AlarmWayWebHook.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

AlarmWayWebHook::AlarmWayWebHook() :
    m_alarmWayHasBeenSet(false),
    m_webHooksHasBeenSet(false)
{
}

CoreInternalOutcome AlarmWayWebHook::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmWay") && !value["AlarmWay"].IsNull())
    {
        if (!value["AlarmWay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmWayWebHook.AlarmWay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmWay = string(value["AlarmWay"].GetString());
        m_alarmWayHasBeenSet = true;
    }

    if (value.HasMember("WebHooks") && !value["WebHooks"].IsNull())
    {
        if (!value["WebHooks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmWayWebHook.WebHooks` is not array type"));

        const rapidjson::Value &tmpValue = value["WebHooks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_webHooks.push_back((*itr).GetString());
        }
        m_webHooksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmWayWebHook::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmWay.c_str(), allocator).Move(), allocator);
    }

    if (m_webHooksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebHooks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_webHooks.begin(); itr != m_webHooks.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AlarmWayWebHook::GetAlarmWay() const
{
    return m_alarmWay;
}

void AlarmWayWebHook::SetAlarmWay(const string& _alarmWay)
{
    m_alarmWay = _alarmWay;
    m_alarmWayHasBeenSet = true;
}

bool AlarmWayWebHook::AlarmWayHasBeenSet() const
{
    return m_alarmWayHasBeenSet;
}

vector<string> AlarmWayWebHook::GetWebHooks() const
{
    return m_webHooks;
}

void AlarmWayWebHook::SetWebHooks(const vector<string>& _webHooks)
{
    m_webHooks = _webHooks;
    m_webHooksHasBeenSet = true;
}

bool AlarmWayWebHook::WebHooksHasBeenSet() const
{
    return m_webHooksHasBeenSet;
}

