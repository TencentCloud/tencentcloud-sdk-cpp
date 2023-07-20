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

#include <tencentcloud/wedata/v20210820/model/DatasourceTypeByTaskType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DatasourceTypeByTaskType::DatasourceTypeByTaskType() :
    m_typeIdHasBeenSet(false),
    m_candidateTextsHasBeenSet(false),
    m_candidateValuesHasBeenSet(false)
{
}

CoreInternalOutcome DatasourceTypeByTaskType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeId") && !value["TypeId"].IsNull())
    {
        if (!value["TypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceTypeByTaskType.TypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_typeId = value["TypeId"].GetInt64();
        m_typeIdHasBeenSet = true;
    }

    if (value.HasMember("CandidateTexts") && !value["CandidateTexts"].IsNull())
    {
        if (!value["CandidateTexts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceTypeByTaskType.CandidateTexts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_candidateTexts = string(value["CandidateTexts"].GetString());
        m_candidateTextsHasBeenSet = true;
    }

    if (value.HasMember("CandidateValues") && !value["CandidateValues"].IsNull())
    {
        if (!value["CandidateValues"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceTypeByTaskType.CandidateValues` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_candidateValues = string(value["CandidateValues"].GetString());
        m_candidateValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatasourceTypeByTaskType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeId, allocator);
    }

    if (m_candidateTextsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CandidateTexts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_candidateTexts.c_str(), allocator).Move(), allocator);
    }

    if (m_candidateValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CandidateValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_candidateValues.c_str(), allocator).Move(), allocator);
    }

}


int64_t DatasourceTypeByTaskType::GetTypeId() const
{
    return m_typeId;
}

void DatasourceTypeByTaskType::SetTypeId(const int64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool DatasourceTypeByTaskType::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string DatasourceTypeByTaskType::GetCandidateTexts() const
{
    return m_candidateTexts;
}

void DatasourceTypeByTaskType::SetCandidateTexts(const string& _candidateTexts)
{
    m_candidateTexts = _candidateTexts;
    m_candidateTextsHasBeenSet = true;
}

bool DatasourceTypeByTaskType::CandidateTextsHasBeenSet() const
{
    return m_candidateTextsHasBeenSet;
}

string DatasourceTypeByTaskType::GetCandidateValues() const
{
    return m_candidateValues;
}

void DatasourceTypeByTaskType::SetCandidateValues(const string& _candidateValues)
{
    m_candidateValues = _candidateValues;
    m_candidateValuesHasBeenSet = true;
}

bool DatasourceTypeByTaskType::CandidateValuesHasBeenSet() const
{
    return m_candidateValuesHasBeenSet;
}

