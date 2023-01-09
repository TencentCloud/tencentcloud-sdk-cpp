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

#include <tencentcloud/ecm/v20190719/model/LoadBalancer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

LoadBalancer::LoadBalancer() :
    m_regionHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_loadBalancerTypeHasBeenSet(false),
    m_loadBalancerVipsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusTimeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vipIspHasBeenSet(false),
    m_networkAttributesHasBeenSet(false),
    m_secureGroupsHasBeenSet(false),
    m_loadBalancerPassToTargetHasBeenSet(false),
    m_addressIPv6HasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Position` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_position.Deserialize(value["Position"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_positionHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerName") && !value["LoadBalancerName"].IsNull())
    {
        if (!value["LoadBalancerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerName = string(value["LoadBalancerName"].GetString());
        m_loadBalancerNameHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerType") && !value["LoadBalancerType"].IsNull())
    {
        if (!value["LoadBalancerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerType = string(value["LoadBalancerType"].GetString());
        m_loadBalancerTypeHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerVips") && !value["LoadBalancerVips"].IsNull())
    {
        if (!value["LoadBalancerVips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerVips` is not array type"));

        const rapidjson::Value &tmpValue = value["LoadBalancerVips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_loadBalancerVips.push_back((*itr).GetString());
        }
        m_loadBalancerVipsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StatusTime") && !value["StatusTime"].IsNull())
    {
        if (!value["StatusTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.StatusTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusTime = string(value["StatusTime"].GetString());
        m_statusTimeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("VipIsp") && !value["VipIsp"].IsNull())
    {
        if (!value["VipIsp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.VipIsp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipIsp = string(value["VipIsp"].GetString());
        m_vipIspHasBeenSet = true;
    }

    if (value.HasMember("NetworkAttributes") && !value["NetworkAttributes"].IsNull())
    {
        if (!value["NetworkAttributes"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.NetworkAttributes` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_networkAttributes.Deserialize(value["NetworkAttributes"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_networkAttributesHasBeenSet = true;
    }

    if (value.HasMember("SecureGroups") && !value["SecureGroups"].IsNull())
    {
        if (!value["SecureGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.SecureGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["SecureGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_secureGroups.push_back((*itr).GetString());
        }
        m_secureGroupsHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerPassToTarget") && !value["LoadBalancerPassToTarget"].IsNull())
    {
        if (!value["LoadBalancerPassToTarget"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.LoadBalancerPassToTarget` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerPassToTarget = value["LoadBalancerPassToTarget"].GetBool();
        m_loadBalancerPassToTargetHasBeenSet = true;
    }

    if (value.HasMember("AddressIPv6") && !value["AddressIPv6"].IsNull())
    {
        if (!value["AddressIPv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancer.AddressIPv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIPv6 = string(value["AddressIPv6"].GetString());
        m_addressIPv6HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_position.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerType.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerVipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerVips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerVips.begin(); itr != m_loadBalancerVips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vipIspHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipIsp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vipIsp.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAttributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkAttributes.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_secureGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecureGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_secureGroups.begin(); itr != m_secureGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_loadBalancerPassToTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerPassToTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalancerPassToTarget, allocator);
    }

    if (m_addressIPv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIPv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressIPv6.c_str(), allocator).Move(), allocator);
    }

}


string LoadBalancer::GetRegion() const
{
    return m_region;
}

void LoadBalancer::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool LoadBalancer::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

Position LoadBalancer::GetPosition() const
{
    return m_position;
}

void LoadBalancer::SetPosition(const Position& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool LoadBalancer::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string LoadBalancer::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void LoadBalancer::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string LoadBalancer::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void LoadBalancer::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

string LoadBalancer::GetLoadBalancerType() const
{
    return m_loadBalancerType;
}

void LoadBalancer::SetLoadBalancerType(const string& _loadBalancerType)
{
    m_loadBalancerType = _loadBalancerType;
    m_loadBalancerTypeHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerTypeHasBeenSet() const
{
    return m_loadBalancerTypeHasBeenSet;
}

vector<string> LoadBalancer::GetLoadBalancerVips() const
{
    return m_loadBalancerVips;
}

void LoadBalancer::SetLoadBalancerVips(const vector<string>& _loadBalancerVips)
{
    m_loadBalancerVips = _loadBalancerVips;
    m_loadBalancerVipsHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerVipsHasBeenSet() const
{
    return m_loadBalancerVipsHasBeenSet;
}

int64_t LoadBalancer::GetStatus() const
{
    return m_status;
}

void LoadBalancer::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LoadBalancer::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LoadBalancer::GetCreateTime() const
{
    return m_createTime;
}

void LoadBalancer::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LoadBalancer::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LoadBalancer::GetStatusTime() const
{
    return m_statusTime;
}

void LoadBalancer::SetStatusTime(const string& _statusTime)
{
    m_statusTime = _statusTime;
    m_statusTimeHasBeenSet = true;
}

bool LoadBalancer::StatusTimeHasBeenSet() const
{
    return m_statusTimeHasBeenSet;
}

string LoadBalancer::GetVpcId() const
{
    return m_vpcId;
}

void LoadBalancer::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LoadBalancer::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<TagInfo> LoadBalancer::GetTags() const
{
    return m_tags;
}

void LoadBalancer::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LoadBalancer::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string LoadBalancer::GetVipIsp() const
{
    return m_vipIsp;
}

void LoadBalancer::SetVipIsp(const string& _vipIsp)
{
    m_vipIsp = _vipIsp;
    m_vipIspHasBeenSet = true;
}

bool LoadBalancer::VipIspHasBeenSet() const
{
    return m_vipIspHasBeenSet;
}

LoadBalancerInternetAccessible LoadBalancer::GetNetworkAttributes() const
{
    return m_networkAttributes;
}

void LoadBalancer::SetNetworkAttributes(const LoadBalancerInternetAccessible& _networkAttributes)
{
    m_networkAttributes = _networkAttributes;
    m_networkAttributesHasBeenSet = true;
}

bool LoadBalancer::NetworkAttributesHasBeenSet() const
{
    return m_networkAttributesHasBeenSet;
}

vector<string> LoadBalancer::GetSecureGroups() const
{
    return m_secureGroups;
}

void LoadBalancer::SetSecureGroups(const vector<string>& _secureGroups)
{
    m_secureGroups = _secureGroups;
    m_secureGroupsHasBeenSet = true;
}

bool LoadBalancer::SecureGroupsHasBeenSet() const
{
    return m_secureGroupsHasBeenSet;
}

bool LoadBalancer::GetLoadBalancerPassToTarget() const
{
    return m_loadBalancerPassToTarget;
}

void LoadBalancer::SetLoadBalancerPassToTarget(const bool& _loadBalancerPassToTarget)
{
    m_loadBalancerPassToTarget = _loadBalancerPassToTarget;
    m_loadBalancerPassToTargetHasBeenSet = true;
}

bool LoadBalancer::LoadBalancerPassToTargetHasBeenSet() const
{
    return m_loadBalancerPassToTargetHasBeenSet;
}

string LoadBalancer::GetAddressIPv6() const
{
    return m_addressIPv6;
}

void LoadBalancer::SetAddressIPv6(const string& _addressIPv6)
{
    m_addressIPv6 = _addressIPv6;
    m_addressIPv6HasBeenSet = true;
}

bool LoadBalancer::AddressIPv6HasBeenSet() const
{
    return m_addressIPv6HasBeenSet;
}

