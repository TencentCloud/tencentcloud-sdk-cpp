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

#include <tencentcloud/tcr/v20190924/model/CreateWebhookTriggerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CreateWebhookTriggerRequest::CreateWebhookTriggerRequest() :
    m_registryIdHasBeenSet(false),
    m_triggerHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

string CreateWebhookTriggerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trigger";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trigger.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWebhookTriggerRequest::GetRegistryId() const
{
    return m_registryId;
}

void CreateWebhookTriggerRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CreateWebhookTriggerRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

WebhookTrigger CreateWebhookTriggerRequest::GetTrigger() const
{
    return m_trigger;
}

void CreateWebhookTriggerRequest::SetTrigger(const WebhookTrigger& _trigger)
{
    m_trigger = _trigger;
    m_triggerHasBeenSet = true;
}

bool CreateWebhookTriggerRequest::TriggerHasBeenSet() const
{
    return m_triggerHasBeenSet;
}

string CreateWebhookTriggerRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateWebhookTriggerRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateWebhookTriggerRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


