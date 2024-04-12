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

#include <tencentcloud/lke/v20231130/model/GetEmbeddingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

GetEmbeddingRequest::GetEmbeddingRequest() :
    m_modelHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_onlineHasBeenSet(false)
{
}

string GetEmbeddingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_inputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inputs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inputs.begin(); itr != m_inputs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_onlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Online";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_online, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetEmbeddingRequest::GetModel() const
{
    return m_model;
}

void GetEmbeddingRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool GetEmbeddingRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<string> GetEmbeddingRequest::GetInputs() const
{
    return m_inputs;
}

void GetEmbeddingRequest::SetInputs(const vector<string>& _inputs)
{
    m_inputs = _inputs;
    m_inputsHasBeenSet = true;
}

bool GetEmbeddingRequest::InputsHasBeenSet() const
{
    return m_inputsHasBeenSet;
}

bool GetEmbeddingRequest::GetOnline() const
{
    return m_online;
}

void GetEmbeddingRequest::SetOnline(const bool& _online)
{
    m_online = _online;
    m_onlineHasBeenSet = true;
}

bool GetEmbeddingRequest::OnlineHasBeenSet() const
{
    return m_onlineHasBeenSet;
}


