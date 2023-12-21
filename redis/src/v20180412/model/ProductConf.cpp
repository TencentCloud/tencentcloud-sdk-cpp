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

#include <tencentcloud/redis/v20180412/model/ProductConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

ProductConf::ProductConf() :
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_minBuyNumHasBeenSet(false),
    m_maxBuyNumHasBeenSet(false),
    m_saleoutHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_totalSizeHasBeenSet(false),
    m_shardSizeHasBeenSet(false),
    m_replicaNumHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_enableRepicaReadOnlyHasBeenSet(false),
    m_enableReplicaReadOnlyHasBeenSet(false)
{
}

CoreInternalOutcome ProductConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductConf.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductConf.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("MinBuyNum") && !value["MinBuyNum"].IsNull())
    {
        if (!value["MinBuyNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductConf.MinBuyNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minBuyNum = value["MinBuyNum"].GetInt64();
        m_minBuyNumHasBeenSet = true;
    }

    if (value.HasMember("MaxBuyNum") && !value["MaxBuyNum"].IsNull())
    {
        if (!value["MaxBuyNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductConf.MaxBuyNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBuyNum = value["MaxBuyNum"].GetInt64();
        m_maxBuyNumHasBeenSet = true;
    }

    if (value.HasMember("Saleout") && !value["Saleout"].IsNull())
    {
        if (!value["Saleout"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProductConf.Saleout` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_saleout = value["Saleout"].GetBool();
        m_saleoutHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductConf.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductConf.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductConf.TotalSize` is not array type"));

        const rapidjson::Value &tmpValue = value["TotalSize"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_totalSize.push_back((*itr).GetString());
        }
        m_totalSizeHasBeenSet = true;
    }

    if (value.HasMember("ShardSize") && !value["ShardSize"].IsNull())
    {
        if (!value["ShardSize"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductConf.ShardSize` is not array type"));

        const rapidjson::Value &tmpValue = value["ShardSize"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_shardSize.push_back((*itr).GetString());
        }
        m_shardSizeHasBeenSet = true;
    }

    if (value.HasMember("ReplicaNum") && !value["ReplicaNum"].IsNull())
    {
        if (!value["ReplicaNum"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductConf.ReplicaNum` is not array type"));

        const rapidjson::Value &tmpValue = value["ReplicaNum"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_replicaNum.push_back((*itr).GetString());
        }
        m_replicaNumHasBeenSet = true;
    }

    if (value.HasMember("ShardNum") && !value["ShardNum"].IsNull())
    {
        if (!value["ShardNum"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductConf.ShardNum` is not array type"));

        const rapidjson::Value &tmpValue = value["ShardNum"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_shardNum.push_back((*itr).GetString());
        }
        m_shardNumHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductConf.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("EnableRepicaReadOnly") && !value["EnableRepicaReadOnly"].IsNull())
    {
        if (!value["EnableRepicaReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProductConf.EnableRepicaReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRepicaReadOnly = value["EnableRepicaReadOnly"].GetBool();
        m_enableRepicaReadOnlyHasBeenSet = true;
    }

    if (value.HasMember("EnableReplicaReadOnly") && !value["EnableReplicaReadOnly"].IsNull())
    {
        if (!value["EnableReplicaReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProductConf.EnableReplicaReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableReplicaReadOnly = value["EnableReplicaReadOnly"].GetBool();
        m_enableReplicaReadOnlyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_minBuyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBuyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minBuyNum, allocator);
    }

    if (m_maxBuyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBuyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBuyNum, allocator);
    }

    if (m_saleoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Saleout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saleout, allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_totalSize.begin(); itr != m_totalSize.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_shardSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shardSize.begin(); itr != m_shardSize.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_replicaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_replicaNum.begin(); itr != m_replicaNum.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shardNum.begin(); itr != m_shardNum.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_enableRepicaReadOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRepicaReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRepicaReadOnly, allocator);
    }

    if (m_enableReplicaReadOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableReplicaReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableReplicaReadOnly, allocator);
    }

}


int64_t ProductConf::GetType() const
{
    return m_type;
}

void ProductConf::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ProductConf::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ProductConf::GetTypeName() const
{
    return m_typeName;
}

void ProductConf::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool ProductConf::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

int64_t ProductConf::GetMinBuyNum() const
{
    return m_minBuyNum;
}

void ProductConf::SetMinBuyNum(const int64_t& _minBuyNum)
{
    m_minBuyNum = _minBuyNum;
    m_minBuyNumHasBeenSet = true;
}

bool ProductConf::MinBuyNumHasBeenSet() const
{
    return m_minBuyNumHasBeenSet;
}

int64_t ProductConf::GetMaxBuyNum() const
{
    return m_maxBuyNum;
}

void ProductConf::SetMaxBuyNum(const int64_t& _maxBuyNum)
{
    m_maxBuyNum = _maxBuyNum;
    m_maxBuyNumHasBeenSet = true;
}

bool ProductConf::MaxBuyNumHasBeenSet() const
{
    return m_maxBuyNumHasBeenSet;
}

bool ProductConf::GetSaleout() const
{
    return m_saleout;
}

void ProductConf::SetSaleout(const bool& _saleout)
{
    m_saleout = _saleout;
    m_saleoutHasBeenSet = true;
}

bool ProductConf::SaleoutHasBeenSet() const
{
    return m_saleoutHasBeenSet;
}

string ProductConf::GetEngine() const
{
    return m_engine;
}

void ProductConf::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool ProductConf::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string ProductConf::GetVersion() const
{
    return m_version;
}

void ProductConf::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ProductConf::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

vector<string> ProductConf::GetTotalSize() const
{
    return m_totalSize;
}

void ProductConf::SetTotalSize(const vector<string>& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool ProductConf::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

vector<string> ProductConf::GetShardSize() const
{
    return m_shardSize;
}

void ProductConf::SetShardSize(const vector<string>& _shardSize)
{
    m_shardSize = _shardSize;
    m_shardSizeHasBeenSet = true;
}

bool ProductConf::ShardSizeHasBeenSet() const
{
    return m_shardSizeHasBeenSet;
}

vector<string> ProductConf::GetReplicaNum() const
{
    return m_replicaNum;
}

void ProductConf::SetReplicaNum(const vector<string>& _replicaNum)
{
    m_replicaNum = _replicaNum;
    m_replicaNumHasBeenSet = true;
}

bool ProductConf::ReplicaNumHasBeenSet() const
{
    return m_replicaNumHasBeenSet;
}

vector<string> ProductConf::GetShardNum() const
{
    return m_shardNum;
}

void ProductConf::SetShardNum(const vector<string>& _shardNum)
{
    m_shardNum = _shardNum;
    m_shardNumHasBeenSet = true;
}

bool ProductConf::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

string ProductConf::GetPayMode() const
{
    return m_payMode;
}

void ProductConf::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ProductConf::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

bool ProductConf::GetEnableRepicaReadOnly() const
{
    return m_enableRepicaReadOnly;
}

void ProductConf::SetEnableRepicaReadOnly(const bool& _enableRepicaReadOnly)
{
    m_enableRepicaReadOnly = _enableRepicaReadOnly;
    m_enableRepicaReadOnlyHasBeenSet = true;
}

bool ProductConf::EnableRepicaReadOnlyHasBeenSet() const
{
    return m_enableRepicaReadOnlyHasBeenSet;
}

bool ProductConf::GetEnableReplicaReadOnly() const
{
    return m_enableReplicaReadOnly;
}

void ProductConf::SetEnableReplicaReadOnly(const bool& _enableReplicaReadOnly)
{
    m_enableReplicaReadOnly = _enableReplicaReadOnly;
    m_enableReplicaReadOnlyHasBeenSet = true;
}

bool ProductConf::EnableReplicaReadOnlyHasBeenSet() const
{
    return m_enableReplicaReadOnlyHasBeenSet;
}

