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

#include <tencentcloud/dsgc/v20190723/model/DecribeSuggestRiskLevelMatrixRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DecribeSuggestRiskLevelMatrixRequest::DecribeSuggestRiskLevelMatrixRequest() :
    m_dspaIdHasBeenSet(false),
    m_sensitiveLevelListHasBeenSet(false),
    m_vulnerabilityLevelListHasBeenSet(false)
{
}

string DecribeSuggestRiskLevelMatrixRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveLevelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveLevelList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sensitiveLevelList.begin(); itr != m_sensitiveLevelList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vulnerabilityLevelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulnerabilityLevelList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vulnerabilityLevelList.begin(); itr != m_vulnerabilityLevelList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DecribeSuggestRiskLevelMatrixRequest::GetDspaId() const
{
    return m_dspaId;
}

void DecribeSuggestRiskLevelMatrixRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DecribeSuggestRiskLevelMatrixRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

vector<RiskMatrixLevel> DecribeSuggestRiskLevelMatrixRequest::GetSensitiveLevelList() const
{
    return m_sensitiveLevelList;
}

void DecribeSuggestRiskLevelMatrixRequest::SetSensitiveLevelList(const vector<RiskMatrixLevel>& _sensitiveLevelList)
{
    m_sensitiveLevelList = _sensitiveLevelList;
    m_sensitiveLevelListHasBeenSet = true;
}

bool DecribeSuggestRiskLevelMatrixRequest::SensitiveLevelListHasBeenSet() const
{
    return m_sensitiveLevelListHasBeenSet;
}

vector<RiskMatrixLevel> DecribeSuggestRiskLevelMatrixRequest::GetVulnerabilityLevelList() const
{
    return m_vulnerabilityLevelList;
}

void DecribeSuggestRiskLevelMatrixRequest::SetVulnerabilityLevelList(const vector<RiskMatrixLevel>& _vulnerabilityLevelList)
{
    m_vulnerabilityLevelList = _vulnerabilityLevelList;
    m_vulnerabilityLevelListHasBeenSet = true;
}

bool DecribeSuggestRiskLevelMatrixRequest::VulnerabilityLevelListHasBeenSet() const
{
    return m_vulnerabilityLevelListHasBeenSet;
}


