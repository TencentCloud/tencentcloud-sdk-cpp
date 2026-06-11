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

#include <tencentcloud/cfw/v20190904/model/SerialRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SerialRegionInfo::SerialRegionInfo() :
    m_regionHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_elasticSwitchHasBeenSet(false),
    m_elasticBandwidthHasBeenSet(false),
    m_inFlowMaxHasBeenSet(false),
    m_outFlowMaxHasBeenSet(false),
    m_elasticTrafficSwitchHasBeenSet(false)
{
}

CoreInternalOutcome SerialRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SerialRegionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SerialRegionInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("ElasticSwitch") && !value["ElasticSwitch"].IsNull())
    {
        if (!value["ElasticSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SerialRegionInfo.ElasticSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticSwitch = value["ElasticSwitch"].GetInt64();
        m_elasticSwitchHasBeenSet = true;
    }

    if (value.HasMember("ElasticBandwidth") && !value["ElasticBandwidth"].IsNull())
    {
        if (!value["ElasticBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SerialRegionInfo.ElasticBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticBandwidth = value["ElasticBandwidth"].GetInt64();
        m_elasticBandwidthHasBeenSet = true;
    }

    if (value.HasMember("InFlowMax") && !value["InFlowMax"].IsNull())
    {
        if (!value["InFlowMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SerialRegionInfo.InFlowMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inFlowMax = value["InFlowMax"].GetInt64();
        m_inFlowMaxHasBeenSet = true;
    }

    if (value.HasMember("OutFlowMax") && !value["OutFlowMax"].IsNull())
    {
        if (!value["OutFlowMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SerialRegionInfo.OutFlowMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outFlowMax = value["OutFlowMax"].GetInt64();
        m_outFlowMaxHasBeenSet = true;
    }

    if (value.HasMember("ElasticTrafficSwitch") && !value["ElasticTrafficSwitch"].IsNull())
    {
        if (!value["ElasticTrafficSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SerialRegionInfo.ElasticTrafficSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticTrafficSwitch = value["ElasticTrafficSwitch"].GetInt64();
        m_elasticTrafficSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SerialRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_elasticSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticSwitch, allocator);
    }

    if (m_elasticBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticBandwidth, allocator);
    }

    if (m_inFlowMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InFlowMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inFlowMax, allocator);
    }

    if (m_outFlowMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutFlowMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outFlowMax, allocator);
    }

    if (m_elasticTrafficSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticTrafficSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticTrafficSwitch, allocator);
    }

}


string SerialRegionInfo::GetRegion() const
{
    return m_region;
}

void SerialRegionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SerialRegionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t SerialRegionInfo::GetWidth() const
{
    return m_width;
}

void SerialRegionInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool SerialRegionInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t SerialRegionInfo::GetElasticSwitch() const
{
    return m_elasticSwitch;
}

void SerialRegionInfo::SetElasticSwitch(const int64_t& _elasticSwitch)
{
    m_elasticSwitch = _elasticSwitch;
    m_elasticSwitchHasBeenSet = true;
}

bool SerialRegionInfo::ElasticSwitchHasBeenSet() const
{
    return m_elasticSwitchHasBeenSet;
}

int64_t SerialRegionInfo::GetElasticBandwidth() const
{
    return m_elasticBandwidth;
}

void SerialRegionInfo::SetElasticBandwidth(const int64_t& _elasticBandwidth)
{
    m_elasticBandwidth = _elasticBandwidth;
    m_elasticBandwidthHasBeenSet = true;
}

bool SerialRegionInfo::ElasticBandwidthHasBeenSet() const
{
    return m_elasticBandwidthHasBeenSet;
}

int64_t SerialRegionInfo::GetInFlowMax() const
{
    return m_inFlowMax;
}

void SerialRegionInfo::SetInFlowMax(const int64_t& _inFlowMax)
{
    m_inFlowMax = _inFlowMax;
    m_inFlowMaxHasBeenSet = true;
}

bool SerialRegionInfo::InFlowMaxHasBeenSet() const
{
    return m_inFlowMaxHasBeenSet;
}

int64_t SerialRegionInfo::GetOutFlowMax() const
{
    return m_outFlowMax;
}

void SerialRegionInfo::SetOutFlowMax(const int64_t& _outFlowMax)
{
    m_outFlowMax = _outFlowMax;
    m_outFlowMaxHasBeenSet = true;
}

bool SerialRegionInfo::OutFlowMaxHasBeenSet() const
{
    return m_outFlowMaxHasBeenSet;
}

int64_t SerialRegionInfo::GetElasticTrafficSwitch() const
{
    return m_elasticTrafficSwitch;
}

void SerialRegionInfo::SetElasticTrafficSwitch(const int64_t& _elasticTrafficSwitch)
{
    m_elasticTrafficSwitch = _elasticTrafficSwitch;
    m_elasticTrafficSwitchHasBeenSet = true;
}

bool SerialRegionInfo::ElasticTrafficSwitchHasBeenSet() const
{
    return m_elasticTrafficSwitchHasBeenSet;
}

