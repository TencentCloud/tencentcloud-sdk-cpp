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

#include <tencentcloud/cdb/v20170320/model/OpenDBInstanceEncryptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

OpenDBInstanceEncryptionRequest::OpenDBInstanceEncryptionRequest() :
    m_instanceIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyRegionHasBeenSet(false)
{
}

string OpenDBInstanceEncryptionRequest::ToJsonString() const
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

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OpenDBInstanceEncryptionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void OpenDBInstanceEncryptionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool OpenDBInstanceEncryptionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string OpenDBInstanceEncryptionRequest::GetKeyId() const
{
    return m_keyId;
}

void OpenDBInstanceEncryptionRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool OpenDBInstanceEncryptionRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string OpenDBInstanceEncryptionRequest::GetKeyRegion() const
{
    return m_keyRegion;
}

void OpenDBInstanceEncryptionRequest::SetKeyRegion(const string& _keyRegion)
{
    m_keyRegion = _keyRegion;
    m_keyRegionHasBeenSet = true;
}

bool OpenDBInstanceEncryptionRequest::KeyRegionHasBeenSet() const
{
    return m_keyRegionHasBeenSet;
}


