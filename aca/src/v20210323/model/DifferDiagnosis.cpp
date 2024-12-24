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

#include <tencentcloud/aca/v20210323/model/DifferDiagnosis.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

DifferDiagnosis::DifferDiagnosis() :
    m_differNameHasBeenSet(false),
    m_differTipsHasBeenSet(false),
    m_diseaseGuideInfoHasBeenSet(false)
{
}

CoreInternalOutcome DifferDiagnosis::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DifferName") && !value["DifferName"].IsNull())
    {
        if (!value["DifferName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferDiagnosis.DifferName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_differName = string(value["DifferName"].GetString());
        m_differNameHasBeenSet = true;
    }

    if (value.HasMember("DifferTips") && !value["DifferTips"].IsNull())
    {
        if (!value["DifferTips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferDiagnosis.DifferTips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_differTips = string(value["DifferTips"].GetString());
        m_differTipsHasBeenSet = true;
    }

    if (value.HasMember("DiseaseGuideInfo") && !value["DiseaseGuideInfo"].IsNull())
    {
        if (!value["DiseaseGuideInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DifferDiagnosis.DiseaseGuideInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diseaseGuideInfo = string(value["DiseaseGuideInfo"].GetString());
        m_diseaseGuideInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DifferDiagnosis::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_differNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_differName.c_str(), allocator).Move(), allocator);
    }

    if (m_differTipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferTips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_differTips.c_str(), allocator).Move(), allocator);
    }

    if (m_diseaseGuideInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiseaseGuideInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diseaseGuideInfo.c_str(), allocator).Move(), allocator);
    }

}


string DifferDiagnosis::GetDifferName() const
{
    return m_differName;
}

void DifferDiagnosis::SetDifferName(const string& _differName)
{
    m_differName = _differName;
    m_differNameHasBeenSet = true;
}

bool DifferDiagnosis::DifferNameHasBeenSet() const
{
    return m_differNameHasBeenSet;
}

string DifferDiagnosis::GetDifferTips() const
{
    return m_differTips;
}

void DifferDiagnosis::SetDifferTips(const string& _differTips)
{
    m_differTips = _differTips;
    m_differTipsHasBeenSet = true;
}

bool DifferDiagnosis::DifferTipsHasBeenSet() const
{
    return m_differTipsHasBeenSet;
}

string DifferDiagnosis::GetDiseaseGuideInfo() const
{
    return m_diseaseGuideInfo;
}

void DifferDiagnosis::SetDiseaseGuideInfo(const string& _diseaseGuideInfo)
{
    m_diseaseGuideInfo = _diseaseGuideInfo;
    m_diseaseGuideInfoHasBeenSet = true;
}

bool DifferDiagnosis::DiseaseGuideInfoHasBeenSet() const
{
    return m_diseaseGuideInfoHasBeenSet;
}

