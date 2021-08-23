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

#include <tencentcloud/monitor/v20180724/model/MonitorTypeNamespace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

MonitorTypeNamespace::MonitorTypeNamespace() :
    m_monitorTypeHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

CoreInternalOutcome MonitorTypeNamespace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTypeNamespace.MonitorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = string(value["MonitorType"].GetString());
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTypeNamespace.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorTypeNamespace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

}


string MonitorTypeNamespace::GetMonitorType() const
{
    return m_monitorType;
}

void MonitorTypeNamespace::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool MonitorTypeNamespace::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string MonitorTypeNamespace::GetNamespace() const
{
    return m_namespace;
}

void MonitorTypeNamespace::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool MonitorTypeNamespace::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

