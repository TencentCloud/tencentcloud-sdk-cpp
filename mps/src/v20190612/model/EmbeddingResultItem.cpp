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

#include <tencentcloud/mps/v20190612/model/EmbeddingResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

EmbeddingResultItem::EmbeddingResultItem() :
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome EmbeddingResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EmbeddingResultItem.Result` is not array type"));

        const rapidjson::Value &tmpValue = value["Result"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_result.push_back((*itr).GetDouble());
        }
        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmbeddingResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_result.begin(); itr != m_result.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

}


vector<double> EmbeddingResultItem::GetResult() const
{
    return m_result;
}

void EmbeddingResultItem::SetResult(const vector<double>& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool EmbeddingResultItem::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

