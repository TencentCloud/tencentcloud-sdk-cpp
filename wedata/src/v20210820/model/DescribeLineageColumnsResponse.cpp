/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20210820/model/DescribeLineageColumnsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeLineageColumnsResponse::DescribeLineageColumnsResponse() :
    m_metastoreTypeHasBeenSet(false),
    m_metastoreTypeNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_columnSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLineageColumnsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MetastoreType") && !rsp["MetastoreType"].IsNull())
    {
        if (!rsp["MetastoreType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetastoreType` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MetastoreType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metastoreType.push_back((*itr).GetString());
        }
        m_metastoreTypeHasBeenSet = true;
    }

    if (rsp.HasMember("MetastoreTypeName") && !rsp["MetastoreTypeName"].IsNull())
    {
        if (!rsp["MetastoreTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetastoreTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metastoreTypeName = string(rsp["MetastoreTypeName"].GetString());
        m_metastoreTypeNameHasBeenSet = true;
    }

    if (rsp.HasMember("TableName") && !rsp["TableName"].IsNull())
    {
        if (!rsp["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(rsp["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (rsp.HasMember("ColumnSet") && !rsp["ColumnSet"].IsNull())
    {
        if (!rsp["ColumnSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ColumnSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ColumnSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ColumnLineageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columnSet.push_back(item);
        }
        m_columnSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLineageColumnsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_metastoreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetastoreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metastoreType.begin(); itr != m_metastoreType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_metastoreTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetastoreTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metastoreTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_columnSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columnSet.begin(); itr != m_columnSet.end(); ++itr, ++i)
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


vector<string> DescribeLineageColumnsResponse::GetMetastoreType() const
{
    return m_metastoreType;
}

bool DescribeLineageColumnsResponse::MetastoreTypeHasBeenSet() const
{
    return m_metastoreTypeHasBeenSet;
}

string DescribeLineageColumnsResponse::GetMetastoreTypeName() const
{
    return m_metastoreTypeName;
}

bool DescribeLineageColumnsResponse::MetastoreTypeNameHasBeenSet() const
{
    return m_metastoreTypeNameHasBeenSet;
}

string DescribeLineageColumnsResponse::GetTableName() const
{
    return m_tableName;
}

bool DescribeLineageColumnsResponse::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

vector<ColumnLineageInfo> DescribeLineageColumnsResponse::GetColumnSet() const
{
    return m_columnSet;
}

bool DescribeLineageColumnsResponse::ColumnSetHasBeenSet() const
{
    return m_columnSetHasBeenSet;
}


