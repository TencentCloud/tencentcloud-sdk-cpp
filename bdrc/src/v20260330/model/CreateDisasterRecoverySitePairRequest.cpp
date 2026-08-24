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

#include <tencentcloud/bdrc/v20260330/model/CreateDisasterRecoverySitePairRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CreateDisasterRecoverySitePairRequest::CreateDisasterRecoverySitePairRequest() :
    m_disasterRecoveryTypeHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceZoneHasBeenSet(false),
    m_targetRegionHasBeenSet(false),
    m_targetZoneHasBeenSet(false),
    m_sourceVpcHasBeenSet(false),
    m_targetVpcHasBeenSet(false),
    m_sitePairProductTypeHasBeenSet(false),
    m_sitePairNameHasBeenSet(false),
    m_copyTypeHasBeenSet(false)
{
}

string CreateDisasterRecoverySitePairRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_disasterRecoveryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoveryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_disasterRecoveryType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceZone.c_str(), allocator).Move(), allocator);
    }

    if (m_targetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_targetZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetZone.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceVpc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_targetVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVpc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairProductTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairProductType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sitePairProductType.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sitePairName.c_str(), allocator).Move(), allocator);
    }

    if (m_copyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copyType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDisasterRecoverySitePairRequest::GetDisasterRecoveryType() const
{
    return m_disasterRecoveryType;
}

void CreateDisasterRecoverySitePairRequest::SetDisasterRecoveryType(const string& _disasterRecoveryType)
{
    m_disasterRecoveryType = _disasterRecoveryType;
    m_disasterRecoveryTypeHasBeenSet = true;
}

bool CreateDisasterRecoverySitePairRequest::DisasterRecoveryTypeHasBeenSet() const
{
    return m_disasterRecoveryTypeHasBeenSet;
}

string CreateDisasterRecoverySitePairRequest::GetSourceRegion() const
{
    return m_sourceRegion;
}

void CreateDisasterRecoverySitePairRequest::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool CreateDisasterRecoverySitePairRequest::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string CreateDisasterRecoverySitePairRequest::GetSourceZone() const
{
    return m_sourceZone;
}

void CreateDisasterRecoverySitePairRequest::SetSourceZone(const string& _sourceZone)
{
    m_sourceZone = _sourceZone;
    m_sourceZoneHasBeenSet = true;
}

bool CreateDisasterRecoverySitePairRequest::SourceZoneHasBeenSet() const
{
    return m_sourceZoneHasBeenSet;
}

string CreateDisasterRecoverySitePairRequest::GetTargetRegion() const
{
    return m_targetRegion;
}

void CreateDisasterRecoverySitePairRequest::SetTargetRegion(const string& _targetRegion)
{
    m_targetRegion = _targetRegion;
    m_targetRegionHasBeenSet = true;
}

bool CreateDisasterRecoverySitePairRequest::TargetRegionHasBeenSet() const
{
    return m_targetRegionHasBeenSet;
}

string CreateDisasterRecoverySitePairRequest::GetTargetZone() const
{
    return m_targetZone;
}

void CreateDisasterRecoverySitePairRequest::SetTargetZone(const string& _targetZone)
{
    m_targetZone = _targetZone;
    m_targetZoneHasBeenSet = true;
}

bool CreateDisasterRecoverySitePairRequest::TargetZoneHasBeenSet() const
{
    return m_targetZoneHasBeenSet;
}

string CreateDisasterRecoverySitePairRequest::GetSourceVpc() const
{
    return m_sourceVpc;
}

void CreateDisasterRecoverySitePairRequest::SetSourceVpc(const string& _sourceVpc)
{
    m_sourceVpc = _sourceVpc;
    m_sourceVpcHasBeenSet = true;
}

bool CreateDisasterRecoverySitePairRequest::SourceVpcHasBeenSet() const
{
    return m_sourceVpcHasBeenSet;
}

string CreateDisasterRecoverySitePairRequest::GetTargetVpc() const
{
    return m_targetVpc;
}

void CreateDisasterRecoverySitePairRequest::SetTargetVpc(const string& _targetVpc)
{
    m_targetVpc = _targetVpc;
    m_targetVpcHasBeenSet = true;
}

bool CreateDisasterRecoverySitePairRequest::TargetVpcHasBeenSet() const
{
    return m_targetVpcHasBeenSet;
}

string CreateDisasterRecoverySitePairRequest::GetSitePairProductType() const
{
    return m_sitePairProductType;
}

void CreateDisasterRecoverySitePairRequest::SetSitePairProductType(const string& _sitePairProductType)
{
    m_sitePairProductType = _sitePairProductType;
    m_sitePairProductTypeHasBeenSet = true;
}

bool CreateDisasterRecoverySitePairRequest::SitePairProductTypeHasBeenSet() const
{
    return m_sitePairProductTypeHasBeenSet;
}

string CreateDisasterRecoverySitePairRequest::GetSitePairName() const
{
    return m_sitePairName;
}

void CreateDisasterRecoverySitePairRequest::SetSitePairName(const string& _sitePairName)
{
    m_sitePairName = _sitePairName;
    m_sitePairNameHasBeenSet = true;
}

bool CreateDisasterRecoverySitePairRequest::SitePairNameHasBeenSet() const
{
    return m_sitePairNameHasBeenSet;
}

string CreateDisasterRecoverySitePairRequest::GetCopyType() const
{
    return m_copyType;
}

void CreateDisasterRecoverySitePairRequest::SetCopyType(const string& _copyType)
{
    m_copyType = _copyType;
    m_copyTypeHasBeenSet = true;
}

bool CreateDisasterRecoverySitePairRequest::CopyTypeHasBeenSet() const
{
    return m_copyTypeHasBeenSet;
}


