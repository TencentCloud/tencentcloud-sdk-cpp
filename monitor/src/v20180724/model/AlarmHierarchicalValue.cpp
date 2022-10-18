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

#include <tencentcloud/monitor/v20180724/model/AlarmHierarchicalValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

AlarmHierarchicalValue::AlarmHierarchicalValue() :
    m_remindHasBeenSet(false),
    m_warnHasBeenSet(false),
    m_seriousHasBeenSet(false)
{
}

CoreInternalOutcome AlarmHierarchicalValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Remind") && !value["Remind"].IsNull())
    {
        if (!value["Remind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHierarchicalValue.Remind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remind = string(value["Remind"].GetString());
        m_remindHasBeenSet = true;
    }

    if (value.HasMember("Warn") && !value["Warn"].IsNull())
    {
        if (!value["Warn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHierarchicalValue.Warn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warn = string(value["Warn"].GetString());
        m_warnHasBeenSet = true;
    }

    if (value.HasMember("Serious") && !value["Serious"].IsNull())
    {
        if (!value["Serious"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmHierarchicalValue.Serious` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serious = string(value["Serious"].GetString());
        m_seriousHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmHierarchicalValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_remindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remind.c_str(), allocator).Move(), allocator);
    }

    if (m_warnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Warn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warn.c_str(), allocator).Move(), allocator);
    }

    if (m_seriousHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Serious";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serious.c_str(), allocator).Move(), allocator);
    }

}


string AlarmHierarchicalValue::GetRemind() const
{
    return m_remind;
}

void AlarmHierarchicalValue::SetRemind(const string& _remind)
{
    m_remind = _remind;
    m_remindHasBeenSet = true;
}

bool AlarmHierarchicalValue::RemindHasBeenSet() const
{
    return m_remindHasBeenSet;
}

string AlarmHierarchicalValue::GetWarn() const
{
    return m_warn;
}

void AlarmHierarchicalValue::SetWarn(const string& _warn)
{
    m_warn = _warn;
    m_warnHasBeenSet = true;
}

bool AlarmHierarchicalValue::WarnHasBeenSet() const
{
    return m_warnHasBeenSet;
}

string AlarmHierarchicalValue::GetSerious() const
{
    return m_serious;
}

void AlarmHierarchicalValue::SetSerious(const string& _serious)
{
    m_serious = _serious;
    m_seriousHasBeenSet = true;
}

bool AlarmHierarchicalValue::SeriousHasBeenSet() const
{
    return m_seriousHasBeenSet;
}

