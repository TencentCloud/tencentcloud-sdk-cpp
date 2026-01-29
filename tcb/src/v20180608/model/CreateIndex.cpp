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

#include <tencentcloud/tcb/v20180608/model/CreateIndex.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateIndex::CreateIndex() :
    m_indexNameHasBeenSet(false),
    m_mgoKeySchemaHasBeenSet(false)
{
}

CoreInternalOutcome CreateIndex::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateIndex.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }

    if (value.HasMember("MgoKeySchema") && !value["MgoKeySchema"].IsNull())
    {
        if (!value["MgoKeySchema"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateIndex.MgoKeySchema` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mgoKeySchema.Deserialize(value["MgoKeySchema"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mgoKeySchemaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateIndex::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_mgoKeySchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MgoKeySchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mgoKeySchema.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CreateIndex::GetIndexName() const
{
    return m_indexName;
}

void CreateIndex::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool CreateIndex::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

MgoKeySchema CreateIndex::GetMgoKeySchema() const
{
    return m_mgoKeySchema;
}

void CreateIndex::SetMgoKeySchema(const MgoKeySchema& _mgoKeySchema)
{
    m_mgoKeySchema = _mgoKeySchema;
    m_mgoKeySchemaHasBeenSet = true;
}

bool CreateIndex::MgoKeySchemaHasBeenSet() const
{
    return m_mgoKeySchemaHasBeenSet;
}

