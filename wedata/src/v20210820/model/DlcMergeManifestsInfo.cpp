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

#include <tencentcloud/wedata/v20210820/model/DlcMergeManifestsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DlcMergeManifestsInfo::DlcMergeManifestsInfo() :
    m_mergeManifestsEnableHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_intervalMinHasBeenSet(false)
{
}

CoreInternalOutcome DlcMergeManifestsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MergeManifestsEnable") && !value["MergeManifestsEnable"].IsNull())
    {
        if (!value["MergeManifestsEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcMergeManifestsInfo.MergeManifestsEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mergeManifestsEnable = string(value["MergeManifestsEnable"].GetString());
        m_mergeManifestsEnableHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcMergeManifestsInfo.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("IntervalMin") && !value["IntervalMin"].IsNull())
    {
        if (!value["IntervalMin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcMergeManifestsInfo.IntervalMin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalMin = value["IntervalMin"].GetUint64();
        m_intervalMinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DlcMergeManifestsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mergeManifestsEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeManifestsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mergeManifestsEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalMin, allocator);
    }

}


string DlcMergeManifestsInfo::GetMergeManifestsEnable() const
{
    return m_mergeManifestsEnable;
}

void DlcMergeManifestsInfo::SetMergeManifestsEnable(const string& _mergeManifestsEnable)
{
    m_mergeManifestsEnable = _mergeManifestsEnable;
    m_mergeManifestsEnableHasBeenSet = true;
}

bool DlcMergeManifestsInfo::MergeManifestsEnableHasBeenSet() const
{
    return m_mergeManifestsEnableHasBeenSet;
}

string DlcMergeManifestsInfo::GetEngine() const
{
    return m_engine;
}

void DlcMergeManifestsInfo::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DlcMergeManifestsInfo::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

uint64_t DlcMergeManifestsInfo::GetIntervalMin() const
{
    return m_intervalMin;
}

void DlcMergeManifestsInfo::SetIntervalMin(const uint64_t& _intervalMin)
{
    m_intervalMin = _intervalMin;
    m_intervalMinHasBeenSet = true;
}

bool DlcMergeManifestsInfo::IntervalMinHasBeenSet() const
{
    return m_intervalMinHasBeenSet;
}

