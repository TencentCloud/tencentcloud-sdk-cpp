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

#include <tencentcloud/cii/v20210408/model/MachinePredict.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

MachinePredict::MachinePredict() :
    m_titleHasBeenSet(false),
    m_conclusionHasBeenSet(false),
    m_explanationHasBeenSet(false),
    m_diseaseHasBeenSet(false),
    m_laboratoryHasBeenSet(false)
{
}

CoreInternalOutcome MachinePredict::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePredict.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Conclusion") && !value["Conclusion"].IsNull())
    {
        if (!value["Conclusion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachinePredict.Conclusion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conclusion = string(value["Conclusion"].GetString());
        m_conclusionHasBeenSet = true;
    }

    if (value.HasMember("Explanation") && !value["Explanation"].IsNull())
    {
        if (!value["Explanation"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachinePredict.Explanation` is not array type"));

        const rapidjson::Value &tmpValue = value["Explanation"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UnderwriteItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_explanation.push_back(item);
        }
        m_explanationHasBeenSet = true;
    }

    if (value.HasMember("Disease") && !value["Disease"].IsNull())
    {
        if (!value["Disease"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachinePredict.Disease` is not array type"));

        const rapidjson::Value &tmpValue = value["Disease"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UnderwriteItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_disease.push_back(item);
        }
        m_diseaseHasBeenSet = true;
    }

    if (value.HasMember("Laboratory") && !value["Laboratory"].IsNull())
    {
        if (!value["Laboratory"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachinePredict.Laboratory` is not array type"));

        const rapidjson::Value &tmpValue = value["Laboratory"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UnderwriteItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_laboratory.push_back(item);
        }
        m_laboratoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachinePredict::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_conclusionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conclusion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conclusion.c_str(), allocator).Move(), allocator);
    }

    if (m_explanationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Explanation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_explanation.begin(); itr != m_explanation.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_diseaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disease";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_disease.begin(); itr != m_disease.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_laboratoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Laboratory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_laboratory.begin(); itr != m_laboratory.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MachinePredict::GetTitle() const
{
    return m_title;
}

void MachinePredict::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool MachinePredict::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string MachinePredict::GetConclusion() const
{
    return m_conclusion;
}

void MachinePredict::SetConclusion(const string& _conclusion)
{
    m_conclusion = _conclusion;
    m_conclusionHasBeenSet = true;
}

bool MachinePredict::ConclusionHasBeenSet() const
{
    return m_conclusionHasBeenSet;
}

vector<UnderwriteItem> MachinePredict::GetExplanation() const
{
    return m_explanation;
}

void MachinePredict::SetExplanation(const vector<UnderwriteItem>& _explanation)
{
    m_explanation = _explanation;
    m_explanationHasBeenSet = true;
}

bool MachinePredict::ExplanationHasBeenSet() const
{
    return m_explanationHasBeenSet;
}

vector<UnderwriteItem> MachinePredict::GetDisease() const
{
    return m_disease;
}

void MachinePredict::SetDisease(const vector<UnderwriteItem>& _disease)
{
    m_disease = _disease;
    m_diseaseHasBeenSet = true;
}

bool MachinePredict::DiseaseHasBeenSet() const
{
    return m_diseaseHasBeenSet;
}

vector<UnderwriteItem> MachinePredict::GetLaboratory() const
{
    return m_laboratory;
}

void MachinePredict::SetLaboratory(const vector<UnderwriteItem>& _laboratory)
{
    m_laboratory = _laboratory;
    m_laboratoryHasBeenSet = true;
}

bool MachinePredict::LaboratoryHasBeenSet() const
{
    return m_laboratoryHasBeenSet;
}

