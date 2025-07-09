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

#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyRemarkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UpdateAccessKeyRemarkRequest::UpdateAccessKeyRemarkRequest() :
    m_remarkHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_sourceIPListHasBeenSet(false),
    m_accessKeyListHasBeenSet(false),
    m_sourceIPIDListHasBeenSet(false),
    m_accessKeyIDListHasBeenSet(false)
{
}

string UpdateAccessKeyRemarkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_sourceIPListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIPList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceIPList.begin(); itr != m_sourceIPList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_accessKeyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessKeyList.begin(); itr != m_accessKeyList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceIPIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIPIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceIPIDList.begin(); itr != m_sourceIPIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_accessKeyIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessKeyIDList.begin(); itr != m_accessKeyIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateAccessKeyRemarkRequest::GetRemark() const
{
    return m_remark;
}

void UpdateAccessKeyRemarkRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool UpdateAccessKeyRemarkRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> UpdateAccessKeyRemarkRequest::GetMemberId() const
{
    return m_memberId;
}

void UpdateAccessKeyRemarkRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool UpdateAccessKeyRemarkRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> UpdateAccessKeyRemarkRequest::GetSourceIPList() const
{
    return m_sourceIPList;
}

void UpdateAccessKeyRemarkRequest::SetSourceIPList(const vector<string>& _sourceIPList)
{
    m_sourceIPList = _sourceIPList;
    m_sourceIPListHasBeenSet = true;
}

bool UpdateAccessKeyRemarkRequest::SourceIPListHasBeenSet() const
{
    return m_sourceIPListHasBeenSet;
}

vector<string> UpdateAccessKeyRemarkRequest::GetAccessKeyList() const
{
    return m_accessKeyList;
}

void UpdateAccessKeyRemarkRequest::SetAccessKeyList(const vector<string>& _accessKeyList)
{
    m_accessKeyList = _accessKeyList;
    m_accessKeyListHasBeenSet = true;
}

bool UpdateAccessKeyRemarkRequest::AccessKeyListHasBeenSet() const
{
    return m_accessKeyListHasBeenSet;
}

vector<uint64_t> UpdateAccessKeyRemarkRequest::GetSourceIPIDList() const
{
    return m_sourceIPIDList;
}

void UpdateAccessKeyRemarkRequest::SetSourceIPIDList(const vector<uint64_t>& _sourceIPIDList)
{
    m_sourceIPIDList = _sourceIPIDList;
    m_sourceIPIDListHasBeenSet = true;
}

bool UpdateAccessKeyRemarkRequest::SourceIPIDListHasBeenSet() const
{
    return m_sourceIPIDListHasBeenSet;
}

vector<uint64_t> UpdateAccessKeyRemarkRequest::GetAccessKeyIDList() const
{
    return m_accessKeyIDList;
}

void UpdateAccessKeyRemarkRequest::SetAccessKeyIDList(const vector<uint64_t>& _accessKeyIDList)
{
    m_accessKeyIDList = _accessKeyIDList;
    m_accessKeyIDListHasBeenSet = true;
}

bool UpdateAccessKeyRemarkRequest::AccessKeyIDListHasBeenSet() const
{
    return m_accessKeyIDListHasBeenSet;
}


