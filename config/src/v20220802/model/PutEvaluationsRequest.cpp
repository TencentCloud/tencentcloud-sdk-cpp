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

#include <tencentcloud/config/v20220802/model/PutEvaluationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

PutEvaluationsRequest::PutEvaluationsRequest() :
    m_resultTokenHasBeenSet(false),
    m_evaluationsHasBeenSet(false)
{
}

string PutEvaluationsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resultTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resultToken.c_str(), allocator).Move(), allocator);
    }

    if (m_evaluationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Evaluations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_evaluations.begin(); itr != m_evaluations.end(); ++itr, ++i)
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


string PutEvaluationsRequest::GetResultToken() const
{
    return m_resultToken;
}

void PutEvaluationsRequest::SetResultToken(const string& _resultToken)
{
    m_resultToken = _resultToken;
    m_resultTokenHasBeenSet = true;
}

bool PutEvaluationsRequest::ResultTokenHasBeenSet() const
{
    return m_resultTokenHasBeenSet;
}

vector<Evaluation> PutEvaluationsRequest::GetEvaluations() const
{
    return m_evaluations;
}

void PutEvaluationsRequest::SetEvaluations(const vector<Evaluation>& _evaluations)
{
    m_evaluations = _evaluations;
    m_evaluationsHasBeenSet = true;
}

bool PutEvaluationsRequest::EvaluationsHasBeenSet() const
{
    return m_evaluationsHasBeenSet;
}


