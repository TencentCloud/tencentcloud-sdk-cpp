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

#include <tencentcloud/cynosdb/v20190107/model/ModifyBackupDownloadRestrictionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyBackupDownloadRestrictionRequest::ModifyBackupDownloadRestrictionRequest() :
    m_clusterIdsHasBeenSet(false),
    m_limitTypeHasBeenSet(false),
    m_vpcComparisonSymbolHasBeenSet(false),
    m_ipComparisonSymbolHasBeenSet(false),
    m_limitVpcsHasBeenSet(false),
    m_limitIpsHasBeenSet(false)
{
}

string ModifyBackupDownloadRestrictionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIds.begin(); itr != m_clusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_limitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_limitType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcComparisonSymbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcComparisonSymbol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcComparisonSymbol.c_str(), allocator).Move(), allocator);
    }

    if (m_ipComparisonSymbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpComparisonSymbol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipComparisonSymbol.c_str(), allocator).Move(), allocator);
    }

    if (m_limitVpcsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitVpcs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limitVpcs.begin(); itr != m_limitVpcs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_limitIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_limitIps.begin(); itr != m_limitIps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyBackupDownloadRestrictionRequest::GetClusterIds() const
{
    return m_clusterIds;
}

void ModifyBackupDownloadRestrictionRequest::SetClusterIds(const vector<string>& _clusterIds)
{
    m_clusterIds = _clusterIds;
    m_clusterIdsHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::ClusterIdsHasBeenSet() const
{
    return m_clusterIdsHasBeenSet;
}

string ModifyBackupDownloadRestrictionRequest::GetLimitType() const
{
    return m_limitType;
}

void ModifyBackupDownloadRestrictionRequest::SetLimitType(const string& _limitType)
{
    m_limitType = _limitType;
    m_limitTypeHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::LimitTypeHasBeenSet() const
{
    return m_limitTypeHasBeenSet;
}

string ModifyBackupDownloadRestrictionRequest::GetVpcComparisonSymbol() const
{
    return m_vpcComparisonSymbol;
}

void ModifyBackupDownloadRestrictionRequest::SetVpcComparisonSymbol(const string& _vpcComparisonSymbol)
{
    m_vpcComparisonSymbol = _vpcComparisonSymbol;
    m_vpcComparisonSymbolHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::VpcComparisonSymbolHasBeenSet() const
{
    return m_vpcComparisonSymbolHasBeenSet;
}

string ModifyBackupDownloadRestrictionRequest::GetIpComparisonSymbol() const
{
    return m_ipComparisonSymbol;
}

void ModifyBackupDownloadRestrictionRequest::SetIpComparisonSymbol(const string& _ipComparisonSymbol)
{
    m_ipComparisonSymbol = _ipComparisonSymbol;
    m_ipComparisonSymbolHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::IpComparisonSymbolHasBeenSet() const
{
    return m_ipComparisonSymbolHasBeenSet;
}

vector<BackupLimitVpcItem> ModifyBackupDownloadRestrictionRequest::GetLimitVpcs() const
{
    return m_limitVpcs;
}

void ModifyBackupDownloadRestrictionRequest::SetLimitVpcs(const vector<BackupLimitVpcItem>& _limitVpcs)
{
    m_limitVpcs = _limitVpcs;
    m_limitVpcsHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::LimitVpcsHasBeenSet() const
{
    return m_limitVpcsHasBeenSet;
}

vector<string> ModifyBackupDownloadRestrictionRequest::GetLimitIps() const
{
    return m_limitIps;
}

void ModifyBackupDownloadRestrictionRequest::SetLimitIps(const vector<string>& _limitIps)
{
    m_limitIps = _limitIps;
    m_limitIpsHasBeenSet = true;
}

bool ModifyBackupDownloadRestrictionRequest::LimitIpsHasBeenSet() const
{
    return m_limitIpsHasBeenSet;
}


