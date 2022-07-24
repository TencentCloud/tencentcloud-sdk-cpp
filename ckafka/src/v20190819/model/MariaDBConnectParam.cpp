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

#include <tencentcloud/ckafka/v20190819/model/MariaDBConnectParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

MariaDBConnectParam::MariaDBConnectParam() :
    m_portHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_serviceVipHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_isUpdateHasBeenSet(false)
{
}

CoreInternalOutcome MariaDBConnectParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBConnectParam.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBConnectParam.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBConnectParam.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBConnectParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("ServiceVip") && !value["ServiceVip"].IsNull())
    {
        if (!value["ServiceVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBConnectParam.ServiceVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceVip = string(value["ServiceVip"].GetString());
        m_serviceVipHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBConnectParam.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("IsUpdate") && !value["IsUpdate"].IsNull())
    {
        if (!value["IsUpdate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MariaDBConnectParam.IsUpdate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUpdate = value["IsUpdate"].GetBool();
        m_isUpdateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MariaDBConnectParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


int64_t MariaDBConnectParam::GetPort() const
{
    return m_port;
}

void MariaDBConnectParam::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool MariaDBConnectParam::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string MariaDBConnectParam::GetUserName() const
{
    return m_userName;
}

void MariaDBConnectParam::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool MariaDBConnectParam::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string MariaDBConnectParam::GetPassword() const
{
    return m_password;
}

void MariaDBConnectParam::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool MariaDBConnectParam::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string MariaDBConnectParam::GetResource() const
{
    return m_resource;
}

void MariaDBConnectParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool MariaDBConnectParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string MariaDBConnectParam::GetServiceVip() const
{
    return m_serviceVip;
}

void MariaDBConnectParam::SetServiceVip(const string& _serviceVip)
{
    m_serviceVip = _serviceVip;
    m_serviceVipHasBeenSet = true;
}

bool MariaDBConnectParam::ServiceVipHasBeenSet() const
{
    return m_serviceVipHasBeenSet;
}

string MariaDBConnectParam::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void MariaDBConnectParam::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool MariaDBConnectParam::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

bool MariaDBConnectParam::GetIsUpdate() const
{
    return m_isUpdate;
}

void MariaDBConnectParam::SetIsUpdate(const bool& _isUpdate)
{
    m_isUpdate = _isUpdate;
    m_isUpdateHasBeenSet = true;
}

bool MariaDBConnectParam::IsUpdateHasBeenSet() const
{
    return m_isUpdateHasBeenSet;
}

