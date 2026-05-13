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

#include <tencentcloud/csip/v20221121/model/TrafficPluginState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficPluginState::TrafficPluginState() :
    m_installStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_activityTimeHasBeenSet(false)
{
}

CoreInternalOutcome TrafficPluginState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstallStatus") && !value["InstallStatus"].IsNull())
    {
        if (!value["InstallStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPluginState.InstallStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installStatus = string(value["InstallStatus"].GetString());
        m_installStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPluginState.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPluginState.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("ActivityTime") && !value["ActivityTime"].IsNull())
    {
        if (!value["ActivityTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPluginState.ActivityTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityTime = string(value["ActivityTime"].GetString());
        m_activityTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficPluginState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_installStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_installStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_activityTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityTime.c_str(), allocator).Move(), allocator);
    }

}


string TrafficPluginState::GetInstallStatus() const
{
    return m_installStatus;
}

void TrafficPluginState::SetInstallStatus(const string& _installStatus)
{
    m_installStatus = _installStatus;
    m_installStatusHasBeenSet = true;
}

bool TrafficPluginState::InstallStatusHasBeenSet() const
{
    return m_installStatusHasBeenSet;
}

string TrafficPluginState::GetStatus() const
{
    return m_status;
}

void TrafficPluginState::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TrafficPluginState::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TrafficPluginState::GetMessage() const
{
    return m_message;
}

void TrafficPluginState::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool TrafficPluginState::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string TrafficPluginState::GetActivityTime() const
{
    return m_activityTime;
}

void TrafficPluginState::SetActivityTime(const string& _activityTime)
{
    m_activityTime = _activityTime;
    m_activityTimeHasBeenSet = true;
}

bool TrafficPluginState::ActivityTimeHasBeenSet() const
{
    return m_activityTimeHasBeenSet;
}

