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

#include <tencentcloud/mrs/v20200910/model/DiagCert.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

DiagCert::DiagCert() :
    m_adviceHasBeenSet(false),
    m_diagnosisHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome DiagCert::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Advice") && !value["Advice"].IsNull())
    {
        if (!value["Advice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiagCert.Advice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advice.Deserialize(value["Advice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adviceHasBeenSet = true;
    }

    if (value.HasMember("Diagnosis") && !value["Diagnosis"].IsNull())
    {
        if (!value["Diagnosis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagCert.Diagnosis` is not array type"));

        const rapidjson::Value &tmpValue = value["Diagnosis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiagCertItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diagnosis.push_back(item);
        }
        m_diagnosisHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiagCert.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagCert::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_adviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Diagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diagnosis.begin(); itr != m_diagnosis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


Advice DiagCert::GetAdvice() const
{
    return m_advice;
}

void DiagCert::SetAdvice(const Advice& _advice)
{
    m_advice = _advice;
    m_adviceHasBeenSet = true;
}

bool DiagCert::AdviceHasBeenSet() const
{
    return m_adviceHasBeenSet;
}

vector<DiagCertItem> DiagCert::GetDiagnosis() const
{
    return m_diagnosis;
}

void DiagCert::SetDiagnosis(const vector<DiagCertItem>& _diagnosis)
{
    m_diagnosis = _diagnosis;
    m_diagnosisHasBeenSet = true;
}

bool DiagCert::DiagnosisHasBeenSet() const
{
    return m_diagnosisHasBeenSet;
}

int64_t DiagCert::GetPage() const
{
    return m_page;
}

void DiagCert::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DiagCert::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

