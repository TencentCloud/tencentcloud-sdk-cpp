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

#include <tencentcloud/dbbrain/v20210527/model/DescribeSqlTemplateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeSqlTemplateResponse::DescribeSqlTemplateResponse() :
    m_schemaHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_sqlTypeHasBeenSet(false),
    m_sqlTemplateHasBeenSet(false),
    m_sqlIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSqlTemplateResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("SqlType") && !rsp["SqlType"].IsNull())
    {
        if (!rsp["SqlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlType = string(rsp["SqlType"].GetString());
        m_sqlTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SqlTemplate") && !rsp["SqlTemplate"].IsNull())
    {
        if (!rsp["SqlTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlTemplate = string(rsp["SqlTemplate"].GetString());
        m_sqlTemplateHasBeenSet = true;
    }

    if (rsp.HasMember("SqlId") && !rsp["SqlId"].IsNull())
    {
        if (!rsp["SqlId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SqlId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sqlId = rsp["SqlId"].GetInt64();
        m_sqlIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSqlTemplateResponse::ToJsonString() const
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

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlId, allocator);
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


string DescribeSqlTemplateResponse::GetSchema() const
{
    return m_schema;
}

bool DescribeSqlTemplateResponse::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string DescribeSqlTemplateResponse::GetSqlText() const
{
    return m_sqlText;
}

bool DescribeSqlTemplateResponse::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

string DescribeSqlTemplateResponse::GetSqlType() const
{
    return m_sqlType;
}

bool DescribeSqlTemplateResponse::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

string DescribeSqlTemplateResponse::GetSqlTemplate() const
{
    return m_sqlTemplate;
}

bool DescribeSqlTemplateResponse::SqlTemplateHasBeenSet() const
{
    return m_sqlTemplateHasBeenSet;
}

int64_t DescribeSqlTemplateResponse::GetSqlId() const
{
    return m_sqlId;
}

bool DescribeSqlTemplateResponse::SqlIdHasBeenSet() const
{
    return m_sqlIdHasBeenSet;
}


