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

#include <tencentcloud/monitor/v20180724/model/PrometheusInstanceScrapeStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusInstanceScrapeStatistics::PrometheusInstanceScrapeStatistics() :
    m_instanceIdHasBeenSet(false),
    m_scrapedRateHasBeenSet(false),
    m_clustersHasBeenSet(false),
    m_globalHasBeenSet(false),
    m_samplesRateHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusInstanceScrapeStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceScrapeStatistics.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ScrapedRate") && !value["ScrapedRate"].IsNull())
    {
        if (!value["ScrapedRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceScrapeStatistics.ScrapedRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_scrapedRate = value["ScrapedRate"].GetDouble();
        m_scrapedRateHasBeenSet = true;
    }

    if (value.HasMember("Clusters") && !value["Clusters"].IsNull())
    {
        if (!value["Clusters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceScrapeStatistics.Clusters` is not array type"));

        const rapidjson::Value &tmpValue = value["Clusters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusClusterScrapeStatistics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusters.push_back(item);
        }
        m_clustersHasBeenSet = true;
    }

    if (value.HasMember("Global") && !value["Global"].IsNull())
    {
        if (!value["Global"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceScrapeStatistics.Global` is not array type"));

        const rapidjson::Value &tmpValue = value["Global"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusClusterScrapeStatistics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_global.push_back(item);
        }
        m_globalHasBeenSet = true;
    }

    if (value.HasMember("SamplesRate") && !value["SamplesRate"].IsNull())
    {
        if (!value["SamplesRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceScrapeStatistics.SamplesRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_samplesRate = value["SamplesRate"].GetDouble();
        m_samplesRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusInstanceScrapeStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_scrapedRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrapedRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scrapedRate, allocator);
    }

    if (m_clustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusters.begin(); itr != m_clusters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_globalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Global";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_global.begin(); itr != m_global.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_samplesRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamplesRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_samplesRate, allocator);
    }

}


string PrometheusInstanceScrapeStatistics::GetInstanceId() const
{
    return m_instanceId;
}

void PrometheusInstanceScrapeStatistics::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PrometheusInstanceScrapeStatistics::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

double PrometheusInstanceScrapeStatistics::GetScrapedRate() const
{
    return m_scrapedRate;
}

void PrometheusInstanceScrapeStatistics::SetScrapedRate(const double& _scrapedRate)
{
    m_scrapedRate = _scrapedRate;
    m_scrapedRateHasBeenSet = true;
}

bool PrometheusInstanceScrapeStatistics::ScrapedRateHasBeenSet() const
{
    return m_scrapedRateHasBeenSet;
}

vector<PrometheusClusterScrapeStatistics> PrometheusInstanceScrapeStatistics::GetClusters() const
{
    return m_clusters;
}

void PrometheusInstanceScrapeStatistics::SetClusters(const vector<PrometheusClusterScrapeStatistics>& _clusters)
{
    m_clusters = _clusters;
    m_clustersHasBeenSet = true;
}

bool PrometheusInstanceScrapeStatistics::ClustersHasBeenSet() const
{
    return m_clustersHasBeenSet;
}

vector<PrometheusClusterScrapeStatistics> PrometheusInstanceScrapeStatistics::GetGlobal() const
{
    return m_global;
}

void PrometheusInstanceScrapeStatistics::SetGlobal(const vector<PrometheusClusterScrapeStatistics>& _global)
{
    m_global = _global;
    m_globalHasBeenSet = true;
}

bool PrometheusInstanceScrapeStatistics::GlobalHasBeenSet() const
{
    return m_globalHasBeenSet;
}

double PrometheusInstanceScrapeStatistics::GetSamplesRate() const
{
    return m_samplesRate;
}

void PrometheusInstanceScrapeStatistics::SetSamplesRate(const double& _samplesRate)
{
    m_samplesRate = _samplesRate;
    m_samplesRateHasBeenSet = true;
}

bool PrometheusInstanceScrapeStatistics::SamplesRateHasBeenSet() const
{
    return m_samplesRateHasBeenSet;
}

