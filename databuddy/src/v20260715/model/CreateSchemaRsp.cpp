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

#include <tencentcloud/databuddy/v20260715/model/CreateSchemaRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateSchemaRsp::CreateSchemaRsp() :
    m_schemaHasBeenSet(false)
{
}

CoreInternalOutcome CreateSchemaRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateSchemaRsp.Schema` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_schema.Deserialize(value["Schema"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_schemaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateSchemaRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_schema.ToJsonObject(value[key.c_str()], allocator);
    }

}


Schema CreateSchemaRsp::GetSchema() const
{
    return m_schema;
}

void CreateSchemaRsp::SetSchema(const Schema& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool CreateSchemaRsp::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

