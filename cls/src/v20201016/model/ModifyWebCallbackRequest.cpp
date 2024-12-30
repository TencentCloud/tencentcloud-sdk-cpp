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

#include <tencentcloud/cls/v20201016/model/ModifyWebCallbackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyWebCallbackRequest::ModifyWebCallbackRequest() :
    m_webCallbackIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_webhookHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

string ModifyWebCallbackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_webCallbackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebCallbackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_webCallbackId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_webhookHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Webhook";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_webhook.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyWebCallbackRequest::GetWebCallbackId() const
{
    return m_webCallbackId;
}

void ModifyWebCallbackRequest::SetWebCallbackId(const string& _webCallbackId)
{
    m_webCallbackId = _webCallbackId;
    m_webCallbackIdHasBeenSet = true;
}

bool ModifyWebCallbackRequest::WebCallbackIdHasBeenSet() const
{
    return m_webCallbackIdHasBeenSet;
}

string ModifyWebCallbackRequest::GetName() const
{
    return m_name;
}

void ModifyWebCallbackRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyWebCallbackRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyWebCallbackRequest::GetType() const
{
    return m_type;
}

void ModifyWebCallbackRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyWebCallbackRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyWebCallbackRequest::GetWebhook() const
{
    return m_webhook;
}

void ModifyWebCallbackRequest::SetWebhook(const string& _webhook)
{
    m_webhook = _webhook;
    m_webhookHasBeenSet = true;
}

bool ModifyWebCallbackRequest::WebhookHasBeenSet() const
{
    return m_webhookHasBeenSet;
}

string ModifyWebCallbackRequest::GetMethod() const
{
    return m_method;
}

void ModifyWebCallbackRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ModifyWebCallbackRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ModifyWebCallbackRequest::GetKey() const
{
    return m_key;
}

void ModifyWebCallbackRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ModifyWebCallbackRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}


