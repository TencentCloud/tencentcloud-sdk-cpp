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

#include <tencentcloud/cloudhsm/v20191112/model/UsgPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

UsgPolicy::UsgPolicy() :
    m_ipHasBeenSet(false),
    m_idHasBeenSet(false),
    m_addressModuleHasBeenSet(false),
    m_protoHasBeenSet(false),
    m_portHasBeenSet(false),
    m_serviceModuleHasBeenSet(false),
    m_descHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome UsgPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsgPolicy.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsgPolicy.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AddressModule") && !value["AddressModule"].IsNull())
    {
        if (!value["AddressModule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsgPolicy.AddressModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressModule = string(value["AddressModule"].GetString());
        m_addressModuleHasBeenSet = true;
    }

    if (value.HasMember("Proto") && !value["Proto"].IsNull())
    {
        if (!value["Proto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsgPolicy.Proto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proto = string(value["Proto"].GetString());
        m_protoHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsgPolicy.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("ServiceModule") && !value["ServiceModule"].IsNull())
    {
        if (!value["ServiceModule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsgPolicy.ServiceModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceModule = string(value["ServiceModule"].GetString());
        m_serviceModuleHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsgPolicy.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsgPolicy.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsgPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_addressModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressModule.c_str(), allocator).Move(), allocator);
    }

    if (m_protoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proto.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceModule.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

}


string UsgPolicy::GetIp() const
{
    return m_ip;
}

void UsgPolicy::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool UsgPolicy::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string UsgPolicy::GetId() const
{
    return m_id;
}

void UsgPolicy::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UsgPolicy::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UsgPolicy::GetAddressModule() const
{
    return m_addressModule;
}

void UsgPolicy::SetAddressModule(const string& _addressModule)
{
    m_addressModule = _addressModule;
    m_addressModuleHasBeenSet = true;
}

bool UsgPolicy::AddressModuleHasBeenSet() const
{
    return m_addressModuleHasBeenSet;
}

string UsgPolicy::GetProto() const
{
    return m_proto;
}

void UsgPolicy::SetProto(const string& _proto)
{
    m_proto = _proto;
    m_protoHasBeenSet = true;
}

bool UsgPolicy::ProtoHasBeenSet() const
{
    return m_protoHasBeenSet;
}

string UsgPolicy::GetPort() const
{
    return m_port;
}

void UsgPolicy::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool UsgPolicy::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string UsgPolicy::GetServiceModule() const
{
    return m_serviceModule;
}

void UsgPolicy::SetServiceModule(const string& _serviceModule)
{
    m_serviceModule = _serviceModule;
    m_serviceModuleHasBeenSet = true;
}

bool UsgPolicy::ServiceModuleHasBeenSet() const
{
    return m_serviceModuleHasBeenSet;
}

string UsgPolicy::GetDesc() const
{
    return m_desc;
}

void UsgPolicy::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool UsgPolicy::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string UsgPolicy::GetAction() const
{
    return m_action;
}

void UsgPolicy::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool UsgPolicy::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

