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

#include <tencentcloud/lighthouse/v20200324/model/DiskConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DiskConfig::DiskConfig() :
    m_zoneHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSalesStateHasBeenSet(false),
    m_maxDiskSizeHasBeenSet(false),
    m_minDiskSizeHasBeenSet(false),
    m_diskStepSizeHasBeenSet(false)
{
}

CoreInternalOutcome DiskConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSalesState") && !value["DiskSalesState"].IsNull())
    {
        if (!value["DiskSalesState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.DiskSalesState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskSalesState = string(value["DiskSalesState"].GetString());
        m_diskSalesStateHasBeenSet = true;
    }

    if (value.HasMember("MaxDiskSize") && !value["MaxDiskSize"].IsNull())
    {
        if (!value["MaxDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.MaxDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDiskSize = value["MaxDiskSize"].GetInt64();
        m_maxDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("MinDiskSize") && !value["MinDiskSize"].IsNull())
    {
        if (!value["MinDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.MinDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minDiskSize = value["MinDiskSize"].GetInt64();
        m_minDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskStepSize") && !value["DiskStepSize"].IsNull())
    {
        if (!value["DiskStepSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskConfig.DiskStepSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskStepSize = value["DiskStepSize"].GetInt64();
        m_diskStepSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSalesStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSalesState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskSalesState.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDiskSize, allocator);
    }

    if (m_minDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minDiskSize, allocator);
    }

    if (m_diskStepSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskStepSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskStepSize, allocator);
    }

}


string DiskConfig::GetZone() const
{
    return m_zone;
}

void DiskConfig::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DiskConfig::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DiskConfig::GetDiskType() const
{
    return m_diskType;
}

void DiskConfig::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool DiskConfig::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string DiskConfig::GetDiskSalesState() const
{
    return m_diskSalesState;
}

void DiskConfig::SetDiskSalesState(const string& _diskSalesState)
{
    m_diskSalesState = _diskSalesState;
    m_diskSalesStateHasBeenSet = true;
}

bool DiskConfig::DiskSalesStateHasBeenSet() const
{
    return m_diskSalesStateHasBeenSet;
}

int64_t DiskConfig::GetMaxDiskSize() const
{
    return m_maxDiskSize;
}

void DiskConfig::SetMaxDiskSize(const int64_t& _maxDiskSize)
{
    m_maxDiskSize = _maxDiskSize;
    m_maxDiskSizeHasBeenSet = true;
}

bool DiskConfig::MaxDiskSizeHasBeenSet() const
{
    return m_maxDiskSizeHasBeenSet;
}

int64_t DiskConfig::GetMinDiskSize() const
{
    return m_minDiskSize;
}

void DiskConfig::SetMinDiskSize(const int64_t& _minDiskSize)
{
    m_minDiskSize = _minDiskSize;
    m_minDiskSizeHasBeenSet = true;
}

bool DiskConfig::MinDiskSizeHasBeenSet() const
{
    return m_minDiskSizeHasBeenSet;
}

int64_t DiskConfig::GetDiskStepSize() const
{
    return m_diskStepSize;
}

void DiskConfig::SetDiskStepSize(const int64_t& _diskStepSize)
{
    m_diskStepSize = _diskStepSize;
    m_diskStepSizeHasBeenSet = true;
}

bool DiskConfig::DiskStepSizeHasBeenSet() const
{
    return m_diskStepSizeHasBeenSet;
}

