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

#include <tencentcloud/rce/v20201103/model/OutputFrontRiskValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

OutputFrontRiskValue::OutputFrontRiskValue() :
    m_requestsHasBeenSet(false),
    m_indexHasBeenSet(false)
{
}

CoreInternalOutcome OutputFrontRiskValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Requests") && !value["Requests"].IsNull())
    {
        if (!value["Requests"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputFrontRiskValue.Requests` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requests = value["Requests"].GetInt64();
        m_requestsHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputFrontRiskValue.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputFrontRiskValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Requests";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requests, allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

}


int64_t OutputFrontRiskValue::GetRequests() const
{
    return m_requests;
}

void OutputFrontRiskValue::SetRequests(const int64_t& _requests)
{
    m_requests = _requests;
    m_requestsHasBeenSet = true;
}

bool OutputFrontRiskValue::RequestsHasBeenSet() const
{
    return m_requestsHasBeenSet;
}

string OutputFrontRiskValue::GetIndex() const
{
    return m_index;
}

void OutputFrontRiskValue::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool OutputFrontRiskValue::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

