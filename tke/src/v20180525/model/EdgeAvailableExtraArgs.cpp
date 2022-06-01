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

#include <tencentcloud/tke/v20180525/model/EdgeAvailableExtraArgs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EdgeAvailableExtraArgs::EdgeAvailableExtraArgs() :
    m_kubeAPIServerHasBeenSet(false),
    m_kubeControllerManagerHasBeenSet(false),
    m_kubeSchedulerHasBeenSet(false),
    m_kubeletHasBeenSet(false)
{
}

CoreInternalOutcome EdgeAvailableExtraArgs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KubeAPIServer") && !value["KubeAPIServer"].IsNull())
    {
        if (!value["KubeAPIServer"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EdgeAvailableExtraArgs.KubeAPIServer` is not array type"));

        const rapidjson::Value &tmpValue = value["KubeAPIServer"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EdgeArgsFlag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_kubeAPIServer.push_back(item);
        }
        m_kubeAPIServerHasBeenSet = true;
    }

    if (value.HasMember("KubeControllerManager") && !value["KubeControllerManager"].IsNull())
    {
        if (!value["KubeControllerManager"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EdgeAvailableExtraArgs.KubeControllerManager` is not array type"));

        const rapidjson::Value &tmpValue = value["KubeControllerManager"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EdgeArgsFlag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_kubeControllerManager.push_back(item);
        }
        m_kubeControllerManagerHasBeenSet = true;
    }

    if (value.HasMember("KubeScheduler") && !value["KubeScheduler"].IsNull())
    {
        if (!value["KubeScheduler"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EdgeAvailableExtraArgs.KubeScheduler` is not array type"));

        const rapidjson::Value &tmpValue = value["KubeScheduler"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EdgeArgsFlag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_kubeScheduler.push_back(item);
        }
        m_kubeSchedulerHasBeenSet = true;
    }

    if (value.HasMember("Kubelet") && !value["Kubelet"].IsNull())
    {
        if (!value["Kubelet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EdgeAvailableExtraArgs.Kubelet` is not array type"));

        const rapidjson::Value &tmpValue = value["Kubelet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EdgeArgsFlag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_kubelet.push_back(item);
        }
        m_kubeletHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeAvailableExtraArgs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kubeAPIServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeAPIServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_kubeAPIServer.begin(); itr != m_kubeAPIServer.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_kubeControllerManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeControllerManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_kubeControllerManager.begin(); itr != m_kubeControllerManager.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_kubeSchedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeScheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_kubeScheduler.begin(); itr != m_kubeScheduler.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_kubeletHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kubelet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_kubelet.begin(); itr != m_kubelet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<EdgeArgsFlag> EdgeAvailableExtraArgs::GetKubeAPIServer() const
{
    return m_kubeAPIServer;
}

void EdgeAvailableExtraArgs::SetKubeAPIServer(const vector<EdgeArgsFlag>& _kubeAPIServer)
{
    m_kubeAPIServer = _kubeAPIServer;
    m_kubeAPIServerHasBeenSet = true;
}

bool EdgeAvailableExtraArgs::KubeAPIServerHasBeenSet() const
{
    return m_kubeAPIServerHasBeenSet;
}

vector<EdgeArgsFlag> EdgeAvailableExtraArgs::GetKubeControllerManager() const
{
    return m_kubeControllerManager;
}

void EdgeAvailableExtraArgs::SetKubeControllerManager(const vector<EdgeArgsFlag>& _kubeControllerManager)
{
    m_kubeControllerManager = _kubeControllerManager;
    m_kubeControllerManagerHasBeenSet = true;
}

bool EdgeAvailableExtraArgs::KubeControllerManagerHasBeenSet() const
{
    return m_kubeControllerManagerHasBeenSet;
}

vector<EdgeArgsFlag> EdgeAvailableExtraArgs::GetKubeScheduler() const
{
    return m_kubeScheduler;
}

void EdgeAvailableExtraArgs::SetKubeScheduler(const vector<EdgeArgsFlag>& _kubeScheduler)
{
    m_kubeScheduler = _kubeScheduler;
    m_kubeSchedulerHasBeenSet = true;
}

bool EdgeAvailableExtraArgs::KubeSchedulerHasBeenSet() const
{
    return m_kubeSchedulerHasBeenSet;
}

vector<EdgeArgsFlag> EdgeAvailableExtraArgs::GetKubelet() const
{
    return m_kubelet;
}

void EdgeAvailableExtraArgs::SetKubelet(const vector<EdgeArgsFlag>& _kubelet)
{
    m_kubelet = _kubelet;
    m_kubeletHasBeenSet = true;
}

bool EdgeAvailableExtraArgs::KubeletHasBeenSet() const
{
    return m_kubeletHasBeenSet;
}

