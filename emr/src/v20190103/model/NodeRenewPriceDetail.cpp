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

#include <tencentcloud/emr/v20190103/model/NodeRenewPriceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeRenewPriceDetail::NodeRenewPriceDetail() :
    m_chargeTypeHasBeenSet(false),
    m_emrResourceIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_originalCostHasBeenSet(false),
    m_discountCostHasBeenSet(false),
    m_renewPriceDetailsHasBeenSet(false)
{
}

CoreInternalOutcome NodeRenewPriceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRenewPriceDetail.ChargeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = value["ChargeType"].GetInt64();
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("EmrResourceId") && !value["EmrResourceId"].IsNull())
    {
        if (!value["EmrResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRenewPriceDetail.EmrResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emrResourceId = string(value["EmrResourceId"].GetString());
        m_emrResourceIdHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRenewPriceDetail.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRenewPriceDetail.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRenewPriceDetail.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("OriginalCost") && !value["OriginalCost"].IsNull())
    {
        if (!value["OriginalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRenewPriceDetail.OriginalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = value["OriginalCost"].GetDouble();
        m_originalCostHasBeenSet = true;
    }

    if (value.HasMember("DiscountCost") && !value["DiscountCost"].IsNull())
    {
        if (!value["DiscountCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRenewPriceDetail.DiscountCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountCost = value["DiscountCost"].GetDouble();
        m_discountCostHasBeenSet = true;
    }

    if (value.HasMember("RenewPriceDetails") && !value["RenewPriceDetails"].IsNull())
    {
        if (!value["RenewPriceDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeRenewPriceDetail.RenewPriceDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["RenewPriceDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RenewPriceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_renewPriceDetails.push_back(item);
        }
        m_renewPriceDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeRenewPriceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeType, allocator);
    }

    if (m_emrResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmrResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emrResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_originalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalCost, allocator);
    }

    if (m_discountCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountCost, allocator);
    }

    if (m_renewPriceDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewPriceDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_renewPriceDetails.begin(); itr != m_renewPriceDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t NodeRenewPriceDetail::GetChargeType() const
{
    return m_chargeType;
}

void NodeRenewPriceDetail::SetChargeType(const int64_t& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool NodeRenewPriceDetail::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string NodeRenewPriceDetail::GetEmrResourceId() const
{
    return m_emrResourceId;
}

void NodeRenewPriceDetail::SetEmrResourceId(const string& _emrResourceId)
{
    m_emrResourceId = _emrResourceId;
    m_emrResourceIdHasBeenSet = true;
}

bool NodeRenewPriceDetail::EmrResourceIdHasBeenSet() const
{
    return m_emrResourceIdHasBeenSet;
}

string NodeRenewPriceDetail::GetNodeType() const
{
    return m_nodeType;
}

void NodeRenewPriceDetail::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool NodeRenewPriceDetail::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string NodeRenewPriceDetail::GetIp() const
{
    return m_ip;
}

void NodeRenewPriceDetail::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool NodeRenewPriceDetail::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string NodeRenewPriceDetail::GetExpireTime() const
{
    return m_expireTime;
}

void NodeRenewPriceDetail::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool NodeRenewPriceDetail::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

double NodeRenewPriceDetail::GetOriginalCost() const
{
    return m_originalCost;
}

void NodeRenewPriceDetail::SetOriginalCost(const double& _originalCost)
{
    m_originalCost = _originalCost;
    m_originalCostHasBeenSet = true;
}

bool NodeRenewPriceDetail::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

double NodeRenewPriceDetail::GetDiscountCost() const
{
    return m_discountCost;
}

void NodeRenewPriceDetail::SetDiscountCost(const double& _discountCost)
{
    m_discountCost = _discountCost;
    m_discountCostHasBeenSet = true;
}

bool NodeRenewPriceDetail::DiscountCostHasBeenSet() const
{
    return m_discountCostHasBeenSet;
}

vector<RenewPriceDetail> NodeRenewPriceDetail::GetRenewPriceDetails() const
{
    return m_renewPriceDetails;
}

void NodeRenewPriceDetail::SetRenewPriceDetails(const vector<RenewPriceDetail>& _renewPriceDetails)
{
    m_renewPriceDetails = _renewPriceDetails;
    m_renewPriceDetailsHasBeenSet = true;
}

bool NodeRenewPriceDetail::RenewPriceDetailsHasBeenSet() const
{
    return m_renewPriceDetailsHasBeenSet;
}

