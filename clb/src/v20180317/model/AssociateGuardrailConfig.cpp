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

#include <tencentcloud/clb/v20180317/model/AssociateGuardrailConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

AssociateGuardrailConfig::AssociateGuardrailConfig() :
    m_typeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_inputCheckDepthHasBeenSet(false)
{
}

CoreInternalOutcome AssociateGuardrailConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssociateGuardrailConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssociateGuardrailConfig.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssociateGuardrailConfig.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("InputCheckDepth") && !value["InputCheckDepth"].IsNull())
    {
        if (!value["InputCheckDepth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssociateGuardrailConfig.InputCheckDepth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inputCheckDepth = value["InputCheckDepth"].GetUint64();
        m_inputCheckDepthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssociateGuardrailConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_inputCheckDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputCheckDepth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputCheckDepth, allocator);
    }

}


string AssociateGuardrailConfig::GetType() const
{
    return m_type;
}

void AssociateGuardrailConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AssociateGuardrailConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AssociateGuardrailConfig::GetInstanceId() const
{
    return m_instanceId;
}

void AssociateGuardrailConfig::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssociateGuardrailConfig::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssociateGuardrailConfig::GetServiceId() const
{
    return m_serviceId;
}

void AssociateGuardrailConfig::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool AssociateGuardrailConfig::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

uint64_t AssociateGuardrailConfig::GetInputCheckDepth() const
{
    return m_inputCheckDepth;
}

void AssociateGuardrailConfig::SetInputCheckDepth(const uint64_t& _inputCheckDepth)
{
    m_inputCheckDepth = _inputCheckDepth;
    m_inputCheckDepthHasBeenSet = true;
}

bool AssociateGuardrailConfig::InputCheckDepthHasBeenSet() const
{
    return m_inputCheckDepthHasBeenSet;
}

