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

#include <tencentcloud/cynosdb/v20190107/model/DescribeAccountAllGrantPrivilegesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeAccountAllGrantPrivilegesResponse::DescribeAccountAllGrantPrivilegesResponse() :
    m_privilegeStatementsHasBeenSet(false),
    m_globalPrivilegesHasBeenSet(false),
    m_databasePrivilegesHasBeenSet(false),
    m_tablePrivilegesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccountAllGrantPrivilegesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PrivilegeStatements") && !rsp["PrivilegeStatements"].IsNull())
    {
        if (!rsp["PrivilegeStatements"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivilegeStatements` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PrivilegeStatements"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privilegeStatements.push_back((*itr).GetString());
        }
        m_privilegeStatementsHasBeenSet = true;
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
            DatabasePrivileges item;
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
            TablePrivileges item;
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


    return CoreInternalOutcome(true);
}

string DescribeAccountAllGrantPrivilegesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_privilegeStatementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeStatements";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privilegeStatements.begin(); itr != m_privilegeStatements.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeAccountAllGrantPrivilegesResponse::GetPrivilegeStatements() const
{
    return m_privilegeStatements;
}

bool DescribeAccountAllGrantPrivilegesResponse::PrivilegeStatementsHasBeenSet() const
{
    return m_privilegeStatementsHasBeenSet;
}

vector<string> DescribeAccountAllGrantPrivilegesResponse::GetGlobalPrivileges() const
{
    return m_globalPrivileges;
}

bool DescribeAccountAllGrantPrivilegesResponse::GlobalPrivilegesHasBeenSet() const
{
    return m_globalPrivilegesHasBeenSet;
}

vector<DatabasePrivileges> DescribeAccountAllGrantPrivilegesResponse::GetDatabasePrivileges() const
{
    return m_databasePrivileges;
}

bool DescribeAccountAllGrantPrivilegesResponse::DatabasePrivilegesHasBeenSet() const
{
    return m_databasePrivilegesHasBeenSet;
}

vector<TablePrivileges> DescribeAccountAllGrantPrivilegesResponse::GetTablePrivileges() const
{
    return m_tablePrivileges;
}

bool DescribeAccountAllGrantPrivilegesResponse::TablePrivilegesHasBeenSet() const
{
    return m_tablePrivilegesHasBeenSet;
}


