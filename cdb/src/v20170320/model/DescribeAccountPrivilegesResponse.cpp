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
using namespace rapidjson;
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
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("GlobalPrivileges") && !rsp["GlobalPrivileges"].IsNull())
    {
        if (!rsp["GlobalPrivileges"].IsArray())
            return CoreInternalOutcome(Error("response `GlobalPrivileges` is not array type"));

        const Value &tmpValue = rsp["GlobalPrivileges"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_globalPrivileges.push_back((*itr).GetString());
        }
        m_globalPrivilegesHasBeenSet = true;
    }

    if (rsp.HasMember("DatabasePrivileges") && !rsp["DatabasePrivileges"].IsNull())
    {
        if (!rsp["DatabasePrivileges"].IsArray())
            return CoreInternalOutcome(Error("response `DatabasePrivileges` is not array type"));

        const Value &tmpValue = rsp["DatabasePrivileges"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `TablePrivileges` is not array type"));

        const Value &tmpValue = rsp["TablePrivileges"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `ColumnPrivileges` is not array type"));

        const Value &tmpValue = rsp["ColumnPrivileges"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


