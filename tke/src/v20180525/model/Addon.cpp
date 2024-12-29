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

#include <tencentcloud/tke/v20180525/model/Addon.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

Addon::Addon() :
    m_addonNameHasBeenSet(false),
    m_addonVersionHasBeenSet(false),
    m_rawValuesHasBeenSet(false),
    m_phaseHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome Addon::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddonName") && !value["AddonName"].IsNull())
    {
        if (!value["AddonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Addon.AddonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addonName = string(value["AddonName"].GetString());
        m_addonNameHasBeenSet = true;
    }

    if (value.HasMember("AddonVersion") && !value["AddonVersion"].IsNull())
    {
        if (!value["AddonVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Addon.AddonVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addonVersion = string(value["AddonVersion"].GetString());
        m_addonVersionHasBeenSet = true;
    }

    if (value.HasMember("RawValues") && !value["RawValues"].IsNull())
    {
        if (!value["RawValues"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Addon.RawValues` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rawValues = string(value["RawValues"].GetString());
        m_rawValuesHasBeenSet = true;
    }

    if (value.HasMember("Phase") && !value["Phase"].IsNull())
    {
        if (!value["Phase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Addon.Phase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phase = string(value["Phase"].GetString());
        m_phaseHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Addon.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Addon.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Addon::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addonNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addonName.c_str(), allocator).Move(), allocator);
    }

    if (m_addonVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddonVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addonVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_rawValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rawValues.c_str(), allocator).Move(), allocator);
    }

    if (m_phaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phase.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string Addon::GetAddonName() const
{
    return m_addonName;
}

void Addon::SetAddonName(const string& _addonName)
{
    m_addonName = _addonName;
    m_addonNameHasBeenSet = true;
}

bool Addon::AddonNameHasBeenSet() const
{
    return m_addonNameHasBeenSet;
}

string Addon::GetAddonVersion() const
{
    return m_addonVersion;
}

void Addon::SetAddonVersion(const string& _addonVersion)
{
    m_addonVersion = _addonVersion;
    m_addonVersionHasBeenSet = true;
}

bool Addon::AddonVersionHasBeenSet() const
{
    return m_addonVersionHasBeenSet;
}

string Addon::GetRawValues() const
{
    return m_rawValues;
}

void Addon::SetRawValues(const string& _rawValues)
{
    m_rawValues = _rawValues;
    m_rawValuesHasBeenSet = true;
}

bool Addon::RawValuesHasBeenSet() const
{
    return m_rawValuesHasBeenSet;
}

string Addon::GetPhase() const
{
    return m_phase;
}

void Addon::SetPhase(const string& _phase)
{
    m_phase = _phase;
    m_phaseHasBeenSet = true;
}

bool Addon::PhaseHasBeenSet() const
{
    return m_phaseHasBeenSet;
}

string Addon::GetReason() const
{
    return m_reason;
}

void Addon::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool Addon::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string Addon::GetCreateTime() const
{
    return m_createTime;
}

void Addon::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Addon::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

