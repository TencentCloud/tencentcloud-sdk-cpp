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

#include <tencentcloud/tcaplusdb/v20190823/model/ClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

ClusterInfo::ClusterInfo() :
    m_clusterNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_idlTypeHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_passwordStatusHasBeenSet(false),
    m_apiAccessIdHasBeenSet(false),
    m_apiAccessIpHasBeenSet(false),
    m_apiAccessPortHasBeenSet(false),
    m_oldPasswordExpireTimeHasBeenSet(false),
    m_apiAccessIpv6HasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_readCapacityUnitHasBeenSet(false),
    m_writeCapacityUnitHasBeenSet(false),
    m_diskVolumeHasBeenSet(false),
    m_serverListHasBeenSet(false),
    m_proxyListHasBeenSet(false)
{
}

CoreInternalOutcome ClusterInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("IdlType") && !value["IdlType"].IsNull())
    {
        if (!value["IdlType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.IdlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idlType = string(value["IdlType"].GetString());
        m_idlTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("PasswordStatus") && !value["PasswordStatus"].IsNull())
    {
        if (!value["PasswordStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.PasswordStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passwordStatus = string(value["PasswordStatus"].GetString());
        m_passwordStatusHasBeenSet = true;
    }

    if (value.HasMember("ApiAccessId") && !value["ApiAccessId"].IsNull())
    {
        if (!value["ApiAccessId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.ApiAccessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAccessId = string(value["ApiAccessId"].GetString());
        m_apiAccessIdHasBeenSet = true;
    }

    if (value.HasMember("ApiAccessIp") && !value["ApiAccessIp"].IsNull())
    {
        if (!value["ApiAccessIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.ApiAccessIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAccessIp = string(value["ApiAccessIp"].GetString());
        m_apiAccessIpHasBeenSet = true;
    }

    if (value.HasMember("ApiAccessPort") && !value["ApiAccessPort"].IsNull())
    {
        if (!value["ApiAccessPort"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.ApiAccessPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiAccessPort = value["ApiAccessPort"].GetInt64();
        m_apiAccessPortHasBeenSet = true;
    }

    if (value.HasMember("OldPasswordExpireTime") && !value["OldPasswordExpireTime"].IsNull())
    {
        if (!value["OldPasswordExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.OldPasswordExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldPasswordExpireTime = string(value["OldPasswordExpireTime"].GetString());
        m_oldPasswordExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("ApiAccessIpv6") && !value["ApiAccessIpv6"].IsNull())
    {
        if (!value["ApiAccessIpv6"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.ApiAccessIpv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAccessIpv6 = string(value["ApiAccessIpv6"].GetString());
        m_apiAccessIpv6HasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.ClusterType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = value["ClusterType"].GetInt64();
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.ClusterStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = value["ClusterStatus"].GetInt64();
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("ReadCapacityUnit") && !value["ReadCapacityUnit"].IsNull())
    {
        if (!value["ReadCapacityUnit"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.ReadCapacityUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readCapacityUnit = value["ReadCapacityUnit"].GetInt64();
        m_readCapacityUnitHasBeenSet = true;
    }

    if (value.HasMember("WriteCapacityUnit") && !value["WriteCapacityUnit"].IsNull())
    {
        if (!value["WriteCapacityUnit"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.WriteCapacityUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_writeCapacityUnit = value["WriteCapacityUnit"].GetInt64();
        m_writeCapacityUnitHasBeenSet = true;
    }

    if (value.HasMember("DiskVolume") && !value["DiskVolume"].IsNull())
    {
        if (!value["DiskVolume"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInfo.DiskVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskVolume = value["DiskVolume"].GetInt64();
        m_diskVolumeHasBeenSet = true;
    }

    if (value.HasMember("ServerList") && !value["ServerList"].IsNull())
    {
        if (!value["ServerList"].IsArray())
            return CoreInternalOutcome(Error("response `ClusterInfo.ServerList` is not array type"));

        const Value &tmpValue = value["ServerList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServerDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serverList.push_back(item);
        }
        m_serverListHasBeenSet = true;
    }

    if (value.HasMember("ProxyList") && !value["ProxyList"].IsNull())
    {
        if (!value["ProxyList"].IsArray())
            return CoreInternalOutcome(Error("response `ClusterInfo.ProxyList` is not array type"));

        const Value &tmpValue = value["ProxyList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyList.push_back(item);
        }
        m_proxyListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_idlTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_idlType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PasswordStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_passwordStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAccessIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiAccessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_apiAccessId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAccessIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiAccessIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_apiAccessIp.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAccessPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiAccessPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiAccessPort, allocator);
    }

    if (m_oldPasswordExpireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldPasswordExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_oldPasswordExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAccessIpv6HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiAccessIpv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_apiAccessIpv6.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterType, allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterStatus, allocator);
    }

    if (m_readCapacityUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReadCapacityUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readCapacityUnit, allocator);
    }

    if (m_writeCapacityUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WriteCapacityUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writeCapacityUnit, allocator);
    }

    if (m_diskVolumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskVolume, allocator);
    }

    if (m_serverListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serverList.begin(); itr != m_serverList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_proxyListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProxyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyList.begin(); itr != m_proxyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ClusterInfo::GetClusterName() const
{
    return m_clusterName;
}

void ClusterInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ClusterInfo::GetClusterId() const
{
    return m_clusterId;
}

void ClusterInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterInfo::GetRegion() const
{
    return m_region;
}

void ClusterInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ClusterInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ClusterInfo::GetIdlType() const
{
    return m_idlType;
}

void ClusterInfo::SetIdlType(const string& _idlType)
{
    m_idlType = _idlType;
    m_idlTypeHasBeenSet = true;
}

bool ClusterInfo::IdlTypeHasBeenSet() const
{
    return m_idlTypeHasBeenSet;
}

string ClusterInfo::GetNetworkType() const
{
    return m_networkType;
}

void ClusterInfo::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool ClusterInfo::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string ClusterInfo::GetVpcId() const
{
    return m_vpcId;
}

void ClusterInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ClusterInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ClusterInfo::GetSubnetId() const
{
    return m_subnetId;
}

void ClusterInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ClusterInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ClusterInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void ClusterInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ClusterInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ClusterInfo::GetPassword() const
{
    return m_password;
}

void ClusterInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ClusterInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string ClusterInfo::GetPasswordStatus() const
{
    return m_passwordStatus;
}

void ClusterInfo::SetPasswordStatus(const string& _passwordStatus)
{
    m_passwordStatus = _passwordStatus;
    m_passwordStatusHasBeenSet = true;
}

bool ClusterInfo::PasswordStatusHasBeenSet() const
{
    return m_passwordStatusHasBeenSet;
}

string ClusterInfo::GetApiAccessId() const
{
    return m_apiAccessId;
}

void ClusterInfo::SetApiAccessId(const string& _apiAccessId)
{
    m_apiAccessId = _apiAccessId;
    m_apiAccessIdHasBeenSet = true;
}

bool ClusterInfo::ApiAccessIdHasBeenSet() const
{
    return m_apiAccessIdHasBeenSet;
}

string ClusterInfo::GetApiAccessIp() const
{
    return m_apiAccessIp;
}

void ClusterInfo::SetApiAccessIp(const string& _apiAccessIp)
{
    m_apiAccessIp = _apiAccessIp;
    m_apiAccessIpHasBeenSet = true;
}

bool ClusterInfo::ApiAccessIpHasBeenSet() const
{
    return m_apiAccessIpHasBeenSet;
}

int64_t ClusterInfo::GetApiAccessPort() const
{
    return m_apiAccessPort;
}

void ClusterInfo::SetApiAccessPort(const int64_t& _apiAccessPort)
{
    m_apiAccessPort = _apiAccessPort;
    m_apiAccessPortHasBeenSet = true;
}

bool ClusterInfo::ApiAccessPortHasBeenSet() const
{
    return m_apiAccessPortHasBeenSet;
}

string ClusterInfo::GetOldPasswordExpireTime() const
{
    return m_oldPasswordExpireTime;
}

void ClusterInfo::SetOldPasswordExpireTime(const string& _oldPasswordExpireTime)
{
    m_oldPasswordExpireTime = _oldPasswordExpireTime;
    m_oldPasswordExpireTimeHasBeenSet = true;
}

bool ClusterInfo::OldPasswordExpireTimeHasBeenSet() const
{
    return m_oldPasswordExpireTimeHasBeenSet;
}

string ClusterInfo::GetApiAccessIpv6() const
{
    return m_apiAccessIpv6;
}

void ClusterInfo::SetApiAccessIpv6(const string& _apiAccessIpv6)
{
    m_apiAccessIpv6 = _apiAccessIpv6;
    m_apiAccessIpv6HasBeenSet = true;
}

bool ClusterInfo::ApiAccessIpv6HasBeenSet() const
{
    return m_apiAccessIpv6HasBeenSet;
}

int64_t ClusterInfo::GetClusterType() const
{
    return m_clusterType;
}

void ClusterInfo::SetClusterType(const int64_t& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ClusterInfo::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

int64_t ClusterInfo::GetClusterStatus() const
{
    return m_clusterStatus;
}

void ClusterInfo::SetClusterStatus(const int64_t& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool ClusterInfo::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

int64_t ClusterInfo::GetReadCapacityUnit() const
{
    return m_readCapacityUnit;
}

void ClusterInfo::SetReadCapacityUnit(const int64_t& _readCapacityUnit)
{
    m_readCapacityUnit = _readCapacityUnit;
    m_readCapacityUnitHasBeenSet = true;
}

bool ClusterInfo::ReadCapacityUnitHasBeenSet() const
{
    return m_readCapacityUnitHasBeenSet;
}

int64_t ClusterInfo::GetWriteCapacityUnit() const
{
    return m_writeCapacityUnit;
}

void ClusterInfo::SetWriteCapacityUnit(const int64_t& _writeCapacityUnit)
{
    m_writeCapacityUnit = _writeCapacityUnit;
    m_writeCapacityUnitHasBeenSet = true;
}

bool ClusterInfo::WriteCapacityUnitHasBeenSet() const
{
    return m_writeCapacityUnitHasBeenSet;
}

int64_t ClusterInfo::GetDiskVolume() const
{
    return m_diskVolume;
}

void ClusterInfo::SetDiskVolume(const int64_t& _diskVolume)
{
    m_diskVolume = _diskVolume;
    m_diskVolumeHasBeenSet = true;
}

bool ClusterInfo::DiskVolumeHasBeenSet() const
{
    return m_diskVolumeHasBeenSet;
}

vector<ServerDetailInfo> ClusterInfo::GetServerList() const
{
    return m_serverList;
}

void ClusterInfo::SetServerList(const vector<ServerDetailInfo>& _serverList)
{
    m_serverList = _serverList;
    m_serverListHasBeenSet = true;
}

bool ClusterInfo::ServerListHasBeenSet() const
{
    return m_serverListHasBeenSet;
}

vector<ProxyDetailInfo> ClusterInfo::GetProxyList() const
{
    return m_proxyList;
}

void ClusterInfo::SetProxyList(const vector<ProxyDetailInfo>& _proxyList)
{
    m_proxyList = _proxyList;
    m_proxyListHasBeenSet = true;
}

bool ClusterInfo::ProxyListHasBeenSet() const
{
    return m_proxyListHasBeenSet;
}

