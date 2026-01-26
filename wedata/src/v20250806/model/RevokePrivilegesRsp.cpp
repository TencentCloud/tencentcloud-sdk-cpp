/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20250806/model/RevokePrivilegesRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

RevokePrivilegesRsp::RevokePrivilegesRsp() :
    m_overallSuccessHasBeenSet(false),
    m_resultsHasBeenSet(false)
{
}

CoreInternalOutcome RevokePrivilegesRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OverallSuccess") && !value["OverallSuccess"].IsNull())
    {
        if (!value["OverallSuccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RevokePrivilegesRsp.OverallSuccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_overallSuccess = value["OverallSuccess"].GetBool();
        m_overallSuccessHasBeenSet = true;
    }

    if (value.HasMember("Results") && !value["Results"].IsNull())
    {
        if (!value["Results"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RevokePrivilegesRsp.Results` is not array type"));

        const rapidjson::Value &tmpValue = value["Results"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuthorizeResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_results.push_back(item);
        }
        m_resultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RevokePrivilegesRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_overallSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverallSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overallSuccess, allocator);
    }

    if (m_resultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Results";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_results.begin(); itr != m_results.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool RevokePrivilegesRsp::GetOverallSuccess() const
{
    return m_overallSuccess;
}

void RevokePrivilegesRsp::SetOverallSuccess(const bool& _overallSuccess)
{
    m_overallSuccess = _overallSuccess;
    m_overallSuccessHasBeenSet = true;
}

bool RevokePrivilegesRsp::OverallSuccessHasBeenSet() const
{
    return m_overallSuccessHasBeenSet;
}

vector<AuthorizeResult> RevokePrivilegesRsp::GetResults() const
{
    return m_results;
}

void RevokePrivilegesRsp::SetResults(const vector<AuthorizeResult>& _results)
{
    m_results = _results;
    m_resultsHasBeenSet = true;
}

bool RevokePrivilegesRsp::ResultsHasBeenSet() const
{
    return m_resultsHasBeenSet;
}

