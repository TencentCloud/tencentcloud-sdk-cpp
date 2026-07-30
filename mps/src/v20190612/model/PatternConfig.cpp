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

#include <tencentcloud/mps/v20190612/model/PatternConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

PatternConfig::PatternConfig() :
    m_transparencyThresholdHasBeenSet(false),
    m_opaqueThresholdHasBeenSet(false),
    m_edgeSamplingStepHasBeenSet(false),
    m_edgeExpansionStepHasBeenSet(false),
    m_edgeBlendingIntensityHasBeenSet(false)
{
}

CoreInternalOutcome PatternConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransparencyThreshold") && !value["TransparencyThreshold"].IsNull())
    {
        if (!value["TransparencyThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PatternConfig.TransparencyThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transparencyThreshold = value["TransparencyThreshold"].GetInt64();
        m_transparencyThresholdHasBeenSet = true;
    }

    if (value.HasMember("OpaqueThreshold") && !value["OpaqueThreshold"].IsNull())
    {
        if (!value["OpaqueThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PatternConfig.OpaqueThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_opaqueThreshold = value["OpaqueThreshold"].GetInt64();
        m_opaqueThresholdHasBeenSet = true;
    }

    if (value.HasMember("EdgeSamplingStep") && !value["EdgeSamplingStep"].IsNull())
    {
        if (!value["EdgeSamplingStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PatternConfig.EdgeSamplingStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_edgeSamplingStep = value["EdgeSamplingStep"].GetInt64();
        m_edgeSamplingStepHasBeenSet = true;
    }

    if (value.HasMember("EdgeExpansionStep") && !value["EdgeExpansionStep"].IsNull())
    {
        if (!value["EdgeExpansionStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PatternConfig.EdgeExpansionStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_edgeExpansionStep = value["EdgeExpansionStep"].GetInt64();
        m_edgeExpansionStepHasBeenSet = true;
    }

    if (value.HasMember("EdgeBlendingIntensity") && !value["EdgeBlendingIntensity"].IsNull())
    {
        if (!value["EdgeBlendingIntensity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PatternConfig.EdgeBlendingIntensity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_edgeBlendingIntensity = value["EdgeBlendingIntensity"].GetDouble();
        m_edgeBlendingIntensityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PatternConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transparencyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransparencyThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transparencyThreshold, allocator);
    }

    if (m_opaqueThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpaqueThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opaqueThreshold, allocator);
    }

    if (m_edgeSamplingStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeSamplingStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_edgeSamplingStep, allocator);
    }

    if (m_edgeExpansionStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeExpansionStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_edgeExpansionStep, allocator);
    }

    if (m_edgeBlendingIntensityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeBlendingIntensity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_edgeBlendingIntensity, allocator);
    }

}


int64_t PatternConfig::GetTransparencyThreshold() const
{
    return m_transparencyThreshold;
}

void PatternConfig::SetTransparencyThreshold(const int64_t& _transparencyThreshold)
{
    m_transparencyThreshold = _transparencyThreshold;
    m_transparencyThresholdHasBeenSet = true;
}

bool PatternConfig::TransparencyThresholdHasBeenSet() const
{
    return m_transparencyThresholdHasBeenSet;
}

int64_t PatternConfig::GetOpaqueThreshold() const
{
    return m_opaqueThreshold;
}

void PatternConfig::SetOpaqueThreshold(const int64_t& _opaqueThreshold)
{
    m_opaqueThreshold = _opaqueThreshold;
    m_opaqueThresholdHasBeenSet = true;
}

bool PatternConfig::OpaqueThresholdHasBeenSet() const
{
    return m_opaqueThresholdHasBeenSet;
}

int64_t PatternConfig::GetEdgeSamplingStep() const
{
    return m_edgeSamplingStep;
}

void PatternConfig::SetEdgeSamplingStep(const int64_t& _edgeSamplingStep)
{
    m_edgeSamplingStep = _edgeSamplingStep;
    m_edgeSamplingStepHasBeenSet = true;
}

bool PatternConfig::EdgeSamplingStepHasBeenSet() const
{
    return m_edgeSamplingStepHasBeenSet;
}

int64_t PatternConfig::GetEdgeExpansionStep() const
{
    return m_edgeExpansionStep;
}

void PatternConfig::SetEdgeExpansionStep(const int64_t& _edgeExpansionStep)
{
    m_edgeExpansionStep = _edgeExpansionStep;
    m_edgeExpansionStepHasBeenSet = true;
}

bool PatternConfig::EdgeExpansionStepHasBeenSet() const
{
    return m_edgeExpansionStepHasBeenSet;
}

double PatternConfig::GetEdgeBlendingIntensity() const
{
    return m_edgeBlendingIntensity;
}

void PatternConfig::SetEdgeBlendingIntensity(const double& _edgeBlendingIntensity)
{
    m_edgeBlendingIntensity = _edgeBlendingIntensity;
    m_edgeBlendingIntensityHasBeenSet = true;
}

bool PatternConfig::EdgeBlendingIntensityHasBeenSet() const
{
    return m_edgeBlendingIntensityHasBeenSet;
}

