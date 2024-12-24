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

#include <tencentcloud/aca/v20210323/model/EmrQuality.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

EmrQuality::EmrQuality() :
    m_missPhysicalExaminationHasBeenSet(false)
{
}

CoreInternalOutcome EmrQuality::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MissPhysicalExamination") && !value["MissPhysicalExamination"].IsNull())
    {
        if (!value["MissPhysicalExamination"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EmrQuality.MissPhysicalExamination` is not array type"));

        const rapidjson::Value &tmpValue = value["MissPhysicalExamination"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_missPhysicalExamination.push_back((*itr).GetString());
        }
        m_missPhysicalExaminationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmrQuality::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_missPhysicalExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MissPhysicalExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_missPhysicalExamination.begin(); itr != m_missPhysicalExamination.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> EmrQuality::GetMissPhysicalExamination() const
{
    return m_missPhysicalExamination;
}

void EmrQuality::SetMissPhysicalExamination(const vector<string>& _missPhysicalExamination)
{
    m_missPhysicalExamination = _missPhysicalExamination;
    m_missPhysicalExaminationHasBeenSet = true;
}

bool EmrQuality::MissPhysicalExaminationHasBeenSet() const
{
    return m_missPhysicalExaminationHasBeenSet;
}

