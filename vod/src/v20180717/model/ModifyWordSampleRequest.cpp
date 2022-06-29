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

#include <tencentcloud/vod/v20180717/model/ModifyWordSampleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyWordSampleRequest::ModifyWordSampleRequest() :
    m_keywordHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_usagesHasBeenSet(false),
    m_tagOperationInfoHasBeenSet(false)
{
}

string ModifyWordSampleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_usagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_usages.begin(); itr != m_usages.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagOperationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagOperationInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagOperationInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyWordSampleRequest::GetKeyword() const
{
    return m_keyword;
}

void ModifyWordSampleRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ModifyWordSampleRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

uint64_t ModifyWordSampleRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyWordSampleRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyWordSampleRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

vector<string> ModifyWordSampleRequest::GetUsages() const
{
    return m_usages;
}

void ModifyWordSampleRequest::SetUsages(const vector<string>& _usages)
{
    m_usages = _usages;
    m_usagesHasBeenSet = true;
}

bool ModifyWordSampleRequest::UsagesHasBeenSet() const
{
    return m_usagesHasBeenSet;
}

AiSampleTagOperation ModifyWordSampleRequest::GetTagOperationInfo() const
{
    return m_tagOperationInfo;
}

void ModifyWordSampleRequest::SetTagOperationInfo(const AiSampleTagOperation& _tagOperationInfo)
{
    m_tagOperationInfo = _tagOperationInfo;
    m_tagOperationInfoHasBeenSet = true;
}

bool ModifyWordSampleRequest::TagOperationInfoHasBeenSet() const
{
    return m_tagOperationInfoHasBeenSet;
}


