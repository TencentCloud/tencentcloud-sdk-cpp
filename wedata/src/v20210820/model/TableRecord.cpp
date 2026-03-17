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

#include <tencentcloud/wedata/v20210820/model/TableRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableRecord::TableRecord() :
    m_tableRecordFieldSetHasBeenSet(false)
{
}

CoreInternalOutcome TableRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableRecordFieldSet") && !value["TableRecordFieldSet"].IsNull())
    {
        if (!value["TableRecordFieldSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableRecord.TableRecordFieldSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TableRecordFieldSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableRecordField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tableRecordFieldSet.push_back(item);
        }
        m_tableRecordFieldSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableRecordFieldSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableRecordFieldSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableRecordFieldSet.begin(); itr != m_tableRecordFieldSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TableRecordField> TableRecord::GetTableRecordFieldSet() const
{
    return m_tableRecordFieldSet;
}

void TableRecord::SetTableRecordFieldSet(const vector<TableRecordField>& _tableRecordFieldSet)
{
    m_tableRecordFieldSet = _tableRecordFieldSet;
    m_tableRecordFieldSetHasBeenSet = true;
}

bool TableRecord::TableRecordFieldSetHasBeenSet() const
{
    return m_tableRecordFieldSetHasBeenSet;
}

