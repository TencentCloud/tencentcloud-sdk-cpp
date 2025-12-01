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

#include <tencentcloud/tdai/v20250717/model/CreateChatCompletionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

CreateChatCompletionRequest::CreateChatCompletionRequest() :
    m_isHiddenHasBeenSet(false),
    m_isChatHiddenHasBeenSet(false)
{
}

string CreateChatCompletionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_isHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHidden";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isHidden, allocator);
    }

    if (m_isChatHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsChatHidden";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isChatHidden, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool CreateChatCompletionRequest::GetIsHidden() const
{
    return m_isHidden;
}

void CreateChatCompletionRequest::SetIsHidden(const bool& _isHidden)
{
    m_isHidden = _isHidden;
    m_isHiddenHasBeenSet = true;
}

bool CreateChatCompletionRequest::IsHiddenHasBeenSet() const
{
    return m_isHiddenHasBeenSet;
}

bool CreateChatCompletionRequest::GetIsChatHidden() const
{
    return m_isChatHidden;
}

void CreateChatCompletionRequest::SetIsChatHidden(const bool& _isChatHidden)
{
    m_isChatHidden = _isChatHidden;
    m_isChatHiddenHasBeenSet = true;
}

bool CreateChatCompletionRequest::IsChatHiddenHasBeenSet() const
{
    return m_isChatHiddenHasBeenSet;
}


