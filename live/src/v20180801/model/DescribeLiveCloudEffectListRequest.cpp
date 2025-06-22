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

#include <tencentcloud/live/v20180801/model/DescribeLiveCloudEffectListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveCloudEffectListRequest::DescribeLiveCloudEffectListRequest() :
    m_idHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string DescribeLiveCloudEffectListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flag.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLiveCloudEffectListRequest::GetId() const
{
    return m_id;
}

void DescribeLiveCloudEffectListRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeLiveCloudEffectListRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeLiveCloudEffectListRequest::GetPrompt() const
{
    return m_prompt;
}

void DescribeLiveCloudEffectListRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool DescribeLiveCloudEffectListRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string DescribeLiveCloudEffectListRequest::GetFlag() const
{
    return m_flag;
}

void DescribeLiveCloudEffectListRequest::SetFlag(const string& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool DescribeLiveCloudEffectListRequest::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string DescribeLiveCloudEffectListRequest::GetType() const
{
    return m_type;
}

void DescribeLiveCloudEffectListRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeLiveCloudEffectListRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


