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

#include <tencentcloud/dbbrain/v20210527/model/SchemaItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace rapidjson;
using namespace std;

SchemaItem::SchemaItem() :
    m_schemaHasBeenSet(false)
{
}

CoreInternalOutcome SchemaItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsString())
        {
            return CoreInternalOutcome(Error("response `SchemaItem.Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(value["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchemaItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_schemaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_schema.c_str(), allocator).Move(), allocator);
    }

}


string SchemaItem::GetSchema() const
{
    return m_schema;
}

void SchemaItem::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool SchemaItem::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

