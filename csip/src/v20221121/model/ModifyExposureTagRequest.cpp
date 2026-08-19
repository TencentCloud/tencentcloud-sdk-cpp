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

#include <tencentcloud/csip/v20221121/model/ModifyExposureTagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyExposureTagRequest::ModifyExposureTagRequest() :
    m_exposureIDsHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string ModifyExposureTagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_exposureIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposureIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exposureIDs.begin(); itr != m_exposureIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
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

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> ModifyExposureTagRequest::GetExposureIDs() const
{
    return m_exposureIDs;
}

void ModifyExposureTagRequest::SetExposureIDs(const vector<uint64_t>& _exposureIDs)
{
    m_exposureIDs = _exposureIDs;
    m_exposureIDsHasBeenSet = true;
}

bool ModifyExposureTagRequest::ExposureIDsHasBeenSet() const
{
    return m_exposureIDsHasBeenSet;
}

string ModifyExposureTagRequest::GetTag() const
{
    return m_tag;
}

void ModifyExposureTagRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool ModifyExposureTagRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

vector<string> ModifyExposureTagRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyExposureTagRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyExposureTagRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string ModifyExposureTagRequest::GetComment() const
{
    return m_comment;
}

void ModifyExposureTagRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyExposureTagRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


