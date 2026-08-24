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

#include <tencentcloud/bdrc/v20260330/model/DisasterRecoveryOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DisasterRecoveryOverview::DisasterRecoveryOverview() :
    m_regionHasBeenSet(false),
    m_sitePairCountHasBeenSet(false),
    m_sitePairCrossRegionCountHasBeenSet(false),
    m_sitePairCrossZoneCountHasBeenSet(false),
    m_sitePairCrossCloudCountHasBeenSet(false),
    m_protectGroupCountHasBeenSet(false),
    m_protectGroupCrossRegionCountHasBeenSet(false),
    m_protectGroupCrossZoneCountHasBeenSet(false),
    m_protectGroupCrossCloudCountHasBeenSet(false),
    m_copyPairCountHasBeenSet(false),
    m_copyPairSuccessRPOCountHasBeenSet(false),
    m_copyPairErrorRPOCountHasBeenSet(false),
    m_drillPairCountHasBeenSet(false),
    m_drillPairDrillingCountHasBeenSet(false),
    m_drillPairFailedCountHasBeenSet(false),
    m_drillPairSuccessCountHasBeenSet(false),
    m_protectedResourceCountHasBeenSet(false),
    m_protectedResourceCopyingCountHasBeenSet(false),
    m_protectedResourceStoppedCountHasBeenSet(false),
    m_failoverFailedCountHasBeenSet(false)
{
}

