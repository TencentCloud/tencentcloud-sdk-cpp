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

#include <tencentcloud/tem/v20210701/model/IngressRuleBackend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

IngressRuleBackend::IngressRuleBackend() :
    m_serviceNameHasBeenSet(false),
    m_servicePortHasBeenSet(false)
{
}

CoreInternalOutcome IngressRuleBackend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IngressRuleBackend.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServicePort") && !value["ServicePort"].IsNull())
    {
        if (!value["ServicePort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IngressRuleBackend.ServicePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_servicePort = value["ServicePort"].GetInt64();
        m_servicePortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IngressRuleBackend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_servicePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_servicePort, allocator);
    }

}


string IngressRuleBackend::GetServiceName() const
{
    return m_serviceName;
}

void IngressRuleBackend::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool IngressRuleBackend::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

int64_t IngressRuleBackend::GetServicePort() const
{
    return m_servicePort;
}

void IngressRuleBackend::SetServicePort(const int64_t& _servicePort)
{
    m_servicePort = _servicePort;
    m_servicePortHasBeenSet = true;
}

bool IngressRuleBackend::ServicePortHasBeenSet() const
{
    return m_servicePortHasBeenSet;
}

