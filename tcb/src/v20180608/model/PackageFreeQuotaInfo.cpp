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

#include <tencentcloud/tcb/v20180608/model/PackageFreeQuotaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PackageFreeQuotaInfo::PackageFreeQuotaInfo() :
    m_resourceTypeHasBeenSet(false),
    m_resourceMetricHasBeenSet(false),
    m_freeQuotaHasBeenSet(false),
    m_metricUnitHasBeenSet(false),
    m_deductTypeHasBeenSet(false),
    m_freeQuotaTypeHasBeenSet(false)
{
}

CoreInternalOutcome PackageFreeQuotaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageFreeQuotaInfo.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceMetric") && !value["ResourceMetric"].IsNull())
    {
        if (!value["ResourceMetric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageFreeQuotaInfo.ResourceMetric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceMetric = string(value["ResourceMetric"].GetString());
        m_resourceMetricHasBeenSet = true;
    }

    if (value.HasMember("FreeQuota") && !value["FreeQuota"].IsNull())
    {
        if (!value["FreeQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageFreeQuotaInfo.FreeQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freeQuota = value["FreeQuota"].GetInt64();
        m_freeQuotaHasBeenSet = true;
    }

    if (value.HasMember("MetricUnit") && !value["MetricUnit"].IsNull())
    {
        if (!value["MetricUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageFreeQuotaInfo.MetricUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricUnit = string(value["MetricUnit"].GetString());
        m_metricUnitHasBeenSet = true;
    }

    if (value.HasMember("DeductType") && !value["DeductType"].IsNull())
    {
        if (!value["DeductType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageFreeQuotaInfo.DeductType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductType = string(value["DeductType"].GetString());
        m_deductTypeHasBeenSet = true;
    }

    if (value.HasMember("FreeQuotaType") && !value["FreeQuotaType"].IsNull())
    {
        if (!value["FreeQuotaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageFreeQuotaInfo.FreeQuotaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_freeQuotaType = string(value["FreeQuotaType"].GetString());
        m_freeQuotaTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackageFreeQuotaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceMetric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceMetric.c_str(), allocator).Move(), allocator);
    }

    if (m_freeQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeQuota, allocator);
    }

    if (m_metricUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_deductTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductType.c_str(), allocator).Move(), allocator);
    }

    if (m_freeQuotaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeQuotaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_freeQuotaType.c_str(), allocator).Move(), allocator);
    }

}


string PackageFreeQuotaInfo::GetResourceType() const
{
    return m_resourceType;
}

void PackageFreeQuotaInfo::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool PackageFreeQuotaInfo::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string PackageFreeQuotaInfo::GetResourceMetric() const
{
    return m_resourceMetric;
}

void PackageFreeQuotaInfo::SetResourceMetric(const string& _resourceMetric)
{
    m_resourceMetric = _resourceMetric;
    m_resourceMetricHasBeenSet = true;
}

bool PackageFreeQuotaInfo::ResourceMetricHasBeenSet() const
{
    return m_resourceMetricHasBeenSet;
}

int64_t PackageFreeQuotaInfo::GetFreeQuota() const
{
    return m_freeQuota;
}

void PackageFreeQuotaInfo::SetFreeQuota(const int64_t& _freeQuota)
{
    m_freeQuota = _freeQuota;
    m_freeQuotaHasBeenSet = true;
}

bool PackageFreeQuotaInfo::FreeQuotaHasBeenSet() const
{
    return m_freeQuotaHasBeenSet;
}

string PackageFreeQuotaInfo::GetMetricUnit() const
{
    return m_metricUnit;
}

void PackageFreeQuotaInfo::SetMetricUnit(const string& _metricUnit)
{
    m_metricUnit = _metricUnit;
    m_metricUnitHasBeenSet = true;
}

bool PackageFreeQuotaInfo::MetricUnitHasBeenSet() const
{
    return m_metricUnitHasBeenSet;
}

string PackageFreeQuotaInfo::GetDeductType() const
{
    return m_deductType;
}

void PackageFreeQuotaInfo::SetDeductType(const string& _deductType)
{
    m_deductType = _deductType;
    m_deductTypeHasBeenSet = true;
}

bool PackageFreeQuotaInfo::DeductTypeHasBeenSet() const
{
    return m_deductTypeHasBeenSet;
}

string PackageFreeQuotaInfo::GetFreeQuotaType() const
{
    return m_freeQuotaType;
}

void PackageFreeQuotaInfo::SetFreeQuotaType(const string& _freeQuotaType)
{
    m_freeQuotaType = _freeQuotaType;
    m_freeQuotaTypeHasBeenSet = true;
}

bool PackageFreeQuotaInfo::FreeQuotaTypeHasBeenSet() const
{
    return m_freeQuotaTypeHasBeenSet;
}

