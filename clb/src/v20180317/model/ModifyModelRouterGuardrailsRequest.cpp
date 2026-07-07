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

#include <tencentcloud/clb/v20180317/model/ModifyModelRouterGuardrailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyModelRouterGuardrailsRequest::ModifyModelRouterGuardrailsRequest() :
    m_guardrailsHasBeenSet(false),
    m_modelRouterIdHasBeenSet(false)
{
}

string ModifyModelRouterGuardrailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_guardrailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Guardrails";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_guardrails.begin(); itr != m_guardrails.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<GuardrailConfig> ModifyModelRouterGuardrailsRequest::GetGuardrails() const
{
    return m_guardrails;
}

void ModifyModelRouterGuardrailsRequest::SetGuardrails(const vector<GuardrailConfig>& _guardrails)
{
    m_guardrails = _guardrails;
    m_guardrailsHasBeenSet = true;
}

bool ModifyModelRouterGuardrailsRequest::GuardrailsHasBeenSet() const
{
    return m_guardrailsHasBeenSet;
}

string ModifyModelRouterGuardrailsRequest::GetModelRouterId() const
{
    return m_modelRouterId;
}

void ModifyModelRouterGuardrailsRequest::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool ModifyModelRouterGuardrailsRequest::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}


