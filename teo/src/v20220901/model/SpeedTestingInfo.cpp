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

#include <tencentcloud/teo/v20220901/model/SpeedTestingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SpeedTestingInfo::SpeedTestingInfo() :
    m_statusCodeHasBeenSet(false),
    m_testIdHasBeenSet(false),
    m_speedTestingConfigHasBeenSet(false),
    m_speedTestingStatisticsHasBeenSet(false)
{
}

CoreInternalOutcome SpeedTestingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingInfo.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("TestId") && !value["TestId"].IsNull())
    {
        if (!value["TestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingInfo.TestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_testId = string(value["TestId"].GetString());
        m_testIdHasBeenSet = true;
    }

    if (value.HasMember("SpeedTestingConfig") && !value["SpeedTestingConfig"].IsNull())
    {
        if (!value["SpeedTestingConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingInfo.SpeedTestingConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_speedTestingConfig.Deserialize(value["SpeedTestingConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_speedTestingConfigHasBeenSet = true;
    }

    if (value.HasMember("SpeedTestingStatistics") && !value["SpeedTestingStatistics"].IsNull())
    {
        if (!value["SpeedTestingStatistics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedTestingInfo.SpeedTestingStatistics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_speedTestingStatistics.Deserialize(value["SpeedTestingStatistics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_speedTestingStatisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpeedTestingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_testIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_testId.c_str(), allocator).Move(), allocator);
    }

    if (m_speedTestingConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedTestingConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_speedTestingConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_speedTestingStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeedTestingStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_speedTestingStatistics.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t SpeedTestingInfo::GetStatusCode() const
{
    return m_statusCode;
}

void SpeedTestingInfo::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool SpeedTestingInfo::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string SpeedTestingInfo::GetTestId() const
{
    return m_testId;
}

void SpeedTestingInfo::SetTestId(const string& _testId)
{
    m_testId = _testId;
    m_testIdHasBeenSet = true;
}

bool SpeedTestingInfo::TestIdHasBeenSet() const
{
    return m_testIdHasBeenSet;
}

SpeedTestingConfig SpeedTestingInfo::GetSpeedTestingConfig() const
{
    return m_speedTestingConfig;
}

void SpeedTestingInfo::SetSpeedTestingConfig(const SpeedTestingConfig& _speedTestingConfig)
{
    m_speedTestingConfig = _speedTestingConfig;
    m_speedTestingConfigHasBeenSet = true;
}

bool SpeedTestingInfo::SpeedTestingConfigHasBeenSet() const
{
    return m_speedTestingConfigHasBeenSet;
}

SpeedTestingStatistics SpeedTestingInfo::GetSpeedTestingStatistics() const
{
    return m_speedTestingStatistics;
}

void SpeedTestingInfo::SetSpeedTestingStatistics(const SpeedTestingStatistics& _speedTestingStatistics)
{
    m_speedTestingStatistics = _speedTestingStatistics;
    m_speedTestingStatisticsHasBeenSet = true;
}

bool SpeedTestingInfo::SpeedTestingStatisticsHasBeenSet() const
{
    return m_speedTestingStatisticsHasBeenSet;
}

