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

#include <tencentcloud/mrs/v20200910/model/ImageReport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ImageReport::ImageReport() :
    m_imageTextHasBeenSet(false),
    m_kindSetHasBeenSet(false),
    m_basicInfoHasBeenSet(false),
    m_personalInfoHasBeenSet(false),
    m_testListHasBeenSet(false),
    m_inspectionHasBeenSet(false),
    m_caseHistoryHasBeenSet(false),
    m_pathologyHasBeenSet(false)
{
}

CoreInternalOutcome ImageReport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageText") && !value["ImageText"].IsNull())
    {
        if (!value["ImageText"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ImageReport.ImageText` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageText.Deserialize(value["ImageText"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageTextHasBeenSet = true;
    }

    if (value.HasMember("KindSet") && !value["KindSet"].IsNull())
    {
        if (!value["KindSet"].IsArray())
            return CoreInternalOutcome(Error("response `ImageReport.KindSet` is not array type"));

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
            return CoreInternalOutcome(Error("response `ImageReport.BasicInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `ImageReport.PersonalInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `ImageReport.TestList` is not array type"));

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
            return CoreInternalOutcome(Error("response `ImageReport.Inspection` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `ImageReport.CaseHistory` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `ImageReport.Pathology` is not object type").SetRequestId(requestId));
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

void ImageReport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageText.ToJsonObject(value[key.c_str()], allocator);
    }

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


ImageText ImageReport::GetImageText() const
{
    return m_imageText;
}

void ImageReport::SetImageText(const ImageText& _imageText)
{
    m_imageText = _imageText;
    m_imageTextHasBeenSet = true;
}

bool ImageReport::ImageTextHasBeenSet() const
{
    return m_imageTextHasBeenSet;
}

vector<KindItem> ImageReport::GetKindSet() const
{
    return m_kindSet;
}

void ImageReport::SetKindSet(const vector<KindItem>& _kindSet)
{
    m_kindSet = _kindSet;
    m_kindSetHasBeenSet = true;
}

bool ImageReport::KindSetHasBeenSet() const
{
    return m_kindSetHasBeenSet;
}

BasicInfo ImageReport::GetBasicInfo() const
{
    return m_basicInfo;
}

void ImageReport::SetBasicInfo(const BasicInfo& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool ImageReport::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}

PersonalInfo ImageReport::GetPersonalInfo() const
{
    return m_personalInfo;
}

void ImageReport::SetPersonalInfo(const PersonalInfo& _personalInfo)
{
    m_personalInfo = _personalInfo;
    m_personalInfoHasBeenSet = true;
}

bool ImageReport::PersonalInfoHasBeenSet() const
{
    return m_personalInfoHasBeenSet;
}

vector<TestItem> ImageReport::GetTestList() const
{
    return m_testList;
}

void ImageReport::SetTestList(const vector<TestItem>& _testList)
{
    m_testList = _testList;
    m_testListHasBeenSet = true;
}

bool ImageReport::TestListHasBeenSet() const
{
    return m_testListHasBeenSet;
}

Inspection ImageReport::GetInspection() const
{
    return m_inspection;
}

void ImageReport::SetInspection(const Inspection& _inspection)
{
    m_inspection = _inspection;
    m_inspectionHasBeenSet = true;
}

bool ImageReport::InspectionHasBeenSet() const
{
    return m_inspectionHasBeenSet;
}

CaseHistory ImageReport::GetCaseHistory() const
{
    return m_caseHistory;
}

void ImageReport::SetCaseHistory(const CaseHistory& _caseHistory)
{
    m_caseHistory = _caseHistory;
    m_caseHistoryHasBeenSet = true;
}

bool ImageReport::CaseHistoryHasBeenSet() const
{
    return m_caseHistoryHasBeenSet;
}

Pathology ImageReport::GetPathology() const
{
    return m_pathology;
}

void ImageReport::SetPathology(const Pathology& _pathology)
{
    m_pathology = _pathology;
    m_pathologyHasBeenSet = true;
}

bool ImageReport::PathologyHasBeenSet() const
{
    return m_pathologyHasBeenSet;
}

