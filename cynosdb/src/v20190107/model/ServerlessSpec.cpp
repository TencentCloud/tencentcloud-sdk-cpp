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

#include <tencentcloud/cynosdb/v20190107/model/ServerlessSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ServerlessSpec::ServerlessSpec() :
    m_minCpuHasBeenSet(false),
    m_maxCpuHasBeenSet(false),
    m_maxStorageSizeHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_hasStockHasBeenSet(false),
    m_stockCountHasBeenSet(false),
    m_zoneStockInfosHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinCpu") && !value["MinCpu"].IsNull())
    {
        if (!value["MinCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpec.MinCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minCpu = value["MinCpu"].GetDouble();
        m_minCpuHasBeenSet = true;
    }

    if (value.HasMember("MaxCpu") && !value["MaxCpu"].IsNull())
    {
        if (!value["MaxCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpec.MaxCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxCpu = value["MaxCpu"].GetDouble();
        m_maxCpuHasBeenSet = true;
    }

    if (value.HasMember("MaxStorageSize") && !value["MaxStorageSize"].IsNull())
    {
        if (!value["MaxStorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpec.MaxStorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorageSize = value["MaxStorageSize"].GetInt64();
        m_maxStorageSizeHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpec.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("HasStock") && !value["HasStock"].IsNull())
    {
        if (!value["HasStock"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpec.HasStock` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasStock = value["HasStock"].GetBool();
        m_hasStockHasBeenSet = true;
    }

    if (value.HasMember("StockCount") && !value["StockCount"].IsNull())
    {
        if (!value["StockCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessSpec.StockCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stockCount = value["StockCount"].GetInt64();
        m_stockCountHasBeenSet = true;
    }

    if (value.HasMember("ZoneStockInfos") && !value["ZoneStockInfos"].IsNull())
    {
        if (!value["ZoneStockInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerlessSpec.ZoneStockInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneStockInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServerlessZoneStockInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zoneStockInfos.push_back(item);
        }
        m_zoneStockInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minCpu, allocator);
    }

    if (m_maxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCpu, allocator);
    }

    if (m_maxStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorageSize, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_hasStockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasStock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasStock, allocator);
    }

    if (m_stockCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StockCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stockCount, allocator);
    }

    if (m_zoneStockInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneStockInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneStockInfos.begin(); itr != m_zoneStockInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double ServerlessSpec::GetMinCpu() const
{
    return m_minCpu;
}

void ServerlessSpec::SetMinCpu(const double& _minCpu)
{
    m_minCpu = _minCpu;
    m_minCpuHasBeenSet = true;
}

bool ServerlessSpec::MinCpuHasBeenSet() const
{
    return m_minCpuHasBeenSet;
}

double ServerlessSpec::GetMaxCpu() const
{
    return m_maxCpu;
}

void ServerlessSpec::SetMaxCpu(const double& _maxCpu)
{
    m_maxCpu = _maxCpu;
    m_maxCpuHasBeenSet = true;
}

bool ServerlessSpec::MaxCpuHasBeenSet() const
{
    return m_maxCpuHasBeenSet;
}

int64_t ServerlessSpec::GetMaxStorageSize() const
{
    return m_maxStorageSize;
}

void ServerlessSpec::SetMaxStorageSize(const int64_t& _maxStorageSize)
{
    m_maxStorageSize = _maxStorageSize;
    m_maxStorageSizeHasBeenSet = true;
}

bool ServerlessSpec::MaxStorageSizeHasBeenSet() const
{
    return m_maxStorageSizeHasBeenSet;
}

int64_t ServerlessSpec::GetIsDefault() const
{
    return m_isDefault;
}

void ServerlessSpec::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool ServerlessSpec::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

bool ServerlessSpec::GetHasStock() const
{
    return m_hasStock;
}

void ServerlessSpec::SetHasStock(const bool& _hasStock)
{
    m_hasStock = _hasStock;
    m_hasStockHasBeenSet = true;
}

bool ServerlessSpec::HasStockHasBeenSet() const
{
    return m_hasStockHasBeenSet;
}

int64_t ServerlessSpec::GetStockCount() const
{
    return m_stockCount;
}

void ServerlessSpec::SetStockCount(const int64_t& _stockCount)
{
    m_stockCount = _stockCount;
    m_stockCountHasBeenSet = true;
}

bool ServerlessSpec::StockCountHasBeenSet() const
{
    return m_stockCountHasBeenSet;
}

vector<ServerlessZoneStockInfo> ServerlessSpec::GetZoneStockInfos() const
{
    return m_zoneStockInfos;
}

void ServerlessSpec::SetZoneStockInfos(const vector<ServerlessZoneStockInfo>& _zoneStockInfos)
{
    m_zoneStockInfos = _zoneStockInfos;
    m_zoneStockInfosHasBeenSet = true;
}

bool ServerlessSpec::ZoneStockInfosHasBeenSet() const
{
    return m_zoneStockInfosHasBeenSet;
}

