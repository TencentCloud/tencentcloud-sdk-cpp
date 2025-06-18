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

#include <tencentcloud/iotexplorer/v20190423/model/AISearchInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

AISearchInfo::AISearchInfo() :
    m_summaryHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_videoURLHasBeenSet(false)
{
}

CoreInternalOutcome AISearchInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AISearchInfo.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("Targets") && !value["Targets"].IsNull())
    {
        if (!value["Targets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AISearchInfo.Targets` is not array type"));

        const rapidjson::Value &tmpValue = value["Targets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targets.push_back(item);
        }
        m_targetsHasBeenSet = true;
    }

    if (value.HasMember("VideoURL") && !value["VideoURL"].IsNull())
    {
        if (!value["VideoURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AISearchInfo.VideoURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoURL = string(value["VideoURL"].GetString());
        m_videoURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AISearchInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_targetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Targets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targets.begin(); itr != m_targets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_videoURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoURL.c_str(), allocator).Move(), allocator);
    }

}


string AISearchInfo::GetSummary() const
{
    return m_summary;
}

void AISearchInfo::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool AISearchInfo::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

vector<TargetInfo> AISearchInfo::GetTargets() const
{
    return m_targets;
}

void AISearchInfo::SetTargets(const vector<TargetInfo>& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool AISearchInfo::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}

string AISearchInfo::GetVideoURL() const
{
    return m_videoURL;
}

void AISearchInfo::SetVideoURL(const string& _videoURL)
{
    m_videoURL = _videoURL;
    m_videoURLHasBeenSet = true;
}

bool AISearchInfo::VideoURLHasBeenSet() const
{
    return m_videoURLHasBeenSet;
}

