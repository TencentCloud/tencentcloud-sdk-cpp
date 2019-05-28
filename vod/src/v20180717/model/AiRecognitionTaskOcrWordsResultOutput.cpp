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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskOcrWordsResultOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AiRecognitionTaskOcrWordsResultOutput::AiRecognitionTaskOcrWordsResultOutput() :
    m_resultSetHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskOcrWordsResultOutput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultSet") && !value["ResultSet"].IsNull())
    {
        if (!value["ResultSet"].IsArray())
            return CoreInternalOutcome(Error("response `AiRecognitionTaskOcrWordsResultOutput.ResultSet` is not array type"));

        const Value &tmpValue = value["ResultSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiRecognitionTaskOcrWordsResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultSet.push_back(item);
        }
        m_resultSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskOcrWordsResultOutput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_resultSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultSet.begin(); itr != m_resultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<AiRecognitionTaskOcrWordsResultItem> AiRecognitionTaskOcrWordsResultOutput::GetResultSet() const
{
    return m_resultSet;
}

void AiRecognitionTaskOcrWordsResultOutput::SetResultSet(const vector<AiRecognitionTaskOcrWordsResultItem>& _resultSet)
{
    m_resultSet = _resultSet;
    m_resultSetHasBeenSet = true;
}

bool AiRecognitionTaskOcrWordsResultOutput::ResultSetHasBeenSet() const
{
    return m_resultSetHasBeenSet;
}

