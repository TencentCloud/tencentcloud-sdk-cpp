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

#include <tencentcloud/trtc/v20190722/model/RowValues.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

RowValues::RowValues() :
    m_rowValueHasBeenSet(false)
{
}

CoreInternalOutcome RowValues::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RowValue") && !value["RowValue"].IsNull())
    {
        if (!value["RowValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RowValues.RowValue` is not array type"));

        const rapidjson::Value &tmpValue = value["RowValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rowValue.push_back((*itr).GetInt64());
        }
        m_rowValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RowValues::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rowValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rowValue.begin(); itr != m_rowValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> RowValues::GetRowValue() const
{
    return m_rowValue;
}

void RowValues::SetRowValue(const vector<int64_t>& _rowValue)
{
    m_rowValue = _rowValue;
    m_rowValueHasBeenSet = true;
}

bool RowValues::RowValueHasBeenSet() const
{
    return m_rowValueHasBeenSet;
}

