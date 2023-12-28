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

#include <tencentcloud/oceanus/v20190422/model/GetMetaTableResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

GetMetaTableResponse::GetMetaTableResponse() :
    m_serialIdHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_dDLHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome GetMetaTableResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("SerialId") && !rsp["SerialId"].IsNull())
    {
        if (!rsp["SerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialId = string(rsp["SerialId"].GetString());
        m_serialIdHasBeenSet = true;
    }

    if (rsp.HasMember("Catalog") && !rsp["Catalog"].IsNull())
    {
        if (!rsp["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(rsp["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (rsp.HasMember("Database") && !rsp["Database"].IsNull())
    {
        if (!rsp["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(rsp["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (rsp.HasMember("Table") && !rsp["Table"].IsNull())
    {
        if (!rsp["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(rsp["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (rsp.HasMember("DDL") && !rsp["DDL"].IsNull())
    {
        if (!rsp["DDL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dDL = string(rsp["DDL"].GetString());
        m_dDLHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetMetaTableResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_serialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialId.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_dDLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dDL.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string GetMetaTableResponse::GetSerialId() const
{
    return m_serialId;
}

bool GetMetaTableResponse::SerialIdHasBeenSet() const
{
    return m_serialIdHasBeenSet;
}

string GetMetaTableResponse::GetCatalog() const
{
    return m_catalog;
}

bool GetMetaTableResponse::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string GetMetaTableResponse::GetDatabase() const
{
    return m_database;
}

bool GetMetaTableResponse::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string GetMetaTableResponse::GetTable() const
{
    return m_table;
}

bool GetMetaTableResponse::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string GetMetaTableResponse::GetDDL() const
{
    return m_dDL;
}

bool GetMetaTableResponse::DDLHasBeenSet() const
{
    return m_dDLHasBeenSet;
}

string GetMetaTableResponse::GetCreateTime() const
{
    return m_createTime;
}

bool GetMetaTableResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


