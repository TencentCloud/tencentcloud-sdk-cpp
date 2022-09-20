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

#include <tencentcloud/teo/v20220901/model/SpeedTestingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SpeedTestingConfig::SpeedTestingConfig() :
    m_taskTypeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_uAHasBeenSet(false),
    m_connectivityHasBeenSet(false)
{
}

CoreInternalOutcome SpeedTestingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingConfig.TaskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetInt64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingConfig.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("UA") && !value["UA"].IsNull())
    {
        if (!value["UA"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingConfig.UA` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uA = string(value["UA"].GetString());
        m_uAHasBeenSet = true;
    }

    if (value.HasMember("Connectivity") && !value["Connectivity"].IsNull())
    {
        if (!value["Connectivity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingConfig.Connectivity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectivity = string(value["Connectivity"].GetString());
        m_connectivityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpeedTestingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_uAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uA.c_str(), allocator).Move(), allocator);
    }

    if (m_connectivityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connectivity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectivity.c_str(), allocator).Move(), allocator);
    }

}


int64_t SpeedTestingConfig::GetTaskType() const
{
    return m_taskType;
}

void SpeedTestingConfig::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool SpeedTestingConfig::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string SpeedTestingConfig::GetUrl() const
{
    return m_url;
}

void SpeedTestingConfig::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SpeedTestingConfig::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string SpeedTestingConfig::GetUA() const
{
    return m_uA;
}

void SpeedTestingConfig::SetUA(const string& _uA)
{
    m_uA = _uA;
    m_uAHasBeenSet = true;
}

bool SpeedTestingConfig::UAHasBeenSet() const
{
    return m_uAHasBeenSet;
}

string SpeedTestingConfig::GetConnectivity() const
{
    return m_connectivity;
}

void SpeedTestingConfig::SetConnectivity(const string& _connectivity)
{
    m_connectivity = _connectivity;
    m_connectivityHasBeenSet = true;
}

bool SpeedTestingConfig::ConnectivityHasBeenSet() const
{
    return m_connectivityHasBeenSet;
}

