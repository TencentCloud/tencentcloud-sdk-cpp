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

#include <tencentcloud/csip/v20221121/model/ImageAssociatedHostAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageAssociatedHostAsset::ImageAssociatedHostAsset() :
    m_uuidHasBeenSet(false),
    m_qUuidHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_innerIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_agentStatusHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_instanceStateHasBeenSet(false)
{
}

CoreInternalOutcome ImageAssociatedHostAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedHostAsset.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("QUuid") && !value["QUuid"].IsNull())
    {
        if (!value["QUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedHostAsset.QUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qUuid = string(value["QUuid"].GetString());
        m_qUuidHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedHostAsset.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedHostAsset.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedHostAsset.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedHostAsset.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("InnerIp") && !value["InnerIp"].IsNull())
    {
        if (!value["InnerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedHostAsset.InnerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_innerIp = string(value["InnerIp"].GetString());
        m_innerIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedHostAsset.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedHostAsset.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedHostAsset.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedHostAsset.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageAssociatedHostAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_qUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAppId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_innerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_innerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

}


string ImageAssociatedHostAsset::GetUuid() const
{
    return m_uuid;
}

void ImageAssociatedHostAsset::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool ImageAssociatedHostAsset::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string ImageAssociatedHostAsset::GetQUuid() const
{
    return m_qUuid;
}

void ImageAssociatedHostAsset::SetQUuid(const string& _qUuid)
{
    m_qUuid = _qUuid;
    m_qUuidHasBeenSet = true;
}

bool ImageAssociatedHostAsset::QUuidHasBeenSet() const
{
    return m_qUuidHasBeenSet;
}

string ImageAssociatedHostAsset::GetHostName() const
{
    return m_hostName;
}

void ImageAssociatedHostAsset::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ImageAssociatedHostAsset::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string ImageAssociatedHostAsset::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageAssociatedHostAsset::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageAssociatedHostAsset::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

uint64_t ImageAssociatedHostAsset::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageAssociatedHostAsset::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageAssociatedHostAsset::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

string ImageAssociatedHostAsset::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageAssociatedHostAsset::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageAssociatedHostAsset::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ImageAssociatedHostAsset::GetInnerIp() const
{
    return m_innerIp;
}

void ImageAssociatedHostAsset::SetInnerIp(const string& _innerIp)
{
    m_innerIp = _innerIp;
    m_innerIpHasBeenSet = true;
}

bool ImageAssociatedHostAsset::InnerIpHasBeenSet() const
{
    return m_innerIpHasBeenSet;
}

string ImageAssociatedHostAsset::GetPublicIp() const
{
    return m_publicIp;
}

void ImageAssociatedHostAsset::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool ImageAssociatedHostAsset::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string ImageAssociatedHostAsset::GetAgentStatus() const
{
    return m_agentStatus;
}

void ImageAssociatedHostAsset::SetAgentStatus(const string& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool ImageAssociatedHostAsset::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

string ImageAssociatedHostAsset::GetInstanceID() const
{
    return m_instanceID;
}

void ImageAssociatedHostAsset::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ImageAssociatedHostAsset::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ImageAssociatedHostAsset::GetInstanceState() const
{
    return m_instanceState;
}

void ImageAssociatedHostAsset::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool ImageAssociatedHostAsset::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

