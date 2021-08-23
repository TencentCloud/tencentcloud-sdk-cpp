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

#include <tencentcloud/redis/v20180412/model/RedisCommonInstanceList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

RedisCommonInstanceList::RedisCommonInstanceList() :
    m_instanceNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vipsHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_createtimeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_netTypeHasBeenSet(false)
{
}

CoreInternalOutcome RedisCommonInstanceList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Vips") && !value["Vips"].IsNull())
    {
        if (!value["Vips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.Vips` is not array type"));

        const rapidjson::Value &tmpValue = value["Vips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vips.push_back((*itr).GetString());
        }
        m_vipsHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("Createtime") && !value["Createtime"].IsNull())
    {
        if (!value["Createtime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.Createtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createtime = string(value["Createtime"].GetString());
        m_createtimeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisCommonInstanceList.NetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netType = value["NetType"].GetInt64();
        m_netTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisCommonInstanceList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_createtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Createtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createtime.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netType, allocator);
    }

}


string RedisCommonInstanceList::GetInstanceName() const
{
    return m_instanceName;
}

void RedisCommonInstanceList::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RedisCommonInstanceList::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string RedisCommonInstanceList::GetInstanceId() const
{
    return m_instanceId;
}

void RedisCommonInstanceList::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RedisCommonInstanceList::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t RedisCommonInstanceList::GetAppId() const
{
    return m_appId;
}

void RedisCommonInstanceList::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool RedisCommonInstanceList::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t RedisCommonInstanceList::GetProjectId() const
{
    return m_projectId;
}

void RedisCommonInstanceList::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RedisCommonInstanceList::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RedisCommonInstanceList::GetRegion() const
{
    return m_region;
}

void RedisCommonInstanceList::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RedisCommonInstanceList::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string RedisCommonInstanceList::GetZone() const
{
    return m_zone;
}

void RedisCommonInstanceList::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool RedisCommonInstanceList::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string RedisCommonInstanceList::GetVpcId() const
{
    return m_vpcId;
}

void RedisCommonInstanceList::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool RedisCommonInstanceList::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string RedisCommonInstanceList::GetSubnetId() const
{
    return m_subnetId;
}

void RedisCommonInstanceList::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool RedisCommonInstanceList::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string RedisCommonInstanceList::GetStatus() const
{
    return m_status;
}

void RedisCommonInstanceList::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RedisCommonInstanceList::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> RedisCommonInstanceList::GetVips() const
{
    return m_vips;
}

void RedisCommonInstanceList::SetVips(const vector<string>& _vips)
{
    m_vips = _vips;
    m_vipsHasBeenSet = true;
}

bool RedisCommonInstanceList::VipsHasBeenSet() const
{
    return m_vipsHasBeenSet;
}

int64_t RedisCommonInstanceList::GetVport() const
{
    return m_vport;
}

void RedisCommonInstanceList::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool RedisCommonInstanceList::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string RedisCommonInstanceList::GetCreatetime() const
{
    return m_createtime;
}

void RedisCommonInstanceList::SetCreatetime(const string& _createtime)
{
    m_createtime = _createtime;
    m_createtimeHasBeenSet = true;
}

bool RedisCommonInstanceList::CreatetimeHasBeenSet() const
{
    return m_createtimeHasBeenSet;
}

int64_t RedisCommonInstanceList::GetPayMode() const
{
    return m_payMode;
}

void RedisCommonInstanceList::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool RedisCommonInstanceList::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t RedisCommonInstanceList::GetNetType() const
{
    return m_netType;
}

void RedisCommonInstanceList::SetNetType(const int64_t& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool RedisCommonInstanceList::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

