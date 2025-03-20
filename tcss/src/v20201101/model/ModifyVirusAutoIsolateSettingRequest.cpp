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

#include <tencentcloud/tcss/v20201101/model/ModifyVirusAutoIsolateSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyVirusAutoIsolateSettingRequest::ModifyVirusAutoIsolateSettingRequest() :
    m_autoIsolateSwitchHasBeenSet(false),
    m_isKillProgressHasBeenSet(false),
    m_userAutoIsolateKillSwitchHasBeenSet(false)
{
}

string ModifyVirusAutoIsolateSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoIsolateSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoIsolateSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoIsolateSwitch, allocator);
    }

    if (m_isKillProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKillProgress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isKillProgress, allocator);
    }

    if (m_userAutoIsolateKillSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAutoIsolateKillSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_userAutoIsolateKillSwitch, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ModifyVirusAutoIsolateSettingRequest::GetAutoIsolateSwitch() const
{
    return m_autoIsolateSwitch;
}

void ModifyVirusAutoIsolateSettingRequest::SetAutoIsolateSwitch(const bool& _autoIsolateSwitch)
{
    m_autoIsolateSwitch = _autoIsolateSwitch;
    m_autoIsolateSwitchHasBeenSet = true;
}

bool ModifyVirusAutoIsolateSettingRequest::AutoIsolateSwitchHasBeenSet() const
{
    return m_autoIsolateSwitchHasBeenSet;
}

bool ModifyVirusAutoIsolateSettingRequest::GetIsKillProgress() const
{
    return m_isKillProgress;
}

void ModifyVirusAutoIsolateSettingRequest::SetIsKillProgress(const bool& _isKillProgress)
{
    m_isKillProgress = _isKillProgress;
    m_isKillProgressHasBeenSet = true;
}

bool ModifyVirusAutoIsolateSettingRequest::IsKillProgressHasBeenSet() const
{
    return m_isKillProgressHasBeenSet;
}

bool ModifyVirusAutoIsolateSettingRequest::GetUserAutoIsolateKillSwitch() const
{
    return m_userAutoIsolateKillSwitch;
}

void ModifyVirusAutoIsolateSettingRequest::SetUserAutoIsolateKillSwitch(const bool& _userAutoIsolateKillSwitch)
{
    m_userAutoIsolateKillSwitch = _userAutoIsolateKillSwitch;
    m_userAutoIsolateKillSwitchHasBeenSet = true;
}

bool ModifyVirusAutoIsolateSettingRequest::UserAutoIsolateKillSwitchHasBeenSet() const
{
    return m_userAutoIsolateKillSwitchHasBeenSet;
}


