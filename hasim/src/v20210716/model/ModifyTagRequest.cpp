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

#include <tencentcloud/hasim/v20210716/model/ModifyTagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

ModifyTagRequest::ModifyTagRequest() :
    m_nameHasBeenSet(false),
    m_tagIDHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string ModifyTagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tagID, allocator);
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


string ModifyTagRequest::GetName() const
{
    return m_name;
}

void ModifyTagRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyTagRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifyTagRequest::GetTagID() const
{
    return m_tagID;
}

void ModifyTagRequest::SetTagID(const int64_t& _tagID)
{
    m_tagID = _tagID;
    m_tagIDHasBeenSet = true;
}

bool ModifyTagRequest::TagIDHasBeenSet() const
{
    return m_tagIDHasBeenSet;
}

string ModifyTagRequest::GetComment() const
{
    return m_comment;
}

void ModifyTagRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyTagRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


