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

#include <tencentcloud/ckafka/v20190819/model/DorisConnectParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DorisConnectParam::DorisConnectParam() :
    m_portHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_serviceVipHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_isUpdateHasBeenSet(false),
    m_selfBuiltHasBeenSet(false),
    m_bePortHasBeenSet(false)
{
}

CoreInternalOutcome DorisConnectParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DorisConnectParam.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DorisConnectParam.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DorisConnectParam.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DorisConnectParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("ServiceVip") && !value["ServiceVip"].IsNull())
    {
        if (!value["ServiceVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DorisConnectParam.ServiceVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceVip = string(value["ServiceVip"].GetString());
        m_serviceVipHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DorisConnectParam.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("IsUpdate") && !value["IsUpdate"].IsNull())
    {
        if (!value["IsUpdate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DorisConnectParam.IsUpdate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUpdate = value["IsUpdate"].GetBool();
        m_isUpdateHasBeenSet = true;
    }

    if (value.HasMember("SelfBuilt") && !value["SelfBuilt"].IsNull())
    {
        if (!value["SelfBuilt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DorisConnectParam.SelfBuilt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_selfBuilt = value["SelfBuilt"].GetBool();
        m_selfBuiltHasBeenSet = true;
    }

    if (value.HasMember("BePort") && !value["BePort"].IsNull())
    {
        if (!value["BePort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DorisConnectParam.BePort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bePort = value["BePort"].GetInt64();
        m_bePortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DorisConnectParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceVip.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_isUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUpdate, allocator);
    }

    if (m_selfBuiltHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfBuilt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selfBuilt, allocator);
    }

    if (m_bePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bePort, allocator);
    }

}


int64_t DorisConnectParam::GetPort() const
{
    return m_port;
}

void DorisConnectParam::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DorisConnectParam::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string DorisConnectParam::GetUserName() const
{
    return m_userName;
}

void DorisConnectParam::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DorisConnectParam::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DorisConnectParam::GetPassword() const
{
    return m_password;
}

void DorisConnectParam::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool DorisConnectParam::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string DorisConnectParam::GetResource() const
{
    return m_resource;
}

void DorisConnectParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool DorisConnectParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string DorisConnectParam::GetServiceVip() const
{
    return m_serviceVip;
}

void DorisConnectParam::SetServiceVip(const string& _serviceVip)
{
    m_serviceVip = _serviceVip;
    m_serviceVipHasBeenSet = true;
}

bool DorisConnectParam::ServiceVipHasBeenSet() const
{
    return m_serviceVipHasBeenSet;
}

string DorisConnectParam::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void DorisConnectParam::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool DorisConnectParam::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

bool DorisConnectParam::GetIsUpdate() const
{
    return m_isUpdate;
}

void DorisConnectParam::SetIsUpdate(const bool& _isUpdate)
{
    m_isUpdate = _isUpdate;
    m_isUpdateHasBeenSet = true;
}

bool DorisConnectParam::IsUpdateHasBeenSet() const
{
    return m_isUpdateHasBeenSet;
}

bool DorisConnectParam::GetSelfBuilt() const
{
    return m_selfBuilt;
}

void DorisConnectParam::SetSelfBuilt(const bool& _selfBuilt)
{
    m_selfBuilt = _selfBuilt;
    m_selfBuiltHasBeenSet = true;
}

bool DorisConnectParam::SelfBuiltHasBeenSet() const
{
    return m_selfBuiltHasBeenSet;
}

int64_t DorisConnectParam::GetBePort() const
{
    return m_bePort;
}

void DorisConnectParam::SetBePort(const int64_t& _bePort)
{
    m_bePort = _bePort;
    m_bePortHasBeenSet = true;
}

bool DorisConnectParam::BePortHasBeenSet() const
{
    return m_bePortHasBeenSet;
}

