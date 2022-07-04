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

#include <tencentcloud/cvm/v20170312/model/ModifyChcAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ModifyChcAttributeRequest::ModifyChcAttributeRequest() :
    m_chcIdsHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_bmcUserHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_bmcSecurityGroupIdsHasBeenSet(false)
{
}

string ModifyChcAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_chcIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChcIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_chcIds.begin(); itr != m_chcIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_bmcUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BmcUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bmcUser.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_bmcSecurityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BmcSecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bmcSecurityGroupIds.begin(); itr != m_bmcSecurityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyChcAttributeRequest::GetChcIds() const
{
    return m_chcIds;
}

void ModifyChcAttributeRequest::SetChcIds(const vector<string>& _chcIds)
{
    m_chcIds = _chcIds;
    m_chcIdsHasBeenSet = true;
}

bool ModifyChcAttributeRequest::ChcIdsHasBeenSet() const
{
    return m_chcIdsHasBeenSet;
}

string ModifyChcAttributeRequest::GetInstanceName() const
{
    return m_instanceName;
}

void ModifyChcAttributeRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ModifyChcAttributeRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ModifyChcAttributeRequest::GetDeviceType() const
{
    return m_deviceType;
}

void ModifyChcAttributeRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool ModifyChcAttributeRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string ModifyChcAttributeRequest::GetBmcUser() const
{
    return m_bmcUser;
}

void ModifyChcAttributeRequest::SetBmcUser(const string& _bmcUser)
{
    m_bmcUser = _bmcUser;
    m_bmcUserHasBeenSet = true;
}

bool ModifyChcAttributeRequest::BmcUserHasBeenSet() const
{
    return m_bmcUserHasBeenSet;
}

string ModifyChcAttributeRequest::GetPassword() const
{
    return m_password;
}

void ModifyChcAttributeRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ModifyChcAttributeRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<string> ModifyChcAttributeRequest::GetBmcSecurityGroupIds() const
{
    return m_bmcSecurityGroupIds;
}

void ModifyChcAttributeRequest::SetBmcSecurityGroupIds(const vector<string>& _bmcSecurityGroupIds)
{
    m_bmcSecurityGroupIds = _bmcSecurityGroupIds;
    m_bmcSecurityGroupIdsHasBeenSet = true;
}

bool ModifyChcAttributeRequest::BmcSecurityGroupIdsHasBeenSet() const
{
    return m_bmcSecurityGroupIdsHasBeenSet;
}


