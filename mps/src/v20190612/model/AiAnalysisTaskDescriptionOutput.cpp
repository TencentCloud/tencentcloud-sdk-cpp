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

#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskDescriptionOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisTaskDescriptionOutput::AiAnalysisTaskDescriptionOutput() :
    m_descriptionSetHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskDescriptionOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DescriptionSet") && !value["DescriptionSet"].IsNull())
    {
        if (!value["DescriptionSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDescriptionOutput.DescriptionSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DescriptionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaAiAnalysisDescriptionItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_descriptionSet.push_back(item);
        }
        m_descriptionSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskDescriptionOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptionSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_descriptionSet.begin(); itr != m_descriptionSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaAiAnalysisDescriptionItem> AiAnalysisTaskDescriptionOutput::GetDescriptionSet() const
{
    return m_descriptionSet;
}

void AiAnalysisTaskDescriptionOutput::SetDescriptionSet(const vector<MediaAiAnalysisDescriptionItem>& _descriptionSet)
{
    m_descriptionSet = _descriptionSet;
    m_descriptionSetHasBeenSet = true;
}

bool AiAnalysisTaskDescriptionOutput::DescriptionSetHasBeenSet() const
{
    return m_descriptionSetHasBeenSet;
}

