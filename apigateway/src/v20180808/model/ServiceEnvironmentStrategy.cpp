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

#include <tencentcloud/apigateway/v20180808/model/ServiceEnvironmentStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ServiceEnvironmentStrategy::ServiceEnvironmentStrategy() :
    m_environmentNameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_maxStrategyHasBeenSet(false)
{
}

CoreInternalOutcome ServiceEnvironmentStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvironmentName") && !value["EnvironmentName"].IsNull())
    {
        if (!value["EnvironmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEnvironmentStrategy.EnvironmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentName = string(value["EnvironmentName"].GetString());
        m_environmentNameHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEnvironmentStrategy.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEnvironmentStrategy.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEnvironmentStrategy.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEnvironmentStrategy.Strategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = value["Strategy"].GetInt64();
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("MaxStrategy") && !value["MaxStrategy"].IsNull())
    {
        if (!value["MaxStrategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEnvironmentStrategy.MaxStrategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStrategy = value["MaxStrategy"].GetInt64();
        m_maxStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceEnvironmentStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategy, allocator);
    }

    if (m_maxStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStrategy, allocator);
    }

}


string ServiceEnvironmentStrategy::GetEnvironmentName() const
{
    return m_environmentName;
}

void ServiceEnvironmentStrategy::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool ServiceEnvironmentStrategy::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

string ServiceEnvironmentStrategy::GetUrl() const
{
    return m_url;
}

void ServiceEnvironmentStrategy::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ServiceEnvironmentStrategy::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t ServiceEnvironmentStrategy::GetStatus() const
{
    return m_status;
}

void ServiceEnvironmentStrategy::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServiceEnvironmentStrategy::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ServiceEnvironmentStrategy::GetVersionName() const
{
    return m_versionName;
}

void ServiceEnvironmentStrategy::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool ServiceEnvironmentStrategy::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

int64_t ServiceEnvironmentStrategy::GetStrategy() const
{
    return m_strategy;
}

void ServiceEnvironmentStrategy::SetStrategy(const int64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool ServiceEnvironmentStrategy::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

int64_t ServiceEnvironmentStrategy::GetMaxStrategy() const
{
    return m_maxStrategy;
}

void ServiceEnvironmentStrategy::SetMaxStrategy(const int64_t& _maxStrategy)
{
    m_maxStrategy = _maxStrategy;
    m_maxStrategyHasBeenSet = true;
}

bool ServiceEnvironmentStrategy::MaxStrategyHasBeenSet() const
{
    return m_maxStrategyHasBeenSet;
}

