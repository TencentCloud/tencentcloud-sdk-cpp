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

#include <tencentcloud/tke/v20180525/model/ClusterExtraArgs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterExtraArgs::ClusterExtraArgs() :
    m_etcdHasBeenSet(false),
    m_kubeAPIServerHasBeenSet(false),
    m_kubeControllerManagerHasBeenSet(false),
    m_kubeSchedulerHasBeenSet(false)
{
}

CoreInternalOutcome ClusterExtraArgs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Etcd") && !value["Etcd"].IsNull())
    {
        if (!value["Etcd"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterExtraArgs.Etcd` is not array type"));

        const rapidjson::Value &tmpValue = value["Etcd"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_etcd.push_back((*itr).GetString());
        }
        m_etcdHasBeenSet = true;
    }

    if (value.HasMember("KubeAPIServer") && !value["KubeAPIServer"].IsNull())
    {
        if (!value["KubeAPIServer"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterExtraArgs.KubeAPIServer` is not array type"));

        const rapidjson::Value &tmpValue = value["KubeAPIServer"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_kubeAPIServer.push_back((*itr).GetString());
        }
        m_kubeAPIServerHasBeenSet = true;
    }

    if (value.HasMember("KubeControllerManager") && !value["KubeControllerManager"].IsNull())
    {
        if (!value["KubeControllerManager"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterExtraArgs.KubeControllerManager` is not array type"));

        const rapidjson::Value &tmpValue = value["KubeControllerManager"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_kubeControllerManager.push_back((*itr).GetString());
        }
        m_kubeControllerManagerHasBeenSet = true;
    }

    if (value.HasMember("KubeScheduler") && !value["KubeScheduler"].IsNull())
    {
        if (!value["KubeScheduler"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterExtraArgs.KubeScheduler` is not array type"));

        const rapidjson::Value &tmpValue = value["KubeScheduler"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_kubeScheduler.push_back((*itr).GetString());
        }
        m_kubeSchedulerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterExtraArgs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_etcdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Etcd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_etcd.begin(); itr != m_etcd.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_kubeAPIServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeAPIServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kubeAPIServer.begin(); itr != m_kubeAPIServer.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_kubeControllerManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeControllerManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kubeControllerManager.begin(); itr != m_kubeControllerManager.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_kubeSchedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeScheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kubeScheduler.begin(); itr != m_kubeScheduler.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ClusterExtraArgs::GetEtcd() const
{
    return m_etcd;
}

void ClusterExtraArgs::SetEtcd(const vector<string>& _etcd)
{
    m_etcd = _etcd;
    m_etcdHasBeenSet = true;
}

bool ClusterExtraArgs::EtcdHasBeenSet() const
{
    return m_etcdHasBeenSet;
}

vector<string> ClusterExtraArgs::GetKubeAPIServer() const
{
    return m_kubeAPIServer;
}

void ClusterExtraArgs::SetKubeAPIServer(const vector<string>& _kubeAPIServer)
{
    m_kubeAPIServer = _kubeAPIServer;
    m_kubeAPIServerHasBeenSet = true;
}

bool ClusterExtraArgs::KubeAPIServerHasBeenSet() const
{
    return m_kubeAPIServerHasBeenSet;
}

vector<string> ClusterExtraArgs::GetKubeControllerManager() const
{
    return m_kubeControllerManager;
}

void ClusterExtraArgs::SetKubeControllerManager(const vector<string>& _kubeControllerManager)
{
    m_kubeControllerManager = _kubeControllerManager;
    m_kubeControllerManagerHasBeenSet = true;
}

bool ClusterExtraArgs::KubeControllerManagerHasBeenSet() const
{
    return m_kubeControllerManagerHasBeenSet;
}

vector<string> ClusterExtraArgs::GetKubeScheduler() const
{
    return m_kubeScheduler;
}

void ClusterExtraArgs::SetKubeScheduler(const vector<string>& _kubeScheduler)
{
    m_kubeScheduler = _kubeScheduler;
    m_kubeSchedulerHasBeenSet = true;
}

bool ClusterExtraArgs::KubeSchedulerHasBeenSet() const
{
    return m_kubeSchedulerHasBeenSet;
}

