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

#include <tencentcloud/cynosdb/v20190107/model/BinlogConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

BinlogConfigInfo::BinlogConfigInfo() :
    m_binlogSaveDaysHasBeenSet(false),
    m_binlogCrossRegionsEnableHasBeenSet(false),
    m_binlogCrossRegionsHasBeenSet(false)
{
}

CoreInternalOutcome BinlogConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BinlogSaveDays") && !value["BinlogSaveDays"].IsNull())
    {
        if (!value["BinlogSaveDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogConfigInfo.BinlogSaveDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogSaveDays = value["BinlogSaveDays"].GetInt64();
        m_binlogSaveDaysHasBeenSet = true;
    }

    if (value.HasMember("BinlogCrossRegionsEnable") && !value["BinlogCrossRegionsEnable"].IsNull())
    {
        if (!value["BinlogCrossRegionsEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogConfigInfo.BinlogCrossRegionsEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_binlogCrossRegionsEnable = string(value["BinlogCrossRegionsEnable"].GetString());
        m_binlogCrossRegionsEnableHasBeenSet = true;
    }

    if (value.HasMember("BinlogCrossRegions") && !value["BinlogCrossRegions"].IsNull())
    {
        if (!value["BinlogCrossRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BinlogConfigInfo.BinlogCrossRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["BinlogCrossRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_binlogCrossRegions.push_back((*itr).GetString());
        }
        m_binlogCrossRegionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BinlogConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_binlogSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogSaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogSaveDays, allocator);
    }

    if (m_binlogCrossRegionsEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogCrossRegionsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_binlogCrossRegionsEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_binlogCrossRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogCrossRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_binlogCrossRegions.begin(); itr != m_binlogCrossRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t BinlogConfigInfo::GetBinlogSaveDays() const
{
    return m_binlogSaveDays;
}

void BinlogConfigInfo::SetBinlogSaveDays(const int64_t& _binlogSaveDays)
{
    m_binlogSaveDays = _binlogSaveDays;
    m_binlogSaveDaysHasBeenSet = true;
}

bool BinlogConfigInfo::BinlogSaveDaysHasBeenSet() const
{
    return m_binlogSaveDaysHasBeenSet;
}

string BinlogConfigInfo::GetBinlogCrossRegionsEnable() const
{
    return m_binlogCrossRegionsEnable;
}

void BinlogConfigInfo::SetBinlogCrossRegionsEnable(const string& _binlogCrossRegionsEnable)
{
    m_binlogCrossRegionsEnable = _binlogCrossRegionsEnable;
    m_binlogCrossRegionsEnableHasBeenSet = true;
}

bool BinlogConfigInfo::BinlogCrossRegionsEnableHasBeenSet() const
{
    return m_binlogCrossRegionsEnableHasBeenSet;
}

vector<string> BinlogConfigInfo::GetBinlogCrossRegions() const
{
    return m_binlogCrossRegions;
}

void BinlogConfigInfo::SetBinlogCrossRegions(const vector<string>& _binlogCrossRegions)
{
    m_binlogCrossRegions = _binlogCrossRegions;
    m_binlogCrossRegionsHasBeenSet = true;
}

bool BinlogConfigInfo::BinlogCrossRegionsHasBeenSet() const
{
    return m_binlogCrossRegionsHasBeenSet;
}

