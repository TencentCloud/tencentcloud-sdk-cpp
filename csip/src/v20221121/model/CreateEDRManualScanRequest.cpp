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

#include <tencentcloud/csip/v20221121/model/CreateEDRManualScanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateEDRManualScanRequest::CreateEDRManualScanRequest() :
    m_assetSelectionTypeHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_instanceIDsWithAppIdHasBeenSet(false),
    m_excludeInstanceIDsWithAppIdHasBeenSet(false),
    m_tagIdsHasBeenSet(false),
    m_clusterIDsWithAppIdHasBeenSet(false),
    m_excludeClusterIDsWithAppIdHasBeenSet(false),
    m_customPathsHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_enableMemShellScanHasBeenSet(false)
{
}

string CreateEDRManualScanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetSelectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetSelectionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetSelectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scanType.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceIDsWithAppId.begin(); itr != m_instanceIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_excludeInstanceIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeInstanceIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excludeInstanceIDsWithAppId.begin(); itr != m_excludeInstanceIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIds.begin(); itr != m_tagIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_clusterIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterIDsWithAppId.begin(); itr != m_clusterIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_excludeClusterIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeClusterIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excludeClusterIDsWithAppId.begin(); itr != m_excludeClusterIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_customPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPaths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customPaths.begin(); itr != m_customPaths.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_enableMemShellScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMemShellScan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableMemShellScan, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEDRManualScanRequest::GetAssetSelectionType() const
{
    return m_assetSelectionType;
}

void CreateEDRManualScanRequest::SetAssetSelectionType(const string& _assetSelectionType)
{
    m_assetSelectionType = _assetSelectionType;
    m_assetSelectionTypeHasBeenSet = true;
}

bool CreateEDRManualScanRequest::AssetSelectionTypeHasBeenSet() const
{
    return m_assetSelectionTypeHasBeenSet;
}

string CreateEDRManualScanRequest::GetScanType() const
{
    return m_scanType;
}

void CreateEDRManualScanRequest::SetScanType(const string& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool CreateEDRManualScanRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

vector<string> CreateEDRManualScanRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateEDRManualScanRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateEDRManualScanRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<InstanceIDWithAppIdItem> CreateEDRManualScanRequest::GetInstanceIDsWithAppId() const
{
    return m_instanceIDsWithAppId;
}

void CreateEDRManualScanRequest::SetInstanceIDsWithAppId(const vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId)
{
    m_instanceIDsWithAppId = _instanceIDsWithAppId;
    m_instanceIDsWithAppIdHasBeenSet = true;
}

bool CreateEDRManualScanRequest::InstanceIDsWithAppIdHasBeenSet() const
{
    return m_instanceIDsWithAppIdHasBeenSet;
}

vector<InstanceIDWithAppIdItem> CreateEDRManualScanRequest::GetExcludeInstanceIDsWithAppId() const
{
    return m_excludeInstanceIDsWithAppId;
}

void CreateEDRManualScanRequest::SetExcludeInstanceIDsWithAppId(const vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId)
{
    m_excludeInstanceIDsWithAppId = _excludeInstanceIDsWithAppId;
    m_excludeInstanceIDsWithAppIdHasBeenSet = true;
}

bool CreateEDRManualScanRequest::ExcludeInstanceIDsWithAppIdHasBeenSet() const
{
    return m_excludeInstanceIDsWithAppIdHasBeenSet;
}

vector<uint64_t> CreateEDRManualScanRequest::GetTagIds() const
{
    return m_tagIds;
}

void CreateEDRManualScanRequest::SetTagIds(const vector<uint64_t>& _tagIds)
{
    m_tagIds = _tagIds;
    m_tagIdsHasBeenSet = true;
}

bool CreateEDRManualScanRequest::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}

vector<ClusterWithAppIdItem> CreateEDRManualScanRequest::GetClusterIDsWithAppId() const
{
    return m_clusterIDsWithAppId;
}

void CreateEDRManualScanRequest::SetClusterIDsWithAppId(const vector<ClusterWithAppIdItem>& _clusterIDsWithAppId)
{
    m_clusterIDsWithAppId = _clusterIDsWithAppId;
    m_clusterIDsWithAppIdHasBeenSet = true;
}

bool CreateEDRManualScanRequest::ClusterIDsWithAppIdHasBeenSet() const
{
    return m_clusterIDsWithAppIdHasBeenSet;
}

vector<ClusterWithAppIdItem> CreateEDRManualScanRequest::GetExcludeClusterIDsWithAppId() const
{
    return m_excludeClusterIDsWithAppId;
}

void CreateEDRManualScanRequest::SetExcludeClusterIDsWithAppId(const vector<ClusterWithAppIdItem>& _excludeClusterIDsWithAppId)
{
    m_excludeClusterIDsWithAppId = _excludeClusterIDsWithAppId;
    m_excludeClusterIDsWithAppIdHasBeenSet = true;
}

bool CreateEDRManualScanRequest::ExcludeClusterIDsWithAppIdHasBeenSet() const
{
    return m_excludeClusterIDsWithAppIdHasBeenSet;
}

vector<string> CreateEDRManualScanRequest::GetCustomPaths() const
{
    return m_customPaths;
}

void CreateEDRManualScanRequest::SetCustomPaths(const vector<string>& _customPaths)
{
    m_customPaths = _customPaths;
    m_customPathsHasBeenSet = true;
}

bool CreateEDRManualScanRequest::CustomPathsHasBeenSet() const
{
    return m_customPathsHasBeenSet;
}

int64_t CreateEDRManualScanRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateEDRManualScanRequest::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateEDRManualScanRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t CreateEDRManualScanRequest::GetEnableMemShellScan() const
{
    return m_enableMemShellScan;
}

void CreateEDRManualScanRequest::SetEnableMemShellScan(const int64_t& _enableMemShellScan)
{
    m_enableMemShellScan = _enableMemShellScan;
    m_enableMemShellScanHasBeenSet = true;
}

bool CreateEDRManualScanRequest::EnableMemShellScanHasBeenSet() const
{
    return m_enableMemShellScanHasBeenSet;
}


