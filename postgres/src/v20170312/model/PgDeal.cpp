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

#include <tencentcloud/postgres/v20170312/model/PgDeal.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

PgDeal::PgDeal() :
    m_dealNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_countHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_dBInstanceIdSetHasBeenSet(false)
{
}

CoreInternalOutcome PgDeal::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealName") && !value["DealName"].IsNull())
    {
        if (!value["DealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PgDeal.DealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealName = string(value["DealName"].GetString());
        m_dealNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PgDeal.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PgDeal.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PgDeal.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PgDeal.FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = value["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceIdSet") && !value["DBInstanceIdSet"].IsNull())
    {
        if (!value["DBInstanceIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PgDeal.DBInstanceIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DBInstanceIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dBInstanceIdSet.push_back((*itr).GetString());
        }
        m_dBInstanceIdSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PgDeal::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

    if (m_dBInstanceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dBInstanceIdSet.begin(); itr != m_dBInstanceIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string PgDeal::GetDealName() const
{
    return m_dealName;
}

void PgDeal::SetDealName(const string& _dealName)
{
    m_dealName = _dealName;
    m_dealNameHasBeenSet = true;
}

bool PgDeal::DealNameHasBeenSet() const
{
    return m_dealNameHasBeenSet;
}

string PgDeal::GetOwnerUin() const
{
    return m_ownerUin;
}

void PgDeal::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool PgDeal::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

int64_t PgDeal::GetCount() const
{
    return m_count;
}

void PgDeal::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool PgDeal::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t PgDeal::GetPayMode() const
{
    return m_payMode;
}

void PgDeal::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool PgDeal::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t PgDeal::GetFlowId() const
{
    return m_flowId;
}

void PgDeal::SetFlowId(const int64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool PgDeal::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<string> PgDeal::GetDBInstanceIdSet() const
{
    return m_dBInstanceIdSet;
}

void PgDeal::SetDBInstanceIdSet(const vector<string>& _dBInstanceIdSet)
{
    m_dBInstanceIdSet = _dBInstanceIdSet;
    m_dBInstanceIdSetHasBeenSet = true;
}

bool PgDeal::DBInstanceIdSetHasBeenSet() const
{
    return m_dBInstanceIdSetHasBeenSet;
}

