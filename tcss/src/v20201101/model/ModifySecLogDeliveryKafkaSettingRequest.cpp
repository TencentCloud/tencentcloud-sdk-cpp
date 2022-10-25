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

#include <tencentcloud/tcss/v20201101/model/ModifySecLogDeliveryKafkaSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifySecLogDeliveryKafkaSettingRequest::ModifySecLogDeliveryKafkaSettingRequest() :
    m_instanceIDHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_userHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_logTypeListHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_kafkaVersionHasBeenSet(false),
    m_regionIDHasBeenSet(false)
{
}

string ModifySecLogDeliveryKafkaSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logTypeList.begin(); itr != m_logTypeList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessType, allocator);
    }

    if (m_kafkaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kafkaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySecLogDeliveryKafkaSettingRequest::GetInstanceID() const
{
    return m_instanceID;
}

void ModifySecLogDeliveryKafkaSettingRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ModifySecLogDeliveryKafkaSettingRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ModifySecLogDeliveryKafkaSettingRequest::GetInstanceName() const
{
    return m_instanceName;
}

void ModifySecLogDeliveryKafkaSettingRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ModifySecLogDeliveryKafkaSettingRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ModifySecLogDeliveryKafkaSettingRequest::GetDomain() const
{
    return m_domain;
}

void ModifySecLogDeliveryKafkaSettingRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifySecLogDeliveryKafkaSettingRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifySecLogDeliveryKafkaSettingRequest::GetUser() const
{
    return m_user;
}

void ModifySecLogDeliveryKafkaSettingRequest::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool ModifySecLogDeliveryKafkaSettingRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string ModifySecLogDeliveryKafkaSettingRequest::GetPassword() const
{
    return m_password;
}

void ModifySecLogDeliveryKafkaSettingRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ModifySecLogDeliveryKafkaSettingRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<SecLogDeliveryKafkaSettingInfo> ModifySecLogDeliveryKafkaSettingRequest::GetLogTypeList() const
{
    return m_logTypeList;
}

void ModifySecLogDeliveryKafkaSettingRequest::SetLogTypeList(const vector<SecLogDeliveryKafkaSettingInfo>& _logTypeList)
{
    m_logTypeList = _logTypeList;
    m_logTypeListHasBeenSet = true;
}

bool ModifySecLogDeliveryKafkaSettingRequest::LogTypeListHasBeenSet() const
{
    return m_logTypeListHasBeenSet;
}

int64_t ModifySecLogDeliveryKafkaSettingRequest::GetAccessType() const
{
    return m_accessType;
}

void ModifySecLogDeliveryKafkaSettingRequest::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool ModifySecLogDeliveryKafkaSettingRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string ModifySecLogDeliveryKafkaSettingRequest::GetKafkaVersion() const
{
    return m_kafkaVersion;
}

void ModifySecLogDeliveryKafkaSettingRequest::SetKafkaVersion(const string& _kafkaVersion)
{
    m_kafkaVersion = _kafkaVersion;
    m_kafkaVersionHasBeenSet = true;
}

bool ModifySecLogDeliveryKafkaSettingRequest::KafkaVersionHasBeenSet() const
{
    return m_kafkaVersionHasBeenSet;
}

string ModifySecLogDeliveryKafkaSettingRequest::GetRegionID() const
{
    return m_regionID;
}

void ModifySecLogDeliveryKafkaSettingRequest::SetRegionID(const string& _regionID)
{
    m_regionID = _regionID;
    m_regionIDHasBeenSet = true;
}

bool ModifySecLogDeliveryKafkaSettingRequest::RegionIDHasBeenSet() const
{
    return m_regionIDHasBeenSet;
}


