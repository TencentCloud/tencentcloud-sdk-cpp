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

#include <tencentcloud/csip/v20221121/model/HostBriefInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

HostBriefInfo::HostBriefInfo() :
    m_instanceIDHasBeenSet(false),
    m_qUUIDHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_privateIPHasBeenSet(false),
    m_agentStatusHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_tagItemHasBeenSet(false),
    m_cloudTagHasBeenSet(false)
{
}

CoreInternalOutcome HostBriefInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostBriefInfo.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("QUUID") && !value["QUUID"].IsNull())
    {
        if (!value["QUUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostBriefInfo.QUUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qUUID = string(value["QUUID"].GetString());
        m_qUUIDHasBeenSet = true;
    }

    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostBriefInfo.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostBriefInfo.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("PrivateIP") && !value["PrivateIP"].IsNull())
    {
        if (!value["PrivateIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostBriefInfo.PrivateIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIP = string(value["PrivateIP"].GetString());
        m_privateIPHasBeenSet = true;
    }

    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostBriefInfo.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostBriefInfo.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostBriefInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostBriefInfo.Account` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_account.Deserialize(value["Account"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accountHasBeenSet = true;
    }

    if (value.HasMember("TagItem") && !value["TagItem"].IsNull())
    {
        if (!value["TagItem"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostBriefInfo.TagItem` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `HostBriefInfo.CloudTag` is not array type"));

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


    return CoreInternalOutcome(true);
}

void HostBriefInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_account.ToJsonObject(value[key.c_str()], allocator);
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

}


string HostBriefInfo::GetInstanceID() const
{
    return m_instanceID;
}

void HostBriefInfo::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool HostBriefInfo::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string HostBriefInfo::GetQUUID() const
{
    return m_qUUID;
}

void HostBriefInfo::SetQUUID(const string& _qUUID)
{
    m_qUUID = _qUUID;
    m_qUUIDHasBeenSet = true;
}

bool HostBriefInfo::QUUIDHasBeenSet() const
{
    return m_qUUIDHasBeenSet;
}

string HostBriefInfo::GetUUID() const
{
    return m_uUID;
}

void HostBriefInfo::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool HostBriefInfo::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

string HostBriefInfo::GetPublicIP() const
{
    return m_publicIP;
}

void HostBriefInfo::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool HostBriefInfo::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string HostBriefInfo::GetPrivateIP() const
{
    return m_privateIP;
}

void HostBriefInfo::SetPrivateIP(const string& _privateIP)
{
    m_privateIP = _privateIP;
    m_privateIPHasBeenSet = true;
}

bool HostBriefInfo::PrivateIPHasBeenSet() const
{
    return m_privateIPHasBeenSet;
}

string HostBriefInfo::GetAgentStatus() const
{
    return m_agentStatus;
}

void HostBriefInfo::SetAgentStatus(const string& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool HostBriefInfo::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

string HostBriefInfo::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void HostBriefInfo::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool HostBriefInfo::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string HostBriefInfo::GetName() const
{
    return m_name;
}

void HostBriefInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HostBriefInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

AccountBriefInfo HostBriefInfo::GetAccount() const
{
    return m_account;
}

void HostBriefInfo::SetAccount(const AccountBriefInfo& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool HostBriefInfo::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

vector<MiniTagItem> HostBriefInfo::GetTagItem() const
{
    return m_tagItem;
}

void HostBriefInfo::SetTagItem(const vector<MiniTagItem>& _tagItem)
{
    m_tagItem = _tagItem;
    m_tagItemHasBeenSet = true;
}

bool HostBriefInfo::TagItemHasBeenSet() const
{
    return m_tagItemHasBeenSet;
}

vector<Tag> HostBriefInfo::GetCloudTag() const
{
    return m_cloudTag;
}

void HostBriefInfo::SetCloudTag(const vector<Tag>& _cloudTag)
{
    m_cloudTag = _cloudTag;
    m_cloudTagHasBeenSet = true;
}

bool HostBriefInfo::CloudTagHasBeenSet() const
{
    return m_cloudTagHasBeenSet;
}

