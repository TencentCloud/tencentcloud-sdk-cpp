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

#include <tencentcloud/mrs/v20200910/model/DischargeInfoBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

DischargeInfoBlock::DischargeInfoBlock() :
    m_diseaseHistoryHasBeenSet(false),
    m_personalHistoryHasBeenSet(false),
    m_drugHistoryHasBeenSet(false),
    m_treatmentRecordHasBeenSet(false),
    m_paragraphBlockHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome DischargeInfoBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiseaseHistory") && !value["DiseaseHistory"].IsNull())
    {
        if (!value["DiseaseHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DischargeInfoBlock.DiseaseHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diseaseHistory.Deserialize(value["DiseaseHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diseaseHistoryHasBeenSet = true;
    }

    if (value.HasMember("PersonalHistory") && !value["PersonalHistory"].IsNull())
    {
        if (!value["PersonalHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DischargeInfoBlock.PersonalHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_personalHistory.Deserialize(value["PersonalHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personalHistoryHasBeenSet = true;
    }

    if (value.HasMember("DrugHistory") && !value["DrugHistory"].IsNull())
    {
        if (!value["DrugHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DischargeInfoBlock.DrugHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_drugHistory.Deserialize(value["DrugHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_drugHistoryHasBeenSet = true;
    }

    if (value.HasMember("TreatmentRecord") && !value["TreatmentRecord"].IsNull())
    {
        if (!value["TreatmentRecord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DischargeInfoBlock.TreatmentRecord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_treatmentRecord.Deserialize(value["TreatmentRecord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_treatmentRecordHasBeenSet = true;
    }

    if (value.HasMember("ParagraphBlock") && !value["ParagraphBlock"].IsNull())
    {
        if (!value["ParagraphBlock"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DischargeInfoBlock.ParagraphBlock` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_paragraphBlock.Deserialize(value["ParagraphBlock"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paragraphBlockHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DischargeInfoBlock.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DischargeInfoBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diseaseHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseaseHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diseaseHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_personalHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonalHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_personalHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_drugHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_drugHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_treatmentRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatmentRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_treatmentRecord.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_paragraphBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParagraphBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_paragraphBlock.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


DiseaseHistoryBlock DischargeInfoBlock::GetDiseaseHistory() const
{
    return m_diseaseHistory;
}

void DischargeInfoBlock::SetDiseaseHistory(const DiseaseHistoryBlock& _diseaseHistory)
{
    m_diseaseHistory = _diseaseHistory;
    m_diseaseHistoryHasBeenSet = true;
}

bool DischargeInfoBlock::DiseaseHistoryHasBeenSet() const
{
    return m_diseaseHistoryHasBeenSet;
}

PersonalHistoryBlock DischargeInfoBlock::GetPersonalHistory() const
{
    return m_personalHistory;
}

void DischargeInfoBlock::SetPersonalHistory(const PersonalHistoryBlock& _personalHistory)
{
    m_personalHistory = _personalHistory;
    m_personalHistoryHasBeenSet = true;
}

bool DischargeInfoBlock::PersonalHistoryHasBeenSet() const
{
    return m_personalHistoryHasBeenSet;
}

DrugHistoryBlock DischargeInfoBlock::GetDrugHistory() const
{
    return m_drugHistory;
}

void DischargeInfoBlock::SetDrugHistory(const DrugHistoryBlock& _drugHistory)
{
    m_drugHistory = _drugHistory;
    m_drugHistoryHasBeenSet = true;
}

bool DischargeInfoBlock::DrugHistoryHasBeenSet() const
{
    return m_drugHistoryHasBeenSet;
}

TreatmentRecordBlock DischargeInfoBlock::GetTreatmentRecord() const
{
    return m_treatmentRecord;
}

void DischargeInfoBlock::SetTreatmentRecord(const TreatmentRecordBlock& _treatmentRecord)
{
    m_treatmentRecord = _treatmentRecord;
    m_treatmentRecordHasBeenSet = true;
}

bool DischargeInfoBlock::TreatmentRecordHasBeenSet() const
{
    return m_treatmentRecordHasBeenSet;
}

ParagraphBlock DischargeInfoBlock::GetParagraphBlock() const
{
    return m_paragraphBlock;
}

void DischargeInfoBlock::SetParagraphBlock(const ParagraphBlock& _paragraphBlock)
{
    m_paragraphBlock = _paragraphBlock;
    m_paragraphBlockHasBeenSet = true;
}

bool DischargeInfoBlock::ParagraphBlockHasBeenSet() const
{
    return m_paragraphBlockHasBeenSet;
}

int64_t DischargeInfoBlock::GetPage() const
{
    return m_page;
}

void DischargeInfoBlock::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DischargeInfoBlock::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

