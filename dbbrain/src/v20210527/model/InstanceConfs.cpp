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

#include <tencentcloud/dbbrain/v20210527/model/InstanceConfs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

InstanceConfs::InstanceConfs() :
    m_dailyInspectionHasBeenSet(false),
    m_overviewDisplayHasBeenSet(false),
    m_keyDelimitersHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_analysisTopKeyHasBeenSet(false)
{
}

CoreInternalOutcome InstanceConfs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DailyInspection") && !value["DailyInspection"].IsNull())
    {
        if (!value["DailyInspection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfs.DailyInspection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dailyInspection = string(value["DailyInspection"].GetString());
        m_dailyInspectionHasBeenSet = true;
    }

    if (value.HasMember("OverviewDisplay") && !value["OverviewDisplay"].IsNull())
    {
        if (!value["OverviewDisplay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfs.OverviewDisplay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_overviewDisplay = string(value["OverviewDisplay"].GetString());
        m_overviewDisplayHasBeenSet = true;
    }

    if (value.HasMember("KeyDelimiters") && !value["KeyDelimiters"].IsNull())
    {
        if (!value["KeyDelimiters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceConfs.KeyDelimiters` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyDelimiters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyDelimiters.push_back((*itr).GetString());
        }
        m_keyDelimitersHasBeenSet = true;
    }

    if (value.HasMember("ShardNum") && !value["ShardNum"].IsNull())
    {
        if (!value["ShardNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfs.ShardNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardNum = string(value["ShardNum"].GetString());
        m_shardNumHasBeenSet = true;
    }

    if (value.HasMember("AnalysisTopKey") && !value["AnalysisTopKey"].IsNull())
    {
        if (!value["AnalysisTopKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceConfs.AnalysisTopKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisTopKey = string(value["AnalysisTopKey"].GetString());
        m_analysisTopKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceConfs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dailyInspectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyInspection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dailyInspection.c_str(), allocator).Move(), allocator);
    }

    if (m_overviewDisplayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverviewDisplay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_overviewDisplay.c_str(), allocator).Move(), allocator);
    }

    if (m_keyDelimitersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyDelimiters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keyDelimiters.begin(); itr != m_keyDelimiters.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardNum.c_str(), allocator).Move(), allocator);
    }

    if (m_analysisTopKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisTopKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analysisTopKey.c_str(), allocator).Move(), allocator);
    }

}


string InstanceConfs::GetDailyInspection() const
{
    return m_dailyInspection;
}

void InstanceConfs::SetDailyInspection(const string& _dailyInspection)
{
    m_dailyInspection = _dailyInspection;
    m_dailyInspectionHasBeenSet = true;
}

bool InstanceConfs::DailyInspectionHasBeenSet() const
{
    return m_dailyInspectionHasBeenSet;
}

string InstanceConfs::GetOverviewDisplay() const
{
    return m_overviewDisplay;
}

void InstanceConfs::SetOverviewDisplay(const string& _overviewDisplay)
{
    m_overviewDisplay = _overviewDisplay;
    m_overviewDisplayHasBeenSet = true;
}

bool InstanceConfs::OverviewDisplayHasBeenSet() const
{
    return m_overviewDisplayHasBeenSet;
}

vector<string> InstanceConfs::GetKeyDelimiters() const
{
    return m_keyDelimiters;
}

void InstanceConfs::SetKeyDelimiters(const vector<string>& _keyDelimiters)
{
    m_keyDelimiters = _keyDelimiters;
    m_keyDelimitersHasBeenSet = true;
}

bool InstanceConfs::KeyDelimitersHasBeenSet() const
{
    return m_keyDelimitersHasBeenSet;
}

string InstanceConfs::GetShardNum() const
{
    return m_shardNum;
}

void InstanceConfs::SetShardNum(const string& _shardNum)
{
    m_shardNum = _shardNum;
    m_shardNumHasBeenSet = true;
}

bool InstanceConfs::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

string InstanceConfs::GetAnalysisTopKey() const
{
    return m_analysisTopKey;
}

void InstanceConfs::SetAnalysisTopKey(const string& _analysisTopKey)
{
    m_analysisTopKey = _analysisTopKey;
    m_analysisTopKeyHasBeenSet = true;
}

bool InstanceConfs::AnalysisTopKeyHasBeenSet() const
{
    return m_analysisTopKeyHasBeenSet;
}

