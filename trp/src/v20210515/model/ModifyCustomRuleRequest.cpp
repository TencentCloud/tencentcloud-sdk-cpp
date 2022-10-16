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

#include <tencentcloud/trp/v20210515/model/ModifyCustomRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

ModifyCustomRuleRequest::ModifyCustomRuleRequest() :
    m_customIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_codeLengthHasBeenSet(false),
    m_codePartsHasBeenSet(false),
    m_corpIdHasBeenSet(false)
{
}

string ModifyCustomRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_codeLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeLength";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_codeLength, allocator);
    }

    if (m_codePartsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeParts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_codeParts.begin(); itr != m_codeParts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCustomRuleRequest::GetCustomId() const
{
    return m_customId;
}

void ModifyCustomRuleRequest::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool ModifyCustomRuleRequest::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

string ModifyCustomRuleRequest::GetName() const
{
    return m_name;
}

void ModifyCustomRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyCustomRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyCustomRuleRequest::GetCodeLength() const
{
    return m_codeLength;
}

void ModifyCustomRuleRequest::SetCodeLength(const uint64_t& _codeLength)
{
    m_codeLength = _codeLength;
    m_codeLengthHasBeenSet = true;
}

bool ModifyCustomRuleRequest::CodeLengthHasBeenSet() const
{
    return m_codeLengthHasBeenSet;
}

vector<CodePart> ModifyCustomRuleRequest::GetCodeParts() const
{
    return m_codeParts;
}

void ModifyCustomRuleRequest::SetCodeParts(const vector<CodePart>& _codeParts)
{
    m_codeParts = _codeParts;
    m_codePartsHasBeenSet = true;
}

bool ModifyCustomRuleRequest::CodePartsHasBeenSet() const
{
    return m_codePartsHasBeenSet;
}

uint64_t ModifyCustomRuleRequest::GetCorpId() const
{
    return m_corpId;
}

void ModifyCustomRuleRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool ModifyCustomRuleRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}


