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

#include <tencentcloud/redis/v20180412/model/ZoneCapacityConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

ZoneCapacityConf::ZoneCapacityConf() :
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_isSaleoutHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_netWorkTypeHasBeenSet(false),
    m_productSetHasBeenSet(false),
    m_oldZoneIdHasBeenSet(false)
{
}

CoreInternalOutcome ZoneCapacityConf::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneCapacityConf.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ZoneCapacityConf.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("IsSaleout") && !value["IsSaleout"].IsNull())
    {
        if (!value["IsSaleout"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ZoneCapacityConf.IsSaleout` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSaleout = value["IsSaleout"].GetBool();
        m_isSaleoutHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ZoneCapacityConf.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("NetWorkType") && !value["NetWorkType"].IsNull())
    {
        if (!value["NetWorkType"].IsArray())
            return CoreInternalOutcome(Error("response `ZoneCapacityConf.NetWorkType` is not array type"));

        const Value &tmpValue = value["NetWorkType"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_netWorkType.push_back((*itr).GetString());
        }
        m_netWorkTypeHasBeenSet = true;
    }

    if (value.HasMember("ProductSet") && !value["ProductSet"].IsNull())
    {
        if (!value["ProductSet"].IsArray())
            return CoreInternalOutcome(Error("response `ZoneCapacityConf.ProductSet` is not array type"));

        const Value &tmpValue = value["ProductSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProductConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_productSet.push_back(item);
        }
        m_productSetHasBeenSet = true;
    }

    if (value.HasMember("OldZoneId") && !value["OldZoneId"].IsNull())
    {
        if (!value["OldZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ZoneCapacityConf.OldZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oldZoneId = value["OldZoneId"].GetInt64();
        m_oldZoneIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneCapacityConf::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_isSaleoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsSaleout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSaleout, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_netWorkTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetWorkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_netWorkType.begin(); itr != m_netWorkType.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_productSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_productSet.begin(); itr != m_productSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_oldZoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldZoneId, allocator);
    }

}


string ZoneCapacityConf::GetZoneId() const
{
    return m_zoneId;
}

void ZoneCapacityConf::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneCapacityConf::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ZoneCapacityConf::GetZoneName() const
{
    return m_zoneName;
}

void ZoneCapacityConf::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ZoneCapacityConf::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

bool ZoneCapacityConf::GetIsSaleout() const
{
    return m_isSaleout;
}

void ZoneCapacityConf::SetIsSaleout(const bool& _isSaleout)
{
    m_isSaleout = _isSaleout;
    m_isSaleoutHasBeenSet = true;
}

bool ZoneCapacityConf::IsSaleoutHasBeenSet() const
{
    return m_isSaleoutHasBeenSet;
}

bool ZoneCapacityConf::GetIsDefault() const
{
    return m_isDefault;
}

void ZoneCapacityConf::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool ZoneCapacityConf::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

vector<string> ZoneCapacityConf::GetNetWorkType() const
{
    return m_netWorkType;
}

void ZoneCapacityConf::SetNetWorkType(const vector<string>& _netWorkType)
{
    m_netWorkType = _netWorkType;
    m_netWorkTypeHasBeenSet = true;
}

bool ZoneCapacityConf::NetWorkTypeHasBeenSet() const
{
    return m_netWorkTypeHasBeenSet;
}

vector<ProductConf> ZoneCapacityConf::GetProductSet() const
{
    return m_productSet;
}

void ZoneCapacityConf::SetProductSet(const vector<ProductConf>& _productSet)
{
    m_productSet = _productSet;
    m_productSetHasBeenSet = true;
}

bool ZoneCapacityConf::ProductSetHasBeenSet() const
{
    return m_productSetHasBeenSet;
}

int64_t ZoneCapacityConf::GetOldZoneId() const
{
    return m_oldZoneId;
}

void ZoneCapacityConf::SetOldZoneId(const int64_t& _oldZoneId)
{
    m_oldZoneId = _oldZoneId;
    m_oldZoneIdHasBeenSet = true;
}

bool ZoneCapacityConf::OldZoneIdHasBeenSet() const
{
    return m_oldZoneIdHasBeenSet;
}

