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

#include <tencentcloud/redis/v20180412/model/Instances.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

Instances::Instances() :
    m_appIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_redisReplicasNumHasBeenSet(false),
    m_redisShardNumHasBeenSet(false),
    m_redisShardSizeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vip6HasBeenSet(false),
    m_iPv6HasBeenSet(false),
    m_vpcIDHasBeenSet(false),
    m_vPortHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_grocerySysIdHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome Instances::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("RedisReplicasNum") && !value["RedisReplicasNum"].IsNull())
    {
        if (!value["RedisReplicasNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.RedisReplicasNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_redisReplicasNum = value["RedisReplicasNum"].GetUint64();
        m_redisReplicasNumHasBeenSet = true;
    }

    if (value.HasMember("RedisShardNum") && !value["RedisShardNum"].IsNull())
    {
        if (!value["RedisShardNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.RedisShardNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redisShardNum = value["RedisShardNum"].GetInt64();
        m_redisShardNumHasBeenSet = true;
    }

    if (value.HasMember("RedisShardSize") && !value["RedisShardSize"].IsNull())
    {
        if (!value["RedisShardSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.RedisShardSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redisShardSize = value["RedisShardSize"].GetInt64();
        m_redisShardSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vip6") && !value["Vip6"].IsNull())
    {
        if (!value["Vip6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.Vip6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip6 = string(value["Vip6"].GetString());
        m_vip6HasBeenSet = true;
    }

    if (value.HasMember("IPv6") && !value["IPv6"].IsNull())
    {
        if (!value["IPv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.IPv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPv6 = string(value["IPv6"].GetString());
        m_iPv6HasBeenSet = true;
    }

    if (value.HasMember("VpcID") && !value["VpcID"].IsNull())
    {
        if (!value["VpcID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.VpcID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcID = value["VpcID"].GetInt64();
        m_vpcIDHasBeenSet = true;
    }

    if (value.HasMember("VPort") && !value["VPort"].IsNull())
    {
        if (!value["VPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.VPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vPort = value["VPort"].GetInt64();
        m_vPortHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("GrocerySysId") && !value["GrocerySysId"].IsNull())
    {
        if (!value["GrocerySysId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.GrocerySysId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_grocerySysId = value["GrocerySysId"].GetInt64();
        m_grocerySysIdHasBeenSet = true;
    }

    if (value.HasMember("ProductType") && !value["ProductType"].IsNull())
    {
        if (!value["ProductType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.ProductType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productType = value["ProductType"].GetInt64();
        m_productTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instances.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instances::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_redisReplicasNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisReplicasNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redisReplicasNum, allocator);
    }

    if (m_redisShardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redisShardNum, allocator);
    }

    if (m_redisShardSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisShardSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redisShardSize, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vip6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip6.c_str(), allocator).Move(), allocator);
    }

    if (m_iPv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPv6.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcID, allocator);
    }

    if (m_vPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vPort, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_grocerySysIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrocerySysId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_grocerySysId, allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productType, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t Instances::GetAppId() const
{
    return m_appId;
}

void Instances::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Instances::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Instances::GetInstanceId() const
{
    return m_instanceId;
}

void Instances::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instances::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Instances::GetInstanceName() const
{
    return m_instanceName;
}

void Instances::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool Instances::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t Instances::GetRegionId() const
{
    return m_regionId;
}

void Instances::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool Instances::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

uint64_t Instances::GetZoneId() const
{
    return m_zoneId;
}

void Instances::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool Instances::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

uint64_t Instances::GetRedisReplicasNum() const
{
    return m_redisReplicasNum;
}

void Instances::SetRedisReplicasNum(const uint64_t& _redisReplicasNum)
{
    m_redisReplicasNum = _redisReplicasNum;
    m_redisReplicasNumHasBeenSet = true;
}

bool Instances::RedisReplicasNumHasBeenSet() const
{
    return m_redisReplicasNumHasBeenSet;
}

int64_t Instances::GetRedisShardNum() const
{
    return m_redisShardNum;
}

void Instances::SetRedisShardNum(const int64_t& _redisShardNum)
{
    m_redisShardNum = _redisShardNum;
    m_redisShardNumHasBeenSet = true;
}

bool Instances::RedisShardNumHasBeenSet() const
{
    return m_redisShardNumHasBeenSet;
}

int64_t Instances::GetRedisShardSize() const
{
    return m_redisShardSize;
}

void Instances::SetRedisShardSize(const int64_t& _redisShardSize)
{
    m_redisShardSize = _redisShardSize;
    m_redisShardSizeHasBeenSet = true;
}

bool Instances::RedisShardSizeHasBeenSet() const
{
    return m_redisShardSizeHasBeenSet;
}

int64_t Instances::GetDiskSize() const
{
    return m_diskSize;
}

void Instances::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool Instances::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string Instances::GetEngine() const
{
    return m_engine;
}

void Instances::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool Instances::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string Instances::GetRole() const
{
    return m_role;
}

void Instances::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool Instances::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string Instances::GetVip() const
{
    return m_vip;
}

void Instances::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool Instances::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string Instances::GetVip6() const
{
    return m_vip6;
}

void Instances::SetVip6(const string& _vip6)
{
    m_vip6 = _vip6;
    m_vip6HasBeenSet = true;
}

bool Instances::Vip6HasBeenSet() const
{
    return m_vip6HasBeenSet;
}

string Instances::GetIPv6() const
{
    return m_iPv6;
}

void Instances::SetIPv6(const string& _iPv6)
{
    m_iPv6 = _iPv6;
    m_iPv6HasBeenSet = true;
}

bool Instances::IPv6HasBeenSet() const
{
    return m_iPv6HasBeenSet;
}

int64_t Instances::GetVpcID() const
{
    return m_vpcID;
}

void Instances::SetVpcID(const int64_t& _vpcID)
{
    m_vpcID = _vpcID;
    m_vpcIDHasBeenSet = true;
}

bool Instances::VpcIDHasBeenSet() const
{
    return m_vpcIDHasBeenSet;
}

int64_t Instances::GetVPort() const
{
    return m_vPort;
}

void Instances::SetVPort(const int64_t& _vPort)
{
    m_vPort = _vPort;
    m_vPortHasBeenSet = true;
}

bool Instances::VPortHasBeenSet() const
{
    return m_vPortHasBeenSet;
}

int64_t Instances::GetStatus() const
{
    return m_status;
}

void Instances::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Instances::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t Instances::GetGrocerySysId() const
{
    return m_grocerySysId;
}

void Instances::SetGrocerySysId(const int64_t& _grocerySysId)
{
    m_grocerySysId = _grocerySysId;
    m_grocerySysIdHasBeenSet = true;
}

bool Instances::GrocerySysIdHasBeenSet() const
{
    return m_grocerySysIdHasBeenSet;
}

int64_t Instances::GetProductType() const
{
    return m_productType;
}

void Instances::SetProductType(const int64_t& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool Instances::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string Instances::GetCreateTime() const
{
    return m_createTime;
}

void Instances::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Instances::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Instances::GetUpdateTime() const
{
    return m_updateTime;
}

void Instances::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Instances::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

