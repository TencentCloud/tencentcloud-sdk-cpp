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

#include <tencentcloud/csip/v20221121/model/CommandPluginState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CommandPluginState::CommandPluginState() :
    m_installStatusHasBeenSet(false)
{
}

CoreInternalOutcome CommandPluginState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstallStatus") && !value["InstallStatus"].IsNull())
    {
        if (!value["InstallStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandPluginState.InstallStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installStatus = string(value["InstallStatus"].GetString());
        m_installStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommandPluginState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_installStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_installStatus.c_str(), allocator).Move(), allocator);
    }

}


string CommandPluginState::GetInstallStatus() const
{
    return m_installStatus;
}

void CommandPluginState::SetInstallStatus(const string& _installStatus)
{
    m_installStatus = _installStatus;
    m_installStatusHasBeenSet = true;
}

bool CommandPluginState::InstallStatusHasBeenSet() const
{
    return m_installStatusHasBeenSet;
}

