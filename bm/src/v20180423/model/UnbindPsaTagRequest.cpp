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

#include <tencentcloud/bm/v20180423/model/UnbindPsaTagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

UnbindPsaTagRequest::UnbindPsaTagRequest() :
    m_psaIdHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false)
{
}

string UnbindPsaTagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_psaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PsaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_psaId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnbindPsaTagRequest::GetPsaId() const
{
    return m_psaId;
}

void UnbindPsaTagRequest::SetPsaId(const string& _psaId)
{
    m_psaId = _psaId;
    m_psaIdHasBeenSet = true;
}

bool UnbindPsaTagRequest::PsaIdHasBeenSet() const
{
    return m_psaIdHasBeenSet;
}

string UnbindPsaTagRequest::GetTagKey() const
{
    return m_tagKey;
}

void UnbindPsaTagRequest::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool UnbindPsaTagRequest::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

string UnbindPsaTagRequest::GetTagValue() const
{
    return m_tagValue;
}

void UnbindPsaTagRequest::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool UnbindPsaTagRequest::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}


