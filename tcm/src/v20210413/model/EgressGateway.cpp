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

#include <tencentcloud/tcm/v20210413/model/EgressGateway.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

EgressGateway::EgressGateway() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_workloadHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome EgressGateway::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EgressGateway.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EgressGateway.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Workload") && !value["Workload"].IsNull())
    {
        if (!value["Workload"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EgressGateway.Workload` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workload.Deserialize(value["Workload"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workloadHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EgressGateway.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EgressGateway::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workload.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EgressGateway::GetName() const
{
    return m_name;
}

void EgressGateway::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EgressGateway::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EgressGateway::GetNamespace() const
{
    return m_namespace;
}

void EgressGateway::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool EgressGateway::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

WorkloadConfig EgressGateway::GetWorkload() const
{
    return m_workload;
}

void EgressGateway::SetWorkload(const WorkloadConfig& _workload)
{
    m_workload = _workload;
    m_workloadHasBeenSet = true;
}

bool EgressGateway::WorkloadHasBeenSet() const
{
    return m_workloadHasBeenSet;
}

EgressGatewayStatus EgressGateway::GetStatus() const
{
    return m_status;
}

void EgressGateway::SetStatus(const EgressGatewayStatus& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EgressGateway::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

