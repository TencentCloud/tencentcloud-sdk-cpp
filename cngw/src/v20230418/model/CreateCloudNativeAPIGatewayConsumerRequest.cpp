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

#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayConsumerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CreateCloudNativeAPIGatewayConsumerRequest::CreateCloudNativeAPIGatewayConsumerRequest() :
    m_gatewayIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operationSourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_secretBindTypeHasBeenSet(false),
    m_autoSecretKeyHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewayConsumerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_priority.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_operationSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationSource.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_secretBindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretBindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretBindType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoSecretKey.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudNativeAPIGatewayConsumerRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateCloudNativeAPIGatewayConsumerRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayConsumerRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateCloudNativeAPIGatewayConsumerRequest::GetName() const
{
    return m_name;
}

void CreateCloudNativeAPIGatewayConsumerRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayConsumerRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCloudNativeAPIGatewayConsumerRequest::GetPriority() const
{
    return m_priority;
}

void CreateCloudNativeAPIGatewayConsumerRequest::SetPriority(const string& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayConsumerRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string CreateCloudNativeAPIGatewayConsumerRequest::GetDescription() const
{
    return m_description;
}

void CreateCloudNativeAPIGatewayConsumerRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayConsumerRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateCloudNativeAPIGatewayConsumerRequest::GetOperationSource() const
{
    return m_operationSource;
}

void CreateCloudNativeAPIGatewayConsumerRequest::SetOperationSource(const string& _operationSource)
{
    m_operationSource = _operationSource;
    m_operationSourceHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayConsumerRequest::OperationSourceHasBeenSet() const
{
    return m_operationSourceHasBeenSet;
}

string CreateCloudNativeAPIGatewayConsumerRequest::GetStatus() const
{
    return m_status;
}

void CreateCloudNativeAPIGatewayConsumerRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayConsumerRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateCloudNativeAPIGatewayConsumerRequest::GetSecretBindType() const
{
    return m_secretBindType;
}

void CreateCloudNativeAPIGatewayConsumerRequest::SetSecretBindType(const string& _secretBindType)
{
    m_secretBindType = _secretBindType;
    m_secretBindTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayConsumerRequest::SecretBindTypeHasBeenSet() const
{
    return m_secretBindTypeHasBeenSet;
}

AutoSecretKey CreateCloudNativeAPIGatewayConsumerRequest::GetAutoSecretKey() const
{
    return m_autoSecretKey;
}

void CreateCloudNativeAPIGatewayConsumerRequest::SetAutoSecretKey(const AutoSecretKey& _autoSecretKey)
{
    m_autoSecretKey = _autoSecretKey;
    m_autoSecretKeyHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayConsumerRequest::AutoSecretKeyHasBeenSet() const
{
    return m_autoSecretKeyHasBeenSet;
}


