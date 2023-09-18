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

#include <tencentcloud/dlc/v20210125/model/ElasticsearchInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ElasticsearchInfo::ElasticsearchInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_serviceInfoHasBeenSet(false)
{
}

CoreInternalOutcome ElasticsearchInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticsearchInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticsearchInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticsearchInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticsearchInfo.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticsearchInfo.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElasticsearchInfo.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceInfo") && !value["ServiceInfo"].IsNull())
    {
        if (!value["ServiceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ElasticsearchInfo.ServiceInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IpPortPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceInfo.push_back(item);
        }
        m_serviceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ElasticsearchInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceInfo.begin(); itr != m_serviceInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ElasticsearchInfo::GetInstanceId() const
{
    return m_instanceId;
}

void ElasticsearchInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ElasticsearchInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ElasticsearchInfo::GetInstanceName() const
{
    return m_instanceName;
}

void ElasticsearchInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ElasticsearchInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ElasticsearchInfo::GetUser() const
{
    return m_user;
}

void ElasticsearchInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool ElasticsearchInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string ElasticsearchInfo::GetPassword() const
{
    return m_password;
}

void ElasticsearchInfo::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ElasticsearchInfo::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

DatasourceConnectionLocation ElasticsearchInfo::GetLocation() const
{
    return m_location;
}

void ElasticsearchInfo::SetLocation(const DatasourceConnectionLocation& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool ElasticsearchInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string ElasticsearchInfo::GetDbName() const
{
    return m_dbName;
}

void ElasticsearchInfo::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool ElasticsearchInfo::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

vector<IpPortPair> ElasticsearchInfo::GetServiceInfo() const
{
    return m_serviceInfo;
}

void ElasticsearchInfo::SetServiceInfo(const vector<IpPortPair>& _serviceInfo)
{
    m_serviceInfo = _serviceInfo;
    m_serviceInfoHasBeenSet = true;
}

bool ElasticsearchInfo::ServiceInfoHasBeenSet() const
{
    return m_serviceInfoHasBeenSet;
}

