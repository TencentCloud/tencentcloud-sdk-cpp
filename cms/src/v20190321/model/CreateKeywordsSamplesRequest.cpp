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

#include <tencentcloud/cms/v20190321/model/CreateKeywordsSamplesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

CreateKeywordsSamplesRequest::CreateKeywordsSamplesRequest() :
    m_userKeywordsHasBeenSet(false),
    m_libIDHasBeenSet(false)
{
}

string CreateKeywordsSamplesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userKeywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserKeywords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userKeywords.begin(); itr != m_userKeywords.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_libIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_libID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<UserKeyword> CreateKeywordsSamplesRequest::GetUserKeywords() const
{
    return m_userKeywords;
}

void CreateKeywordsSamplesRequest::SetUserKeywords(const vector<UserKeyword>& _userKeywords)
{
    m_userKeywords = _userKeywords;
    m_userKeywordsHasBeenSet = true;
}

bool CreateKeywordsSamplesRequest::UserKeywordsHasBeenSet() const
{
    return m_userKeywordsHasBeenSet;
}

string CreateKeywordsSamplesRequest::GetLibID() const
{
    return m_libID;
}

void CreateKeywordsSamplesRequest::SetLibID(const string& _libID)
{
    m_libID = _libID;
    m_libIDHasBeenSet = true;
}

bool CreateKeywordsSamplesRequest::LibIDHasBeenSet() const
{
    return m_libIDHasBeenSet;
}


