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

#include <tencentcloud/dlc/v20210125/model/TccHive.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TccHive::TccHive() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_endpointServiceIdHasBeenSet(false),
    m_metaStoreUrlHasBeenSet(false),
    m_hiveVersionHasBeenSet(false),
    m_tccConnectionHasBeenSet(false),
    m_hmsEndpointServiceIdHasBeenSet(false)
{
}

CoreInternalOutcome TccHive::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TccHive.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TccHive.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("EndpointServiceId") && !value["EndpointServiceId"].IsNull())
    {
        if (!value["EndpointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TccHive.EndpointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointServiceId = string(value["EndpointServiceId"].GetString());
        m_endpointServiceIdHasBeenSet = true;
    }

    if (value.HasMember("MetaStoreUrl") && !value["MetaStoreUrl"].IsNull())
    {
        if (!value["MetaStoreUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TccHive.MetaStoreUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaStoreUrl = string(value["MetaStoreUrl"].GetString());
        m_metaStoreUrlHasBeenSet = true;
    }

    if (value.HasMember("HiveVersion") && !value["HiveVersion"].IsNull())
    {
        if (!value["HiveVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TccHive.HiveVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiveVersion = string(value["HiveVersion"].GetString());
        m_hiveVersionHasBeenSet = true;
    }

    if (value.HasMember("TccConnection") && !value["TccConnection"].IsNull())
    {
        if (!value["TccConnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TccHive.TccConnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tccConnection.Deserialize(value["TccConnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tccConnectionHasBeenSet = true;
    }

    if (value.HasMember("HmsEndpointServiceId") && !value["HmsEndpointServiceId"].IsNull())
    {
        if (!value["HmsEndpointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TccHive.HmsEndpointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hmsEndpointServiceId = string(value["HmsEndpointServiceId"].GetString());
        m_hmsEndpointServiceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TccHive::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_hiveVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiveVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hiveVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_tccConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TccConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tccConnection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hmsEndpointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HmsEndpointServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hmsEndpointServiceId.c_str(), allocator).Move(), allocator);
    }

}


string TccHive::GetInstanceId() const
{
    return m_instanceId;
}

void TccHive::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TccHive::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TccHive::GetInstanceName() const
{
    return m_instanceName;
}

void TccHive::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool TccHive::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string TccHive::GetEndpointServiceId() const
{
    return m_endpointServiceId;
}

void TccHive::SetEndpointServiceId(const string& _endpointServiceId)
{
    m_endpointServiceId = _endpointServiceId;
    m_endpointServiceIdHasBeenSet = true;
}

bool TccHive::EndpointServiceIdHasBeenSet() const
{
    return m_endpointServiceIdHasBeenSet;
}

string TccHive::GetMetaStoreUrl() const
{
    return m_metaStoreUrl;
}

void TccHive::SetMetaStoreUrl(const string& _metaStoreUrl)
{
    m_metaStoreUrl = _metaStoreUrl;
    m_metaStoreUrlHasBeenSet = true;
}

bool TccHive::MetaStoreUrlHasBeenSet() const
{
    return m_metaStoreUrlHasBeenSet;
}

string TccHive::GetHiveVersion() const
{
    return m_hiveVersion;
}

void TccHive::SetHiveVersion(const string& _hiveVersion)
{
    m_hiveVersion = _hiveVersion;
    m_hiveVersionHasBeenSet = true;
}

bool TccHive::HiveVersionHasBeenSet() const
{
    return m_hiveVersionHasBeenSet;
}

NetWork TccHive::GetTccConnection() const
{
    return m_tccConnection;
}

void TccHive::SetTccConnection(const NetWork& _tccConnection)
{
    m_tccConnection = _tccConnection;
    m_tccConnectionHasBeenSet = true;
}

bool TccHive::TccConnectionHasBeenSet() const
{
    return m_tccConnectionHasBeenSet;
}

string TccHive::GetHmsEndpointServiceId() const
{
    return m_hmsEndpointServiceId;
}

void TccHive::SetHmsEndpointServiceId(const string& _hmsEndpointServiceId)
{
    m_hmsEndpointServiceId = _hmsEndpointServiceId;
    m_hmsEndpointServiceIdHasBeenSet = true;
}

bool TccHive::HmsEndpointServiceIdHasBeenSet() const
{
    return m_hmsEndpointServiceIdHasBeenSet;
}

