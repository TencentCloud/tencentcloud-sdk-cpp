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

#include <tencentcloud/vpc/v20170312/model/CCN.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CCN::CCN() :
    m_ccnIdHasBeenSet(false),
    m_ccnNameHasBeenSet(false),
    m_ccnDescriptionHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_qosLevelHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_bandwidthLimitTypeHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_routePriorityFlagHasBeenSet(false),
    m_routeTableCountHasBeenSet(false),
    m_routeTableFlagHasBeenSet(false)
{
}

CoreInternalOutcome CCN::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCN.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("CcnName") && !value["CcnName"].IsNull())
    {
        if (!value["CcnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCN.CcnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnName = string(value["CcnName"].GetString());
        m_ccnNameHasBeenSet = true;
    }

    if (value.HasMember("CcnDescription") && !value["CcnDescription"].IsNull())
    {
        if (!value["CcnDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCN.CcnDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnDescription = string(value["CcnDescription"].GetString());
        m_ccnDescriptionHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCN.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCN.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCN.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("QosLevel") && !value["QosLevel"].IsNull())
    {
        if (!value["QosLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCN.QosLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qosLevel = string(value["QosLevel"].GetString());
        m_qosLevelHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCN.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("BandwidthLimitType") && !value["BandwidthLimitType"].IsNull())
    {
        if (!value["BandwidthLimitType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCN.BandwidthLimitType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthLimitType = string(value["BandwidthLimitType"].GetString());
        m_bandwidthLimitTypeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CCN.TagSet` is not array type"));

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

    if (value.HasMember("RoutePriorityFlag") && !value["RoutePriorityFlag"].IsNull())
    {
        if (!value["RoutePriorityFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CCN.RoutePriorityFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_routePriorityFlag = value["RoutePriorityFlag"].GetBool();
        m_routePriorityFlagHasBeenSet = true;
    }

    if (value.HasMember("RouteTableCount") && !value["RouteTableCount"].IsNull())
    {
        if (!value["RouteTableCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCN.RouteTableCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableCount = value["RouteTableCount"].GetUint64();
        m_routeTableCountHasBeenSet = true;
    }

    if (value.HasMember("RouteTableFlag") && !value["RouteTableFlag"].IsNull())
    {
        if (!value["RouteTableFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CCN.RouteTableFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableFlag = value["RouteTableFlag"].GetBool();
        m_routeTableFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCN::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnName.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_qosLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qosLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthLimitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthLimitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bandwidthLimitType.c_str(), allocator).Move(), allocator);
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

    if (m_routePriorityFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePriorityFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routePriorityFlag, allocator);
    }

    if (m_routeTableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routeTableCount, allocator);
    }

    if (m_routeTableFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routeTableFlag, allocator);
    }

}


string CCN::GetCcnId() const
{
    return m_ccnId;
}

void CCN::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool CCN::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string CCN::GetCcnName() const
{
    return m_ccnName;
}

void CCN::SetCcnName(const string& _ccnName)
{
    m_ccnName = _ccnName;
    m_ccnNameHasBeenSet = true;
}

bool CCN::CcnNameHasBeenSet() const
{
    return m_ccnNameHasBeenSet;
}

string CCN::GetCcnDescription() const
{
    return m_ccnDescription;
}

void CCN::SetCcnDescription(const string& _ccnDescription)
{
    m_ccnDescription = _ccnDescription;
    m_ccnDescriptionHasBeenSet = true;
}

bool CCN::CcnDescriptionHasBeenSet() const
{
    return m_ccnDescriptionHasBeenSet;
}

uint64_t CCN::GetInstanceCount() const
{
    return m_instanceCount;
}

void CCN::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CCN::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string CCN::GetCreateTime() const
{
    return m_createTime;
}

void CCN::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CCN::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CCN::GetState() const
{
    return m_state;
}

void CCN::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CCN::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string CCN::GetQosLevel() const
{
    return m_qosLevel;
}

void CCN::SetQosLevel(const string& _qosLevel)
{
    m_qosLevel = _qosLevel;
    m_qosLevelHasBeenSet = true;
}

bool CCN::QosLevelHasBeenSet() const
{
    return m_qosLevelHasBeenSet;
}

string CCN::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CCN::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CCN::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string CCN::GetBandwidthLimitType() const
{
    return m_bandwidthLimitType;
}

void CCN::SetBandwidthLimitType(const string& _bandwidthLimitType)
{
    m_bandwidthLimitType = _bandwidthLimitType;
    m_bandwidthLimitTypeHasBeenSet = true;
}

bool CCN::BandwidthLimitTypeHasBeenSet() const
{
    return m_bandwidthLimitTypeHasBeenSet;
}

vector<Tag> CCN::GetTagSet() const
{
    return m_tagSet;
}

void CCN::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool CCN::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

bool CCN::GetRoutePriorityFlag() const
{
    return m_routePriorityFlag;
}

void CCN::SetRoutePriorityFlag(const bool& _routePriorityFlag)
{
    m_routePriorityFlag = _routePriorityFlag;
    m_routePriorityFlagHasBeenSet = true;
}

bool CCN::RoutePriorityFlagHasBeenSet() const
{
    return m_routePriorityFlagHasBeenSet;
}

uint64_t CCN::GetRouteTableCount() const
{
    return m_routeTableCount;
}

void CCN::SetRouteTableCount(const uint64_t& _routeTableCount)
{
    m_routeTableCount = _routeTableCount;
    m_routeTableCountHasBeenSet = true;
}

bool CCN::RouteTableCountHasBeenSet() const
{
    return m_routeTableCountHasBeenSet;
}

bool CCN::GetRouteTableFlag() const
{
    return m_routeTableFlag;
}

void CCN::SetRouteTableFlag(const bool& _routeTableFlag)
{
    m_routeTableFlag = _routeTableFlag;
    m_routeTableFlagHasBeenSet = true;
}

bool CCN::RouteTableFlagHasBeenSet() const
{
    return m_routeTableFlagHasBeenSet;
}

