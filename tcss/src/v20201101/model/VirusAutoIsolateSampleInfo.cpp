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

#include <tencentcloud/tcss/v20201101/model/VirusAutoIsolateSampleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VirusAutoIsolateSampleInfo::VirusAutoIsolateSampleInfo() :
    m_mD5HasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_autoIsolateSwitchHasBeenSet(false)
{
}

CoreInternalOutcome VirusAutoIsolateSampleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MD5") && !value["MD5"].IsNull())
    {
        if (!value["MD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirusAutoIsolateSampleInfo.MD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mD5 = string(value["MD5"].GetString());
        m_mD5HasBeenSet = true;
    }

    if (value.HasMember("VirusName") && !value["VirusName"].IsNull())
    {
        if (!value["VirusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirusAutoIsolateSampleInfo.VirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusName = string(value["VirusName"].GetString());
        m_virusNameHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirusAutoIsolateSampleInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoIsolateSwitch") && !value["AutoIsolateSwitch"].IsNull())
    {
        if (!value["AutoIsolateSwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VirusAutoIsolateSampleInfo.AutoIsolateSwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoIsolateSwitch = value["AutoIsolateSwitch"].GetBool();
        m_autoIsolateSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VirusAutoIsolateSampleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mD5.c_str(), allocator).Move(), allocator);
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusName.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoIsolateSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoIsolateSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoIsolateSwitch, allocator);
    }

}


string VirusAutoIsolateSampleInfo::GetMD5() const
{
    return m_mD5;
}

void VirusAutoIsolateSampleInfo::SetMD5(const string& _mD5)
{
    m_mD5 = _mD5;
    m_mD5HasBeenSet = true;
}

bool VirusAutoIsolateSampleInfo::MD5HasBeenSet() const
{
    return m_mD5HasBeenSet;
}

string VirusAutoIsolateSampleInfo::GetVirusName() const
{
    return m_virusName;
}

void VirusAutoIsolateSampleInfo::SetVirusName(const string& _virusName)
{
    m_virusName = _virusName;
    m_virusNameHasBeenSet = true;
}

bool VirusAutoIsolateSampleInfo::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

string VirusAutoIsolateSampleInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void VirusAutoIsolateSampleInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool VirusAutoIsolateSampleInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

bool VirusAutoIsolateSampleInfo::GetAutoIsolateSwitch() const
{
    return m_autoIsolateSwitch;
}

void VirusAutoIsolateSampleInfo::SetAutoIsolateSwitch(const bool& _autoIsolateSwitch)
{
    m_autoIsolateSwitch = _autoIsolateSwitch;
    m_autoIsolateSwitchHasBeenSet = true;
}

bool VirusAutoIsolateSampleInfo::AutoIsolateSwitchHasBeenSet() const
{
    return m_autoIsolateSwitchHasBeenSet;
}

