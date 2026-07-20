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

#include <tencentcloud/cfw/v20190904/model/CreateAlertCenterRuleAsyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateAlertCenterRuleAsyncRequest::CreateAlertCenterRuleAsyncRequest() :
    m_handleTimeHasBeenSet(false),
    m_handleTypeHasBeenSet(false),
    m_alertDirectionHasBeenSet(false),
    m_handleDirectionHasBeenSet(false),
    m_cfwAiAgentOperationSourceHasBeenSet(false),
    m_handleIdListHasBeenSet(false),
    m_handleIpListHasBeenSet(false),
    m_handleCommentHasBeenSet(false),
    m_ignoreReasonHasBeenSet(false),
    m_blockDomainHasBeenSet(false),
    m_handleEventIdListHasBeenSet(false),
    m_whiteIpListHasBeenSet(false),
    m_isolateTypeHasBeenSet(false),
    m_assetIdListHasBeenSet(false),
    m_targetEventIdListHasBeenSet(false)
{
}

string CreateAlertCenterRuleAsyncRequest::ToJsonString() const
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

    if (m_cfwAiAgentOperationSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwAiAgentOperationSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cfwAiAgentOperationSource.c_str(), allocator).Move(), allocator);
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

    if (m_handleEventIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleEventIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_handleEventIdList.begin(); itr != m_handleEventIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_whiteIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteIpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whiteIpList.begin(); itr != m_whiteIpList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isolateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_isolateType.begin(); itr != m_isolateType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_assetIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetIdList.begin(); itr != m_assetIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetEventIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetEventIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetEventIdList.begin(); itr != m_targetEventIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateAlertCenterRuleAsyncRequest::GetHandleTime() const
{
    return m_handleTime;
}

void CreateAlertCenterRuleAsyncRequest::SetHandleTime(const int64_t& _handleTime)
{
    m_handleTime = _handleTime;
    m_handleTimeHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::HandleTimeHasBeenSet() const
{
    return m_handleTimeHasBeenSet;
}

int64_t CreateAlertCenterRuleAsyncRequest::GetHandleType() const
{
    return m_handleType;
}

void CreateAlertCenterRuleAsyncRequest::SetHandleType(const int64_t& _handleType)
{
    m_handleType = _handleType;
    m_handleTypeHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::HandleTypeHasBeenSet() const
{
    return m_handleTypeHasBeenSet;
}

int64_t CreateAlertCenterRuleAsyncRequest::GetAlertDirection() const
{
    return m_alertDirection;
}

void CreateAlertCenterRuleAsyncRequest::SetAlertDirection(const int64_t& _alertDirection)
{
    m_alertDirection = _alertDirection;
    m_alertDirectionHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::AlertDirectionHasBeenSet() const
{
    return m_alertDirectionHasBeenSet;
}

string CreateAlertCenterRuleAsyncRequest::GetHandleDirection() const
{
    return m_handleDirection;
}

void CreateAlertCenterRuleAsyncRequest::SetHandleDirection(const string& _handleDirection)
{
    m_handleDirection = _handleDirection;
    m_handleDirectionHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::HandleDirectionHasBeenSet() const
{
    return m_handleDirectionHasBeenSet;
}

string CreateAlertCenterRuleAsyncRequest::GetCfwAiAgentOperationSource() const
{
    return m_cfwAiAgentOperationSource;
}

void CreateAlertCenterRuleAsyncRequest::SetCfwAiAgentOperationSource(const string& _cfwAiAgentOperationSource)
{
    m_cfwAiAgentOperationSource = _cfwAiAgentOperationSource;
    m_cfwAiAgentOperationSourceHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::CfwAiAgentOperationSourceHasBeenSet() const
{
    return m_cfwAiAgentOperationSourceHasBeenSet;
}

vector<string> CreateAlertCenterRuleAsyncRequest::GetHandleIdList() const
{
    return m_handleIdList;
}

void CreateAlertCenterRuleAsyncRequest::SetHandleIdList(const vector<string>& _handleIdList)
{
    m_handleIdList = _handleIdList;
    m_handleIdListHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::HandleIdListHasBeenSet() const
{
    return m_handleIdListHasBeenSet;
}

vector<string> CreateAlertCenterRuleAsyncRequest::GetHandleIpList() const
{
    return m_handleIpList;
}

void CreateAlertCenterRuleAsyncRequest::SetHandleIpList(const vector<string>& _handleIpList)
{
    m_handleIpList = _handleIpList;
    m_handleIpListHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::HandleIpListHasBeenSet() const
{
    return m_handleIpListHasBeenSet;
}

string CreateAlertCenterRuleAsyncRequest::GetHandleComment() const
{
    return m_handleComment;
}

void CreateAlertCenterRuleAsyncRequest::SetHandleComment(const string& _handleComment)
{
    m_handleComment = _handleComment;
    m_handleCommentHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::HandleCommentHasBeenSet() const
{
    return m_handleCommentHasBeenSet;
}

int64_t CreateAlertCenterRuleAsyncRequest::GetIgnoreReason() const
{
    return m_ignoreReason;
}

void CreateAlertCenterRuleAsyncRequest::SetIgnoreReason(const int64_t& _ignoreReason)
{
    m_ignoreReason = _ignoreReason;
    m_ignoreReasonHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::IgnoreReasonHasBeenSet() const
{
    return m_ignoreReasonHasBeenSet;
}

string CreateAlertCenterRuleAsyncRequest::GetBlockDomain() const
{
    return m_blockDomain;
}

void CreateAlertCenterRuleAsyncRequest::SetBlockDomain(const string& _blockDomain)
{
    m_blockDomain = _blockDomain;
    m_blockDomainHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::BlockDomainHasBeenSet() const
{
    return m_blockDomainHasBeenSet;
}

vector<string> CreateAlertCenterRuleAsyncRequest::GetHandleEventIdList() const
{
    return m_handleEventIdList;
}

void CreateAlertCenterRuleAsyncRequest::SetHandleEventIdList(const vector<string>& _handleEventIdList)
{
    m_handleEventIdList = _handleEventIdList;
    m_handleEventIdListHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::HandleEventIdListHasBeenSet() const
{
    return m_handleEventIdListHasBeenSet;
}

vector<string> CreateAlertCenterRuleAsyncRequest::GetWhiteIpList() const
{
    return m_whiteIpList;
}

void CreateAlertCenterRuleAsyncRequest::SetWhiteIpList(const vector<string>& _whiteIpList)
{
    m_whiteIpList = _whiteIpList;
    m_whiteIpListHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::WhiteIpListHasBeenSet() const
{
    return m_whiteIpListHasBeenSet;
}

vector<int64_t> CreateAlertCenterRuleAsyncRequest::GetIsolateType() const
{
    return m_isolateType;
}

void CreateAlertCenterRuleAsyncRequest::SetIsolateType(const vector<int64_t>& _isolateType)
{
    m_isolateType = _isolateType;
    m_isolateTypeHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::IsolateTypeHasBeenSet() const
{
    return m_isolateTypeHasBeenSet;
}

vector<string> CreateAlertCenterRuleAsyncRequest::GetAssetIdList() const
{
    return m_assetIdList;
}

void CreateAlertCenterRuleAsyncRequest::SetAssetIdList(const vector<string>& _assetIdList)
{
    m_assetIdList = _assetIdList;
    m_assetIdListHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::AssetIdListHasBeenSet() const
{
    return m_assetIdListHasBeenSet;
}

vector<string> CreateAlertCenterRuleAsyncRequest::GetTargetEventIdList() const
{
    return m_targetEventIdList;
}

void CreateAlertCenterRuleAsyncRequest::SetTargetEventIdList(const vector<string>& _targetEventIdList)
{
    m_targetEventIdList = _targetEventIdList;
    m_targetEventIdListHasBeenSet = true;
}

bool CreateAlertCenterRuleAsyncRequest::TargetEventIdListHasBeenSet() const
{
    return m_targetEventIdListHasBeenSet;
}


