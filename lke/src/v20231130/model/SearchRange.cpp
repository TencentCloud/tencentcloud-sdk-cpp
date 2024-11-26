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

#include <tencentcloud/lke/v20231130/model/SearchRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

SearchRange::SearchRange() :
    m_conditionHasBeenSet(false),
    m_apiVarAttrInfosHasBeenSet(false)
{
}

CoreInternalOutcome SearchRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchRange.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("ApiVarAttrInfos") && !value["ApiVarAttrInfos"].IsNull())
    {
        if (!value["ApiVarAttrInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchRange.ApiVarAttrInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiVarAttrInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiVarAttrInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiVarAttrInfos.push_back(item);
        }
        m_apiVarAttrInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_apiVarAttrInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiVarAttrInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiVarAttrInfos.begin(); itr != m_apiVarAttrInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SearchRange::GetCondition() const
{
    return m_condition;
}

void SearchRange::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool SearchRange::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

vector<ApiVarAttrInfo> SearchRange::GetApiVarAttrInfos() const
{
    return m_apiVarAttrInfos;
}

void SearchRange::SetApiVarAttrInfos(const vector<ApiVarAttrInfo>& _apiVarAttrInfos)
{
    m_apiVarAttrInfos = _apiVarAttrInfos;
    m_apiVarAttrInfosHasBeenSet = true;
}

bool SearchRange::ApiVarAttrInfosHasBeenSet() const
{
    return m_apiVarAttrInfosHasBeenSet;
}

