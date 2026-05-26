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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeSeeCallbackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyTWeSeeCallbackRequest::ModifyTWeSeeCallbackRequest() :
    m_callbackIdHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_callbackTokenHasBeenSet(false)
{
}

string ModifyTWeSeeCallbackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callbackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackId.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTWeSeeCallbackRequest::GetCallbackId() const
{
    return m_callbackId;
}

void ModifyTWeSeeCallbackRequest::SetCallbackId(const string& _callbackId)
{
    m_callbackId = _callbackId;
    m_callbackIdHasBeenSet = true;
}

bool ModifyTWeSeeCallbackRequest::CallbackIdHasBeenSet() const
{
    return m_callbackIdHasBeenSet;
}

string ModifyTWeSeeCallbackRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void ModifyTWeSeeCallbackRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool ModifyTWeSeeCallbackRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string ModifyTWeSeeCallbackRequest::GetType() const
{
    return m_type;
}

void ModifyTWeSeeCallbackRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyTWeSeeCallbackRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyTWeSeeCallbackRequest::GetCallbackToken() const
{
    return m_callbackToken;
}

void ModifyTWeSeeCallbackRequest::SetCallbackToken(const string& _callbackToken)
{
    m_callbackToken = _callbackToken;
    m_callbackTokenHasBeenSet = true;
}

bool ModifyTWeSeeCallbackRequest::CallbackTokenHasBeenSet() const
{
    return m_callbackTokenHasBeenSet;
}


