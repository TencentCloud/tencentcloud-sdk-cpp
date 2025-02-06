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

#include <tencentcloud/tccatalog/v20241024/model/TccConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tccatalog::V20241024::Model;
using namespace std;

TccConnection::TccConnection() :
    m_endpointServiceIdHasBeenSet(false),
    m_metaStoreUrlHasBeenSet(false),
    m_netWorkHasBeenSet(false),
    m_hiveVersionHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_hmsEndpointServiceIdHasBeenSet(false)
{
}

CoreInternalOutcome TccConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndpointServiceId") && !value["EndpointServiceId"].IsNull())
    {
        if (!value["EndpointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TccConnection.EndpointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointServiceId = string(value["EndpointServiceId"].GetString());
        m_endpointServiceIdHasBeenSet = true;
    }

    if (value.HasMember("MetaStoreUrl") && !value["MetaStoreUrl"].IsNull())
    {
        if (!value["MetaStoreUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TccConnection.MetaStoreUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaStoreUrl = string(value["MetaStoreUrl"].GetString());
        m_metaStoreUrlHasBeenSet = true;
    }

    if (value.HasMember("NetWork") && !value["NetWork"].IsNull())
    {
        if (!value["NetWork"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TccConnection.NetWork` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_netWork.Deserialize(value["NetWork"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_netWorkHasBeenSet = true;
    }

    if (value.HasMember("HiveVersion") && !value["HiveVersion"].IsNull())
    {
        if (!value["HiveVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TccConnection.HiveVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiveVersion = string(value["HiveVersion"].GetString());
        m_hiveVersionHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TccConnection.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("HmsEndpointServiceId") && !value["HmsEndpointServiceId"].IsNull())
    {
        if (!value["HmsEndpointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TccConnection.HmsEndpointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hmsEndpointServiceId = string(value["HmsEndpointServiceId"].GetString());
        m_hmsEndpointServiceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TccConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_netWorkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetWork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_netWork.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_hmsEndpointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HmsEndpointServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hmsEndpointServiceId.c_str(), allocator).Move(), allocator);
    }

}


string TccConnection::GetEndpointServiceId() const
{
    return m_endpointServiceId;
}

void TccConnection::SetEndpointServiceId(const string& _endpointServiceId)
{
    m_endpointServiceId = _endpointServiceId;
    m_endpointServiceIdHasBeenSet = true;
}

bool TccConnection::EndpointServiceIdHasBeenSet() const
{
    return m_endpointServiceIdHasBeenSet;
}

string TccConnection::GetMetaStoreUrl() const
{
    return m_metaStoreUrl;
}

void TccConnection::SetMetaStoreUrl(const string& _metaStoreUrl)
{
    m_metaStoreUrl = _metaStoreUrl;
    m_metaStoreUrlHasBeenSet = true;
}

bool TccConnection::MetaStoreUrlHasBeenSet() const
{
    return m_metaStoreUrlHasBeenSet;
}

NetWork TccConnection::GetNetWork() const
{
    return m_netWork;
}

void TccConnection::SetNetWork(const NetWork& _netWork)
{
    m_netWork = _netWork;
    m_netWorkHasBeenSet = true;
}

bool TccConnection::NetWorkHasBeenSet() const
{
    return m_netWorkHasBeenSet;
}

string TccConnection::GetHiveVersion() const
{
    return m_hiveVersion;
}

void TccConnection::SetHiveVersion(const string& _hiveVersion)
{
    m_hiveVersion = _hiveVersion;
    m_hiveVersionHasBeenSet = true;
}

bool TccConnection::HiveVersionHasBeenSet() const
{
    return m_hiveVersionHasBeenSet;
}

string TccConnection::GetLocation() const
{
    return m_location;
}

void TccConnection::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool TccConnection::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string TccConnection::GetHmsEndpointServiceId() const
{
    return m_hmsEndpointServiceId;
}

void TccConnection::SetHmsEndpointServiceId(const string& _hmsEndpointServiceId)
{
    m_hmsEndpointServiceId = _hmsEndpointServiceId;
    m_hmsEndpointServiceIdHasBeenSet = true;
}

bool TccConnection::HmsEndpointServiceIdHasBeenSet() const
{
    return m_hmsEndpointServiceIdHasBeenSet;
}

