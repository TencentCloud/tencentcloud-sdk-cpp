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

#include <tencentcloud/tke/v20180525/model/LivenessOrReadinessProbe.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

LivenessOrReadinessProbe::LivenessOrReadinessProbe() :
    m_probeHasBeenSet(false),
    m_execHasBeenSet(false),
    m_httpGetHasBeenSet(false),
    m_tcpSocketHasBeenSet(false)
{
}

CoreInternalOutcome LivenessOrReadinessProbe::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Probe") && !value["Probe"].IsNull())
    {
        if (!value["Probe"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LivenessOrReadinessProbe.Probe` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_probe.Deserialize(value["Probe"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_probeHasBeenSet = true;
    }

    if (value.HasMember("Exec") && !value["Exec"].IsNull())
    {
        if (!value["Exec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LivenessOrReadinessProbe.Exec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_exec.Deserialize(value["Exec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_execHasBeenSet = true;
    }

    if (value.HasMember("HttpGet") && !value["HttpGet"].IsNull())
    {
        if (!value["HttpGet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LivenessOrReadinessProbe.HttpGet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_httpGet.Deserialize(value["HttpGet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpGetHasBeenSet = true;
    }

    if (value.HasMember("TcpSocket") && !value["TcpSocket"].IsNull())
    {
        if (!value["TcpSocket"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LivenessOrReadinessProbe.TcpSocket` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tcpSocket.Deserialize(value["TcpSocket"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tcpSocketHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LivenessOrReadinessProbe::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_probeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Probe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_probe.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_execHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_exec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_httpGetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpGet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_httpGet.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tcpSocketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpSocket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tcpSocket.ToJsonObject(value[key.c_str()], allocator);
    }

}


Probe LivenessOrReadinessProbe::GetProbe() const
{
    return m_probe;
}

void LivenessOrReadinessProbe::SetProbe(const Probe& _probe)
{
    m_probe = _probe;
    m_probeHasBeenSet = true;
}

bool LivenessOrReadinessProbe::ProbeHasBeenSet() const
{
    return m_probeHasBeenSet;
}

Exec LivenessOrReadinessProbe::GetExec() const
{
    return m_exec;
}

void LivenessOrReadinessProbe::SetExec(const Exec& _exec)
{
    m_exec = _exec;
    m_execHasBeenSet = true;
}

bool LivenessOrReadinessProbe::ExecHasBeenSet() const
{
    return m_execHasBeenSet;
}

HttpGet LivenessOrReadinessProbe::GetHttpGet() const
{
    return m_httpGet;
}

void LivenessOrReadinessProbe::SetHttpGet(const HttpGet& _httpGet)
{
    m_httpGet = _httpGet;
    m_httpGetHasBeenSet = true;
}

bool LivenessOrReadinessProbe::HttpGetHasBeenSet() const
{
    return m_httpGetHasBeenSet;
}

TcpSocket LivenessOrReadinessProbe::GetTcpSocket() const
{
    return m_tcpSocket;
}

void LivenessOrReadinessProbe::SetTcpSocket(const TcpSocket& _tcpSocket)
{
    m_tcpSocket = _tcpSocket;
    m_tcpSocketHasBeenSet = true;
}

bool LivenessOrReadinessProbe::TcpSocketHasBeenSet() const
{
    return m_tcpSocketHasBeenSet;
}

