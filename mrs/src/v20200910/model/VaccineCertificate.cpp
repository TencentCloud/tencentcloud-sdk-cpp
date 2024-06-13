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

#include <tencentcloud/mrs/v20200910/model/VaccineCertificate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

VaccineCertificate::VaccineCertificate() :
    m_vaccineListHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome VaccineCertificate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VaccineList") && !value["VaccineList"].IsNull())
    {
        if (!value["VaccineList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VaccineCertificate.VaccineList` is not array type"));

        const rapidjson::Value &tmpValue = value["VaccineList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Vaccination item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vaccineList.push_back(item);
        }
        m_vaccineListHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VaccineCertificate.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VaccineCertificate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vaccineListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaccineList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vaccineList.begin(); itr != m_vaccineList.end(); ++itr, ++i)
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


vector<Vaccination> VaccineCertificate::GetVaccineList() const
{
    return m_vaccineList;
}

void VaccineCertificate::SetVaccineList(const vector<Vaccination>& _vaccineList)
{
    m_vaccineList = _vaccineList;
    m_vaccineListHasBeenSet = true;
}

bool VaccineCertificate::VaccineListHasBeenSet() const
{
    return m_vaccineListHasBeenSet;
}

int64_t VaccineCertificate::GetPage() const
{
    return m_page;
}

void VaccineCertificate::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool VaccineCertificate::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

