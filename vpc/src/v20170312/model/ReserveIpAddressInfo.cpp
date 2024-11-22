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

#include <tencentcloud/vpc/v20170312/model/ReserveIpAddressInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ReserveIpAddressInfo::ReserveIpAddressInfo() :
    m_reserveIpIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_reserveIpAddressHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_ipTypeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome ReserveIpAddressInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReserveIpId") && !value["ReserveIpId"].IsNull())
    {
        if (!value["ReserveIpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveIpAddressInfo.ReserveIpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reserveIpId = string(value["ReserveIpId"].GetString());
        m_reserveIpIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveIpAddressInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveIpAddressInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ReserveIpAddress") && !value["ReserveIpAddress"].IsNull())
    {
        if (!value["ReserveIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveIpAddressInfo.ReserveIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reserveIpAddress = string(value["ReserveIpAddress"].GetString());
        m_reserveIpAddressHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveIpAddressInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("IpType") && !value["IpType"].IsNull())
    {
        if (!value["IpType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveIpAddressInfo.IpType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ipType = value["IpType"].GetUint64();
        m_ipTypeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveIpAddressInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveIpAddressInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveIpAddressInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReserveIpAddressInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReserveIpAddressInfo.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReserveIpAddressInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reserveIpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveIpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reserveIpId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_reserveIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reserveIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipType, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ReserveIpAddressInfo::GetReserveIpId() const
{
    return m_reserveIpId;
}

void ReserveIpAddressInfo::SetReserveIpId(const string& _reserveIpId)
{
    m_reserveIpId = _reserveIpId;
    m_reserveIpIdHasBeenSet = true;
}

bool ReserveIpAddressInfo::ReserveIpIdHasBeenSet() const
{
    return m_reserveIpIdHasBeenSet;
}

string ReserveIpAddressInfo::GetVpcId() const
{
    return m_vpcId;
}

void ReserveIpAddressInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ReserveIpAddressInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ReserveIpAddressInfo::GetSubnetId() const
{
    return m_subnetId;
}

void ReserveIpAddressInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ReserveIpAddressInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ReserveIpAddressInfo::GetReserveIpAddress() const
{
    return m_reserveIpAddress;
}

void ReserveIpAddressInfo::SetReserveIpAddress(const string& _reserveIpAddress)
{
    m_reserveIpAddress = _reserveIpAddress;
    m_reserveIpAddressHasBeenSet = true;
}

bool ReserveIpAddressInfo::ReserveIpAddressHasBeenSet() const
{
    return m_reserveIpAddressHasBeenSet;
}

string ReserveIpAddressInfo::GetResourceId() const
{
    return m_resourceId;
}

void ReserveIpAddressInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ReserveIpAddressInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t ReserveIpAddressInfo::GetIpType() const
{
    return m_ipType;
}

void ReserveIpAddressInfo::SetIpType(const uint64_t& _ipType)
{
    m_ipType = _ipType;
    m_ipTypeHasBeenSet = true;
}

bool ReserveIpAddressInfo::IpTypeHasBeenSet() const
{
    return m_ipTypeHasBeenSet;
}

string ReserveIpAddressInfo::GetState() const
{
    return m_state;
}

void ReserveIpAddressInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ReserveIpAddressInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string ReserveIpAddressInfo::GetName() const
{
    return m_name;
}

void ReserveIpAddressInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ReserveIpAddressInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ReserveIpAddressInfo::GetDescription() const
{
    return m_description;
}

void ReserveIpAddressInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ReserveIpAddressInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ReserveIpAddressInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void ReserveIpAddressInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ReserveIpAddressInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<Tag> ReserveIpAddressInfo::GetTagSet() const
{
    return m_tagSet;
}

void ReserveIpAddressInfo::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool ReserveIpAddressInfo::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

