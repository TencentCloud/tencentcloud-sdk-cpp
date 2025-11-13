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

#include <tencentcloud/tke/v20180525/model/AvailableExtraArgs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

AvailableExtraArgs::AvailableExtraArgs() :
    m_kubeAPIServerHasBeenSet(false),
    m_kubeControllerManagerHasBeenSet(false),
    m_kubeSchedulerHasBeenSet(false),
    m_kubeletHasBeenSet(false)
{
}

CoreInternalOutcome AvailableExtraArgs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KubeAPIServer") && !value["KubeAPIServer"].IsNull())
    {
        if (!value["KubeAPIServer"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvailableExtraArgs.KubeAPIServer` is not array type"));

        const rapidjson::Value &tmpValue = value["KubeAPIServer"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Flag item;
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
            return CoreInternalOutcome(Core::Error("response `AvailableExtraArgs.KubeControllerManager` is not array type"));

        const rapidjson::Value &tmpValue = value["KubeControllerManager"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Flag item;
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
            return CoreInternalOutcome(Core::Error("response `AvailableExtraArgs.KubeScheduler` is not array type"));

        const rapidjson::Value &tmpValue = value["KubeScheduler"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Flag item;
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
            return CoreInternalOutcome(Core::Error("response `AvailableExtraArgs.Kubelet` is not array type"));

        const rapidjson::Value &tmpValue = value["Kubelet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Flag item;
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

void AvailableExtraArgs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


vector<Flag> AvailableExtraArgs::GetKubeAPIServer() const
{
    return m_kubeAPIServer;
}

void AvailableExtraArgs::SetKubeAPIServer(const vector<Flag>& _kubeAPIServer)
{
    m_kubeAPIServer = _kubeAPIServer;
    m_kubeAPIServerHasBeenSet = true;
}

bool AvailableExtraArgs::KubeAPIServerHasBeenSet() const
{
    return m_kubeAPIServerHasBeenSet;
}

vector<Flag> AvailableExtraArgs::GetKubeControllerManager() const
{
    return m_kubeControllerManager;
}

void AvailableExtraArgs::SetKubeControllerManager(const vector<Flag>& _kubeControllerManager)
{
    m_kubeControllerManager = _kubeControllerManager;
    m_kubeControllerManagerHasBeenSet = true;
}

bool AvailableExtraArgs::KubeControllerManagerHasBeenSet() const
{
    return m_kubeControllerManagerHasBeenSet;
}

vector<Flag> AvailableExtraArgs::GetKubeScheduler() const
{
    return m_kubeScheduler;
}

void AvailableExtraArgs::SetKubeScheduler(const vector<Flag>& _kubeScheduler)
{
    m_kubeScheduler = _kubeScheduler;
    m_kubeSchedulerHasBeenSet = true;
}

bool AvailableExtraArgs::KubeSchedulerHasBeenSet() const
{
    return m_kubeSchedulerHasBeenSet;
}

vector<Flag> AvailableExtraArgs::GetKubelet() const
{
    return m_kubelet;
}

void AvailableExtraArgs::SetKubelet(const vector<Flag>& _kubelet)
{
    m_kubelet = _kubelet;
    m_kubeletHasBeenSet = true;
}

bool AvailableExtraArgs::KubeletHasBeenSet() const
{
    return m_kubeletHasBeenSet;
}

