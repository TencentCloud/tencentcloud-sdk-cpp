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

#include <tencentcloud/tke/v20180525/model/PrometheusTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PrometheusTarget::PrometheusTarget() :
    m_urlHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_lastScrapeHasBeenSet(false),
    m_scrapeDurationHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTarget.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTarget.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusTarget.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("LastScrape") && !value["LastScrape"].IsNull())
    {
        if (!value["LastScrape"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTarget.LastScrape` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScrape = string(value["LastScrape"].GetString());
        m_lastScrapeHasBeenSet = true;
    }

    if (value.HasMember("ScrapeDuration") && !value["ScrapeDuration"].IsNull())
    {
        if (!value["ScrapeDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTarget.ScrapeDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_scrapeDuration = value["ScrapeDuration"].GetDouble();
        m_scrapeDurationHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusTarget.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lastScrapeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScrape";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScrape.c_str(), allocator).Move(), allocator);
    }

    if (m_scrapeDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrapeDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scrapeDuration, allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

}


string PrometheusTarget::GetUrl() const
{
    return m_url;
}

void PrometheusTarget::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool PrometheusTarget::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string PrometheusTarget::GetState() const
{
    return m_state;
}

void PrometheusTarget::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool PrometheusTarget::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<Label> PrometheusTarget::GetLabels() const
{
    return m_labels;
}

void PrometheusTarget::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool PrometheusTarget::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string PrometheusTarget::GetLastScrape() const
{
    return m_lastScrape;
}

void PrometheusTarget::SetLastScrape(const string& _lastScrape)
{
    m_lastScrape = _lastScrape;
    m_lastScrapeHasBeenSet = true;
}

bool PrometheusTarget::LastScrapeHasBeenSet() const
{
    return m_lastScrapeHasBeenSet;
}

double PrometheusTarget::GetScrapeDuration() const
{
    return m_scrapeDuration;
}

void PrometheusTarget::SetScrapeDuration(const double& _scrapeDuration)
{
    m_scrapeDuration = _scrapeDuration;
    m_scrapeDurationHasBeenSet = true;
}

bool PrometheusTarget::ScrapeDurationHasBeenSet() const
{
    return m_scrapeDurationHasBeenSet;
}

string PrometheusTarget::GetError() const
{
    return m_error;
}

void PrometheusTarget::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool PrometheusTarget::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

