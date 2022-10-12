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

#include <tencentcloud/tse/v20201207/model/UpdateEngineInternetAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

UpdateEngineInternetAccessRequest::UpdateEngineInternetAccessRequest() :
    m_instanceIdHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_enableClientInternetAccessHasBeenSet(false)
{
}

string UpdateEngineInternetAccessRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableClientInternetAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableClientInternetAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableClientInternetAccess, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateEngineInternetAccessRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateEngineInternetAccessRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateEngineInternetAccessRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpdateEngineInternetAccessRequest::GetEngineType() const
{
    return m_engineType;
}

void UpdateEngineInternetAccessRequest::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool UpdateEngineInternetAccessRequest::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

bool UpdateEngineInternetAccessRequest::GetEnableClientInternetAccess() const
{
    return m_enableClientInternetAccess;
}

void UpdateEngineInternetAccessRequest::SetEnableClientInternetAccess(const bool& _enableClientInternetAccess)
{
    m_enableClientInternetAccess = _enableClientInternetAccess;
    m_enableClientInternetAccessHasBeenSet = true;
}

bool UpdateEngineInternetAccessRequest::EnableClientInternetAccessHasBeenSet() const
{
    return m_enableClientInternetAccessHasBeenSet;
}


