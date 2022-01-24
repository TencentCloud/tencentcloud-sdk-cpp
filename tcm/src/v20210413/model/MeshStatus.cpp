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

#include <tencentcloud/tcm/v20210413/model/MeshStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

MeshStatus::MeshStatus() :
    m_serviceCountHasBeenSet(false),
    m_canaryVersionHasBeenSet(false),
    m_prometheusHasBeenSet(false),
    m_stateMessageHasBeenSet(false),
    m_activeOperationListHasBeenSet(false),
    m_tPSHasBeenSet(false)
{
}

CoreInternalOutcome MeshStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceCount") && !value["ServiceCount"].IsNull())
    {
        if (!value["ServiceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MeshStatus.ServiceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = value["ServiceCount"].GetInt64();
        m_serviceCountHasBeenSet = true;
    }

    if (value.HasMember("CanaryVersion") && !value["CanaryVersion"].IsNull())
    {
        if (!value["CanaryVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MeshStatus.CanaryVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_canaryVersion = string(value["CanaryVersion"].GetString());
        m_canaryVersionHasBeenSet = true;
    }

    if (value.HasMember("Prometheus") && !value["Prometheus"].IsNull())
    {
        if (!value["Prometheus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MeshStatus.Prometheus` is not array type"));

        const rapidjson::Value &tmpValue = value["Prometheus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrometheusStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_prometheus.push_back(item);
        }
        m_prometheusHasBeenSet = true;
    }

    if (value.HasMember("StateMessage") && !value["StateMessage"].IsNull())
    {
        if (!value["StateMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MeshStatus.StateMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateMessage = string(value["StateMessage"].GetString());
        m_stateMessageHasBeenSet = true;
    }

    if (value.HasMember("ActiveOperationList") && !value["ActiveOperationList"].IsNull())
    {
        if (!value["ActiveOperationList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MeshStatus.ActiveOperationList` is not array type"));

        const rapidjson::Value &tmpValue = value["ActiveOperationList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ActiveOperation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_activeOperationList.push_back(item);
        }
        m_activeOperationListHasBeenSet = true;
    }

    if (value.HasMember("TPS") && !value["TPS"].IsNull())
    {
        if (!value["TPS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MeshStatus.TPS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tPS.Deserialize(value["TPS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tPSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MeshStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceCount, allocator);
    }

    if (m_canaryVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanaryVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_canaryVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_prometheusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prometheus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_prometheus.begin(); itr != m_prometheus.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_stateMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_activeOperationListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveOperationList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_activeOperationList.begin(); itr != m_activeOperationList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tPS.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t MeshStatus::GetServiceCount() const
{
    return m_serviceCount;
}

void MeshStatus::SetServiceCount(const int64_t& _serviceCount)
{
    m_serviceCount = _serviceCount;
    m_serviceCountHasBeenSet = true;
}

bool MeshStatus::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

string MeshStatus::GetCanaryVersion() const
{
    return m_canaryVersion;
}

void MeshStatus::SetCanaryVersion(const string& _canaryVersion)
{
    m_canaryVersion = _canaryVersion;
    m_canaryVersionHasBeenSet = true;
}

bool MeshStatus::CanaryVersionHasBeenSet() const
{
    return m_canaryVersionHasBeenSet;
}

vector<PrometheusStatus> MeshStatus::GetPrometheus() const
{
    return m_prometheus;
}

void MeshStatus::SetPrometheus(const vector<PrometheusStatus>& _prometheus)
{
    m_prometheus = _prometheus;
    m_prometheusHasBeenSet = true;
}

bool MeshStatus::PrometheusHasBeenSet() const
{
    return m_prometheusHasBeenSet;
}

string MeshStatus::GetStateMessage() const
{
    return m_stateMessage;
}

void MeshStatus::SetStateMessage(const string& _stateMessage)
{
    m_stateMessage = _stateMessage;
    m_stateMessageHasBeenSet = true;
}

bool MeshStatus::StateMessageHasBeenSet() const
{
    return m_stateMessageHasBeenSet;
}

vector<ActiveOperation> MeshStatus::GetActiveOperationList() const
{
    return m_activeOperationList;
}

void MeshStatus::SetActiveOperationList(const vector<ActiveOperation>& _activeOperationList)
{
    m_activeOperationList = _activeOperationList;
    m_activeOperationListHasBeenSet = true;
}

bool MeshStatus::ActiveOperationListHasBeenSet() const
{
    return m_activeOperationListHasBeenSet;
}

PrometheusStatus MeshStatus::GetTPS() const
{
    return m_tPS;
}

void MeshStatus::SetTPS(const PrometheusStatus& _tPS)
{
    m_tPS = _tPS;
    m_tPSHasBeenSet = true;
}

bool MeshStatus::TPSHasBeenSet() const
{
    return m_tPSHasBeenSet;
}

