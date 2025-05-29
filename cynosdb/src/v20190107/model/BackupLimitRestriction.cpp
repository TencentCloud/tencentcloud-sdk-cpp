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

#include <tencentcloud/cynosdb/v20190107/model/BackupLimitRestriction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

BackupLimitRestriction::BackupLimitRestriction() :
    m_limitTypeHasBeenSet(false),
    m_vpcComparisonSymbolHasBeenSet(false),
    m_ipComparisonSymbolHasBeenSet(false),
    m_limitVpcsHasBeenSet(false),
    m_limitIpsHasBeenSet(false)
{
}

CoreInternalOutcome BackupLimitRestriction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LimitType") && !value["LimitType"].IsNull())
    {
        if (!value["LimitType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLimitRestriction.LimitType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_limitType = string(value["LimitType"].GetString());
        m_limitTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcComparisonSymbol") && !value["VpcComparisonSymbol"].IsNull())
    {
        if (!value["VpcComparisonSymbol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLimitRestriction.VpcComparisonSymbol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcComparisonSymbol = string(value["VpcComparisonSymbol"].GetString());
        m_vpcComparisonSymbolHasBeenSet = true;
    }

    if (value.HasMember("IpComparisonSymbol") && !value["IpComparisonSymbol"].IsNull())
    {
        if (!value["IpComparisonSymbol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLimitRestriction.IpComparisonSymbol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipComparisonSymbol = string(value["IpComparisonSymbol"].GetString());
        m_ipComparisonSymbolHasBeenSet = true;
    }

    if (value.HasMember("LimitVpcs") && !value["LimitVpcs"].IsNull())
    {
        if (!value["LimitVpcs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupLimitRestriction.LimitVpcs` is not array type"));

        const rapidjson::Value &tmpValue = value["LimitVpcs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupLimitVpcItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_limitVpcs.push_back(item);
        }
        m_limitVpcsHasBeenSet = true;
    }

    if (value.HasMember("LimitIps") && !value["LimitIps"].IsNull())
    {
        if (!value["LimitIps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupLimitRestriction.LimitIps` is not array type"));

        const rapidjson::Value &tmpValue = value["LimitIps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_limitIps.push_back((*itr).GetString());
        }
        m_limitIpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupLimitRestriction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_limitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_limitType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcComparisonSymbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcComparisonSymbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcComparisonSymbol.c_str(), allocator).Move(), allocator);
    }

    if (m_ipComparisonSymbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpComparisonSymbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipComparisonSymbol.c_str(), allocator).Move(), allocator);
    }

    if (m_limitVpcsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitVpcs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limitVpcs.begin(); itr != m_limitVpcs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_limitIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitIps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_limitIps.begin(); itr != m_limitIps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string BackupLimitRestriction::GetLimitType() const
{
    return m_limitType;
}

void BackupLimitRestriction::SetLimitType(const string& _limitType)
{
    m_limitType = _limitType;
    m_limitTypeHasBeenSet = true;
}

bool BackupLimitRestriction::LimitTypeHasBeenSet() const
{
    return m_limitTypeHasBeenSet;
}

string BackupLimitRestriction::GetVpcComparisonSymbol() const
{
    return m_vpcComparisonSymbol;
}

void BackupLimitRestriction::SetVpcComparisonSymbol(const string& _vpcComparisonSymbol)
{
    m_vpcComparisonSymbol = _vpcComparisonSymbol;
    m_vpcComparisonSymbolHasBeenSet = true;
}

bool BackupLimitRestriction::VpcComparisonSymbolHasBeenSet() const
{
    return m_vpcComparisonSymbolHasBeenSet;
}

string BackupLimitRestriction::GetIpComparisonSymbol() const
{
    return m_ipComparisonSymbol;
}

void BackupLimitRestriction::SetIpComparisonSymbol(const string& _ipComparisonSymbol)
{
    m_ipComparisonSymbol = _ipComparisonSymbol;
    m_ipComparisonSymbolHasBeenSet = true;
}

bool BackupLimitRestriction::IpComparisonSymbolHasBeenSet() const
{
    return m_ipComparisonSymbolHasBeenSet;
}

vector<BackupLimitVpcItem> BackupLimitRestriction::GetLimitVpcs() const
{
    return m_limitVpcs;
}

void BackupLimitRestriction::SetLimitVpcs(const vector<BackupLimitVpcItem>& _limitVpcs)
{
    m_limitVpcs = _limitVpcs;
    m_limitVpcsHasBeenSet = true;
}

bool BackupLimitRestriction::LimitVpcsHasBeenSet() const
{
    return m_limitVpcsHasBeenSet;
}

vector<string> BackupLimitRestriction::GetLimitIps() const
{
    return m_limitIps;
}

void BackupLimitRestriction::SetLimitIps(const vector<string>& _limitIps)
{
    m_limitIps = _limitIps;
    m_limitIpsHasBeenSet = true;
}

bool BackupLimitRestriction::LimitIpsHasBeenSet() const
{
    return m_limitIpsHasBeenSet;
}

