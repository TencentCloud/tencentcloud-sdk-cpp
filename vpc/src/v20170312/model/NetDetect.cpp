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

#include <tencentcloud/vpc/v20170312/model/NetDetect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

NetDetect::NetDetect() :
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_netDetectIdHasBeenSet(false),
    m_netDetectNameHasBeenSet(false),
    m_detectDestinationIpHasBeenSet(false),
    m_detectSourceIpHasBeenSet(false),
    m_nextHopTypeHasBeenSet(false),
    m_nextHopDestinationHasBeenSet(false),
    m_nextHopNameHasBeenSet(false),
    m_netDetectDescriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome NetDetect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetect.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetect.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetect.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetect.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("NetDetectId") && !value["NetDetectId"].IsNull())
    {
        if (!value["NetDetectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetect.NetDetectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netDetectId = string(value["NetDetectId"].GetString());
        m_netDetectIdHasBeenSet = true;
    }

    if (value.HasMember("NetDetectName") && !value["NetDetectName"].IsNull())
    {
        if (!value["NetDetectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetect.NetDetectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netDetectName = string(value["NetDetectName"].GetString());
        m_netDetectNameHasBeenSet = true;
    }

    if (value.HasMember("DetectDestinationIp") && !value["DetectDestinationIp"].IsNull())
    {
        if (!value["DetectDestinationIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetDetect.DetectDestinationIp` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectDestinationIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detectDestinationIp.push_back((*itr).GetString());
        }
        m_detectDestinationIpHasBeenSet = true;
    }

    if (value.HasMember("DetectSourceIp") && !value["DetectSourceIp"].IsNull())
    {
        if (!value["DetectSourceIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetDetect.DetectSourceIp` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectSourceIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detectSourceIp.push_back((*itr).GetString());
        }
        m_detectSourceIpHasBeenSet = true;
    }

    if (value.HasMember("NextHopType") && !value["NextHopType"].IsNull())
    {
        if (!value["NextHopType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetect.NextHopType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextHopType = string(value["NextHopType"].GetString());
        m_nextHopTypeHasBeenSet = true;
    }

    if (value.HasMember("NextHopDestination") && !value["NextHopDestination"].IsNull())
    {
        if (!value["NextHopDestination"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetect.NextHopDestination` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextHopDestination = string(value["NextHopDestination"].GetString());
        m_nextHopDestinationHasBeenSet = true;
    }

    if (value.HasMember("NextHopName") && !value["NextHopName"].IsNull())
    {
        if (!value["NextHopName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetect.NextHopName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextHopName = string(value["NextHopName"].GetString());
        m_nextHopNameHasBeenSet = true;
    }

    if (value.HasMember("NetDetectDescription") && !value["NetDetectDescription"].IsNull())
    {
        if (!value["NetDetectDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetect.NetDetectDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netDetectDescription = string(value["NetDetectDescription"].GetString());
        m_netDetectDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetect.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetDetect.TagSet` is not array type"));

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

void NetDetect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_netDetectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetDetectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netDetectId.c_str(), allocator).Move(), allocator);
    }

    if (m_netDetectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetDetectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netDetectName.c_str(), allocator).Move(), allocator);
    }

    if (m_detectDestinationIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectDestinationIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detectDestinationIp.begin(); itr != m_detectDestinationIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_detectSourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectSourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detectSourceIp.begin(); itr != m_detectSourceIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nextHopTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextHopType.c_str(), allocator).Move(), allocator);
    }

    if (m_nextHopDestinationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopDestination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextHopDestination.c_str(), allocator).Move(), allocator);
    }

    if (m_nextHopNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHopName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextHopName.c_str(), allocator).Move(), allocator);
    }

    if (m_netDetectDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetDetectDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netDetectDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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


string NetDetect::GetVpcId() const
{
    return m_vpcId;
}

void NetDetect::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NetDetect::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NetDetect::GetVpcName() const
{
    return m_vpcName;
}

void NetDetect::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool NetDetect::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string NetDetect::GetSubnetId() const
{
    return m_subnetId;
}

void NetDetect::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NetDetect::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string NetDetect::GetSubnetName() const
{
    return m_subnetName;
}

void NetDetect::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool NetDetect::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string NetDetect::GetNetDetectId() const
{
    return m_netDetectId;
}

void NetDetect::SetNetDetectId(const string& _netDetectId)
{
    m_netDetectId = _netDetectId;
    m_netDetectIdHasBeenSet = true;
}

bool NetDetect::NetDetectIdHasBeenSet() const
{
    return m_netDetectIdHasBeenSet;
}

string NetDetect::GetNetDetectName() const
{
    return m_netDetectName;
}

void NetDetect::SetNetDetectName(const string& _netDetectName)
{
    m_netDetectName = _netDetectName;
    m_netDetectNameHasBeenSet = true;
}

bool NetDetect::NetDetectNameHasBeenSet() const
{
    return m_netDetectNameHasBeenSet;
}

vector<string> NetDetect::GetDetectDestinationIp() const
{
    return m_detectDestinationIp;
}

void NetDetect::SetDetectDestinationIp(const vector<string>& _detectDestinationIp)
{
    m_detectDestinationIp = _detectDestinationIp;
    m_detectDestinationIpHasBeenSet = true;
}

bool NetDetect::DetectDestinationIpHasBeenSet() const
{
    return m_detectDestinationIpHasBeenSet;
}

vector<string> NetDetect::GetDetectSourceIp() const
{
    return m_detectSourceIp;
}

void NetDetect::SetDetectSourceIp(const vector<string>& _detectSourceIp)
{
    m_detectSourceIp = _detectSourceIp;
    m_detectSourceIpHasBeenSet = true;
}

bool NetDetect::DetectSourceIpHasBeenSet() const
{
    return m_detectSourceIpHasBeenSet;
}

string NetDetect::GetNextHopType() const
{
    return m_nextHopType;
}

void NetDetect::SetNextHopType(const string& _nextHopType)
{
    m_nextHopType = _nextHopType;
    m_nextHopTypeHasBeenSet = true;
}

bool NetDetect::NextHopTypeHasBeenSet() const
{
    return m_nextHopTypeHasBeenSet;
}

string NetDetect::GetNextHopDestination() const
{
    return m_nextHopDestination;
}

void NetDetect::SetNextHopDestination(const string& _nextHopDestination)
{
    m_nextHopDestination = _nextHopDestination;
    m_nextHopDestinationHasBeenSet = true;
}

bool NetDetect::NextHopDestinationHasBeenSet() const
{
    return m_nextHopDestinationHasBeenSet;
}

string NetDetect::GetNextHopName() const
{
    return m_nextHopName;
}

void NetDetect::SetNextHopName(const string& _nextHopName)
{
    m_nextHopName = _nextHopName;
    m_nextHopNameHasBeenSet = true;
}

bool NetDetect::NextHopNameHasBeenSet() const
{
    return m_nextHopNameHasBeenSet;
}

string NetDetect::GetNetDetectDescription() const
{
    return m_netDetectDescription;
}

void NetDetect::SetNetDetectDescription(const string& _netDetectDescription)
{
    m_netDetectDescription = _netDetectDescription;
    m_netDetectDescriptionHasBeenSet = true;
}

bool NetDetect::NetDetectDescriptionHasBeenSet() const
{
    return m_netDetectDescriptionHasBeenSet;
}

string NetDetect::GetCreateTime() const
{
    return m_createTime;
}

void NetDetect::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NetDetect::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<Tag> NetDetect::GetTagSet() const
{
    return m_tagSet;
}

void NetDetect::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool NetDetect::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

