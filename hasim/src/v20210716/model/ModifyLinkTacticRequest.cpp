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

#include <tencentcloud/hasim/v20210716/model/ModifyLinkTacticRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

ModifyLinkTacticRequest::ModifyLinkTacticRequest() :
    m_linkIDHasBeenSet(false),
    m_tacticIDHasBeenSet(false)
{
}

string ModifyLinkTacticRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_linkIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_linkID, allocator);
    }

    if (m_tacticIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TacticID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tacticID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyLinkTacticRequest::GetLinkID() const
{
    return m_linkID;
}

void ModifyLinkTacticRequest::SetLinkID(const int64_t& _linkID)
{
    m_linkID = _linkID;
    m_linkIDHasBeenSet = true;
}

bool ModifyLinkTacticRequest::LinkIDHasBeenSet() const
{
    return m_linkIDHasBeenSet;
}

int64_t ModifyLinkTacticRequest::GetTacticID() const
{
    return m_tacticID;
}

void ModifyLinkTacticRequest::SetTacticID(const int64_t& _tacticID)
{
    m_tacticID = _tacticID;
    m_tacticIDHasBeenSet = true;
}

bool ModifyLinkTacticRequest::TacticIDHasBeenSet() const
{
    return m_tacticIDHasBeenSet;
}


