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

#include <tencentcloud/tcss/v20201101/model/SecLogJoinObjectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SecLogJoinObjectInfo::SecLogJoinObjectInfo() :
    m_hostIDHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_hostStatusHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_joinStateHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_clusterMainAddressHasBeenSet(false),
    m_containerCntHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterStatusHasBeenSet(false)
{
}

CoreInternalOutcome SecLogJoinObjectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostID") && !value["HostID"].IsNull())
    {
        if (!value["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(value["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("HostStatus") && !value["HostStatus"].IsNull())
    {
        if (!value["HostStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.HostStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostStatus = string(value["HostStatus"].GetString());
        m_hostStatusHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("JoinState") && !value["JoinState"].IsNull())
    {
        if (!value["JoinState"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.JoinState` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_joinState = value["JoinState"].GetBool();
        m_joinStateHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterMainAddress") && !value["ClusterMainAddress"].IsNull())
    {
        if (!value["ClusterMainAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.ClusterMainAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterMainAddress = string(value["ClusterMainAddress"].GetString());
        m_clusterMainAddressHasBeenSet = true;
    }

    if (value.HasMember("ContainerCnt") && !value["ContainerCnt"].IsNull())
    {
        if (!value["ContainerCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.ContainerCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCnt = value["ContainerCnt"].GetUint64();
        m_containerCntHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinObjectInfo.ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(value["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecLogJoinObjectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_hostStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_joinStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_joinState, allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterMainAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterMainAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterMainAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_containerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCnt, allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

}


string SecLogJoinObjectInfo::GetHostID() const
{
    return m_hostID;
}

void SecLogJoinObjectInfo::SetHostID(const string& _hostID)
{
    m_hostID = _hostID;
    m_hostIDHasBeenSet = true;
}

bool SecLogJoinObjectInfo::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string SecLogJoinObjectInfo::GetHostName() const
{
    return m_hostName;
}

void SecLogJoinObjectInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool SecLogJoinObjectInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string SecLogJoinObjectInfo::GetHostIP() const
{
    return m_hostIP;
}

void SecLogJoinObjectInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool SecLogJoinObjectInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string SecLogJoinObjectInfo::GetHostStatus() const
{
    return m_hostStatus;
}

void SecLogJoinObjectInfo::SetHostStatus(const string& _hostStatus)
{
    m_hostStatus = _hostStatus;
    m_hostStatusHasBeenSet = true;
}

bool SecLogJoinObjectInfo::HostStatusHasBeenSet() const
{
    return m_hostStatusHasBeenSet;
}

string SecLogJoinObjectInfo::GetClusterID() const
{
    return m_clusterID;
}

void SecLogJoinObjectInfo::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool SecLogJoinObjectInfo::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string SecLogJoinObjectInfo::GetClusterName() const
{
    return m_clusterName;
}

void SecLogJoinObjectInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool SecLogJoinObjectInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string SecLogJoinObjectInfo::GetPublicIP() const
{
    return m_publicIP;
}

void SecLogJoinObjectInfo::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool SecLogJoinObjectInfo::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

bool SecLogJoinObjectInfo::GetJoinState() const
{
    return m_joinState;
}

void SecLogJoinObjectInfo::SetJoinState(const bool& _joinState)
{
    m_joinState = _joinState;
    m_joinStateHasBeenSet = true;
}

bool SecLogJoinObjectInfo::JoinStateHasBeenSet() const
{
    return m_joinStateHasBeenSet;
}

string SecLogJoinObjectInfo::GetClusterVersion() const
{
    return m_clusterVersion;
}

void SecLogJoinObjectInfo::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool SecLogJoinObjectInfo::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

string SecLogJoinObjectInfo::GetClusterMainAddress() const
{
    return m_clusterMainAddress;
}

void SecLogJoinObjectInfo::SetClusterMainAddress(const string& _clusterMainAddress)
{
    m_clusterMainAddress = _clusterMainAddress;
    m_clusterMainAddressHasBeenSet = true;
}

bool SecLogJoinObjectInfo::ClusterMainAddressHasBeenSet() const
{
    return m_clusterMainAddressHasBeenSet;
}

uint64_t SecLogJoinObjectInfo::GetContainerCnt() const
{
    return m_containerCnt;
}

void SecLogJoinObjectInfo::SetContainerCnt(const uint64_t& _containerCnt)
{
    m_containerCnt = _containerCnt;
    m_containerCntHasBeenSet = true;
}

bool SecLogJoinObjectInfo::ContainerCntHasBeenSet() const
{
    return m_containerCntHasBeenSet;
}

string SecLogJoinObjectInfo::GetClusterType() const
{
    return m_clusterType;
}

void SecLogJoinObjectInfo::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool SecLogJoinObjectInfo::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string SecLogJoinObjectInfo::GetClusterStatus() const
{
    return m_clusterStatus;
}

void SecLogJoinObjectInfo::SetClusterStatus(const string& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool SecLogJoinObjectInfo::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

