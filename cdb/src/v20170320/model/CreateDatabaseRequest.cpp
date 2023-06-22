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

#include <tencentcloud/cdb/v20170320/model/CreateDatabaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CreateDatabaseRequest::CreateDatabaseRequest() :
    m_instanceIdHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_characterSetNameHasBeenSet(false)
{
}

string CreateDatabaseRequest::ToJsonString() const
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

    if (m_dBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBName.c_str(), allocator).Move(), allocator);
    }

    if (m_characterSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CharacterSetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_characterSetName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDatabaseRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateDatabaseRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateDatabaseRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateDatabaseRequest::GetDBName() const
{
    return m_dBName;
}

void CreateDatabaseRequest::SetDBName(const string& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool CreateDatabaseRequest::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

string CreateDatabaseRequest::GetCharacterSetName() const
{
    return m_characterSetName;
}

void CreateDatabaseRequest::SetCharacterSetName(const string& _characterSetName)
{
    m_characterSetName = _characterSetName;
    m_characterSetNameHasBeenSet = true;
}

bool CreateDatabaseRequest::CharacterSetNameHasBeenSet() const
{
    return m_characterSetNameHasBeenSet;
}


