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

#include <tencentcloud/fwm/v20250611/model/ModifyStrategySequenceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

ModifyStrategySequenceRequest::ModifyStrategySequenceRequest() :
    m_sequencesHasBeenSet(false),
    m_execAreaHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string ModifyStrategySequenceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sequencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sequences";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sequences.begin(); itr != m_sequences.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_execAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecArea";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_execArea.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<SequenceIndex> ModifyStrategySequenceRequest::GetSequences() const
{
    return m_sequences;
}

void ModifyStrategySequenceRequest::SetSequences(const vector<SequenceIndex>& _sequences)
{
    m_sequences = _sequences;
    m_sequencesHasBeenSet = true;
}

bool ModifyStrategySequenceRequest::SequencesHasBeenSet() const
{
    return m_sequencesHasBeenSet;
}

string ModifyStrategySequenceRequest::GetExecArea() const
{
    return m_execArea;
}

void ModifyStrategySequenceRequest::SetExecArea(const string& _execArea)
{
    m_execArea = _execArea;
    m_execAreaHasBeenSet = true;
}

bool ModifyStrategySequenceRequest::ExecAreaHasBeenSet() const
{
    return m_execAreaHasBeenSet;
}

string ModifyStrategySequenceRequest::GetProduct() const
{
    return m_product;
}

void ModifyStrategySequenceRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool ModifyStrategySequenceRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}


