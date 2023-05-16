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

#include <tencentcloud/tke/v20180525/model/KubeJarvisStateInspectionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

KubeJarvisStateInspectionResult::KubeJarvisStateInspectionResult() :
    m_clusterIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_diagnosticsHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome KubeJarvisStateInspectionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateInspectionResult.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateInspectionResult.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateInspectionResult.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Statistics") && !value["Statistics"].IsNull())
    {
        if (!value["Statistics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateInspectionResult.Statistics` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateInspectionResult.Diagnostics` is not array type"));

        const rapidjson::Value &tmpValue = value["Diagnostics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KubeJarvisStateDiagnostic item;
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

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateInspectionResult.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KubeJarvisStateInspectionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

}


string KubeJarvisStateInspectionResult::GetClusterId() const
{
    return m_clusterId;
}

void KubeJarvisStateInspectionResult::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool KubeJarvisStateInspectionResult::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string KubeJarvisStateInspectionResult::GetStartTime() const
{
    return m_startTime;
}

void KubeJarvisStateInspectionResult::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool KubeJarvisStateInspectionResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string KubeJarvisStateInspectionResult::GetEndTime() const
{
    return m_endTime;
}

void KubeJarvisStateInspectionResult::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool KubeJarvisStateInspectionResult::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<KubeJarvisStateStatistic> KubeJarvisStateInspectionResult::GetStatistics() const
{
    return m_statistics;
}

void KubeJarvisStateInspectionResult::SetStatistics(const vector<KubeJarvisStateStatistic>& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool KubeJarvisStateInspectionResult::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

vector<KubeJarvisStateDiagnostic> KubeJarvisStateInspectionResult::GetDiagnostics() const
{
    return m_diagnostics;
}

void KubeJarvisStateInspectionResult::SetDiagnostics(const vector<KubeJarvisStateDiagnostic>& _diagnostics)
{
    m_diagnostics = _diagnostics;
    m_diagnosticsHasBeenSet = true;
}

bool KubeJarvisStateInspectionResult::DiagnosticsHasBeenSet() const
{
    return m_diagnosticsHasBeenSet;
}

string KubeJarvisStateInspectionResult::GetError() const
{
    return m_error;
}

void KubeJarvisStateInspectionResult::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool KubeJarvisStateInspectionResult::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

