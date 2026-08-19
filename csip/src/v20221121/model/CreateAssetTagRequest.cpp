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

#include <tencentcloud/csip/v20221121/model/CreateAssetTagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateAssetTagRequest::CreateAssetTagRequest() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_taggingRuleHasBeenSet(false),
    m_applyNowHasBeenSet(false)
{
}

string CreateAssetTagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_taggingRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaggingRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taggingRule.c_str(), allocator).Move(), allocator);
    }

    if (m_applyNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applyNow, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAssetTagRequest::GetKey() const
{
    return m_key;
}

void CreateAssetTagRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool CreateAssetTagRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string CreateAssetTagRequest::GetValue() const
{
    return m_value;
}

void CreateAssetTagRequest::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CreateAssetTagRequest::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

vector<string> CreateAssetTagRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateAssetTagRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateAssetTagRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string CreateAssetTagRequest::GetColor() const
{
    return m_color;
}

void CreateAssetTagRequest::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool CreateAssetTagRequest::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

string CreateAssetTagRequest::GetDescription() const
{
    return m_description;
}

void CreateAssetTagRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAssetTagRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateAssetTagRequest::GetTaggingRule() const
{
    return m_taggingRule;
}

void CreateAssetTagRequest::SetTaggingRule(const string& _taggingRule)
{
    m_taggingRule = _taggingRule;
    m_taggingRuleHasBeenSet = true;
}

bool CreateAssetTagRequest::TaggingRuleHasBeenSet() const
{
    return m_taggingRuleHasBeenSet;
}

bool CreateAssetTagRequest::GetApplyNow() const
{
    return m_applyNow;
}

void CreateAssetTagRequest::SetApplyNow(const bool& _applyNow)
{
    m_applyNow = _applyNow;
    m_applyNowHasBeenSet = true;
}

bool CreateAssetTagRequest::ApplyNowHasBeenSet() const
{
    return m_applyNowHasBeenSet;
}


