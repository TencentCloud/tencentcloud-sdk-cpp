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

#include <tencentcloud/mrs/v20200910/model/TextReport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

TextReport::TextReport() :
    m_kindSetHasBeenSet(false),
    m_basicInfoHasBeenSet(false),
    m_personalInfoHasBeenSet(false),
    m_testListHasBeenSet(false),
    m_inspectionHasBeenSet(false),
    m_caseHistoryHasBeenSet(false),
    m_pathologyHasBeenSet(false)
{
}

CoreInternalOutcome TextReport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KindSet") && !value["KindSet"].IsNull())
    {
        if (!value["KindSet"].IsArray())
            return CoreInternalOutcome(Error("response `TextReport.KindSet` is not array type"));

        const rapidjson::Value &tmpValue = value["KindSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KindItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_kindSet.push_back(item);
        }
        m_kindSetHasBeenSet = true;
    }

    if (value.HasMember("BasicInfo") && !value["BasicInfo"].IsNull())
    {
        if (!value["BasicInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TextReport.BasicInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicInfo.Deserialize(value["BasicInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicInfoHasBeenSet = true;
    }

    if (value.HasMember("PersonalInfo") && !value["PersonalInfo"].IsNull())
    {
        if (!value["PersonalInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TextReport.PersonalInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_personalInfo.Deserialize(value["PersonalInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personalInfoHasBeenSet = true;
    }

    if (value.HasMember("TestList") && !value["TestList"].IsNull())
    {
        if (!value["TestList"].IsArray())
            return CoreInternalOutcome(Error("response `TextReport.TestList` is not array type"));

        const rapidjson::Value &tmpValue = value["TestList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TestItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_testList.push_back(item);
        }
        m_testListHasBeenSet = true;
    }

    if (value.HasMember("Inspection") && !value["Inspection"].IsNull())
    {
        if (!value["Inspection"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TextReport.Inspection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inspection.Deserialize(value["Inspection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inspectionHasBeenSet = true;
    }

    if (value.HasMember("CaseHistory") && !value["CaseHistory"].IsNull())
    {
        if (!value["CaseHistory"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TextReport.CaseHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_caseHistory.Deserialize(value["CaseHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_caseHistoryHasBeenSet = true;
    }

    if (value.HasMember("Pathology") && !value["Pathology"].IsNull())
    {
        if (!value["Pathology"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TextReport.Pathology` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pathology.Deserialize(value["Pathology"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pathologyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextReport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kindSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KindSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_kindSet.begin(); itr != m_kindSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_basicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_personalInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonalInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_personalInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_testListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_testList.begin(); itr != m_testList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inspectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inspection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inspection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_caseHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caseHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pathologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pathology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pathology.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<KindItem> TextReport::GetKindSet() const
{
    return m_kindSet;
}

void TextReport::SetKindSet(const vector<KindItem>& _kindSet)
{
    m_kindSet = _kindSet;
    m_kindSetHasBeenSet = true;
}

bool TextReport::KindSetHasBeenSet() const
{
    return m_kindSetHasBeenSet;
}

BasicInfo TextReport::GetBasicInfo() const
{
    return m_basicInfo;
}

void TextReport::SetBasicInfo(const BasicInfo& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool TextReport::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}

PersonalInfo TextReport::GetPersonalInfo() const
{
    return m_personalInfo;
}

void TextReport::SetPersonalInfo(const PersonalInfo& _personalInfo)
{
    m_personalInfo = _personalInfo;
    m_personalInfoHasBeenSet = true;
}

bool TextReport::PersonalInfoHasBeenSet() const
{
    return m_personalInfoHasBeenSet;
}

vector<TestItem> TextReport::GetTestList() const
{
    return m_testList;
}

void TextReport::SetTestList(const vector<TestItem>& _testList)
{
    m_testList = _testList;
    m_testListHasBeenSet = true;
}

bool TextReport::TestListHasBeenSet() const
{
    return m_testListHasBeenSet;
}

Inspection TextReport::GetInspection() const
{
    return m_inspection;
}

void TextReport::SetInspection(const Inspection& _inspection)
{
    m_inspection = _inspection;
    m_inspectionHasBeenSet = true;
}

bool TextReport::InspectionHasBeenSet() const
{
    return m_inspectionHasBeenSet;
}

CaseHistory TextReport::GetCaseHistory() const
{
    return m_caseHistory;
}

void TextReport::SetCaseHistory(const CaseHistory& _caseHistory)
{
    m_caseHistory = _caseHistory;
    m_caseHistoryHasBeenSet = true;
}

bool TextReport::CaseHistoryHasBeenSet() const
{
    return m_caseHistoryHasBeenSet;
}

Pathology TextReport::GetPathology() const
{
    return m_pathology;
}

void TextReport::SetPathology(const Pathology& _pathology)
{
    m_pathology = _pathology;
    m_pathologyHasBeenSet = true;
}

bool TextReport::PathologyHasBeenSet() const
{
    return m_pathologyHasBeenSet;
}

