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

#include <tencentcloud/tcm/v20210413/model/TracingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

TracingConfig::TracingConfig() :
    m_samplingHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_aPMHasBeenSet(false),
    m_zipkinHasBeenSet(false)
{
}

CoreInternalOutcome TracingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sampling") && !value["Sampling"].IsNull())
    {
        if (!value["Sampling"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TracingConfig.Sampling` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sampling = value["Sampling"].GetDouble();
        m_samplingHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TracingConfig.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("APM") && !value["APM"].IsNull())
    {
        if (!value["APM"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TracingConfig.APM` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aPM.Deserialize(value["APM"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aPMHasBeenSet = true;
    }

    if (value.HasMember("Zipkin") && !value["Zipkin"].IsNull())
    {
        if (!value["Zipkin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TracingConfig.Zipkin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_zipkin.Deserialize(value["Zipkin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_zipkinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TracingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_samplingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sampling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampling, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_aPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aPM.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_zipkinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zipkin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_zipkin.ToJsonObject(value[key.c_str()], allocator);
    }

}


double TracingConfig::GetSampling() const
{
    return m_sampling;
}

void TracingConfig::SetSampling(const double& _sampling)
{
    m_sampling = _sampling;
    m_samplingHasBeenSet = true;
}

bool TracingConfig::SamplingHasBeenSet() const
{
    return m_samplingHasBeenSet;
}

bool TracingConfig::GetEnable() const
{
    return m_enable;
}

void TracingConfig::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool TracingConfig::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

APM TracingConfig::GetAPM() const
{
    return m_aPM;
}

void TracingConfig::SetAPM(const APM& _aPM)
{
    m_aPM = _aPM;
    m_aPMHasBeenSet = true;
}

bool TracingConfig::APMHasBeenSet() const
{
    return m_aPMHasBeenSet;
}

TracingZipkin TracingConfig::GetZipkin() const
{
    return m_zipkin;
}

void TracingConfig::SetZipkin(const TracingZipkin& _zipkin)
{
    m_zipkin = _zipkin;
    m_zipkinHasBeenSet = true;
}

bool TracingConfig::ZipkinHasBeenSet() const
{
    return m_zipkinHasBeenSet;
}

