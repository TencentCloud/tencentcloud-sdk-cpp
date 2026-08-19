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

#include <tencentcloud/csip/v20221121/model/BaselineHostAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineHostAsset::BaselineHostAsset() :
    m_instanceIDHasBeenSet(false),
    m_qUUIDHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_privateIPHasBeenSet(false),
    m_agentStatusHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_tagItemHasBeenSet(false),
    m_cloudTagHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_osInfoHasBeenSet(false),
    m_protectVersionHasBeenSet(false)
{
}

CoreInternalOutcome BaselineHostAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("QUUID") && !value["QUUID"].IsNull())
    {
        if (!value["QUUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.QUUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qUUID = string(value["QUUID"].GetString());
        m_qUUIDHasBeenSet = true;
    }

    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("PrivateIP") && !value["PrivateIP"].IsNull())
    {
        if (!value["PrivateIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.PrivateIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIP = string(value["PrivateIP"].GetString());
        m_privateIPHasBeenSet = true;
    }

    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("TagItem") && !value["TagItem"].IsNull())
    {
        if (!value["TagItem"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.TagItem` is not array type"));

        const rapidjson::Value &tmpValue = value["TagItem"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MiniTagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagItem.push_back(item);
        }
        m_tagItemHasBeenSet = true;
    }

    if (value.HasMember("CloudTag") && !value["CloudTag"].IsNull())
    {
        if (!value["CloudTag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.CloudTag` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudTag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cloudTag.push_back(item);
        }
        m_cloudTagHasBeenSet = true;
    }

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("ProtectVersion") && !value["ProtectVersion"].IsNull())
    {
        if (!value["ProtectVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineHostAsset.ProtectVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectVersion = string(value["ProtectVersion"].GetString());
        m_protectVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineHostAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_qUUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qUUID.c_str(), allocator).Move(), allocator);
    }

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIP.c_str(), allocator).Move(), allocator);
    }

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_tagItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagItem.begin(); itr != m_tagItem.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cloudTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudTag.begin(); itr != m_cloudTag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_osInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_protectVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectVersion.c_str(), allocator).Move(), allocator);
    }

}


string BaselineHostAsset::GetInstanceID() const
{
    return m_instanceID;
}

void BaselineHostAsset::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool BaselineHostAsset::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string BaselineHostAsset::GetQUUID() const
{
    return m_qUUID;
}

void BaselineHostAsset::SetQUUID(const string& _qUUID)
{
    m_qUUID = _qUUID;
    m_qUUIDHasBeenSet = true;
}

bool BaselineHostAsset::QUUIDHasBeenSet() const
{
    return m_qUUIDHasBeenSet;
}

string BaselineHostAsset::GetUUID() const
{
    return m_uUID;
}

void BaselineHostAsset::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool BaselineHostAsset::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

string BaselineHostAsset::GetPublicIP() const
{
    return m_publicIP;
}

void BaselineHostAsset::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool BaselineHostAsset::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string BaselineHostAsset::GetPrivateIP() const
{
    return m_privateIP;
}

void BaselineHostAsset::SetPrivateIP(const string& _privateIP)
{
    m_privateIP = _privateIP;
    m_privateIPHasBeenSet = true;
}

bool BaselineHostAsset::PrivateIPHasBeenSet() const
{
    return m_privateIPHasBeenSet;
}

string BaselineHostAsset::GetAgentStatus() const
{
    return m_agentStatus;
}

void BaselineHostAsset::SetAgentStatus(const string& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool BaselineHostAsset::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

string BaselineHostAsset::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void BaselineHostAsset::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool BaselineHostAsset::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string BaselineHostAsset::GetName() const
{
    return m_name;
}

void BaselineHostAsset::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BaselineHostAsset::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t BaselineHostAsset::GetAppid() const
{
    return m_appid;
}

void BaselineHostAsset::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool BaselineHostAsset::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

vector<MiniTagItem> BaselineHostAsset::GetTagItem() const
{
    return m_tagItem;
}

void BaselineHostAsset::SetTagItem(const vector<MiniTagItem>& _tagItem)
{
    m_tagItem = _tagItem;
    m_tagItemHasBeenSet = true;
}

bool BaselineHostAsset::TagItemHasBeenSet() const
{
    return m_tagItemHasBeenSet;
}

vector<Tag> BaselineHostAsset::GetCloudTag() const
{
    return m_cloudTag;
}

void BaselineHostAsset::SetCloudTag(const vector<Tag>& _cloudTag)
{
    m_cloudTag = _cloudTag;
    m_cloudTagHasBeenSet = true;
}

bool BaselineHostAsset::CloudTagHasBeenSet() const
{
    return m_cloudTagHasBeenSet;
}

RegionInfo BaselineHostAsset::GetRegionInfo() const
{
    return m_regionInfo;
}

void BaselineHostAsset::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool BaselineHostAsset::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

string BaselineHostAsset::GetOsInfo() const
{
    return m_osInfo;
}

void BaselineHostAsset::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool BaselineHostAsset::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

string BaselineHostAsset::GetProtectVersion() const
{
    return m_protectVersion;
}

void BaselineHostAsset::SetProtectVersion(const string& _protectVersion)
{
    m_protectVersion = _protectVersion;
    m_protectVersionHasBeenSet = true;
}

bool BaselineHostAsset::ProtectVersionHasBeenSet() const
{
    return m_protectVersionHasBeenSet;
}

