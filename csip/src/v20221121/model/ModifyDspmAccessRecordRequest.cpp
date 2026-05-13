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

#include <tencentcloud/csip/v20221121/model/ModifyDspmAccessRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyDspmAccessRecordRequest::ModifyDspmAccessRecordRequest() :
    m_memberIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_viewHasBeenSet(false),
    m_notedHasBeenSet(false)
{
}

string ModifyDspmAccessRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_id.begin(); itr != m_id.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_viewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "View";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_view.c_str(), allocator).Move(), allocator);
    }

    if (m_notedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Noted";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_noted, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyDspmAccessRecordRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyDspmAccessRecordRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyDspmAccessRecordRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<DspmAccessRecordId> ModifyDspmAccessRecordRequest::GetId() const
{
    return m_id;
}

void ModifyDspmAccessRecordRequest::SetId(const vector<DspmAccessRecordId>& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyDspmAccessRecordRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyDspmAccessRecordRequest::GetView() const
{
    return m_view;
}

void ModifyDspmAccessRecordRequest::SetView(const string& _view)
{
    m_view = _view;
    m_viewHasBeenSet = true;
}

bool ModifyDspmAccessRecordRequest::ViewHasBeenSet() const
{
    return m_viewHasBeenSet;
}

int64_t ModifyDspmAccessRecordRequest::GetNoted() const
{
    return m_noted;
}

void ModifyDspmAccessRecordRequest::SetNoted(const int64_t& _noted)
{
    m_noted = _noted;
    m_notedHasBeenSet = true;
}

bool ModifyDspmAccessRecordRequest::NotedHasBeenSet() const
{
    return m_notedHasBeenSet;
}


