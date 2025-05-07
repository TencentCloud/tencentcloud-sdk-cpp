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

#include <tencentcloud/cfw/v20190904/model/SearchLogTopics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SearchLogTopics::SearchLogTopics() :
    m_errorsHasBeenSet(false),
    m_infosHasBeenSet(false)
{
}

CoreInternalOutcome SearchLogTopics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Errors") && !value["Errors"].IsNull())
    {
        if (!value["Errors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchLogTopics.Errors` is not array type"));

        const rapidjson::Value &tmpValue = value["Errors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SearchLogErrors item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_errors.push_back(item);
        }
        m_errorsHasBeenSet = true;
    }

    if (value.HasMember("Infos") && !value["Infos"].IsNull())
    {
        if (!value["Infos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchLogTopics.Infos` is not array type"));

        const rapidjson::Value &tmpValue = value["Infos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SearchLogInfos item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_infos.push_back(item);
        }
        m_infosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchLogTopics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Errors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_errors.begin(); itr != m_errors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_infosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Infos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_infos.begin(); itr != m_infos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<SearchLogErrors> SearchLogTopics::GetErrors() const
{
    return m_errors;
}

void SearchLogTopics::SetErrors(const vector<SearchLogErrors>& _errors)
{
    m_errors = _errors;
    m_errorsHasBeenSet = true;
}

bool SearchLogTopics::ErrorsHasBeenSet() const
{
    return m_errorsHasBeenSet;
}

vector<SearchLogInfos> SearchLogTopics::GetInfos() const
{
    return m_infos;
}

void SearchLogTopics::SetInfos(const vector<SearchLogInfos>& _infos)
{
    m_infos = _infos;
    m_infosHasBeenSet = true;
}

bool SearchLogTopics::InfosHasBeenSet() const
{
    return m_infosHasBeenSet;
}

