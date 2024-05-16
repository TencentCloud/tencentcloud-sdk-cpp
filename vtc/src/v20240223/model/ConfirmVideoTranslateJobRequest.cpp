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

#include <tencentcloud/vtc/v20240223/model/ConfirmVideoTranslateJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vtc::V20240223::Model;
using namespace std;

ConfirmVideoTranslateJobRequest::ConfirmVideoTranslateJobRequest() :
    m_jobIdHasBeenSet(false),
    m_translateResultsHasBeenSet(false)
{
}

string ConfirmVideoTranslateJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_translateResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_translateResults.begin(); itr != m_translateResults.end(); ++itr, ++i)
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


string ConfirmVideoTranslateJobRequest::GetJobId() const
{
    return m_jobId;
}

void ConfirmVideoTranslateJobRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ConfirmVideoTranslateJobRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

vector<AudioTranslateResult> ConfirmVideoTranslateJobRequest::GetTranslateResults() const
{
    return m_translateResults;
}

void ConfirmVideoTranslateJobRequest::SetTranslateResults(const vector<AudioTranslateResult>& _translateResults)
{
    m_translateResults = _translateResults;
    m_translateResultsHasBeenSet = true;
}

bool ConfirmVideoTranslateJobRequest::TranslateResultsHasBeenSet() const
{
    return m_translateResultsHasBeenSet;
}


