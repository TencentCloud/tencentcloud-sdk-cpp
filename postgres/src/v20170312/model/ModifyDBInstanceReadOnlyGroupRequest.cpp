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

#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceReadOnlyGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyDBInstanceReadOnlyGroupRequest::ModifyDBInstanceReadOnlyGroupRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_readOnlyGroupIdHasBeenSet(false),
    m_newReadOnlyGroupIdHasBeenSet(false)
{
}

string ModifyDBInstanceReadOnlyGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_readOnlyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_newReadOnlyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewReadOnlyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newReadOnlyGroupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceReadOnlyGroupRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void ModifyDBInstanceReadOnlyGroupRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool ModifyDBInstanceReadOnlyGroupRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string ModifyDBInstanceReadOnlyGroupRequest::GetReadOnlyGroupId() const
{
    return m_readOnlyGroupId;
}

void ModifyDBInstanceReadOnlyGroupRequest::SetReadOnlyGroupId(const string& _readOnlyGroupId)
{
    m_readOnlyGroupId = _readOnlyGroupId;
    m_readOnlyGroupIdHasBeenSet = true;
}

bool ModifyDBInstanceReadOnlyGroupRequest::ReadOnlyGroupIdHasBeenSet() const
{
    return m_readOnlyGroupIdHasBeenSet;
}

string ModifyDBInstanceReadOnlyGroupRequest::GetNewReadOnlyGroupId() const
{
    return m_newReadOnlyGroupId;
}

void ModifyDBInstanceReadOnlyGroupRequest::SetNewReadOnlyGroupId(const string& _newReadOnlyGroupId)
{
    m_newReadOnlyGroupId = _newReadOnlyGroupId;
    m_newReadOnlyGroupIdHasBeenSet = true;
}

bool ModifyDBInstanceReadOnlyGroupRequest::NewReadOnlyGroupIdHasBeenSet() const
{
    return m_newReadOnlyGroupIdHasBeenSet;
}


