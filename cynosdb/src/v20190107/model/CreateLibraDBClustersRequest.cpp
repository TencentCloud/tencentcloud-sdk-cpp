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

#include <tencentcloud/cynosdb/v20190107/model/CreateLibraDBClustersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateLibraDBClustersRequest::CreateLibraDBClustersRequest() :
    m_countHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_instanceInitInfosHasBeenSet(false),
    m_adminPasswordHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_dealModeHasBeenSet(false),
    m_encryptMethodHasBeenSet(false),
    m_libraDBVersionHasBeenSet(false),
    m_orderSourceHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_portHasBeenSet(false)
{
}

string CreateLibraDBClustersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceInitInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInitInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceInitInfos.begin(); itr != m_instanceInitInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_adminPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_dealModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dealMode.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_libraDBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraDBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_libraDBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_orderSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderSource.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateLibraDBClustersRequest::GetCount() const
{
    return m_count;
}

void CreateLibraDBClustersRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string CreateLibraDBClustersRequest::GetZone() const
{
    return m_zone;
}

void CreateLibraDBClustersRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<LibraDBInstanceInitInfo> CreateLibraDBClustersRequest::GetInstanceInitInfos() const
{
    return m_instanceInitInfos;
}

void CreateLibraDBClustersRequest::SetInstanceInitInfos(const vector<LibraDBInstanceInitInfo>& _instanceInitInfos)
{
    m_instanceInitInfos = _instanceInitInfos;
    m_instanceInitInfosHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::InstanceInitInfosHasBeenSet() const
{
    return m_instanceInitInfosHasBeenSet;
}

string CreateLibraDBClustersRequest::GetAdminPassword() const
{
    return m_adminPassword;
}

void CreateLibraDBClustersRequest::SetAdminPassword(const string& _adminPassword)
{
    m_adminPassword = _adminPassword;
    m_adminPasswordHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::AdminPasswordHasBeenSet() const
{
    return m_adminPasswordHasBeenSet;
}

int64_t CreateLibraDBClustersRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateLibraDBClustersRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t CreateLibraDBClustersRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateLibraDBClustersRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

string CreateLibraDBClustersRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateLibraDBClustersRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CreateLibraDBClustersRequest::GetDealMode() const
{
    return m_dealMode;
}

void CreateLibraDBClustersRequest::SetDealMode(const string& _dealMode)
{
    m_dealMode = _dealMode;
    m_dealModeHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::DealModeHasBeenSet() const
{
    return m_dealModeHasBeenSet;
}

string CreateLibraDBClustersRequest::GetEncryptMethod() const
{
    return m_encryptMethod;
}

void CreateLibraDBClustersRequest::SetEncryptMethod(const string& _encryptMethod)
{
    m_encryptMethod = _encryptMethod;
    m_encryptMethodHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::EncryptMethodHasBeenSet() const
{
    return m_encryptMethodHasBeenSet;
}

string CreateLibraDBClustersRequest::GetLibraDBVersion() const
{
    return m_libraDBVersion;
}

void CreateLibraDBClustersRequest::SetLibraDBVersion(const string& _libraDBVersion)
{
    m_libraDBVersion = _libraDBVersion;
    m_libraDBVersionHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::LibraDBVersionHasBeenSet() const
{
    return m_libraDBVersionHasBeenSet;
}

string CreateLibraDBClustersRequest::GetOrderSource() const
{
    return m_orderSource;
}

void CreateLibraDBClustersRequest::SetOrderSource(const string& _orderSource)
{
    m_orderSource = _orderSource;
    m_orderSourceHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::OrderSourceHasBeenSet() const
{
    return m_orderSourceHasBeenSet;
}

int64_t CreateLibraDBClustersRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateLibraDBClustersRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CreateLibraDBClustersRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateLibraDBClustersRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> CreateLibraDBClustersRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateLibraDBClustersRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

int64_t CreateLibraDBClustersRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateLibraDBClustersRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CreateLibraDBClustersRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateLibraDBClustersRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

vector<Tag> CreateLibraDBClustersRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateLibraDBClustersRequest::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateLibraDBClustersRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateLibraDBClustersRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateLibraDBClustersRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateLibraDBClustersRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateLibraDBClustersRequest::GetPort() const
{
    return m_port;
}

void CreateLibraDBClustersRequest::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateLibraDBClustersRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}


