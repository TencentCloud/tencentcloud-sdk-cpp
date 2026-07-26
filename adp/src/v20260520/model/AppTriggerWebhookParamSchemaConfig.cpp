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

#include <tencentcloud/adp/v20260520/model/AppTriggerWebhookParamSchemaConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerWebhookParamSchemaConfig::AppTriggerWebhookParamSchemaConfig() :
    m_schemaListHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerWebhookParamSchemaConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SchemaList") && !value["SchemaList"].IsNull())
    {
        if (!value["SchemaList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppTriggerWebhookParamSchemaConfig.SchemaList` is not array type"));

        const rapidjson::Value &tmpValue = value["SchemaList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AppTriggerParamSchema item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_schemaList.push_back(item);
        }
        m_schemaListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerWebhookParamSchemaConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_schemaListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_schemaList.begin(); itr != m_schemaList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<AppTriggerParamSchema> AppTriggerWebhookParamSchemaConfig::GetSchemaList() const
{
    return m_schemaList;
}

void AppTriggerWebhookParamSchemaConfig::SetSchemaList(const vector<AppTriggerParamSchema>& _schemaList)
{
    m_schemaList = _schemaList;
    m_schemaListHasBeenSet = true;
}

bool AppTriggerWebhookParamSchemaConfig::SchemaListHasBeenSet() const
{
    return m_schemaListHasBeenSet;
}

