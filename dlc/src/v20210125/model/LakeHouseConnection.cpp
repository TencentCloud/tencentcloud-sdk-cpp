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

#include <tencentcloud/dlc/v20210125/model/LakeHouseConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

LakeHouseConnection::LakeHouseConnection() :
    m_metastoreEndpointServiceIdHasBeenSet(false),
    m_endpointServiceIdHasBeenSet(false),
    m_metaStoreUrlHasBeenSet(false),
    m_rangerConnectionHasBeenSet(false),
    m_hiveVersionHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_netWorkHasBeenSet(false)
{
}

CoreInternalOutcome LakeHouseConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetastoreEndpointServiceId") && !value["MetastoreEndpointServiceId"].IsNull())
    {
        if (!value["MetastoreEndpointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeHouseConnection.MetastoreEndpointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metastoreEndpointServiceId = string(value["MetastoreEndpointServiceId"].GetString());
        m_metastoreEndpointServiceIdHasBeenSet = true;
    }

    if (value.HasMember("EndpointServiceId") && !value["EndpointServiceId"].IsNull())
    {
        if (!value["EndpointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeHouseConnection.EndpointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointServiceId = string(value["EndpointServiceId"].GetString());
        m_endpointServiceIdHasBeenSet = true;
    }

    if (value.HasMember("MetaStoreUrl") && !value["MetaStoreUrl"].IsNull())
    {
        if (!value["MetaStoreUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeHouseConnection.MetaStoreUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaStoreUrl = string(value["MetaStoreUrl"].GetString());
        m_metaStoreUrlHasBeenSet = true;
    }

    if (value.HasMember("RangerConnection") && !value["RangerConnection"].IsNull())
    {
        if (!value["RangerConnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LakeHouseConnection.RangerConnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rangerConnection.Deserialize(value["RangerConnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rangerConnectionHasBeenSet = true;
    }

    if (value.HasMember("HiveVersion") && !value["HiveVersion"].IsNull())
    {
        if (!value["HiveVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeHouseConnection.HiveVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiveVersion = string(value["HiveVersion"].GetString());
        m_hiveVersionHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeHouseConnection.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("NetWork") && !value["NetWork"].IsNull())
    {
        if (!value["NetWork"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LakeHouseConnection.NetWork` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_netWork.Deserialize(value["NetWork"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_netWorkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LakeHouseConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metastoreEndpointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetastoreEndpointServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metastoreEndpointServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaStoreUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaStoreUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaStoreUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_rangerConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangerConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rangerConnection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hiveVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiveVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hiveVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_netWorkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetWork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_netWork.ToJsonObject(value[key.c_str()], allocator);
    }

}


string LakeHouseConnection::GetMetastoreEndpointServiceId() const
{
    return m_metastoreEndpointServiceId;
}

void LakeHouseConnection::SetMetastoreEndpointServiceId(const string& _metastoreEndpointServiceId)
{
    m_metastoreEndpointServiceId = _metastoreEndpointServiceId;
    m_metastoreEndpointServiceIdHasBeenSet = true;
}

bool LakeHouseConnection::MetastoreEndpointServiceIdHasBeenSet() const
{
    return m_metastoreEndpointServiceIdHasBeenSet;
}

string LakeHouseConnection::GetEndpointServiceId() const
{
    return m_endpointServiceId;
}

void LakeHouseConnection::SetEndpointServiceId(const string& _endpointServiceId)
{
    m_endpointServiceId = _endpointServiceId;
    m_endpointServiceIdHasBeenSet = true;
}

bool LakeHouseConnection::EndpointServiceIdHasBeenSet() const
{
    return m_endpointServiceIdHasBeenSet;
}

string LakeHouseConnection::GetMetaStoreUrl() const
{
    return m_metaStoreUrl;
}

void LakeHouseConnection::SetMetaStoreUrl(const string& _metaStoreUrl)
{
    m_metaStoreUrl = _metaStoreUrl;
    m_metaStoreUrlHasBeenSet = true;
}

bool LakeHouseConnection::MetaStoreUrlHasBeenSet() const
{
    return m_metaStoreUrlHasBeenSet;
}

RangerConnection LakeHouseConnection::GetRangerConnection() const
{
    return m_rangerConnection;
}

void LakeHouseConnection::SetRangerConnection(const RangerConnection& _rangerConnection)
{
    m_rangerConnection = _rangerConnection;
    m_rangerConnectionHasBeenSet = true;
}

bool LakeHouseConnection::RangerConnectionHasBeenSet() const
{
    return m_rangerConnectionHasBeenSet;
}

string LakeHouseConnection::GetHiveVersion() const
{
    return m_hiveVersion;
}

void LakeHouseConnection::SetHiveVersion(const string& _hiveVersion)
{
    m_hiveVersion = _hiveVersion;
    m_hiveVersionHasBeenSet = true;
}

bool LakeHouseConnection::HiveVersionHasBeenSet() const
{
    return m_hiveVersionHasBeenSet;
}

string LakeHouseConnection::GetLocation() const
{
    return m_location;
}

void LakeHouseConnection::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool LakeHouseConnection::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

NetWork LakeHouseConnection::GetNetWork() const
{
    return m_netWork;
}

void LakeHouseConnection::SetNetWork(const NetWork& _netWork)
{
    m_netWork = _netWork;
    m_netWorkHasBeenSet = true;
}

bool LakeHouseConnection::NetWorkHasBeenSet() const
{
    return m_netWorkHasBeenSet;
}

