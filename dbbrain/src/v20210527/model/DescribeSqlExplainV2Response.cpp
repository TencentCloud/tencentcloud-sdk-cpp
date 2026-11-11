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

#include <tencentcloud/dbbrain/v20210527/model/DescribeSqlExplainV2Response.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeSqlExplainV2Response::DescribeSqlExplainV2Response() :
    m_schemaHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_tablesHasBeenSet(false),
    m_explainHasBeenSet(false),
    m_fieldDescHasBeenSet(false),
    m_visualExplainHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSqlExplainV2Response::Deserialize(const string &payload)
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


    if (rsp.HasMember("Schema") && !rsp["Schema"].IsNull())
    {
        if (!rsp["Schema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(rsp["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }

    if (rsp.HasMember("SqlText") && !rsp["SqlText"].IsNull())
    {
        if (!rsp["SqlText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlText = string(rsp["SqlText"].GetString());
        m_sqlTextHasBeenSet = true;
    }

    if (rsp.HasMember("Tables") && !rsp["Tables"].IsNull())
    {
        if (!rsp["Tables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tables` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SqlExplainTableRefV2 item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tables.push_back(item);
        }
        m_tablesHasBeenSet = true;
    }

    if (rsp.HasMember("Explain") && !rsp["Explain"].IsNull())
    {
        if (!rsp["Explain"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Explain` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_explain.Deserialize(rsp["Explain"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_explainHasBeenSet = true;
    }

    if (rsp.HasMember("FieldDesc") && !rsp["FieldDesc"].IsNull())
    {
        if (!rsp["FieldDesc"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FieldDesc` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FieldDesc"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SqlExplainFieldDescV2 item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fieldDesc.push_back(item);
        }
        m_fieldDescHasBeenSet = true;
    }

    if (rsp.HasMember("VisualExplain") && !rsp["VisualExplain"].IsNull())
    {
        if (!rsp["VisualExplain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisualExplain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_visualExplain = string(rsp["VisualExplain"].GetString());
        m_visualExplainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSqlExplainV2Response::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlText.c_str(), allocator).Move(), allocator);
    }

    if (m_tablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tables.begin(); itr != m_tables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_explainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Explain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_explain.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fieldDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fieldDesc.begin(); itr != m_fieldDesc.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_visualExplainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisualExplain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_visualExplain.c_str(), allocator).Move(), allocator);
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


string DescribeSqlExplainV2Response::GetSchema() const
{
    return m_schema;
}

bool DescribeSqlExplainV2Response::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string DescribeSqlExplainV2Response::GetSqlText() const
{
    return m_sqlText;
}

bool DescribeSqlExplainV2Response::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

vector<SqlExplainTableRefV2> DescribeSqlExplainV2Response::GetTables() const
{
    return m_tables;
}

bool DescribeSqlExplainV2Response::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}

SqlExplainResultV2 DescribeSqlExplainV2Response::GetExplain() const
{
    return m_explain;
}

bool DescribeSqlExplainV2Response::ExplainHasBeenSet() const
{
    return m_explainHasBeenSet;
}

vector<SqlExplainFieldDescV2> DescribeSqlExplainV2Response::GetFieldDesc() const
{
    return m_fieldDesc;
}

bool DescribeSqlExplainV2Response::FieldDescHasBeenSet() const
{
    return m_fieldDescHasBeenSet;
}

string DescribeSqlExplainV2Response::GetVisualExplain() const
{
    return m_visualExplain;
}

bool DescribeSqlExplainV2Response::VisualExplainHasBeenSet() const
{
    return m_visualExplainHasBeenSet;
}


