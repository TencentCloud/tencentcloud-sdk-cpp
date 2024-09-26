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

#include <tencentcloud/vpc/v20170312/model/EndPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

EndPoint::EndPoint() :
    m_endPointIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_endPointOwnerHasBeenSet(false),
    m_endPointNameHasBeenSet(false),
    m_serviceVpcIdHasBeenSet(false),
    m_serviceVipHasBeenSet(false),
    m_endPointServiceIdHasBeenSet(false),
    m_endPointVipHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_groupSetHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_cdcIdHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome EndPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndPointId") && !value["EndPointId"].IsNull())
    {
        if (!value["EndPointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.EndPointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointId = string(value["EndPointId"].GetString());
        m_endPointIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("EndPointOwner") && !value["EndPointOwner"].IsNull())
    {
        if (!value["EndPointOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.EndPointOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointOwner = string(value["EndPointOwner"].GetString());
        m_endPointOwnerHasBeenSet = true;
    }

    if (value.HasMember("EndPointName") && !value["EndPointName"].IsNull())
    {
        if (!value["EndPointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.EndPointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointName = string(value["EndPointName"].GetString());
        m_endPointNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceVpcId") && !value["ServiceVpcId"].IsNull())
    {
        if (!value["ServiceVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.ServiceVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceVpcId = string(value["ServiceVpcId"].GetString());
        m_serviceVpcIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceVip") && !value["ServiceVip"].IsNull())
    {
        if (!value["ServiceVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.ServiceVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceVip = string(value["ServiceVip"].GetString());
        m_serviceVipHasBeenSet = true;
    }

    if (value.HasMember("EndPointServiceId") && !value["EndPointServiceId"].IsNull())
    {
        if (!value["EndPointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.EndPointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointServiceId = string(value["EndPointServiceId"].GetString());
        m_endPointServiceIdHasBeenSet = true;
    }

    if (value.HasMember("EndPointVip") && !value["EndPointVip"].IsNull())
    {
        if (!value["EndPointVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.EndPointVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointVip = string(value["EndPointVip"].GetString());
        m_endPointVipHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupSet") && !value["GroupSet"].IsNull())
    {
        if (!value["GroupSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndPoint.GroupSet` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupSet.push_back((*itr).GetString());
        }
        m_groupSetHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("CdcId") && !value["CdcId"].IsNull())
    {
        if (!value["CdcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPoint.CdcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcId = string(value["CdcId"].GetString());
        m_cdcIdHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndPoint.TagSet` is not array type"));

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

void EndPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointId.c_str(), allocator).Move(), allocator);
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

    if (m_endPointOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceVip.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointVip.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_groupSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupSet.begin(); itr != m_groupSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
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


string EndPoint::GetEndPointId() const
{
    return m_endPointId;
}

void EndPoint::SetEndPointId(const string& _endPointId)
{
    m_endPointId = _endPointId;
    m_endPointIdHasBeenSet = true;
}

bool EndPoint::EndPointIdHasBeenSet() const
{
    return m_endPointIdHasBeenSet;
}

string EndPoint::GetVpcId() const
{
    return m_vpcId;
}

void EndPoint::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EndPoint::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string EndPoint::GetSubnetId() const
{
    return m_subnetId;
}

void EndPoint::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool EndPoint::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string EndPoint::GetEndPointOwner() const
{
    return m_endPointOwner;
}

void EndPoint::SetEndPointOwner(const string& _endPointOwner)
{
    m_endPointOwner = _endPointOwner;
    m_endPointOwnerHasBeenSet = true;
}

bool EndPoint::EndPointOwnerHasBeenSet() const
{
    return m_endPointOwnerHasBeenSet;
}

string EndPoint::GetEndPointName() const
{
    return m_endPointName;
}

void EndPoint::SetEndPointName(const string& _endPointName)
{
    m_endPointName = _endPointName;
    m_endPointNameHasBeenSet = true;
}

bool EndPoint::EndPointNameHasBeenSet() const
{
    return m_endPointNameHasBeenSet;
}

string EndPoint::GetServiceVpcId() const
{
    return m_serviceVpcId;
}

void EndPoint::SetServiceVpcId(const string& _serviceVpcId)
{
    m_serviceVpcId = _serviceVpcId;
    m_serviceVpcIdHasBeenSet = true;
}

bool EndPoint::ServiceVpcIdHasBeenSet() const
{
    return m_serviceVpcIdHasBeenSet;
}

string EndPoint::GetServiceVip() const
{
    return m_serviceVip;
}

void EndPoint::SetServiceVip(const string& _serviceVip)
{
    m_serviceVip = _serviceVip;
    m_serviceVipHasBeenSet = true;
}

bool EndPoint::ServiceVipHasBeenSet() const
{
    return m_serviceVipHasBeenSet;
}

string EndPoint::GetEndPointServiceId() const
{
    return m_endPointServiceId;
}

void EndPoint::SetEndPointServiceId(const string& _endPointServiceId)
{
    m_endPointServiceId = _endPointServiceId;
    m_endPointServiceIdHasBeenSet = true;
}

bool EndPoint::EndPointServiceIdHasBeenSet() const
{
    return m_endPointServiceIdHasBeenSet;
}

string EndPoint::GetEndPointVip() const
{
    return m_endPointVip;
}

void EndPoint::SetEndPointVip(const string& _endPointVip)
{
    m_endPointVip = _endPointVip;
    m_endPointVipHasBeenSet = true;
}

bool EndPoint::EndPointVipHasBeenSet() const
{
    return m_endPointVipHasBeenSet;
}

string EndPoint::GetState() const
{
    return m_state;
}

void EndPoint::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool EndPoint::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string EndPoint::GetCreateTime() const
{
    return m_createTime;
}

void EndPoint::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EndPoint::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> EndPoint::GetGroupSet() const
{
    return m_groupSet;
}

void EndPoint::SetGroupSet(const vector<string>& _groupSet)
{
    m_groupSet = _groupSet;
    m_groupSetHasBeenSet = true;
}

bool EndPoint::GroupSetHasBeenSet() const
{
    return m_groupSetHasBeenSet;
}

string EndPoint::GetServiceName() const
{
    return m_serviceName;
}

void EndPoint::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool EndPoint::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string EndPoint::GetCdcId() const
{
    return m_cdcId;
}

void EndPoint::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool EndPoint::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

vector<Tag> EndPoint::GetTagSet() const
{
    return m_tagSet;
}

void EndPoint::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool EndPoint::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

