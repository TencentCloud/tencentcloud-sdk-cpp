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

#include <tencentcloud/tke/v20180525/model/KubeJarvisStateInspectionResultsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

KubeJarvisStateInspectionResultsItem::KubeJarvisStateInspectionResultsItem() :
    m_nameHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
}

CoreInternalOutcome KubeJarvisStateInspectionResultsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateInspectionResultsItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Statistics") && !value["Statistics"].IsNull())
    {
        if (!value["Statistics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateInspectionResultsItem.Statistics` is not array type"));

        const rapidjson::Value &tmpValue = value["Statistics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KubeJarvisStateStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statistics.push_back(item);
        }
        m_statisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KubeJarvisStateInspectionResultsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statistics.begin(); itr != m_statistics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string KubeJarvisStateInspectionResultsItem::GetName() const
{
    return m_name;
}

void KubeJarvisStateInspectionResultsItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KubeJarvisStateInspectionResultsItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<KubeJarvisStateStatistic> KubeJarvisStateInspectionResultsItem::GetStatistics() const
{
    return m_statistics;
}

void KubeJarvisStateInspectionResultsItem::SetStatistics(const vector<KubeJarvisStateStatistic>& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool KubeJarvisStateInspectionResultsItem::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

