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

#include <tencentcloud/monitor/v20180724/model/PrometheusMetricScrapeStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusMetricScrapeStatistics::PrometheusMetricScrapeStatistics() :
    m_metricNameHasBeenSet(false),
    m_samplesRateHasBeenSet(false),
    m_scrapedRateHasBeenSet(false),
    m_isRecommendedHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusMetricScrapeStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusMetricScrapeStatistics.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("SamplesRate") && !value["SamplesRate"].IsNull())
    {
        if (!value["SamplesRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusMetricScrapeStatistics.SamplesRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_samplesRate = value["SamplesRate"].GetDouble();
        m_samplesRateHasBeenSet = true;
    }

    if (value.HasMember("ScrapedRate") && !value["ScrapedRate"].IsNull())
    {
        if (!value["ScrapedRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusMetricScrapeStatistics.ScrapedRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_scrapedRate = value["ScrapedRate"].GetDouble();
        m_scrapedRateHasBeenSet = true;
    }

    if (value.HasMember("IsRecommended") && !value["IsRecommended"].IsNull())
    {
        if (!value["IsRecommended"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusMetricScrapeStatistics.IsRecommended` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRecommended = value["IsRecommended"].GetBool();
        m_isRecommendedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusMetricScrapeStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_samplesRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamplesRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_samplesRate, allocator);
    }

    if (m_scrapedRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrapedRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scrapedRate, allocator);
    }

    if (m_isRecommendedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRecommended";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRecommended, allocator);
    }

}


string PrometheusMetricScrapeStatistics::GetMetricName() const
{
    return m_metricName;
}

void PrometheusMetricScrapeStatistics::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool PrometheusMetricScrapeStatistics::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

double PrometheusMetricScrapeStatistics::GetSamplesRate() const
{
    return m_samplesRate;
}

void PrometheusMetricScrapeStatistics::SetSamplesRate(const double& _samplesRate)
{
    m_samplesRate = _samplesRate;
    m_samplesRateHasBeenSet = true;
}

bool PrometheusMetricScrapeStatistics::SamplesRateHasBeenSet() const
{
    return m_samplesRateHasBeenSet;
}

double PrometheusMetricScrapeStatistics::GetScrapedRate() const
{
    return m_scrapedRate;
}

void PrometheusMetricScrapeStatistics::SetScrapedRate(const double& _scrapedRate)
{
    m_scrapedRate = _scrapedRate;
    m_scrapedRateHasBeenSet = true;
}

bool PrometheusMetricScrapeStatistics::ScrapedRateHasBeenSet() const
{
    return m_scrapedRateHasBeenSet;
}

bool PrometheusMetricScrapeStatistics::GetIsRecommended() const
{
    return m_isRecommended;
}

void PrometheusMetricScrapeStatistics::SetIsRecommended(const bool& _isRecommended)
{
    m_isRecommended = _isRecommended;
    m_isRecommendedHasBeenSet = true;
}

bool PrometheusMetricScrapeStatistics::IsRecommendedHasBeenSet() const
{
    return m_isRecommendedHasBeenSet;
}

