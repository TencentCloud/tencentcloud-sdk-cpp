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

#include <tencentcloud/csip/v20221121/model/UpdateAlertStatusListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UpdateAlertStatusListRequest::UpdateAlertStatusListRequest() :
    m_iDHasBeenSet(false),
    m_operateTypeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_operatedMemberIdHasBeenSet(false)
{
}

string UpdateAlertStatusListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iD.begin(); itr != m_iD.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_operateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_operateType, allocator);
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

    if (m_operatedMemberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatedMemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operatedMemberId.begin(); itr != m_operatedMemberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<NewAlertKey> UpdateAlertStatusListRequest::GetID() const
{
    return m_iD;
}

void UpdateAlertStatusListRequest::SetID(const vector<NewAlertKey>& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool UpdateAlertStatusListRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t UpdateAlertStatusListRequest::GetOperateType() const
{
    return m_operateType;
}

void UpdateAlertStatusListRequest::SetOperateType(const int64_t& _operateType)
{
    m_operateType = _operateType;
    m_operateTypeHasBeenSet = true;
}

bool UpdateAlertStatusListRequest::OperateTypeHasBeenSet() const
{
    return m_operateTypeHasBeenSet;
}

vector<string> UpdateAlertStatusListRequest::GetMemberId() const
{
    return m_memberId;
}

void UpdateAlertStatusListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool UpdateAlertStatusListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> UpdateAlertStatusListRequest::GetOperatedMemberId() const
{
    return m_operatedMemberId;
}

void UpdateAlertStatusListRequest::SetOperatedMemberId(const vector<string>& _operatedMemberId)
{
    m_operatedMemberId = _operatedMemberId;
    m_operatedMemberIdHasBeenSet = true;
}

bool UpdateAlertStatusListRequest::OperatedMemberIdHasBeenSet() const
{
    return m_operatedMemberIdHasBeenSet;
}


