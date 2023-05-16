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

#include <tencentcloud/tke/v20180525/model/KubeJarvisStateInspectionOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

KubeJarvisStateInspectionOverview::KubeJarvisStateInspectionOverview() :
    m_clusterIdHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_diagnosticsHasBeenSet(false)
{
}

CoreInternalOutcome KubeJarvisStateInspectionOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateInspectionOverview.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Statistics") && !value["Statistics"].IsNull())
    {
        if (!value["Statistics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateInspectionOverview.Statistics` is not array type"));

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

    if (value.HasMember("Diagnostics") && !value["Diagnostics"].IsNull())
    {
        if (!value["Diagnostics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateInspectionOverview.Diagnostics` is not array type"));

        const rapidjson::Value &tmpValue = value["Diagnostics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KubeJarvisStateDiagnosticOverview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diagnostics.push_back(item);
        }
        m_diagnosticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KubeJarvisStateInspectionOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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

    if (m_diagnosticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Diagnostics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diagnostics.begin(); itr != m_diagnostics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string KubeJarvisStateInspectionOverview::GetClusterId() const
{
    return m_clusterId;
}

void KubeJarvisStateInspectionOverview::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool KubeJarvisStateInspectionOverview::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<KubeJarvisStateStatistic> KubeJarvisStateInspectionOverview::GetStatistics() const
{
    return m_statistics;
}

void KubeJarvisStateInspectionOverview::SetStatistics(const vector<KubeJarvisStateStatistic>& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool KubeJarvisStateInspectionOverview::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

vector<KubeJarvisStateDiagnosticOverview> KubeJarvisStateInspectionOverview::GetDiagnostics() const
{
    return m_diagnostics;
}

void KubeJarvisStateInspectionOverview::SetDiagnostics(const vector<KubeJarvisStateDiagnosticOverview>& _diagnostics)
{
    m_diagnostics = _diagnostics;
    m_diagnosticsHasBeenSet = true;
}

bool KubeJarvisStateInspectionOverview::DiagnosticsHasBeenSet() const
{
    return m_diagnosticsHasBeenSet;
}

