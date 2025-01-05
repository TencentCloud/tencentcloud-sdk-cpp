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

#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyNoticeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ModifyAlarmPolicyNoticeRequest::ModifyAlarmPolicyNoticeRequest() :
    m_moduleHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_noticeIdsHasBeenSet(false),
    m_policyIdsHasBeenSet(false),
    m_hierarchicalNoticesHasBeenSet(false),
    m_noticeContentTmplBindInfosHasBeenSet(false)
{
}

string ModifyAlarmPolicyNoticeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noticeIds.begin(); itr != m_noticeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_policyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyIds.begin(); itr != m_policyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hierarchicalNoticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HierarchicalNotices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hierarchicalNotices.begin(); itr != m_hierarchicalNotices.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_noticeContentTmplBindInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeContentTmplBindInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeContentTmplBindInfos.begin(); itr != m_noticeContentTmplBindInfos.end(); ++itr, ++i)
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


string ModifyAlarmPolicyNoticeRequest::GetModule() const
{
    return m_module;
}

void ModifyAlarmPolicyNoticeRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool ModifyAlarmPolicyNoticeRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string ModifyAlarmPolicyNoticeRequest::GetPolicyId() const
{
    return m_policyId;
}

void ModifyAlarmPolicyNoticeRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ModifyAlarmPolicyNoticeRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

vector<string> ModifyAlarmPolicyNoticeRequest::GetNoticeIds() const
{
    return m_noticeIds;
}

void ModifyAlarmPolicyNoticeRequest::SetNoticeIds(const vector<string>& _noticeIds)
{
    m_noticeIds = _noticeIds;
    m_noticeIdsHasBeenSet = true;
}

bool ModifyAlarmPolicyNoticeRequest::NoticeIdsHasBeenSet() const
{
    return m_noticeIdsHasBeenSet;
}

vector<string> ModifyAlarmPolicyNoticeRequest::GetPolicyIds() const
{
    return m_policyIds;
}

void ModifyAlarmPolicyNoticeRequest::SetPolicyIds(const vector<string>& _policyIds)
{
    m_policyIds = _policyIds;
    m_policyIdsHasBeenSet = true;
}

bool ModifyAlarmPolicyNoticeRequest::PolicyIdsHasBeenSet() const
{
    return m_policyIdsHasBeenSet;
}

vector<AlarmHierarchicalNotice> ModifyAlarmPolicyNoticeRequest::GetHierarchicalNotices() const
{
    return m_hierarchicalNotices;
}

void ModifyAlarmPolicyNoticeRequest::SetHierarchicalNotices(const vector<AlarmHierarchicalNotice>& _hierarchicalNotices)
{
    m_hierarchicalNotices = _hierarchicalNotices;
    m_hierarchicalNoticesHasBeenSet = true;
}

bool ModifyAlarmPolicyNoticeRequest::HierarchicalNoticesHasBeenSet() const
{
    return m_hierarchicalNoticesHasBeenSet;
}

vector<NoticeContentTmplBindInfo> ModifyAlarmPolicyNoticeRequest::GetNoticeContentTmplBindInfos() const
{
    return m_noticeContentTmplBindInfos;
}

void ModifyAlarmPolicyNoticeRequest::SetNoticeContentTmplBindInfos(const vector<NoticeContentTmplBindInfo>& _noticeContentTmplBindInfos)
{
    m_noticeContentTmplBindInfos = _noticeContentTmplBindInfos;
    m_noticeContentTmplBindInfosHasBeenSet = true;
}

bool ModifyAlarmPolicyNoticeRequest::NoticeContentTmplBindInfosHasBeenSet() const
{
    return m_noticeContentTmplBindInfosHasBeenSet;
}


