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

#include <tencentcloud/chc/v20230418/model/CreateCommonServiceWorkOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

CreateCommonServiceWorkOrderRequest::CreateCommonServiceWorkOrderRequest() :
    m_devicePositionSetHasBeenSet(false),
    m_serviceLevelHasBeenSet(false),
    m_preAuthorizationHasBeenSet(false),
    m_contactNameHasBeenSet(false),
    m_contactPhoneHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_instructionsHasBeenSet(false)
{
}

string CreateCommonServiceWorkOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_devicePositionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevicePositionSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_devicePositionSet.begin(); itr != m_devicePositionSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_serviceLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceLevel, allocator);
    }

    if (m_preAuthorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreAuthorization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_preAuthorization, allocator);
    }

    if (m_contactNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactName.c_str(), allocator).Move(), allocator);
    }

    if (m_contactPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instructionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instructions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instructions.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<DevicePosition> CreateCommonServiceWorkOrderRequest::GetDevicePositionSet() const
{
    return m_devicePositionSet;
}

void CreateCommonServiceWorkOrderRequest::SetDevicePositionSet(const vector<DevicePosition>& _devicePositionSet)
{
    m_devicePositionSet = _devicePositionSet;
    m_devicePositionSetHasBeenSet = true;
}

bool CreateCommonServiceWorkOrderRequest::DevicePositionSetHasBeenSet() const
{
    return m_devicePositionSetHasBeenSet;
}

uint64_t CreateCommonServiceWorkOrderRequest::GetServiceLevel() const
{
    return m_serviceLevel;
}

void CreateCommonServiceWorkOrderRequest::SetServiceLevel(const uint64_t& _serviceLevel)
{
    m_serviceLevel = _serviceLevel;
    m_serviceLevelHasBeenSet = true;
}

bool CreateCommonServiceWorkOrderRequest::ServiceLevelHasBeenSet() const
{
    return m_serviceLevelHasBeenSet;
}

bool CreateCommonServiceWorkOrderRequest::GetPreAuthorization() const
{
    return m_preAuthorization;
}

void CreateCommonServiceWorkOrderRequest::SetPreAuthorization(const bool& _preAuthorization)
{
    m_preAuthorization = _preAuthorization;
    m_preAuthorizationHasBeenSet = true;
}

bool CreateCommonServiceWorkOrderRequest::PreAuthorizationHasBeenSet() const
{
    return m_preAuthorizationHasBeenSet;
}

string CreateCommonServiceWorkOrderRequest::GetContactName() const
{
    return m_contactName;
}

void CreateCommonServiceWorkOrderRequest::SetContactName(const string& _contactName)
{
    m_contactName = _contactName;
    m_contactNameHasBeenSet = true;
}

bool CreateCommonServiceWorkOrderRequest::ContactNameHasBeenSet() const
{
    return m_contactNameHasBeenSet;
}

string CreateCommonServiceWorkOrderRequest::GetContactPhone() const
{
    return m_contactPhone;
}

void CreateCommonServiceWorkOrderRequest::SetContactPhone(const string& _contactPhone)
{
    m_contactPhone = _contactPhone;
    m_contactPhoneHasBeenSet = true;
}

bool CreateCommonServiceWorkOrderRequest::ContactPhoneHasBeenSet() const
{
    return m_contactPhoneHasBeenSet;
}

string CreateCommonServiceWorkOrderRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreateCommonServiceWorkOrderRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreateCommonServiceWorkOrderRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string CreateCommonServiceWorkOrderRequest::GetInstructions() const
{
    return m_instructions;
}

void CreateCommonServiceWorkOrderRequest::SetInstructions(const string& _instructions)
{
    m_instructions = _instructions;
    m_instructionsHasBeenSet = true;
}

bool CreateCommonServiceWorkOrderRequest::InstructionsHasBeenSet() const
{
    return m_instructionsHasBeenSet;
}


