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

#include <tencentcloud/monitor/v20180724/model/PrometheusJobScrapeStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusJobScrapeStatistics::PrometheusJobScrapeStatistics() :
    m_jobNameHasBeenSet(false),
    m_scrapedRateHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_jobTypeHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusJobScrapeStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusJobScrapeStatistics.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("ScrapedRate") && !value["ScrapedRate"].IsNull())
    {
        if (!value["ScrapedRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusJobScrapeStatistics.ScrapedRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_scrapedRate = value["ScrapedRate"].GetDouble();
        m_scrapedRateHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusJobScrapeStatistics.Metrics` is not array type"));

        const rapidjson::Value &tmpValue = value["Metrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusMetricScrapeStatistics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metrics.push_back(item);
        }
        m_metricsHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusJobScrapeStatistics.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusJobScrapeStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_scrapedRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrapedRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scrapedRate, allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

}


string PrometheusJobScrapeStatistics::GetJobName() const
{
    return m_jobName;
}

void PrometheusJobScrapeStatistics::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool PrometheusJobScrapeStatistics::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

double PrometheusJobScrapeStatistics::GetScrapedRate() const
{
    return m_scrapedRate;
}

void PrometheusJobScrapeStatistics::SetScrapedRate(const double& _scrapedRate)
{
    m_scrapedRate = _scrapedRate;
    m_scrapedRateHasBeenSet = true;
}

bool PrometheusJobScrapeStatistics::ScrapedRateHasBeenSet() const
{
    return m_scrapedRateHasBeenSet;
}

vector<PrometheusMetricScrapeStatistics> PrometheusJobScrapeStatistics::GetMetrics() const
{
    return m_metrics;
}

void PrometheusJobScrapeStatistics::SetMetrics(const vector<PrometheusMetricScrapeStatistics>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool PrometheusJobScrapeStatistics::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

string PrometheusJobScrapeStatistics::GetJobType() const
{
    return m_jobType;
}

void PrometheusJobScrapeStatistics::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool PrometheusJobScrapeStatistics::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

