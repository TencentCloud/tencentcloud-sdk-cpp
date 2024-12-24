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

#include <tencentcloud/aca/v20210323/model/GetDrugIndicationsReqData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

GetDrugIndicationsReqData::GetDrugIndicationsReqData() :
    m_drugsHasBeenSet(false)
{
}

CoreInternalOutcome GetDrugIndicationsReqData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Drugs") && !value["Drugs"].IsNull())
    {
        if (!value["Drugs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetDrugIndicationsReqData.Drugs` is not array type"));

        const rapidjson::Value &tmpValue = value["Drugs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicationsDrug item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drugs.push_back(item);
        }
        m_drugsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetDrugIndicationsReqData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drugsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Drugs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drugs.begin(); itr != m_drugs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<IndicationsDrug> GetDrugIndicationsReqData::GetDrugs() const
{
    return m_drugs;
}

void GetDrugIndicationsReqData::SetDrugs(const vector<IndicationsDrug>& _drugs)
{
    m_drugs = _drugs;
    m_drugsHasBeenSet = true;
}

bool GetDrugIndicationsReqData::DrugsHasBeenSet() const
{
    return m_drugsHasBeenSet;
}

