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

#include <tencentcloud/iecp/v20210914/model/DeleteSecretRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DeleteSecretRequest::DeleteSecretRequest() :
    m_edgeUnitIDHasBeenSet(false),
    m_secretNameHasBeenSet(false),
    m_secretNamespaceHasBeenSet(false)
{
}

string DeleteSecretRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitID, allocator);
    }

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_secretNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretNamespace.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteSecretRequest::GetEdgeUnitID() const
{
    return m_edgeUnitID;
}

void DeleteSecretRequest::SetEdgeUnitID(const uint64_t& _edgeUnitID)
{
    m_edgeUnitID = _edgeUnitID;
    m_edgeUnitIDHasBeenSet = true;
}

bool DeleteSecretRequest::EdgeUnitIDHasBeenSet() const
{
    return m_edgeUnitIDHasBeenSet;
}

string DeleteSecretRequest::GetSecretName() const
{
    return m_secretName;
}

void DeleteSecretRequest::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool DeleteSecretRequest::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string DeleteSecretRequest::GetSecretNamespace() const
{
    return m_secretNamespace;
}

void DeleteSecretRequest::SetSecretNamespace(const string& _secretNamespace)
{
    m_secretNamespace = _secretNamespace;
    m_secretNamespaceHasBeenSet = true;
}

bool DeleteSecretRequest::SecretNamespaceHasBeenSet() const
{
    return m_secretNamespaceHasBeenSet;
}


