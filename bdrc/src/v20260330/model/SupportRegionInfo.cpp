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

#include <tencentcloud/bdrc/v20260330/model/SupportRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

SupportRegionInfo::SupportRegionInfo() :
    m_sourceRegionHasBeenSet(false),
    m_supportTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_supportZoneRulesHasBeenSet(false)
{
}

CoreInternalOutcome SupportRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceRegion") && !value["SourceRegion"].IsNull())
    {
        if (!value["SourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportRegionInfo.SourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegion = string(value["SourceRegion"].GetString());
        m_sourceRegionHasBeenSet = true;
    }

    if (value.HasMember("SupportType") && !value["SupportType"].IsNull())
    {
        if (!value["SupportType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportRegionInfo.SupportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supportType = string(value["SupportType"].GetString());
        m_supportTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportRegionInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SupportZoneRules") && !value["SupportZoneRules"].IsNull())
    {
        if (!value["SupportZoneRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SupportRegionInfo.SupportZoneRules` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportZoneRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SupportZoneRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_supportZoneRules.push_back(item);
        }
        m_supportZoneRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SupportRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_supportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supportType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_supportZoneRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportZoneRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_supportZoneRules.begin(); itr != m_supportZoneRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SupportRegionInfo::GetSourceRegion() const
{
    return m_sourceRegion;
}

void SupportRegionInfo::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool SupportRegionInfo::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string SupportRegionInfo::GetSupportType() const
{
    return m_supportType;
}

void SupportRegionInfo::SetSupportType(const string& _supportType)
{
    m_supportType = _supportType;
    m_supportTypeHasBeenSet = true;
}

bool SupportRegionInfo::SupportTypeHasBeenSet() const
{
    return m_supportTypeHasBeenSet;
}

string SupportRegionInfo::GetStatus() const
{
    return m_status;
}

void SupportRegionInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SupportRegionInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<SupportZoneRule> SupportRegionInfo::GetSupportZoneRules() const
{
    return m_supportZoneRules;
}

void SupportRegionInfo::SetSupportZoneRules(const vector<SupportZoneRule>& _supportZoneRules)
{
    m_supportZoneRules = _supportZoneRules;
    m_supportZoneRulesHasBeenSet = true;
}

bool SupportRegionInfo::SupportZoneRulesHasBeenSet() const
{
    return m_supportZoneRulesHasBeenSet;
}

