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

#include <tencentcloud/ccc/v20200210/model/ModifyOwnNumberApplyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ModifyOwnNumberApplyRequest::ModifyOwnNumberApplyRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_detailListHasBeenSet(false),
    m_applyIdHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_mobileNddPrefixHasBeenSet(false),
    m_localNumberTrimACHasBeenSet(false),
    m_calleeFormatPassthroughHasBeenSet(false),
    m_callerFormatPassthroughHasBeenSet(false),
    m_internationalNumberPrefixHasBeenSet(false)
{
}

string ModifyOwnNumberApplyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_detailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailList.begin(); itr != m_detailList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_applyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applyId, allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileNddPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MobileNddPrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobileNddPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_localNumberTrimACHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalNumberTrimAC";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_localNumberTrimAC, allocator);
    }

    if (m_calleeFormatPassthroughHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalleeFormatPassthrough";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_calleeFormatPassthrough, allocator);
    }

    if (m_callerFormatPassthroughHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallerFormatPassthrough";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_callerFormatPassthrough, allocator);
    }

    if (m_internationalNumberPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternationalNumberPrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_internationalNumberPrefix.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyOwnNumberApplyRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ModifyOwnNumberApplyRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ModifyOwnNumberApplyRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<OwnNumberApplyDetailItem> ModifyOwnNumberApplyRequest::GetDetailList() const
{
    return m_detailList;
}

void ModifyOwnNumberApplyRequest::SetDetailList(const vector<OwnNumberApplyDetailItem>& _detailList)
{
    m_detailList = _detailList;
    m_detailListHasBeenSet = true;
}

bool ModifyOwnNumberApplyRequest::DetailListHasBeenSet() const
{
    return m_detailListHasBeenSet;
}

uint64_t ModifyOwnNumberApplyRequest::GetApplyId() const
{
    return m_applyId;
}

void ModifyOwnNumberApplyRequest::SetApplyId(const uint64_t& _applyId)
{
    m_applyId = _applyId;
    m_applyIdHasBeenSet = true;
}

bool ModifyOwnNumberApplyRequest::ApplyIdHasBeenSet() const
{
    return m_applyIdHasBeenSet;
}

string ModifyOwnNumberApplyRequest::GetPrefix() const
{
    return m_prefix;
}

void ModifyOwnNumberApplyRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool ModifyOwnNumberApplyRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string ModifyOwnNumberApplyRequest::GetMobileNddPrefix() const
{
    return m_mobileNddPrefix;
}

void ModifyOwnNumberApplyRequest::SetMobileNddPrefix(const string& _mobileNddPrefix)
{
    m_mobileNddPrefix = _mobileNddPrefix;
    m_mobileNddPrefixHasBeenSet = true;
}

bool ModifyOwnNumberApplyRequest::MobileNddPrefixHasBeenSet() const
{
    return m_mobileNddPrefixHasBeenSet;
}

bool ModifyOwnNumberApplyRequest::GetLocalNumberTrimAC() const
{
    return m_localNumberTrimAC;
}

void ModifyOwnNumberApplyRequest::SetLocalNumberTrimAC(const bool& _localNumberTrimAC)
{
    m_localNumberTrimAC = _localNumberTrimAC;
    m_localNumberTrimACHasBeenSet = true;
}

bool ModifyOwnNumberApplyRequest::LocalNumberTrimACHasBeenSet() const
{
    return m_localNumberTrimACHasBeenSet;
}

bool ModifyOwnNumberApplyRequest::GetCalleeFormatPassthrough() const
{
    return m_calleeFormatPassthrough;
}

void ModifyOwnNumberApplyRequest::SetCalleeFormatPassthrough(const bool& _calleeFormatPassthrough)
{
    m_calleeFormatPassthrough = _calleeFormatPassthrough;
    m_calleeFormatPassthroughHasBeenSet = true;
}

bool ModifyOwnNumberApplyRequest::CalleeFormatPassthroughHasBeenSet() const
{
    return m_calleeFormatPassthroughHasBeenSet;
}

bool ModifyOwnNumberApplyRequest::GetCallerFormatPassthrough() const
{
    return m_callerFormatPassthrough;
}

void ModifyOwnNumberApplyRequest::SetCallerFormatPassthrough(const bool& _callerFormatPassthrough)
{
    m_callerFormatPassthrough = _callerFormatPassthrough;
    m_callerFormatPassthroughHasBeenSet = true;
}

bool ModifyOwnNumberApplyRequest::CallerFormatPassthroughHasBeenSet() const
{
    return m_callerFormatPassthroughHasBeenSet;
}

string ModifyOwnNumberApplyRequest::GetInternationalNumberPrefix() const
{
    return m_internationalNumberPrefix;
}

void ModifyOwnNumberApplyRequest::SetInternationalNumberPrefix(const string& _internationalNumberPrefix)
{
    m_internationalNumberPrefix = _internationalNumberPrefix;
    m_internationalNumberPrefixHasBeenSet = true;
}

bool ModifyOwnNumberApplyRequest::InternationalNumberPrefixHasBeenSet() const
{
    return m_internationalNumberPrefixHasBeenSet;
}


