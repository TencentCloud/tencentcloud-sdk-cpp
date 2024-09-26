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

#include <tencentcloud/vpc/v20170312/model/HaVip.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

HaVip::HaVip() :
    m_haVipIdHasBeenSet(false),
    m_haVipNameHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_addressIpHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_haVipAssociationSetHasBeenSet(false),
    m_checkAssociateHasBeenSet(false),
    m_cdcIdHasBeenSet(false),
    m_flushedTimeHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome HaVip::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HaVipId") && !value["HaVipId"].IsNull())
    {
        if (!value["HaVipId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.HaVipId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_haVipId = string(value["HaVipId"].GetString());
        m_haVipIdHasBeenSet = true;
    }

    if (value.HasMember("HaVipName") && !value["HaVipName"].IsNull())
    {
        if (!value["HaVipName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.HaVipName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_haVipName = string(value["HaVipName"].GetString());
        m_haVipNameHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterfaceId") && !value["NetworkInterfaceId"].IsNull())
    {
        if (!value["NetworkInterfaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.NetworkInterfaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceId = string(value["NetworkInterfaceId"].GetString());
        m_networkInterfaceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AddressIp") && !value["AddressIp"].IsNull())
    {
        if (!value["AddressIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.AddressIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressIp = string(value["AddressIp"].GetString());
        m_addressIpHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(value["Business"].GetString());
        m_businessHasBeenSet = true;
    }

    if (value.HasMember("HaVipAssociationSet") && !value["HaVipAssociationSet"].IsNull())
    {
        if (!value["HaVipAssociationSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HaVip.HaVipAssociationSet` is not array type"));

        const rapidjson::Value &tmpValue = value["HaVipAssociationSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HaVipAssociation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_haVipAssociationSet.push_back(item);
        }
        m_haVipAssociationSetHasBeenSet = true;
    }

    if (value.HasMember("CheckAssociate") && !value["CheckAssociate"].IsNull())
    {
        if (!value["CheckAssociate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.CheckAssociate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_checkAssociate = value["CheckAssociate"].GetBool();
        m_checkAssociateHasBeenSet = true;
    }

    if (value.HasMember("CdcId") && !value["CdcId"].IsNull())
    {
        if (!value["CdcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.CdcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcId = string(value["CdcId"].GetString());
        m_cdcIdHasBeenSet = true;
    }

    if (value.HasMember("FlushedTime") && !value["FlushedTime"].IsNull())
    {
        if (!value["FlushedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVip.FlushedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flushedTime = string(value["FlushedTime"].GetString());
        m_flushedTimeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HaVip.TagSet` is not array type"));

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

void HaVip::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_haVipIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaVipId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_haVipId.c_str(), allocator).Move(), allocator);
    }

    if (m_haVipNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaVipName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_haVipName.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
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

    if (m_networkInterfaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressIp.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_haVipAssociationSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaVipAssociationSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_haVipAssociationSet.begin(); itr != m_haVipAssociationSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_checkAssociateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAssociate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkAssociate, allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_flushedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlushedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flushedTime.c_str(), allocator).Move(), allocator);
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


string HaVip::GetHaVipId() const
{
    return m_haVipId;
}

void HaVip::SetHaVipId(const string& _haVipId)
{
    m_haVipId = _haVipId;
    m_haVipIdHasBeenSet = true;
}

bool HaVip::HaVipIdHasBeenSet() const
{
    return m_haVipIdHasBeenSet;
}

string HaVip::GetHaVipName() const
{
    return m_haVipName;
}

void HaVip::SetHaVipName(const string& _haVipName)
{
    m_haVipName = _haVipName;
    m_haVipNameHasBeenSet = true;
}

bool HaVip::HaVipNameHasBeenSet() const
{
    return m_haVipNameHasBeenSet;
}

string HaVip::GetVip() const
{
    return m_vip;
}

void HaVip::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool HaVip::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string HaVip::GetVpcId() const
{
    return m_vpcId;
}

void HaVip::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool HaVip::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string HaVip::GetSubnetId() const
{
    return m_subnetId;
}

void HaVip::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool HaVip::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string HaVip::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void HaVip::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool HaVip::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

string HaVip::GetInstanceId() const
{
    return m_instanceId;
}

void HaVip::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool HaVip::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string HaVip::GetAddressIp() const
{
    return m_addressIp;
}

void HaVip::SetAddressIp(const string& _addressIp)
{
    m_addressIp = _addressIp;
    m_addressIpHasBeenSet = true;
}

bool HaVip::AddressIpHasBeenSet() const
{
    return m_addressIpHasBeenSet;
}

string HaVip::GetState() const
{
    return m_state;
}

void HaVip::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool HaVip::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string HaVip::GetCreatedTime() const
{
    return m_createdTime;
}

void HaVip::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool HaVip::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string HaVip::GetBusiness() const
{
    return m_business;
}

void HaVip::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool HaVip::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

vector<HaVipAssociation> HaVip::GetHaVipAssociationSet() const
{
    return m_haVipAssociationSet;
}

void HaVip::SetHaVipAssociationSet(const vector<HaVipAssociation>& _haVipAssociationSet)
{
    m_haVipAssociationSet = _haVipAssociationSet;
    m_haVipAssociationSetHasBeenSet = true;
}

bool HaVip::HaVipAssociationSetHasBeenSet() const
{
    return m_haVipAssociationSetHasBeenSet;
}

bool HaVip::GetCheckAssociate() const
{
    return m_checkAssociate;
}

void HaVip::SetCheckAssociate(const bool& _checkAssociate)
{
    m_checkAssociate = _checkAssociate;
    m_checkAssociateHasBeenSet = true;
}

bool HaVip::CheckAssociateHasBeenSet() const
{
    return m_checkAssociateHasBeenSet;
}

string HaVip::GetCdcId() const
{
    return m_cdcId;
}

void HaVip::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool HaVip::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

string HaVip::GetFlushedTime() const
{
    return m_flushedTime;
}

void HaVip::SetFlushedTime(const string& _flushedTime)
{
    m_flushedTime = _flushedTime;
    m_flushedTimeHasBeenSet = true;
}

bool HaVip::FlushedTimeHasBeenSet() const
{
    return m_flushedTimeHasBeenSet;
}

vector<Tag> HaVip::GetTagSet() const
{
    return m_tagSet;
}

void HaVip::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool HaVip::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

