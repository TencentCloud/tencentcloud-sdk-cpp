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

#include <tencentcloud/vpc/v20170312/model/TrafficMirror.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

TrafficMirror::TrafficMirror() :
    m_vpcIdHasBeenSet(false),
    m_trafficMirrorIdHasBeenSet(false),
    m_trafficMirrorNameHasBeenSet(false),
    m_trafficMirrorDescribeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_collectorSrcsHasBeenSet(false),
    m_natIdHasBeenSet(false),
    m_collectorNormalFiltersHasBeenSet(false),
    m_collectorTargetHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_targetInfoHasBeenSet(false)
{
}

CoreInternalOutcome TrafficMirror::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("TrafficMirrorId") && !value["TrafficMirrorId"].IsNull())
    {
        if (!value["TrafficMirrorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.TrafficMirrorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMirrorId = string(value["TrafficMirrorId"].GetString());
        m_trafficMirrorIdHasBeenSet = true;
    }

    if (value.HasMember("TrafficMirrorName") && !value["TrafficMirrorName"].IsNull())
    {
        if (!value["TrafficMirrorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.TrafficMirrorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMirrorName = string(value["TrafficMirrorName"].GetString());
        m_trafficMirrorNameHasBeenSet = true;
    }

    if (value.HasMember("TrafficMirrorDescribe") && !value["TrafficMirrorDescribe"].IsNull())
    {
        if (!value["TrafficMirrorDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.TrafficMirrorDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMirrorDescribe = string(value["TrafficMirrorDescribe"].GetString());
        m_trafficMirrorDescribeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.Direction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_direction = string(value["Direction"].GetString());
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("CollectorSrcs") && !value["CollectorSrcs"].IsNull())
    {
        if (!value["CollectorSrcs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.CollectorSrcs` is not array type"));

        const rapidjson::Value &tmpValue = value["CollectorSrcs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_collectorSrcs.push_back((*itr).GetString());
        }
        m_collectorSrcsHasBeenSet = true;
    }

    if (value.HasMember("NatId") && !value["NatId"].IsNull())
    {
        if (!value["NatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.NatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natId = string(value["NatId"].GetString());
        m_natIdHasBeenSet = true;
    }

    if (value.HasMember("CollectorNormalFilters") && !value["CollectorNormalFilters"].IsNull())
    {
        if (!value["CollectorNormalFilters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.CollectorNormalFilters` is not array type"));

        const rapidjson::Value &tmpValue = value["CollectorNormalFilters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrafficMirrorFilter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_collectorNormalFilters.push_back(item);
        }
        m_collectorNormalFiltersHasBeenSet = true;
    }

    if (value.HasMember("CollectorTarget") && !value["CollectorTarget"].IsNull())
    {
        if (!value["CollectorTarget"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.CollectorTarget` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_collectorTarget.Deserialize(value["CollectorTarget"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_collectorTargetHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("TargetInfo") && !value["TargetInfo"].IsNull())
    {
        if (!value["TargetInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficMirror.TargetInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrafficMirrorTargetResourceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetInfo.push_back(item);
        }
        m_targetInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficMirror::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficMirrorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficMirrorId.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficMirrorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficMirrorName.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficMirrorDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficMirrorDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorSrcsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorSrcs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_collectorSrcs.begin(); itr != m_collectorSrcs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_natIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorNormalFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorNormalFilters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_collectorNormalFilters.begin(); itr != m_collectorNormalFilters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_collectorTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_collectorTarget.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetInfo.begin(); itr != m_targetInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TrafficMirror::GetVpcId() const
{
    return m_vpcId;
}

void TrafficMirror::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool TrafficMirror::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string TrafficMirror::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void TrafficMirror::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool TrafficMirror::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

string TrafficMirror::GetTrafficMirrorName() const
{
    return m_trafficMirrorName;
}

void TrafficMirror::SetTrafficMirrorName(const string& _trafficMirrorName)
{
    m_trafficMirrorName = _trafficMirrorName;
    m_trafficMirrorNameHasBeenSet = true;
}

bool TrafficMirror::TrafficMirrorNameHasBeenSet() const
{
    return m_trafficMirrorNameHasBeenSet;
}

string TrafficMirror::GetTrafficMirrorDescribe() const
{
    return m_trafficMirrorDescribe;
}

void TrafficMirror::SetTrafficMirrorDescribe(const string& _trafficMirrorDescribe)
{
    m_trafficMirrorDescribe = _trafficMirrorDescribe;
    m_trafficMirrorDescribeHasBeenSet = true;
}

bool TrafficMirror::TrafficMirrorDescribeHasBeenSet() const
{
    return m_trafficMirrorDescribeHasBeenSet;
}

string TrafficMirror::GetState() const
{
    return m_state;
}

void TrafficMirror::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool TrafficMirror::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string TrafficMirror::GetDirection() const
{
    return m_direction;
}

void TrafficMirror::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool TrafficMirror::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

vector<string> TrafficMirror::GetCollectorSrcs() const
{
    return m_collectorSrcs;
}

void TrafficMirror::SetCollectorSrcs(const vector<string>& _collectorSrcs)
{
    m_collectorSrcs = _collectorSrcs;
    m_collectorSrcsHasBeenSet = true;
}

bool TrafficMirror::CollectorSrcsHasBeenSet() const
{
    return m_collectorSrcsHasBeenSet;
}

string TrafficMirror::GetNatId() const
{
    return m_natId;
}

void TrafficMirror::SetNatId(const string& _natId)
{
    m_natId = _natId;
    m_natIdHasBeenSet = true;
}

bool TrafficMirror::NatIdHasBeenSet() const
{
    return m_natIdHasBeenSet;
}

vector<TrafficMirrorFilter> TrafficMirror::GetCollectorNormalFilters() const
{
    return m_collectorNormalFilters;
}

void TrafficMirror::SetCollectorNormalFilters(const vector<TrafficMirrorFilter>& _collectorNormalFilters)
{
    m_collectorNormalFilters = _collectorNormalFilters;
    m_collectorNormalFiltersHasBeenSet = true;
}

bool TrafficMirror::CollectorNormalFiltersHasBeenSet() const
{
    return m_collectorNormalFiltersHasBeenSet;
}

TrafficMirrorTarget TrafficMirror::GetCollectorTarget() const
{
    return m_collectorTarget;
}

void TrafficMirror::SetCollectorTarget(const TrafficMirrorTarget& _collectorTarget)
{
    m_collectorTarget = _collectorTarget;
    m_collectorTargetHasBeenSet = true;
}

bool TrafficMirror::CollectorTargetHasBeenSet() const
{
    return m_collectorTargetHasBeenSet;
}

string TrafficMirror::GetCreateTime() const
{
    return m_createTime;
}

void TrafficMirror::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TrafficMirror::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TrafficMirror::GetType() const
{
    return m_type;
}

void TrafficMirror::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TrafficMirror::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TrafficMirror::GetSubnetId() const
{
    return m_subnetId;
}

void TrafficMirror::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool TrafficMirror::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<TrafficMirrorTargetResourceInfo> TrafficMirror::GetTargetInfo() const
{
    return m_targetInfo;
}

void TrafficMirror::SetTargetInfo(const vector<TrafficMirrorTargetResourceInfo>& _targetInfo)
{
    m_targetInfo = _targetInfo;
    m_targetInfoHasBeenSet = true;
}

bool TrafficMirror::TargetInfoHasBeenSet() const
{
    return m_targetInfoHasBeenSet;
}

