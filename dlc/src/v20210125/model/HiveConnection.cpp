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

#include <tencentcloud/dlc/v20210125/model/HiveConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

HiveConnection::HiveConnection() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_metaStoreUrlHasBeenSet(false),
    m_netWorkHasBeenSet(false),
    m_hiveVersionHasBeenSet(false)
{
}

CoreInternalOutcome HiveConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveConnection.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveConnection.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("MetaStoreUrl") && !value["MetaStoreUrl"].IsNull())
    {
        if (!value["MetaStoreUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveConnection.MetaStoreUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaStoreUrl = string(value["MetaStoreUrl"].GetString());
        m_metaStoreUrlHasBeenSet = true;
    }

    if (value.HasMember("NetWork") && !value["NetWork"].IsNull())
    {
        if (!value["NetWork"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HiveConnection.NetWork` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `HiveConnection.HiveVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiveVersion = string(value["HiveVersion"].GetString());
        m_hiveVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HiveConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string HiveConnection::GetInstanceId() const
{
    return m_instanceId;
}

void HiveConnection::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool HiveConnection::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string HiveConnection::GetInstanceName() const
{
    return m_instanceName;
}

void HiveConnection::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool HiveConnection::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string HiveConnection::GetMetaStoreUrl() const
{
    return m_metaStoreUrl;
}

void HiveConnection::SetMetaStoreUrl(const string& _metaStoreUrl)
{
    m_metaStoreUrl = _metaStoreUrl;
    m_metaStoreUrlHasBeenSet = true;
}

bool HiveConnection::MetaStoreUrlHasBeenSet() const
{
    return m_metaStoreUrlHasBeenSet;
}

NetWork HiveConnection::GetNetWork() const
{
    return m_netWork;
}

void HiveConnection::SetNetWork(const NetWork& _netWork)
{
    m_netWork = _netWork;
    m_netWorkHasBeenSet = true;
}

bool HiveConnection::NetWorkHasBeenSet() const
{
    return m_netWorkHasBeenSet;
}

string HiveConnection::GetHiveVersion() const
{
    return m_hiveVersion;
}

void HiveConnection::SetHiveVersion(const string& _hiveVersion)
{
    m_hiveVersion = _hiveVersion;
    m_hiveVersionHasBeenSet = true;
}

bool HiveConnection::HiveVersionHasBeenSet() const
{
    return m_hiveVersionHasBeenSet;
}

