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

#include <tencentcloud/waf/v20180125/model/WafThreatenIntelligenceDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

WafThreatenIntelligenceDetails::WafThreatenIntelligenceDetails() :
    m_tagsHasBeenSet(false),
    m_defenseStatusHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome WafThreatenIntelligenceDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WafThreatenIntelligenceDetails.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("DefenseStatus") && !value["DefenseStatus"].IsNull())
    {
        if (!value["DefenseStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WafThreatenIntelligenceDetails.DefenseStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defenseStatus = value["DefenseStatus"].GetInt64();
        m_defenseStatusHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafThreatenIntelligenceDetails.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WafThreatenIntelligenceDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_defenseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defenseStatus, allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

}


vector<string> WafThreatenIntelligenceDetails::GetTags() const
{
    return m_tags;
}

void WafThreatenIntelligenceDetails::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool WafThreatenIntelligenceDetails::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t WafThreatenIntelligenceDetails::GetDefenseStatus() const
{
    return m_defenseStatus;
}

void WafThreatenIntelligenceDetails::SetDefenseStatus(const int64_t& _defenseStatus)
{
    m_defenseStatus = _defenseStatus;
    m_defenseStatusHasBeenSet = true;
}

bool WafThreatenIntelligenceDetails::DefenseStatusHasBeenSet() const
{
    return m_defenseStatusHasBeenSet;
}

string WafThreatenIntelligenceDetails::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void WafThreatenIntelligenceDetails::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool WafThreatenIntelligenceDetails::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

