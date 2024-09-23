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

#include <tencentcloud/postgres/v20170312/model/CreateDatabaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

CreateDatabaseRequest::CreateDatabaseRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_databaseOwnerHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_collateHasBeenSet(false),
    m_ctypeHasBeenSet(false)
{
}

string CreateDatabaseRequest::ToJsonString() const
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

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseOwner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encoding.c_str(), allocator).Move(), allocator);
    }

    if (m_collateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_collate.c_str(), allocator).Move(), allocator);
    }

    if (m_ctypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ctype";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ctype.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDatabaseRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void CreateDatabaseRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool CreateDatabaseRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string CreateDatabaseRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void CreateDatabaseRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool CreateDatabaseRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string CreateDatabaseRequest::GetDatabaseOwner() const
{
    return m_databaseOwner;
}

void CreateDatabaseRequest::SetDatabaseOwner(const string& _databaseOwner)
{
    m_databaseOwner = _databaseOwner;
    m_databaseOwnerHasBeenSet = true;
}

bool CreateDatabaseRequest::DatabaseOwnerHasBeenSet() const
{
    return m_databaseOwnerHasBeenSet;
}

string CreateDatabaseRequest::GetEncoding() const
{
    return m_encoding;
}

void CreateDatabaseRequest::SetEncoding(const string& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool CreateDatabaseRequest::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

string CreateDatabaseRequest::GetCollate() const
{
    return m_collate;
}

void CreateDatabaseRequest::SetCollate(const string& _collate)
{
    m_collate = _collate;
    m_collateHasBeenSet = true;
}

bool CreateDatabaseRequest::CollateHasBeenSet() const
{
    return m_collateHasBeenSet;
}

string CreateDatabaseRequest::GetCtype() const
{
    return m_ctype;
}

void CreateDatabaseRequest::SetCtype(const string& _ctype)
{
    m_ctype = _ctype;
    m_ctypeHasBeenSet = true;
}

bool CreateDatabaseRequest::CtypeHasBeenSet() const
{
    return m_ctypeHasBeenSet;
}


