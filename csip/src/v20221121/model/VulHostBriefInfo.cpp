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

#include <tencentcloud/csip/v20221121/model/VulHostBriefInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulHostBriefInfo::VulHostBriefInfo() :
    m_instanceIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_privateIPHasBeenSet(false),
    m_defendVersionHasBeenSet(false),
    m_defendStatusHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_riskStatusHasBeenSet(false),
    m_vPRRatingHasBeenSet(false),
    m_agentStatusHasBeenSet(false),
    m_tagItemHasBeenSet(false),
    m_cloudTagHasBeenSet(false)
{
}

CoreInternalOutcome VulHostBriefInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("PrivateIP") && !value["PrivateIP"].IsNull())
    {
        if (!value["PrivateIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.PrivateIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIP = string(value["PrivateIP"].GetString());
        m_privateIPHasBeenSet = true;
    }

    if (value.HasMember("DefendVersion") && !value["DefendVersion"].IsNull())
    {
        if (!value["DefendVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.DefendVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defendVersion = string(value["DefendVersion"].GetString());
        m_defendVersionHasBeenSet = true;
    }

    if (value.HasMember("DefendStatus") && !value["DefendStatus"].IsNull())
    {
        if (!value["DefendStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.DefendStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defendStatus = string(value["DefendStatus"].GetString());
        m_defendStatusHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.Account` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_account.Deserialize(value["Account"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accountHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("RiskStatus") && !value["RiskStatus"].IsNull())
    {
        if (!value["RiskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.RiskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskStatus = string(value["RiskStatus"].GetString());
        m_riskStatusHasBeenSet = true;
    }

    if (value.HasMember("VPRRating") && !value["VPRRating"].IsNull())
    {
        if (!value["VPRRating"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.VPRRating` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vPRRating.Deserialize(value["VPRRating"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vPRRatingHasBeenSet = true;
    }

    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("TagItem") && !value["TagItem"].IsNull())
    {
        if (!value["TagItem"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.TagItem` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `VulHostBriefInfo.CloudTag` is not array type"));

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

void VulHostBriefInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_defendVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defendVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_defendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defendStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_account.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_riskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_vPRRatingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPRRating";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vPRRating.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentStatus.c_str(), allocator).Move(), allocator);
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


string VulHostBriefInfo::GetInstanceID() const
{
    return m_instanceID;
}

void VulHostBriefInfo::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool VulHostBriefInfo::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string VulHostBriefInfo::GetName() const
{
    return m_name;
}

void VulHostBriefInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VulHostBriefInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VulHostBriefInfo::GetPublicIP() const
{
    return m_publicIP;
}

void VulHostBriefInfo::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool VulHostBriefInfo::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string VulHostBriefInfo::GetPrivateIP() const
{
    return m_privateIP;
}

void VulHostBriefInfo::SetPrivateIP(const string& _privateIP)
{
    m_privateIP = _privateIP;
    m_privateIPHasBeenSet = true;
}

bool VulHostBriefInfo::PrivateIPHasBeenSet() const
{
    return m_privateIPHasBeenSet;
}

string VulHostBriefInfo::GetDefendVersion() const
{
    return m_defendVersion;
}

void VulHostBriefInfo::SetDefendVersion(const string& _defendVersion)
{
    m_defendVersion = _defendVersion;
    m_defendVersionHasBeenSet = true;
}

bool VulHostBriefInfo::DefendVersionHasBeenSet() const
{
    return m_defendVersionHasBeenSet;
}

string VulHostBriefInfo::GetDefendStatus() const
{
    return m_defendStatus;
}

void VulHostBriefInfo::SetDefendStatus(const string& _defendStatus)
{
    m_defendStatus = _defendStatus;
    m_defendStatusHasBeenSet = true;
}

bool VulHostBriefInfo::DefendStatusHasBeenSet() const
{
    return m_defendStatusHasBeenSet;
}

AccountBriefInfo VulHostBriefInfo::GetAccount() const
{
    return m_account;
}

void VulHostBriefInfo::SetAccount(const AccountBriefInfo& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool VulHostBriefInfo::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string VulHostBriefInfo::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void VulHostBriefInfo::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool VulHostBriefInfo::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string VulHostBriefInfo::GetRiskStatus() const
{
    return m_riskStatus;
}

void VulHostBriefInfo::SetRiskStatus(const string& _riskStatus)
{
    m_riskStatus = _riskStatus;
    m_riskStatusHasBeenSet = true;
}

bool VulHostBriefInfo::RiskStatusHasBeenSet() const
{
    return m_riskStatusHasBeenSet;
}

VPRRatingInfo VulHostBriefInfo::GetVPRRating() const
{
    return m_vPRRating;
}

void VulHostBriefInfo::SetVPRRating(const VPRRatingInfo& _vPRRating)
{
    m_vPRRating = _vPRRating;
    m_vPRRatingHasBeenSet = true;
}

bool VulHostBriefInfo::VPRRatingHasBeenSet() const
{
    return m_vPRRatingHasBeenSet;
}

string VulHostBriefInfo::GetAgentStatus() const
{
    return m_agentStatus;
}

void VulHostBriefInfo::SetAgentStatus(const string& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool VulHostBriefInfo::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

vector<MiniTagItem> VulHostBriefInfo::GetTagItem() const
{
    return m_tagItem;
}

void VulHostBriefInfo::SetTagItem(const vector<MiniTagItem>& _tagItem)
{
    m_tagItem = _tagItem;
    m_tagItemHasBeenSet = true;
}

bool VulHostBriefInfo::TagItemHasBeenSet() const
{
    return m_tagItemHasBeenSet;
}

vector<Tag> VulHostBriefInfo::GetCloudTag() const
{
    return m_cloudTag;
}

void VulHostBriefInfo::SetCloudTag(const vector<Tag>& _cloudTag)
{
    m_cloudTag = _cloudTag;
    m_cloudTagHasBeenSet = true;
}

bool VulHostBriefInfo::CloudTagHasBeenSet() const
{
    return m_cloudTagHasBeenSet;
}

