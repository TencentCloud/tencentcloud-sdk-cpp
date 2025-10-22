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

#include <tencentcloud/monitor/v20180724/model/PrometheusClusterScrapeStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusClusterScrapeStatistics::PrometheusClusterScrapeStatistics() :
    m_clusterIDHasBeenSet(false),
    m_scrapedRateHasBeenSet(false),
    m_jobsHasBeenSet(false),
    m_samplesRateHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusClusterScrapeStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterScrapeStatistics.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("ScrapedRate") && !value["ScrapedRate"].IsNull())
    {
        if (!value["ScrapedRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterScrapeStatistics.ScrapedRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_scrapedRate = value["ScrapedRate"].GetDouble();
        m_scrapedRateHasBeenSet = true;
    }

    if (value.HasMember("Jobs") && !value["Jobs"].IsNull())
    {
        if (!value["Jobs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterScrapeStatistics.Jobs` is not array type"));

        const rapidjson::Value &tmpValue = value["Jobs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusJobScrapeStatistics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_jobs.push_back(item);
        }
        m_jobsHasBeenSet = true;
    }

    if (value.HasMember("SamplesRate") && !value["SamplesRate"].IsNull())
    {
        if (!value["SamplesRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusClusterScrapeStatistics.SamplesRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_samplesRate = value["SamplesRate"].GetDouble();
        m_samplesRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusClusterScrapeStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_scrapedRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrapedRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scrapedRate, allocator);
    }

    if (m_jobsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Jobs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_jobs.begin(); itr != m_jobs.end(); ++itr, ++i)
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


string PrometheusClusterScrapeStatistics::GetClusterID() const
{
    return m_clusterID;
}

void PrometheusClusterScrapeStatistics::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool PrometheusClusterScrapeStatistics::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

double PrometheusClusterScrapeStatistics::GetScrapedRate() const
{
    return m_scrapedRate;
}

void PrometheusClusterScrapeStatistics::SetScrapedRate(const double& _scrapedRate)
{
    m_scrapedRate = _scrapedRate;
    m_scrapedRateHasBeenSet = true;
}

bool PrometheusClusterScrapeStatistics::ScrapedRateHasBeenSet() const
{
    return m_scrapedRateHasBeenSet;
}

vector<PrometheusJobScrapeStatistics> PrometheusClusterScrapeStatistics::GetJobs() const
{
    return m_jobs;
}

void PrometheusClusterScrapeStatistics::SetJobs(const vector<PrometheusJobScrapeStatistics>& _jobs)
{
    m_jobs = _jobs;
    m_jobsHasBeenSet = true;
}

bool PrometheusClusterScrapeStatistics::JobsHasBeenSet() const
{
    return m_jobsHasBeenSet;
}

double PrometheusClusterScrapeStatistics::GetSamplesRate() const
{
    return m_samplesRate;
}

void PrometheusClusterScrapeStatistics::SetSamplesRate(const double& _samplesRate)
{
    m_samplesRate = _samplesRate;
    m_samplesRateHasBeenSet = true;
}

bool PrometheusClusterScrapeStatistics::SamplesRateHasBeenSet() const
{
    return m_samplesRateHasBeenSet;
}

