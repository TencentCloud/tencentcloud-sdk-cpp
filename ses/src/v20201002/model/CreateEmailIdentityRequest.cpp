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

#include <tencentcloud/ses/v20201002/model/CreateEmailIdentityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

CreateEmailIdentityRequest::CreateEmailIdentityRequest() :
    m_emailIdentityHasBeenSet(false),
    m_dKIMOptionHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

string CreateEmailIdentityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_emailIdentityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailIdentity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_emailIdentity.c_str(), allocator).Move(), allocator);
    }

    if (m_dKIMOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DKIMOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dKIMOption, allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEmailIdentityRequest::GetEmailIdentity() const
{
    return m_emailIdentity;
}

void CreateEmailIdentityRequest::SetEmailIdentity(const string& _emailIdentity)
{
    m_emailIdentity = _emailIdentity;
    m_emailIdentityHasBeenSet = true;
}

bool CreateEmailIdentityRequest::EmailIdentityHasBeenSet() const
{
    return m_emailIdentityHasBeenSet;
}

uint64_t CreateEmailIdentityRequest::GetDKIMOption() const
{
    return m_dKIMOption;
}

void CreateEmailIdentityRequest::SetDKIMOption(const uint64_t& _dKIMOption)
{
    m_dKIMOption = _dKIMOption;
    m_dKIMOptionHasBeenSet = true;
}

bool CreateEmailIdentityRequest::DKIMOptionHasBeenSet() const
{
    return m_dKIMOptionHasBeenSet;
}

vector<TagList> CreateEmailIdentityRequest::GetTagList() const
{
    return m_tagList;
}

void CreateEmailIdentityRequest::SetTagList(const vector<TagList>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateEmailIdentityRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}


