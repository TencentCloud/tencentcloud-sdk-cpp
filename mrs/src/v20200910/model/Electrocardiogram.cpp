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

#include <tencentcloud/mrs/v20200910/model/Electrocardiogram.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Electrocardiogram::Electrocardiogram() :
    m_ecgDescriptionHasBeenSet(false),
    m_ecgDiagnosisHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome Electrocardiogram::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EcgDescription") && !value["EcgDescription"].IsNull())
    {
        if (!value["EcgDescription"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Electrocardiogram.EcgDescription` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ecgDescription.Deserialize(value["EcgDescription"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ecgDescriptionHasBeenSet = true;
    }

    if (value.HasMember("EcgDiagnosis") && !value["EcgDiagnosis"].IsNull())
    {
        if (!value["EcgDiagnosis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Electrocardiogram.EcgDiagnosis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ecgDiagnosis.Deserialize(value["EcgDiagnosis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ecgDiagnosisHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Electrocardiogram.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Electrocardiogram::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ecgDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EcgDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ecgDescription.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ecgDiagnosisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EcgDiagnosis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ecgDiagnosis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


EcgDescription Electrocardiogram::GetEcgDescription() const
{
    return m_ecgDescription;
}

void Electrocardiogram::SetEcgDescription(const EcgDescription& _ecgDescription)
{
    m_ecgDescription = _ecgDescription;
    m_ecgDescriptionHasBeenSet = true;
}

bool Electrocardiogram::EcgDescriptionHasBeenSet() const
{
    return m_ecgDescriptionHasBeenSet;
}

EcgDiagnosis Electrocardiogram::GetEcgDiagnosis() const
{
    return m_ecgDiagnosis;
}

void Electrocardiogram::SetEcgDiagnosis(const EcgDiagnosis& _ecgDiagnosis)
{
    m_ecgDiagnosis = _ecgDiagnosis;
    m_ecgDiagnosisHasBeenSet = true;
}

bool Electrocardiogram::EcgDiagnosisHasBeenSet() const
{
    return m_ecgDiagnosisHasBeenSet;
}

int64_t Electrocardiogram::GetPage() const
{
    return m_page;
}

void Electrocardiogram::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool Electrocardiogram::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

