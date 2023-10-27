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

#include <tencentcloud/cfw/v20190904/model/CreateAlertCenterRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateAlertCenterRuleRequest::CreateAlertCenterRuleRequest() :
    m_handleTimeHasBeenSet(false),
    m_handleTypeHasBeenSet(false),
    m_alertDirectionHasBeenSet(false),
    m_handleDirectionHasBeenSet(false),
    m_handleIdListHasBeenSet(false),
    m_handleIpListHasBeenSet(false),
    m_handleCommentHasBeenSet(false),
    m_ignoreReasonHasBeenSet(false),
    m_blockDomainHasBeenSet(false)
{
}

string CreateAlertCenterRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_handleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_handleTime, allocator);
    }

    if (m_handleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_handleType, allocator);
    }

    if (m_alertDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alertDirection, allocator);
    }

    if (m_handleDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_handleDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_handleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_handleIdList.begin(); itr != m_handleIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_handleIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleIpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_handleIpList.begin(); itr != m_handleIpList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_handleCommentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleComment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_handleComment.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreReason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreReason, allocator);
    }

    if (m_blockDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blockDomain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateAlertCenterRuleRequest::GetHandleTime() const
{
    return m_handleTime;
}

void CreateAlertCenterRuleRequest::SetHandleTime(const int64_t& _handleTime)
{
    m_handleTime = _handleTime;
    m_handleTimeHasBeenSet = true;
}

bool CreateAlertCenterRuleRequest::HandleTimeHasBeenSet() const
{
    return m_handleTimeHasBeenSet;
}

int64_t CreateAlertCenterRuleRequest::GetHandleType() const
{
    return m_handleType;
}

void CreateAlertCenterRuleRequest::SetHandleType(const int64_t& _handleType)
{
    m_handleType = _handleType;
    m_handleTypeHasBeenSet = true;
}

bool CreateAlertCenterRuleRequest::HandleTypeHasBeenSet() const
{
    return m_handleTypeHasBeenSet;
}

int64_t CreateAlertCenterRuleRequest::GetAlertDirection() const
{
    return m_alertDirection;
}

void CreateAlertCenterRuleRequest::SetAlertDirection(const int64_t& _alertDirection)
{
    m_alertDirection = _alertDirection;
    m_alertDirectionHasBeenSet = true;
}

bool CreateAlertCenterRuleRequest::AlertDirectionHasBeenSet() const
{
    return m_alertDirectionHasBeenSet;
}

string CreateAlertCenterRuleRequest::GetHandleDirection() const
{
    return m_handleDirection;
}

void CreateAlertCenterRuleRequest::SetHandleDirection(const string& _handleDirection)
{
    m_handleDirection = _handleDirection;
    m_handleDirectionHasBeenSet = true;
}

bool CreateAlertCenterRuleRequest::HandleDirectionHasBeenSet() const
{
    return m_handleDirectionHasBeenSet;
}

vector<string> CreateAlertCenterRuleRequest::GetHandleIdList() const
{
    return m_handleIdList;
}

void CreateAlertCenterRuleRequest::SetHandleIdList(const vector<string>& _handleIdList)
{
    m_handleIdList = _handleIdList;
    m_handleIdListHasBeenSet = true;
}

bool CreateAlertCenterRuleRequest::HandleIdListHasBeenSet() const
{
    return m_handleIdListHasBeenSet;
}

vector<string> CreateAlertCenterRuleRequest::GetHandleIpList() const
{
    return m_handleIpList;
}

void CreateAlertCenterRuleRequest::SetHandleIpList(const vector<string>& _handleIpList)
{
    m_handleIpList = _handleIpList;
    m_handleIpListHasBeenSet = true;
}

bool CreateAlertCenterRuleRequest::HandleIpListHasBeenSet() const
{
    return m_handleIpListHasBeenSet;
}

string CreateAlertCenterRuleRequest::GetHandleComment() const
{
    return m_handleComment;
}

void CreateAlertCenterRuleRequest::SetHandleComment(const string& _handleComment)
{
    m_handleComment = _handleComment;
    m_handleCommentHasBeenSet = true;
}

bool CreateAlertCenterRuleRequest::HandleCommentHasBeenSet() const
{
    return m_handleCommentHasBeenSet;
}

int64_t CreateAlertCenterRuleRequest::GetIgnoreReason() const
{
    return m_ignoreReason;
}

void CreateAlertCenterRuleRequest::SetIgnoreReason(const int64_t& _ignoreReason)
{
    m_ignoreReason = _ignoreReason;
    m_ignoreReasonHasBeenSet = true;
}

bool CreateAlertCenterRuleRequest::IgnoreReasonHasBeenSet() const
{
    return m_ignoreReasonHasBeenSet;
}

string CreateAlertCenterRuleRequest::GetBlockDomain() const
{
    return m_blockDomain;
}

void CreateAlertCenterRuleRequest::SetBlockDomain(const string& _blockDomain)
{
    m_blockDomain = _blockDomain;
    m_blockDomainHasBeenSet = true;
}

bool CreateAlertCenterRuleRequest::BlockDomainHasBeenSet() const
{
    return m_blockDomainHasBeenSet;
}


