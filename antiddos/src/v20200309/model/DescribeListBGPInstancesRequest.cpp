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

#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeListBGPInstancesRequest::DescribeListBGPInstancesRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filterIpHasBeenSet(false),
    m_filterInstanceIdHasBeenSet(false),
    m_filterRegionHasBeenSet(false),
    m_filterNameHasBeenSet(false),
    m_filterLineHasBeenSet(false),
    m_filterStatusHasBeenSet(false),
    m_filterBoundStatusHasBeenSet(false),
    m_filterInstanceIdListHasBeenSet(false),
    m_filterEnterpriseFlagHasBeenSet(false),
    m_filterLightFlagHasBeenSet(false),
    m_filterChannelFlagHasBeenSet(false),
    m_filterTagHasBeenSet(false),
    m_filterTrialFlagHasBeenSet(false),
    m_filterConvoyHasBeenSet(false),
    m_excludeAdvancedInfoHasBeenSet(false),
    m_filterAssetIpListHasBeenSet(false),
    m_filterBasicPlusFlagHasBeenSet(false),
    m_filterPlanCntFlagHasBeenSet(false),
    m_filterTransRegionFlagHasBeenSet(false),
    m_filterZoneIdListHasBeenSet(false)
{
}

string DescribeListBGPInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_filterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_filterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_filterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_filterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterName.c_str(), allocator).Move(), allocator);
    }

    if (m_filterLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterLine, allocator);
    }

    if (m_filterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_filterBoundStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterBoundStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterBoundStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_filterInstanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterInstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterInstanceIdList.begin(); itr != m_filterInstanceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterEnterpriseFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterEnterpriseFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterEnterpriseFlag, allocator);
    }

    if (m_filterLightFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterLightFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterLightFlag, allocator);
    }

    if (m_filterChannelFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterChannelFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterChannelFlag, allocator);
    }

    if (m_filterTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filterTag.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_filterTrialFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterTrialFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterTrialFlag, allocator);
    }

    if (m_filterConvoyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterConvoy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterConvoy, allocator);
    }

    if (m_excludeAdvancedInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeAdvancedInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_excludeAdvancedInfo, allocator);
    }

    if (m_filterAssetIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterAssetIpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterAssetIpList.begin(); itr != m_filterAssetIpList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterBasicPlusFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterBasicPlusFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterBasicPlusFlag, allocator);
    }

    if (m_filterPlanCntFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterPlanCntFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterPlanCntFlag, allocator);
    }

    if (m_filterTransRegionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterTransRegionFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterTransRegionFlag, allocator);
    }

    if (m_filterZoneIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterZoneIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterZoneIdList.begin(); itr != m_filterZoneIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeListBGPInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeListBGPInstancesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeListBGPInstancesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeListBGPInstancesRequest::GetFilterIp() const
{
    return m_filterIp;
}

void DescribeListBGPInstancesRequest::SetFilterIp(const string& _filterIp)
{
    m_filterIp = _filterIp;
    m_filterIpHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterIpHasBeenSet() const
{
    return m_filterIpHasBeenSet;
}

string DescribeListBGPInstancesRequest::GetFilterInstanceId() const
{
    return m_filterInstanceId;
}

void DescribeListBGPInstancesRequest::SetFilterInstanceId(const string& _filterInstanceId)
{
    m_filterInstanceId = _filterInstanceId;
    m_filterInstanceIdHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterInstanceIdHasBeenSet() const
{
    return m_filterInstanceIdHasBeenSet;
}

string DescribeListBGPInstancesRequest::GetFilterRegion() const
{
    return m_filterRegion;
}

void DescribeListBGPInstancesRequest::SetFilterRegion(const string& _filterRegion)
{
    m_filterRegion = _filterRegion;
    m_filterRegionHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterRegionHasBeenSet() const
{
    return m_filterRegionHasBeenSet;
}

string DescribeListBGPInstancesRequest::GetFilterName() const
{
    return m_filterName;
}

void DescribeListBGPInstancesRequest::SetFilterName(const string& _filterName)
{
    m_filterName = _filterName;
    m_filterNameHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterNameHasBeenSet() const
{
    return m_filterNameHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetFilterLine() const
{
    return m_filterLine;
}

void DescribeListBGPInstancesRequest::SetFilterLine(const uint64_t& _filterLine)
{
    m_filterLine = _filterLine;
    m_filterLineHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterLineHasBeenSet() const
{
    return m_filterLineHasBeenSet;
}

string DescribeListBGPInstancesRequest::GetFilterStatus() const
{
    return m_filterStatus;
}

void DescribeListBGPInstancesRequest::SetFilterStatus(const string& _filterStatus)
{
    m_filterStatus = _filterStatus;
    m_filterStatusHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterStatusHasBeenSet() const
{
    return m_filterStatusHasBeenSet;
}

string DescribeListBGPInstancesRequest::GetFilterBoundStatus() const
{
    return m_filterBoundStatus;
}

void DescribeListBGPInstancesRequest::SetFilterBoundStatus(const string& _filterBoundStatus)
{
    m_filterBoundStatus = _filterBoundStatus;
    m_filterBoundStatusHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterBoundStatusHasBeenSet() const
{
    return m_filterBoundStatusHasBeenSet;
}

vector<string> DescribeListBGPInstancesRequest::GetFilterInstanceIdList() const
{
    return m_filterInstanceIdList;
}

void DescribeListBGPInstancesRequest::SetFilterInstanceIdList(const vector<string>& _filterInstanceIdList)
{
    m_filterInstanceIdList = _filterInstanceIdList;
    m_filterInstanceIdListHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterInstanceIdListHasBeenSet() const
{
    return m_filterInstanceIdListHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetFilterEnterpriseFlag() const
{
    return m_filterEnterpriseFlag;
}

void DescribeListBGPInstancesRequest::SetFilterEnterpriseFlag(const uint64_t& _filterEnterpriseFlag)
{
    m_filterEnterpriseFlag = _filterEnterpriseFlag;
    m_filterEnterpriseFlagHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterEnterpriseFlagHasBeenSet() const
{
    return m_filterEnterpriseFlagHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetFilterLightFlag() const
{
    return m_filterLightFlag;
}

void DescribeListBGPInstancesRequest::SetFilterLightFlag(const uint64_t& _filterLightFlag)
{
    m_filterLightFlag = _filterLightFlag;
    m_filterLightFlagHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterLightFlagHasBeenSet() const
{
    return m_filterLightFlagHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetFilterChannelFlag() const
{
    return m_filterChannelFlag;
}

void DescribeListBGPInstancesRequest::SetFilterChannelFlag(const uint64_t& _filterChannelFlag)
{
    m_filterChannelFlag = _filterChannelFlag;
    m_filterChannelFlagHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterChannelFlagHasBeenSet() const
{
    return m_filterChannelFlagHasBeenSet;
}

TagFilter DescribeListBGPInstancesRequest::GetFilterTag() const
{
    return m_filterTag;
}

void DescribeListBGPInstancesRequest::SetFilterTag(const TagFilter& _filterTag)
{
    m_filterTag = _filterTag;
    m_filterTagHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterTagHasBeenSet() const
{
    return m_filterTagHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetFilterTrialFlag() const
{
    return m_filterTrialFlag;
}

void DescribeListBGPInstancesRequest::SetFilterTrialFlag(const uint64_t& _filterTrialFlag)
{
    m_filterTrialFlag = _filterTrialFlag;
    m_filterTrialFlagHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterTrialFlagHasBeenSet() const
{
    return m_filterTrialFlagHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetFilterConvoy() const
{
    return m_filterConvoy;
}

void DescribeListBGPInstancesRequest::SetFilterConvoy(const uint64_t& _filterConvoy)
{
    m_filterConvoy = _filterConvoy;
    m_filterConvoyHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterConvoyHasBeenSet() const
{
    return m_filterConvoyHasBeenSet;
}

bool DescribeListBGPInstancesRequest::GetExcludeAdvancedInfo() const
{
    return m_excludeAdvancedInfo;
}

void DescribeListBGPInstancesRequest::SetExcludeAdvancedInfo(const bool& _excludeAdvancedInfo)
{
    m_excludeAdvancedInfo = _excludeAdvancedInfo;
    m_excludeAdvancedInfoHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::ExcludeAdvancedInfoHasBeenSet() const
{
    return m_excludeAdvancedInfoHasBeenSet;
}

vector<string> DescribeListBGPInstancesRequest::GetFilterAssetIpList() const
{
    return m_filterAssetIpList;
}

void DescribeListBGPInstancesRequest::SetFilterAssetIpList(const vector<string>& _filterAssetIpList)
{
    m_filterAssetIpList = _filterAssetIpList;
    m_filterAssetIpListHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterAssetIpListHasBeenSet() const
{
    return m_filterAssetIpListHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetFilterBasicPlusFlag() const
{
    return m_filterBasicPlusFlag;
}

void DescribeListBGPInstancesRequest::SetFilterBasicPlusFlag(const uint64_t& _filterBasicPlusFlag)
{
    m_filterBasicPlusFlag = _filterBasicPlusFlag;
    m_filterBasicPlusFlagHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterBasicPlusFlagHasBeenSet() const
{
    return m_filterBasicPlusFlagHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetFilterPlanCntFlag() const
{
    return m_filterPlanCntFlag;
}

void DescribeListBGPInstancesRequest::SetFilterPlanCntFlag(const uint64_t& _filterPlanCntFlag)
{
    m_filterPlanCntFlag = _filterPlanCntFlag;
    m_filterPlanCntFlagHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterPlanCntFlagHasBeenSet() const
{
    return m_filterPlanCntFlagHasBeenSet;
}

uint64_t DescribeListBGPInstancesRequest::GetFilterTransRegionFlag() const
{
    return m_filterTransRegionFlag;
}

void DescribeListBGPInstancesRequest::SetFilterTransRegionFlag(const uint64_t& _filterTransRegionFlag)
{
    m_filterTransRegionFlag = _filterTransRegionFlag;
    m_filterTransRegionFlagHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterTransRegionFlagHasBeenSet() const
{
    return m_filterTransRegionFlagHasBeenSet;
}

vector<int64_t> DescribeListBGPInstancesRequest::GetFilterZoneIdList() const
{
    return m_filterZoneIdList;
}

void DescribeListBGPInstancesRequest::SetFilterZoneIdList(const vector<int64_t>& _filterZoneIdList)
{
    m_filterZoneIdList = _filterZoneIdList;
    m_filterZoneIdListHasBeenSet = true;
}

bool DescribeListBGPInstancesRequest::FilterZoneIdListHasBeenSet() const
{
    return m_filterZoneIdListHasBeenSet;
}