CoreInternalOutcome DisasterRecoveryOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("SitePairCount") && !value["SitePairCount"].IsNull())
    {
        if (!value["SitePairCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.SitePairCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairCount = value["SitePairCount"].GetInt64();
        m_sitePairCountHasBeenSet = true;
    }

    if (value.HasMember("SitePairCrossRegionCount") && !value["SitePairCrossRegionCount"].IsNull())
    {
        if (!value["SitePairCrossRegionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.SitePairCrossRegionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairCrossRegionCount = value["SitePairCrossRegionCount"].GetInt64();
        m_sitePairCrossRegionCountHasBeenSet = true;
    }

    if (value.HasMember("SitePairCrossZoneCount") && !value["SitePairCrossZoneCount"].IsNull())
    {
        if (!value["SitePairCrossZoneCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.SitePairCrossZoneCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairCrossZoneCount = value["SitePairCrossZoneCount"].GetInt64();
        m_sitePairCrossZoneCountHasBeenSet = true;
    }

    if (value.HasMember("SitePairCrossCloudCount") && !value["SitePairCrossCloudCount"].IsNull())
    {
        if (!value["SitePairCrossCloudCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.SitePairCrossCloudCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairCrossCloudCount = value["SitePairCrossCloudCount"].GetInt64();
        m_sitePairCrossCloudCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectGroupCount") && !value["ProtectGroupCount"].IsNull())
    {
        if (!value["ProtectGroupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.ProtectGroupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectGroupCount = value["ProtectGroupCount"].GetInt64();
        m_protectGroupCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectGroupCrossRegionCount") && !value["ProtectGroupCrossRegionCount"].IsNull())
    {
        if (!value["ProtectGroupCrossRegionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.ProtectGroupCrossRegionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectGroupCrossRegionCount = value["ProtectGroupCrossRegionCount"].GetInt64();
        m_protectGroupCrossRegionCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectGroupCrossZoneCount") && !value["ProtectGroupCrossZoneCount"].IsNull())
    {
        if (!value["ProtectGroupCrossZoneCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.ProtectGroupCrossZoneCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectGroupCrossZoneCount = value["ProtectGroupCrossZoneCount"].GetInt64();
        m_protectGroupCrossZoneCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectGroupCrossCloudCount") && !value["ProtectGroupCrossCloudCount"].IsNull())
    {
        if (!value["ProtectGroupCrossCloudCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.ProtectGroupCrossCloudCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectGroupCrossCloudCount = value["ProtectGroupCrossCloudCount"].GetInt64();
        m_protectGroupCrossCloudCountHasBeenSet = true;
    }

    if (value.HasMember("CopyPairCount") && !value["CopyPairCount"].IsNull())
    {
        if (!value["CopyPairCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.CopyPairCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairCount = value["CopyPairCount"].GetInt64();
        m_copyPairCountHasBeenSet = true;
    }

    if (value.HasMember("CopyPairSuccessRPOCount") && !value["CopyPairSuccessRPOCount"].IsNull())
    {
        if (!value["CopyPairSuccessRPOCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.CopyPairSuccessRPOCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairSuccessRPOCount = value["CopyPairSuccessRPOCount"].GetInt64();
        m_copyPairSuccessRPOCountHasBeenSet = true;
    }

    if (value.HasMember("CopyPairErrorRPOCount") && !value["CopyPairErrorRPOCount"].IsNull())
    {
        if (!value["CopyPairErrorRPOCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.CopyPairErrorRPOCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairErrorRPOCount = value["CopyPairErrorRPOCount"].GetInt64();
        m_copyPairErrorRPOCountHasBeenSet = true;
    }

    if (value.HasMember("DrillPairCount") && !value["DrillPairCount"].IsNull())
    {
        if (!value["DrillPairCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.DrillPairCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_drillPairCount = value["DrillPairCount"].GetInt64();
        m_drillPairCountHasBeenSet = true;
    }

    if (value.HasMember("DrillPairDrillingCount") && !value["DrillPairDrillingCount"].IsNull())
    {
        if (!value["DrillPairDrillingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.DrillPairDrillingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_drillPairDrillingCount = value["DrillPairDrillingCount"].GetInt64();
        m_drillPairDrillingCountHasBeenSet = true;
    }

    if (value.HasMember("DrillPairFailedCount") && !value["DrillPairFailedCount"].IsNull())
    {
        if (!value["DrillPairFailedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.DrillPairFailedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_drillPairFailedCount = value["DrillPairFailedCount"].GetInt64();
        m_drillPairFailedCountHasBeenSet = true;
    }

    if (value.HasMember("DrillPairSuccessCount") && !value["DrillPairSuccessCount"].IsNull())
    {
        if (!value["DrillPairSuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.DrillPairSuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_drillPairSuccessCount = value["DrillPairSuccessCount"].GetInt64();
        m_drillPairSuccessCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectedResourceCount") && !value["ProtectedResourceCount"].IsNull())
    {
        if (!value["ProtectedResourceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.ProtectedResourceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectedResourceCount = value["ProtectedResourceCount"].GetInt64();
        m_protectedResourceCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectedResourceCopyingCount") && !value["ProtectedResourceCopyingCount"].IsNull())
    {
        if (!value["ProtectedResourceCopyingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.ProtectedResourceCopyingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectedResourceCopyingCount = value["ProtectedResourceCopyingCount"].GetInt64();
        m_protectedResourceCopyingCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectedResourceStoppedCount") && !value["ProtectedResourceStoppedCount"].IsNull())
    {
        if (!value["ProtectedResourceStoppedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.ProtectedResourceStoppedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectedResourceStoppedCount = value["ProtectedResourceStoppedCount"].GetInt64();
        m_protectedResourceStoppedCountHasBeenSet = true;
    }

    if (value.HasMember("FailoverFailedCount") && !value["FailoverFailedCount"].IsNull())
    {
        if (!value["FailoverFailedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoveryOverview.FailoverFailedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failoverFailedCount = value["FailoverFailedCount"].GetInt64();
        m_failoverFailedCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisasterRecoveryOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sitePairCount, allocator);
    }

    if (m_sitePairCrossRegionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairCrossRegionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sitePairCrossRegionCount, allocator);
    }

    if (m_sitePairCrossZoneCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairCrossZoneCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sitePairCrossZoneCount, allocator);
    }

    if (m_sitePairCrossCloudCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairCrossCloudCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sitePairCrossCloudCount, allocator);
    }

    if (m_protectGroupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectGroupCount, allocator);
    }

    if (m_protectGroupCrossRegionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupCrossRegionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectGroupCrossRegionCount, allocator);
    }

    if (m_protectGroupCrossZoneCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupCrossZoneCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectGroupCrossZoneCount, allocator);
    }

    if (m_protectGroupCrossCloudCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupCrossCloudCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectGroupCrossCloudCount, allocator);
    }

    if (m_copyPairCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_copyPairCount, allocator);
    }

    if (m_copyPairSuccessRPOCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairSuccessRPOCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_copyPairSuccessRPOCount, allocator);
    }

    if (m_copyPairErrorRPOCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairErrorRPOCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_copyPairErrorRPOCount, allocator);
    }

    if (m_drillPairCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_drillPairCount, allocator);
    }

    if (m_drillPairDrillingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairDrillingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_drillPairDrillingCount, allocator);
    }

    if (m_drillPairFailedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairFailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_drillPairFailedCount, allocator);
    }

    if (m_drillPairSuccessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairSuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_drillPairSuccessCount, allocator);
    }

    if (m_protectedResourceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectedResourceCount, allocator);
    }

    if (m_protectedResourceCopyingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedResourceCopyingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectedResourceCopyingCount, allocator);
    }

    if (m_protectedResourceStoppedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedResourceStoppedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectedResourceStoppedCount, allocator);
    }

    if (m_failoverFailedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailoverFailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failoverFailedCount, allocator);
    }

}


string DisasterRecoveryOverview::GetRegion() const
{
    return m_region;
}

void DisasterRecoveryOverview::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DisasterRecoveryOverview::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetSitePairCount() const
{
    return m_sitePairCount;
}

void DisasterRecoveryOverview::SetSitePairCount(const int64_t& _sitePairCount)
{
    m_sitePairCount = _sitePairCount;
    m_sitePairCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::SitePairCountHasBeenSet() const
{
    return m_sitePairCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetSitePairCrossRegionCount() const
{
    return m_sitePairCrossRegionCount;
}

void DisasterRecoveryOverview::SetSitePairCrossRegionCount(const int64_t& _sitePairCrossRegionCount)
{
    m_sitePairCrossRegionCount = _sitePairCrossRegionCount;
    m_sitePairCrossRegionCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::SitePairCrossRegionCountHasBeenSet() const
{
    return m_sitePairCrossRegionCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetSitePairCrossZoneCount() const
{
    return m_sitePairCrossZoneCount;
}

void DisasterRecoveryOverview::SetSitePairCrossZoneCount(const int64_t& _sitePairCrossZoneCount)
{
    m_sitePairCrossZoneCount = _sitePairCrossZoneCount;
    m_sitePairCrossZoneCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::SitePairCrossZoneCountHasBeenSet() const
{
    return m_sitePairCrossZoneCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetSitePairCrossCloudCount() const
{
    return m_sitePairCrossCloudCount;
}

void DisasterRecoveryOverview::SetSitePairCrossCloudCount(const int64_t& _sitePairCrossCloudCount)
{
    m_sitePairCrossCloudCount = _sitePairCrossCloudCount;
    m_sitePairCrossCloudCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::SitePairCrossCloudCountHasBeenSet() const
{
    return m_sitePairCrossCloudCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetProtectGroupCount() const
{
    return m_protectGroupCount;
}

void DisasterRecoveryOverview::SetProtectGroupCount(const int64_t& _protectGroupCount)
{
    m_protectGroupCount = _protectGroupCount;
    m_protectGroupCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::ProtectGroupCountHasBeenSet() const
{
    return m_protectGroupCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetProtectGroupCrossRegionCount() const
{
    return m_protectGroupCrossRegionCount;
}

void DisasterRecoveryOverview::SetProtectGroupCrossRegionCount(const int64_t& _protectGroupCrossRegionCount)
{
    m_protectGroupCrossRegionCount = _protectGroupCrossRegionCount;
    m_protectGroupCrossRegionCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::ProtectGroupCrossRegionCountHasBeenSet() const
{
    return m_protectGroupCrossRegionCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetProtectGroupCrossZoneCount() const
{
    return m_protectGroupCrossZoneCount;
}

void DisasterRecoveryOverview::SetProtectGroupCrossZoneCount(const int64_t& _protectGroupCrossZoneCount)
{
    m_protectGroupCrossZoneCount = _protectGroupCrossZoneCount;
    m_protectGroupCrossZoneCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::ProtectGroupCrossZoneCountHasBeenSet() const
{
    return m_protectGroupCrossZoneCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetProtectGroupCrossCloudCount() const
{
    return m_protectGroupCrossCloudCount;
}

void DisasterRecoveryOverview::SetProtectGroupCrossCloudCount(const int64_t& _protectGroupCrossCloudCount)
{
    m_protectGroupCrossCloudCount = _protectGroupCrossCloudCount;
    m_protectGroupCrossCloudCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::ProtectGroupCrossCloudCountHasBeenSet() const
{
    return m_protectGroupCrossCloudCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetCopyPairCount() const
{
    return m_copyPairCount;
}

void DisasterRecoveryOverview::SetCopyPairCount(const int64_t& _copyPairCount)
{
    m_copyPairCount = _copyPairCount;
    m_copyPairCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::CopyPairCountHasBeenSet() const
{
    return m_copyPairCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetCopyPairSuccessRPOCount() const
{
    return m_copyPairSuccessRPOCount;
}

void DisasterRecoveryOverview::SetCopyPairSuccessRPOCount(const int64_t& _copyPairSuccessRPOCount)
{
    m_copyPairSuccessRPOCount = _copyPairSuccessRPOCount;
    m_copyPairSuccessRPOCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::CopyPairSuccessRPOCountHasBeenSet() const
{
    return m_copyPairSuccessRPOCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetCopyPairErrorRPOCount() const
{
    return m_copyPairErrorRPOCount;
}

void DisasterRecoveryOverview::SetCopyPairErrorRPOCount(const int64_t& _copyPairErrorRPOCount)
{
    m_copyPairErrorRPOCount = _copyPairErrorRPOCount;
    m_copyPairErrorRPOCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::CopyPairErrorRPOCountHasBeenSet() const
{
    return m_copyPairErrorRPOCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetDrillPairCount() const
{
    return m_drillPairCount;
}

void DisasterRecoveryOverview::SetDrillPairCount(const int64_t& _drillPairCount)
{
    m_drillPairCount = _drillPairCount;
    m_drillPairCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::DrillPairCountHasBeenSet() const
{
    return m_drillPairCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetDrillPairDrillingCount() const
{
    return m_drillPairDrillingCount;
}

void DisasterRecoveryOverview::SetDrillPairDrillingCount(const int64_t& _drillPairDrillingCount)
{
    m_drillPairDrillingCount = _drillPairDrillingCount;
    m_drillPairDrillingCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::DrillPairDrillingCountHasBeenSet() const
{
    return m_drillPairDrillingCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetDrillPairFailedCount() const
{
    return m_drillPairFailedCount;
}

void DisasterRecoveryOverview::SetDrillPairFailedCount(const int64_t& _drillPairFailedCount)
{
    m_drillPairFailedCount = _drillPairFailedCount;
    m_drillPairFailedCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::DrillPairFailedCountHasBeenSet() const
{
    return m_drillPairFailedCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetDrillPairSuccessCount() const
{
    return m_drillPairSuccessCount;
}

void DisasterRecoveryOverview::SetDrillPairSuccessCount(const int64_t& _drillPairSuccessCount)
{
    m_drillPairSuccessCount = _drillPairSuccessCount;
    m_drillPairSuccessCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::DrillPairSuccessCountHasBeenSet() const
{
    return m_drillPairSuccessCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetProtectedResourceCount() const
{
    return m_protectedResourceCount;
}

void DisasterRecoveryOverview::SetProtectedResourceCount(const int64_t& _protectedResourceCount)
{
    m_protectedResourceCount = _protectedResourceCount;
    m_protectedResourceCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::ProtectedResourceCountHasBeenSet() const
{
    return m_protectedResourceCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetProtectedResourceCopyingCount() const
{
    return m_protectedResourceCopyingCount;
}

void DisasterRecoveryOverview::SetProtectedResourceCopyingCount(const int64_t& _protectedResourceCopyingCount)
{
    m_protectedResourceCopyingCount = _protectedResourceCopyingCount;
    m_protectedResourceCopyingCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::ProtectedResourceCopyingCountHasBeenSet() const
{
    return m_protectedResourceCopyingCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetProtectedResourceStoppedCount() const
{
    return m_protectedResourceStoppedCount;
}

void DisasterRecoveryOverview::SetProtectedResourceStoppedCount(const int64_t& _protectedResourceStoppedCount)
{
    m_protectedResourceStoppedCount = _protectedResourceStoppedCount;
    m_protectedResourceStoppedCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::ProtectedResourceStoppedCountHasBeenSet() const
{
    return m_protectedResourceStoppedCountHasBeenSet;
}

int64_t DisasterRecoveryOverview::GetFailoverFailedCount() const
{
    return m_failoverFailedCount;
}

void DisasterRecoveryOverview::SetFailoverFailedCount(const int64_t& _failoverFailedCount)
{
    m_failoverFailedCount = _failoverFailedCount;
    m_failoverFailedCountHasBeenSet = true;
}

bool DisasterRecoveryOverview::FailoverFailedCountHasBeenSet() const
{
    return m_failoverFailedCountHasBeenSet;
}

