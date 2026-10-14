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

#include <tencentcloud/adp/v20260520/model/NodeRunLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

NodeRunLog::NodeRunLog() :
    m_logHasBeenSet(false),
    m_logRefHasBeenSet(false)
{
}

CoreInternalOutcome NodeRunLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunLog.Log` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_log = string(value["Log"].GetString());
        m_logHasBeenSet = true;
    }

    if (value.HasMember("LogRef") && !value["LogRef"].IsNull())
    {
        if (!value["LogRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunLog.LogRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logRef = string(value["LogRef"].GetString());
        m_logRefHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeRunLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_log.c_str(), allocator).Move(), allocator);
    }

    if (m_logRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logRef.c_str(), allocator).Move(), allocator);
    }

}


string NodeRunLog::GetLog() const
{
    return m_log;
}

void NodeRunLog::SetLog(const string& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool NodeRunLog::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

string NodeRunLog::GetLogRef() const
{
    return m_logRef;
}

void NodeRunLog::SetLogRef(const string& _logRef)
{
    m_logRef = _logRef;
    m_logRefHasBeenSet = true;
}

bool NodeRunLog::LogRefHasBeenSet() const
{
    return m_logRefHasBeenSet;
}

