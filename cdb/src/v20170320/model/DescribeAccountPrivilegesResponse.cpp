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

#include <tencentcloud/cdb/v20170320/model/DescribeAccountPrivilegesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeAccountPrivilegesResponse::DescribeAccountPrivilegesResponse() :
    m_globalPrivilegesHasBeenSet(false),
    m_databasePrivilegesHasBeenSet(false),
    m_tablePrivilegesHasBeenSet(false),
    m_columnPrivilegesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccountPrivilegesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("GlobalPrivileges") && !rsp["GlobalPrivileges"].IsNull())
    {
        if (!rsp["GlobalPrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GlobalPrivileges` is not array type"));

        const rapidjson::Value &tmpValue = rsp["GlobalPrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_globalPrivileges.push_back((*itr).GetString());
        }
        m_globalPrivilegesHasBeenSet = true;
    }

    if (rsp.HasMember("DatabasePrivileges") && !rsp["DatabasePrivileges"].IsNull())
    {
        if (!rsp["DatabasePrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatabasePrivileges` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DatabasePrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatabasePrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_databasePrivileges.push_back(item);
        }
        m_databasePrivilegesHasBeenSet = true;
    }

    if (rsp.HasMember("TablePrivileges") && !rsp["TablePrivileges"].IsNull())
    {
        if (!rsp["TablePrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TablePrivileges` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TablePrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TablePrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tablePrivileges.push_back(item);
        }
        m_tablePrivilegesHasBeenSet = true;
    }

    if (rsp.HasMember("ColumnPrivileges") && !rsp["ColumnPrivileges"].IsNull())
    {
        if (!rsp["ColumnPrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ColumnPrivileges` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ColumnPrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ColumnPrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columnPrivileges.push_back(item);
        }
        m_columnPrivilegesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAccountPrivilegesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_globalPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalPrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_globalPrivileges.begin(); itr != m_globalPrivileges.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_databasePrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabasePrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databasePrivileges.begin(); itr != m_databasePrivileges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tablePrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tablePrivileges.begin(); itr != m_tablePrivileges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_columnPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnPrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columnPrivileges.begin(); itr != m_columnPrivileges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


vector<string> DescribeAccountPrivilegesResponse::GetGlobalPrivileges() const
{
    return m_globalPrivileges;
}

bool DescribeAccountPrivilegesResponse::GlobalPrivilegesHasBeenSet() const
{
    return m_globalPrivilegesHasBeenSet;
}

vector<DatabasePrivilege> DescribeAccountPrivilegesResponse::GetDatabasePrivileges() const
{
    return m_databasePrivileges;
}

bool DescribeAccountPrivilegesResponse::DatabasePrivilegesHasBeenSet() const
{
    return m_databasePrivilegesHasBeenSet;
}

vector<TablePrivilege> DescribeAccountPrivilegesResponse::GetTablePrivileges() const
{
    return m_tablePrivileges;
}

bool DescribeAccountPrivilegesResponse::TablePrivilegesHasBeenSet() const
{
    return m_tablePrivilegesHasBeenSet;
}

vector<ColumnPrivilege> DescribeAccountPrivilegesResponse::GetColumnPrivileges() const
{
    return m_columnPrivileges;
}

bool DescribeAccountPrivilegesResponse::ColumnPrivilegesHasBeenSet() const
{
    return m_columnPrivilegesHasBeenSet;
}


