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

#include <tencentcloud/dbbrain/v20210527/model/DescribeUserSqlAdviceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeUserSqlAdviceResponse::DescribeUserSqlAdviceResponse() :
    m_advicesHasBeenSet(false),
    m_commentsHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_tablesHasBeenSet(false),
    m_sqlPlanHasBeenSet(false),
    m_costHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserSqlAdviceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Advices") && !rsp["Advices"].IsNull())
    {
        if (!rsp["Advices"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Advices` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advices = string(rsp["Advices"].GetString());
        m_advicesHasBeenSet = true;
    }

    if (rsp.HasMember("Comments") && !rsp["Comments"].IsNull())
    {
        if (!rsp["Comments"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Comments` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comments = string(rsp["Comments"].GetString());
        m_commentsHasBeenSet = true;
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

    if (rsp.HasMember("Schema") && !rsp["Schema"].IsNull())
    {
        if (!rsp["Schema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(rsp["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }

    if (rsp.HasMember("Tables") && !rsp["Tables"].IsNull())
    {
        if (!rsp["Tables"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tables` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tables = string(rsp["Tables"].GetString());
        m_tablesHasBeenSet = true;
    }

    if (rsp.HasMember("SqlPlan") && !rsp["SqlPlan"].IsNull())
    {
        if (!rsp["SqlPlan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlPlan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlPlan = string(rsp["SqlPlan"].GetString());
        m_sqlPlanHasBeenSet = true;
    }

    if (rsp.HasMember("Cost") && !rsp["Cost"].IsNull())
    {
        if (!rsp["Cost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cost = string(rsp["Cost"].GetString());
        m_costHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserSqlAdviceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_advicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advices.c_str(), allocator).Move(), allocator);
    }

    if (m_commentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comments.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlText.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_tablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tables.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlPlan.c_str(), allocator).Move(), allocator);
    }

    if (m_costHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cost.c_str(), allocator).Move(), allocator);
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


string DescribeUserSqlAdviceResponse::GetAdvices() const
{
    return m_advices;
}

bool DescribeUserSqlAdviceResponse::AdvicesHasBeenSet() const
{
    return m_advicesHasBeenSet;
}

string DescribeUserSqlAdviceResponse::GetComments() const
{
    return m_comments;
}

bool DescribeUserSqlAdviceResponse::CommentsHasBeenSet() const
{
    return m_commentsHasBeenSet;
}

string DescribeUserSqlAdviceResponse::GetSqlText() const
{
    return m_sqlText;
}

bool DescribeUserSqlAdviceResponse::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

string DescribeUserSqlAdviceResponse::GetSchema() const
{
    return m_schema;
}

bool DescribeUserSqlAdviceResponse::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string DescribeUserSqlAdviceResponse::GetTables() const
{
    return m_tables;
}

bool DescribeUserSqlAdviceResponse::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}

string DescribeUserSqlAdviceResponse::GetSqlPlan() const
{
    return m_sqlPlan;
}

bool DescribeUserSqlAdviceResponse::SqlPlanHasBeenSet() const
{
    return m_sqlPlanHasBeenSet;
}

string DescribeUserSqlAdviceResponse::GetCost() const
{
    return m_cost;
}

bool DescribeUserSqlAdviceResponse::CostHasBeenSet() const
{
    return m_costHasBeenSet;
}


