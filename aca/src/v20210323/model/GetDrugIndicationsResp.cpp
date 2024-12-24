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

#include <tencentcloud/aca/v20210323/model/GetDrugIndicationsResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

GetDrugIndicationsResp::GetDrugIndicationsResp() :
    m_indicationsHasBeenSet(false),
    m_docInfosHasBeenSet(false)
{
}

CoreInternalOutcome GetDrugIndicationsResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Indications") && !value["Indications"].IsNull())
    {
        if (!value["Indications"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetDrugIndicationsResp.Indications` is not array type"));

        const rapidjson::Value &tmpValue = value["Indications"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_indications.push_back((*itr).GetString());
        }
        m_indicationsHasBeenSet = true;
    }

    if (value.HasMember("DocInfos") && !value["DocInfos"].IsNull())
    {
        if (!value["DocInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetDrugIndicationsResp.DocInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["DocInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DocInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_docInfos.push_back(item);
        }
        m_docInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetDrugIndicationsResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indications.begin(); itr != m_indications.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_docInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_docInfos.begin(); itr != m_docInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> GetDrugIndicationsResp::GetIndications() const
{
    return m_indications;
}

void GetDrugIndicationsResp::SetIndications(const vector<string>& _indications)
{
    m_indications = _indications;
    m_indicationsHasBeenSet = true;
}

bool GetDrugIndicationsResp::IndicationsHasBeenSet() const
{
    return m_indicationsHasBeenSet;
}

vector<DocInfo> GetDrugIndicationsResp::GetDocInfos() const
{
    return m_docInfos;
}

void GetDrugIndicationsResp::SetDocInfos(const vector<DocInfo>& _docInfos)
{
    m_docInfos = _docInfos;
    m_docInfosHasBeenSet = true;
}

bool GetDrugIndicationsResp::DocInfosHasBeenSet() const
{
    return m_docInfosHasBeenSet;
}

