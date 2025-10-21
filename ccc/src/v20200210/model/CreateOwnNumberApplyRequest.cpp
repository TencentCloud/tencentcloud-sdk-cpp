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

#include <tencentcloud/ccc/v20200210/model/CreateOwnNumberApplyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateOwnNumberApplyRequest::CreateOwnNumberApplyRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_sipTrunkIdHasBeenSet(false),
    m_detailListHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_mobileNddPrefixHasBeenSet(false),
    m_localNumberTrimACHasBeenSet(false)
{
}

string CreateOwnNumberApplyRequest::ToJsonString() const
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

    if (m_sipTrunkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SipTrunkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sipTrunkId, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateOwnNumberApplyRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateOwnNumberApplyRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateOwnNumberApplyRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t CreateOwnNumberApplyRequest::GetSipTrunkId() const
{
    return m_sipTrunkId;
}

void CreateOwnNumberApplyRequest::SetSipTrunkId(const int64_t& _sipTrunkId)
{
    m_sipTrunkId = _sipTrunkId;
    m_sipTrunkIdHasBeenSet = true;
}

bool CreateOwnNumberApplyRequest::SipTrunkIdHasBeenSet() const
{
    return m_sipTrunkIdHasBeenSet;
}

vector<OwnNumberApplyDetailItem> CreateOwnNumberApplyRequest::GetDetailList() const
{
    return m_detailList;
}

void CreateOwnNumberApplyRequest::SetDetailList(const vector<OwnNumberApplyDetailItem>& _detailList)
{
    m_detailList = _detailList;
    m_detailListHasBeenSet = true;
}

bool CreateOwnNumberApplyRequest::DetailListHasBeenSet() const
{
    return m_detailListHasBeenSet;
}

string CreateOwnNumberApplyRequest::GetPrefix() const
{
    return m_prefix;
}

void CreateOwnNumberApplyRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool CreateOwnNumberApplyRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string CreateOwnNumberApplyRequest::GetMobileNddPrefix() const
{
    return m_mobileNddPrefix;
}

void CreateOwnNumberApplyRequest::SetMobileNddPrefix(const string& _mobileNddPrefix)
{
    m_mobileNddPrefix = _mobileNddPrefix;
    m_mobileNddPrefixHasBeenSet = true;
}

bool CreateOwnNumberApplyRequest::MobileNddPrefixHasBeenSet() const
{
    return m_mobileNddPrefixHasBeenSet;
}

bool CreateOwnNumberApplyRequest::GetLocalNumberTrimAC() const
{
    return m_localNumberTrimAC;
}

void CreateOwnNumberApplyRequest::SetLocalNumberTrimAC(const bool& _localNumberTrimAC)
{
    m_localNumberTrimAC = _localNumberTrimAC;
    m_localNumberTrimACHasBeenSet = true;
}

bool CreateOwnNumberApplyRequest::LocalNumberTrimACHasBeenSet() const
{
    return m_localNumberTrimACHasBeenSet;
}


