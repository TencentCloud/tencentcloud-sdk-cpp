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

#include <tencentcloud/tcb/v20180608/model/PostPaidEnvDeductInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PostPaidEnvDeductInfo::PostPaidEnvDeductInfo() :
    m_resourceTypeHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_resQuotaHasBeenSet(false),
    m_pkgQuotaHasBeenSet(false),
    m_freeQuotaHasBeenSet(false),
    m_envIdHasBeenSet(false)
{
}

CoreInternalOutcome PostPaidEnvDeductInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostPaidEnvDeductInfo.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostPaidEnvDeductInfo.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("ResQuota") && !value["ResQuota"].IsNull())
    {
        if (!value["ResQuota"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PostPaidEnvDeductInfo.ResQuota` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_resQuota = value["ResQuota"].GetDouble();
        m_resQuotaHasBeenSet = true;
    }

    if (value.HasMember("PkgQuota") && !value["PkgQuota"].IsNull())
    {
        if (!value["PkgQuota"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PostPaidEnvDeductInfo.PkgQuota` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pkgQuota = value["PkgQuota"].GetDouble();
        m_pkgQuotaHasBeenSet = true;
    }

    if (value.HasMember("FreeQuota") && !value["FreeQuota"].IsNull())
    {
        if (!value["FreeQuota"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PostPaidEnvDeductInfo.FreeQuota` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_freeQuota = value["FreeQuota"].GetDouble();
        m_freeQuotaHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostPaidEnvDeductInfo.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PostPaidEnvDeductInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_resQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resQuota, allocator);
    }

    if (m_pkgQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pkgQuota, allocator);
    }

    if (m_freeQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeQuota, allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

}


string PostPaidEnvDeductInfo::GetResourceType() const
{
    return m_resourceType;
}

void PostPaidEnvDeductInfo::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool PostPaidEnvDeductInfo::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string PostPaidEnvDeductInfo::GetMetricName() const
{
    return m_metricName;
}

void PostPaidEnvDeductInfo::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool PostPaidEnvDeductInfo::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

double PostPaidEnvDeductInfo::GetResQuota() const
{
    return m_resQuota;
}

void PostPaidEnvDeductInfo::SetResQuota(const double& _resQuota)
{
    m_resQuota = _resQuota;
    m_resQuotaHasBeenSet = true;
}

bool PostPaidEnvDeductInfo::ResQuotaHasBeenSet() const
{
    return m_resQuotaHasBeenSet;
}

double PostPaidEnvDeductInfo::GetPkgQuota() const
{
    return m_pkgQuota;
}

void PostPaidEnvDeductInfo::SetPkgQuota(const double& _pkgQuota)
{
    m_pkgQuota = _pkgQuota;
    m_pkgQuotaHasBeenSet = true;
}

bool PostPaidEnvDeductInfo::PkgQuotaHasBeenSet() const
{
    return m_pkgQuotaHasBeenSet;
}

double PostPaidEnvDeductInfo::GetFreeQuota() const
{
    return m_freeQuota;
}

void PostPaidEnvDeductInfo::SetFreeQuota(const double& _freeQuota)
{
    m_freeQuota = _freeQuota;
    m_freeQuotaHasBeenSet = true;
}

bool PostPaidEnvDeductInfo::FreeQuotaHasBeenSet() const
{
    return m_freeQuotaHasBeenSet;
}

string PostPaidEnvDeductInfo::GetEnvId() const
{
    return m_envId;
}

void PostPaidEnvDeductInfo::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool PostPaidEnvDeductInfo::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

