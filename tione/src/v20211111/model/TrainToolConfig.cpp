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

#include <tencentcloud/tione/v20211111/model/TrainToolConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

TrainToolConfig::TrainToolConfig() :
    m_enableHangMonitorHasBeenSet(false),
    m_hangMonitorNodesHasBeenSet(false),
    m_logHangTimeoutInMinuteHasBeenSet(false)
{
}

CoreInternalOutcome TrainToolConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableHangMonitor") && !value["EnableHangMonitor"].IsNull())
    {
        if (!value["EnableHangMonitor"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TrainToolConfig.EnableHangMonitor` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableHangMonitor = value["EnableHangMonitor"].GetBool();
        m_enableHangMonitorHasBeenSet = true;
    }

    if (value.HasMember("HangMonitorNodes") && !value["HangMonitorNodes"].IsNull())
    {
        if (!value["HangMonitorNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainToolConfig.HangMonitorNodes` is not array type"));

        const rapidjson::Value &tmpValue = value["HangMonitorNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hangMonitorNodes.push_back((*itr).GetString());
        }
        m_hangMonitorNodesHasBeenSet = true;
    }

    if (value.HasMember("LogHangTimeoutInMinute") && !value["LogHangTimeoutInMinute"].IsNull())
    {
        if (!value["LogHangTimeoutInMinute"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainToolConfig.LogHangTimeoutInMinute` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logHangTimeoutInMinute = value["LogHangTimeoutInMinute"].GetUint64();
        m_logHangTimeoutInMinuteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainToolConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHangMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHangMonitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableHangMonitor, allocator);
    }

    if (m_hangMonitorNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HangMonitorNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hangMonitorNodes.begin(); itr != m_hangMonitorNodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logHangTimeoutInMinuteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogHangTimeoutInMinute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logHangTimeoutInMinute, allocator);
    }

}


bool TrainToolConfig::GetEnableHangMonitor() const
{
    return m_enableHangMonitor;
}

void TrainToolConfig::SetEnableHangMonitor(const bool& _enableHangMonitor)
{
    m_enableHangMonitor = _enableHangMonitor;
    m_enableHangMonitorHasBeenSet = true;
}

bool TrainToolConfig::EnableHangMonitorHasBeenSet() const
{
    return m_enableHangMonitorHasBeenSet;
}

vector<string> TrainToolConfig::GetHangMonitorNodes() const
{
    return m_hangMonitorNodes;
}

void TrainToolConfig::SetHangMonitorNodes(const vector<string>& _hangMonitorNodes)
{
    m_hangMonitorNodes = _hangMonitorNodes;
    m_hangMonitorNodesHasBeenSet = true;
}

bool TrainToolConfig::HangMonitorNodesHasBeenSet() const
{
    return m_hangMonitorNodesHasBeenSet;
}

uint64_t TrainToolConfig::GetLogHangTimeoutInMinute() const
{
    return m_logHangTimeoutInMinute;
}

void TrainToolConfig::SetLogHangTimeoutInMinute(const uint64_t& _logHangTimeoutInMinute)
{
    m_logHangTimeoutInMinute = _logHangTimeoutInMinute;
    m_logHangTimeoutInMinuteHasBeenSet = true;
}

bool TrainToolConfig::LogHangTimeoutInMinuteHasBeenSet() const
{
    return m_logHangTimeoutInMinuteHasBeenSet;
}

