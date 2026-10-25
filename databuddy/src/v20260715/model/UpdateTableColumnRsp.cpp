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

#include <tencentcloud/databuddy/v20260715/model/UpdateTableColumnRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateTableColumnRsp::UpdateTableColumnRsp() :
    m_resultHasBeenSet(false),
    m_failedColumnsHasBeenSet(false)
{
}

CoreInternalOutcome UpdateTableColumnRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTableColumnRsp.Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetBool();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("FailedColumns") && !value["FailedColumns"].IsNull())
    {
        if (!value["FailedColumns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpdateTableColumnRsp.FailedColumns` is not array type"));

        const rapidjson::Value &tmpValue = value["FailedColumns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ColumnErrorMessages item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failedColumns.push_back(item);
        }
        m_failedColumnsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateTableColumnRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_failedColumnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedColumns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failedColumns.begin(); itr != m_failedColumns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool UpdateTableColumnRsp::GetResult() const
{
    return m_result;
}

void UpdateTableColumnRsp::SetResult(const bool& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool UpdateTableColumnRsp::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

vector<ColumnErrorMessages> UpdateTableColumnRsp::GetFailedColumns() const
{
    return m_failedColumns;
}

void UpdateTableColumnRsp::SetFailedColumns(const vector<ColumnErrorMessages>& _failedColumns)
{
    m_failedColumns = _failedColumns;
    m_failedColumnsHasBeenSet = true;
}

bool UpdateTableColumnRsp::FailedColumnsHasBeenSet() const
{
    return m_failedColumnsHasBeenSet;
}

