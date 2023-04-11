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

#include <tencentcloud/vrs/v20200824/model/TrainingTexts.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

TrainingTexts::TrainingTexts() :
    m_trainingTextListHasBeenSet(false)
{
}

CoreInternalOutcome TrainingTexts::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TrainingTextList") && !value["TrainingTextList"].IsNull())
    {
        if (!value["TrainingTextList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingTexts.TrainingTextList` is not array type"));

        const rapidjson::Value &tmpValue = value["TrainingTextList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrainingText item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trainingTextList.push_back(item);
        }
        m_trainingTextListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingTexts::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_trainingTextListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingTextList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trainingTextList.begin(); itr != m_trainingTextList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TrainingText> TrainingTexts::GetTrainingTextList() const
{
    return m_trainingTextList;
}

void TrainingTexts::SetTrainingTextList(const vector<TrainingText>& _trainingTextList)
{
    m_trainingTextList = _trainingTextList;
    m_trainingTextListHasBeenSet = true;
}

bool TrainingTexts::TrainingTextListHasBeenSet() const
{
    return m_trainingTextListHasBeenSet;
}

