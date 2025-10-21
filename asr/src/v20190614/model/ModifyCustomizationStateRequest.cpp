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

#include <tencentcloud/asr/v20190614/model/ModifyCustomizationStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

ModifyCustomizationStateRequest::ModifyCustomizationStateRequest() :
    m_modelIdHasBeenSet(false),
    m_toStateHasBeenSet(false)
{
}

string ModifyCustomizationStateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_toStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_toState, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCustomizationStateRequest::GetModelId() const
{
    return m_modelId;
}

void ModifyCustomizationStateRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ModifyCustomizationStateRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

int64_t ModifyCustomizationStateRequest::GetToState() const
{
    return m_toState;
}

void ModifyCustomizationStateRequest::SetToState(const int64_t& _toState)
{
    m_toState = _toState;
    m_toStateHasBeenSet = true;
}

bool ModifyCustomizationStateRequest::ToStateHasBeenSet() const
{
    return m_toStateHasBeenSet;
}


