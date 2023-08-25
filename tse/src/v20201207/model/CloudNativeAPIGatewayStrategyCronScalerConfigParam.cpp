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

#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyCronScalerConfigParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CloudNativeAPIGatewayStrategyCronScalerConfigParam::CloudNativeAPIGatewayStrategyCronScalerConfigParam() :
    m_periodHasBeenSet(false),
    m_startAtHasBeenSet(false),
    m_targetReplicasHasBeenSet(false),
    m_crontabHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayStrategyCronScalerConfigParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyCronScalerConfigParam.Period` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_period = string(value["Period"].GetString());
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("StartAt") && !value["StartAt"].IsNull())
    {
        if (!value["StartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyCronScalerConfigParam.StartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startAt = string(value["StartAt"].GetString());
        m_startAtHasBeenSet = true;
    }

    if (value.HasMember("TargetReplicas") && !value["TargetReplicas"].IsNull())
    {
        if (!value["TargetReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyCronScalerConfigParam.TargetReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetReplicas = value["TargetReplicas"].GetInt64();
        m_targetReplicasHasBeenSet = true;
    }

    if (value.HasMember("Crontab") && !value["Crontab"].IsNull())
    {
        if (!value["Crontab"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyCronScalerConfigParam.Crontab` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontab = string(value["Crontab"].GetString());
        m_crontabHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayStrategyCronScalerConfigParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_period.c_str(), allocator).Move(), allocator);
    }

    if (m_startAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startAt.c_str(), allocator).Move(), allocator);
    }

    if (m_targetReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetReplicas, allocator);
    }

    if (m_crontabHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Crontab";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crontab.c_str(), allocator).Move(), allocator);
    }

}


string CloudNativeAPIGatewayStrategyCronScalerConfigParam::GetPeriod() const
{
    return m_period;
}

void CloudNativeAPIGatewayStrategyCronScalerConfigParam::SetPeriod(const string& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyCronScalerConfigParam::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CloudNativeAPIGatewayStrategyCronScalerConfigParam::GetStartAt() const
{
    return m_startAt;
}

void CloudNativeAPIGatewayStrategyCronScalerConfigParam::SetStartAt(const string& _startAt)
{
    m_startAt = _startAt;
    m_startAtHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyCronScalerConfigParam::StartAtHasBeenSet() const
{
    return m_startAtHasBeenSet;
}

int64_t CloudNativeAPIGatewayStrategyCronScalerConfigParam::GetTargetReplicas() const
{
    return m_targetReplicas;
}

void CloudNativeAPIGatewayStrategyCronScalerConfigParam::SetTargetReplicas(const int64_t& _targetReplicas)
{
    m_targetReplicas = _targetReplicas;
    m_targetReplicasHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyCronScalerConfigParam::TargetReplicasHasBeenSet() const
{
    return m_targetReplicasHasBeenSet;
}

string CloudNativeAPIGatewayStrategyCronScalerConfigParam::GetCrontab() const
{
    return m_crontab;
}

void CloudNativeAPIGatewayStrategyCronScalerConfigParam::SetCrontab(const string& _crontab)
{
    m_crontab = _crontab;
    m_crontabHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyCronScalerConfigParam::CrontabHasBeenSet() const
{
    return m_crontabHasBeenSet;
}

