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

#include <tencentcloud/tcss/v20201101/model/AutoAuthorizedRuleHostInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AutoAuthorizedRuleHostInfo::AutoAuthorizedRuleHostInfo() :
    m_hostIDHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_imageCntHasBeenSet(false),
    m_containerCntHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_dockerVersionHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome AutoAuthorizedRuleHostInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostID") && !value["HostID"].IsNull())
    {
        if (!value["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedRuleHostInfo.HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(value["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedRuleHostInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedRuleHostInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("ImageCnt") && !value["ImageCnt"].IsNull())
    {
        if (!value["ImageCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedRuleHostInfo.ImageCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCnt = value["ImageCnt"].GetUint64();
        m_imageCntHasBeenSet = true;
    }

    if (value.HasMember("ContainerCnt") && !value["ContainerCnt"].IsNull())
    {
        if (!value["ContainerCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedRuleHostInfo.ContainerCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCnt = value["ContainerCnt"].GetUint64();
        m_containerCntHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedRuleHostInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedRuleHostInfo.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedRuleHostInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("DockerVersion") && !value["DockerVersion"].IsNull())
    {
        if (!value["DockerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedRuleHostInfo.DockerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerVersion = string(value["DockerVersion"].GetString());
        m_dockerVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoAuthorizedRuleHostInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoAuthorizedRuleHostInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCnt, allocator);
    }

    if (m_containerCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCnt, allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string AutoAuthorizedRuleHostInfo::GetHostID() const
{
    return m_hostID;
}

void AutoAuthorizedRuleHostInfo::SetHostID(const string& _hostID)
{
    m_hostID = _hostID;
    m_hostIDHasBeenSet = true;
}

bool AutoAuthorizedRuleHostInfo::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string AutoAuthorizedRuleHostInfo::GetHostIP() const
{
    return m_hostIP;
}

void AutoAuthorizedRuleHostInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool AutoAuthorizedRuleHostInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string AutoAuthorizedRuleHostInfo::GetHostName() const
{
    return m_hostName;
}

void AutoAuthorizedRuleHostInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool AutoAuthorizedRuleHostInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

uint64_t AutoAuthorizedRuleHostInfo::GetImageCnt() const
{
    return m_imageCnt;
}

void AutoAuthorizedRuleHostInfo::SetImageCnt(const uint64_t& _imageCnt)
{
    m_imageCnt = _imageCnt;
    m_imageCntHasBeenSet = true;
}

bool AutoAuthorizedRuleHostInfo::ImageCntHasBeenSet() const
{
    return m_imageCntHasBeenSet;
}

uint64_t AutoAuthorizedRuleHostInfo::GetContainerCnt() const
{
    return m_containerCnt;
}

void AutoAuthorizedRuleHostInfo::SetContainerCnt(const uint64_t& _containerCnt)
{
    m_containerCnt = _containerCnt;
    m_containerCntHasBeenSet = true;
}

bool AutoAuthorizedRuleHostInfo::ContainerCntHasBeenSet() const
{
    return m_containerCntHasBeenSet;
}

string AutoAuthorizedRuleHostInfo::GetPublicIp() const
{
    return m_publicIp;
}

void AutoAuthorizedRuleHostInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool AutoAuthorizedRuleHostInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string AutoAuthorizedRuleHostInfo::GetInstanceID() const
{
    return m_instanceID;
}

void AutoAuthorizedRuleHostInfo::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool AutoAuthorizedRuleHostInfo::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string AutoAuthorizedRuleHostInfo::GetMachineType() const
{
    return m_machineType;
}

void AutoAuthorizedRuleHostInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool AutoAuthorizedRuleHostInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string AutoAuthorizedRuleHostInfo::GetDockerVersion() const
{
    return m_dockerVersion;
}

void AutoAuthorizedRuleHostInfo::SetDockerVersion(const string& _dockerVersion)
{
    m_dockerVersion = _dockerVersion;
    m_dockerVersionHasBeenSet = true;
}

bool AutoAuthorizedRuleHostInfo::DockerVersionHasBeenSet() const
{
    return m_dockerVersionHasBeenSet;
}

string AutoAuthorizedRuleHostInfo::GetStatus() const
{
    return m_status;
}

void AutoAuthorizedRuleHostInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AutoAuthorizedRuleHostInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

