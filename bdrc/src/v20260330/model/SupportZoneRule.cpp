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

#include <tencentcloud/bdrc/v20260330/model/SupportZoneRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

SupportZoneRule::SupportZoneRule() :
    m_sourceZoneHasBeenSet(false),
    m_isAllZoneSupportHasBeenSet(false),
    m_targetZonesHasBeenSet(false)
{
}

CoreInternalOutcome SupportZoneRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceZone") && !value["SourceZone"].IsNull())
    {
        if (!value["SourceZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportZoneRule.SourceZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceZone = string(value["SourceZone"].GetString());
        m_sourceZoneHasBeenSet = true;
    }

    if (value.HasMember("IsAllZoneSupport") && !value["IsAllZoneSupport"].IsNull())
    {
        if (!value["IsAllZoneSupport"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportZoneRule.IsAllZoneSupport` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllZoneSupport = value["IsAllZoneSupport"].GetBool();
        m_isAllZoneSupportHasBeenSet = true;
    }

    if (value.HasMember("TargetZones") && !value["TargetZones"].IsNull())
    {
        if (!value["TargetZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SupportZoneRule.TargetZones` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetZones.push_back((*itr).GetString());
        }
        m_targetZonesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SupportZoneRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceZone.c_str(), allocator).Move(), allocator);
    }

    if (m_isAllZoneSupportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllZoneSupport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllZoneSupport, allocator);
    }

    if (m_targetZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetZones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetZones.begin(); itr != m_targetZones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SupportZoneRule::GetSourceZone() const
{
    return m_sourceZone;
}

void SupportZoneRule::SetSourceZone(const string& _sourceZone)
{
    m_sourceZone = _sourceZone;
    m_sourceZoneHasBeenSet = true;
}

bool SupportZoneRule::SourceZoneHasBeenSet() const
{
    return m_sourceZoneHasBeenSet;
}

bool SupportZoneRule::GetIsAllZoneSupport() const
{
    return m_isAllZoneSupport;
}

void SupportZoneRule::SetIsAllZoneSupport(const bool& _isAllZoneSupport)
{
    m_isAllZoneSupport = _isAllZoneSupport;
    m_isAllZoneSupportHasBeenSet = true;
}

bool SupportZoneRule::IsAllZoneSupportHasBeenSet() const
{
    return m_isAllZoneSupportHasBeenSet;
}

vector<string> SupportZoneRule::GetTargetZones() const
{
    return m_targetZones;
}

void SupportZoneRule::SetTargetZones(const vector<string>& _targetZones)
{
    m_targetZones = _targetZones;
    m_targetZonesHasBeenSet = true;
}

bool SupportZoneRule::TargetZonesHasBeenSet() const
{
    return m_targetZonesHasBeenSet;
}

