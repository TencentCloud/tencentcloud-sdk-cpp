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

#include <tencentcloud/cvm/v20170312/model/ImportKeyPairRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

ImportKeyPairRequest::ImportKeyPairRequest() :
    m_keyNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_publicKeyHasBeenSet(false)
{
}

string ImportKeyPairRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_keyName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportKeyPairRequest::GetKeyName() const
{
    return m_keyName;
}

void ImportKeyPairRequest::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool ImportKeyPairRequest::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

int64_t ImportKeyPairRequest::GetProjectId() const
{
    return m_projectId;
}

void ImportKeyPairRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ImportKeyPairRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ImportKeyPairRequest::GetPublicKey() const
{
    return m_publicKey;
}

void ImportKeyPairRequest::SetPublicKey(const string& _publicKey)
{
    m_publicKey = _publicKey;
    m_publicKeyHasBeenSet = true;
}

bool ImportKeyPairRequest::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}


