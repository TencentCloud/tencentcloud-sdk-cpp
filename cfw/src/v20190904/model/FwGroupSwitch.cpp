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

#include <tencentcloud/cfw/v20190904/model/FwGroupSwitch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

FwGroupSwitch::FwGroupSwitch() :
    m_switchModeHasBeenSet(false),
    m_switchIdHasBeenSet(false)
{
}

CoreInternalOutcome FwGroupSwitch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SwitchMode") && !value["SwitchMode"].IsNull())
    {
        if (!value["SwitchMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitch.SwitchMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_switchMode = value["SwitchMode"].GetInt64();
        m_switchModeHasBeenSet = true;
    }

    if (value.HasMember("SwitchId") && !value["SwitchId"].IsNull())
    {
        if (!value["SwitchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwGroupSwitch.SwitchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchId = string(value["SwitchId"].GetString());
        m_switchIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FwGroupSwitch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_switchMode, allocator);
    }

    if (m_switchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchId.c_str(), allocator).Move(), allocator);
    }

}


int64_t FwGroupSwitch::GetSwitchMode() const
{
    return m_switchMode;
}

void FwGroupSwitch::SetSwitchMode(const int64_t& _switchMode)
{
    m_switchMode = _switchMode;
    m_switchModeHasBeenSet = true;
}

bool FwGroupSwitch::SwitchModeHasBeenSet() const
{
    return m_switchModeHasBeenSet;
}

string FwGroupSwitch::GetSwitchId() const
{
    return m_switchId;
}

void FwGroupSwitch::SetSwitchId(const string& _switchId)
{
    m_switchId = _switchId;
    m_switchIdHasBeenSet = true;
}

bool FwGroupSwitch::SwitchIdHasBeenSet() const
{
    return m_switchIdHasBeenSet;
}

