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

#include <tencentcloud/iotexplorer/v20190423/model/SeeFaceRecognitionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeFaceRecognitionResult::SeeFaceRecognitionResult() :
    m_personsHasBeenSet(false)
{
}

CoreInternalOutcome SeeFaceRecognitionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Persons") && !value["Persons"].IsNull())
    {
        if (!value["Persons"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeFaceRecognitionResult.Persons` is not array type"));

        const rapidjson::Value &tmpValue = value["Persons"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SeeTaskPersonInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_persons.push_back(item);
        }
        m_personsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeFaceRecognitionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_personsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Persons";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_persons.begin(); itr != m_persons.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<SeeTaskPersonInfo> SeeFaceRecognitionResult::GetPersons() const
{
    return m_persons;
}

void SeeFaceRecognitionResult::SetPersons(const vector<SeeTaskPersonInfo>& _persons)
{
    m_persons = _persons;
    m_personsHasBeenSet = true;
}

bool SeeFaceRecognitionResult::PersonsHasBeenSet() const
{
    return m_personsHasBeenSet;
}

