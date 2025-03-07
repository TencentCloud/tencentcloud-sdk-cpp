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

#include <tencentcloud/gwlb/v20240906/model/GatewayLoadBalancer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

GatewayLoadBalancer::GatewayLoadBalancer() :
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vipsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_targetGroupIdHasBeenSet(false),
    m_deleteProtectHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_isolationHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_operateProtectHasBeenSet(false)
{
}

CoreInternalOutcome GatewayLoadBalancer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerName") && !value["LoadBalancerName"].IsNull())
    {
        if (!value["LoadBalancerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.LoadBalancerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerName = string(value["LoadBalancerName"].GetString());
        m_loadBalancerNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Vips") && !value["Vips"].IsNull())
    {
        if (!value["Vips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.Vips` is not array type"));

        const rapidjson::Value &tmpValue = value["Vips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vips.push_back((*itr).GetString());
        }
        m_vipsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TargetGroupId") && !value["TargetGroupId"].IsNull())
    {
        if (!value["TargetGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.TargetGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetGroupId = string(value["TargetGroupId"].GetString());
        m_targetGroupIdHasBeenSet = true;
    }

    if (value.HasMember("DeleteProtect") && !value["DeleteProtect"].IsNull())
    {
        if (!value["DeleteProtect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.DeleteProtect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteProtect = value["DeleteProtect"].GetBool();
        m_deleteProtectHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.Tags` is not array type"));

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

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("Isolation") && !value["Isolation"].IsNull())
    {
        if (!value["Isolation"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.Isolation` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isolation = value["Isolation"].GetUint64();
        m_isolationHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.IsolatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = string(value["IsolatedTime"].GetString());
        m_isolatedTimeHasBeenSet = true;
    }

    if (value.HasMember("OperateProtect") && !value["OperateProtect"].IsNull())
    {
        if (!value["OperateProtect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayLoadBalancer.OperateProtect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_operateProtect = value["OperateProtect"].GetBool();
        m_operateProtectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayLoadBalancer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_vipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vips.begin(); itr != m_vips.end(); ++itr)
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

    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteProtect, allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_isolationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isolation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolation, allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operateProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateProtect, allocator);
    }

}


string GatewayLoadBalancer::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void GatewayLoadBalancer::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool GatewayLoadBalancer::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string GatewayLoadBalancer::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void GatewayLoadBalancer::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool GatewayLoadBalancer::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

string GatewayLoadBalancer::GetVpcId() const
{
    return m_vpcId;
}

void GatewayLoadBalancer::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool GatewayLoadBalancer::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string GatewayLoadBalancer::GetSubnetId() const
{
    return m_subnetId;
}

void GatewayLoadBalancer::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool GatewayLoadBalancer::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<string> GatewayLoadBalancer::GetVips() const
{
    return m_vips;
}

void GatewayLoadBalancer::SetVips(const vector<string>& _vips)
{
    m_vips = _vips;
    m_vipsHasBeenSet = true;
}

bool GatewayLoadBalancer::VipsHasBeenSet() const
{
    return m_vipsHasBeenSet;
}

uint64_t GatewayLoadBalancer::GetStatus() const
{
    return m_status;
}

void GatewayLoadBalancer::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GatewayLoadBalancer::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GatewayLoadBalancer::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void GatewayLoadBalancer::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool GatewayLoadBalancer::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

bool GatewayLoadBalancer::GetDeleteProtect() const
{
    return m_deleteProtect;
}

void GatewayLoadBalancer::SetDeleteProtect(const bool& _deleteProtect)
{
    m_deleteProtect = _deleteProtect;
    m_deleteProtectHasBeenSet = true;
}

bool GatewayLoadBalancer::DeleteProtectHasBeenSet() const
{
    return m_deleteProtectHasBeenSet;
}

vector<TagInfo> GatewayLoadBalancer::GetTags() const
{
    return m_tags;
}

void GatewayLoadBalancer::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool GatewayLoadBalancer::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string GatewayLoadBalancer::GetCreateTime() const
{
    return m_createTime;
}

void GatewayLoadBalancer::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GatewayLoadBalancer::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GatewayLoadBalancer::GetChargeType() const
{
    return m_chargeType;
}

void GatewayLoadBalancer::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool GatewayLoadBalancer::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

uint64_t GatewayLoadBalancer::GetIsolation() const
{
    return m_isolation;
}

void GatewayLoadBalancer::SetIsolation(const uint64_t& _isolation)
{
    m_isolation = _isolation;
    m_isolationHasBeenSet = true;
}

bool GatewayLoadBalancer::IsolationHasBeenSet() const
{
    return m_isolationHasBeenSet;
}

string GatewayLoadBalancer::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void GatewayLoadBalancer::SetIsolatedTime(const string& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool GatewayLoadBalancer::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

bool GatewayLoadBalancer::GetOperateProtect() const
{
    return m_operateProtect;
}

void GatewayLoadBalancer::SetOperateProtect(const bool& _operateProtect)
{
    m_operateProtect = _operateProtect;
    m_operateProtectHasBeenSet = true;
}

bool GatewayLoadBalancer::OperateProtectHasBeenSet() const
{
    return m_operateProtectHasBeenSet;
}

