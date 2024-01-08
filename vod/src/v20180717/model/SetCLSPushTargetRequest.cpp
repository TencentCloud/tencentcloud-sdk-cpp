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

#include <tencentcloud/vod/v20180717/model/SetCLSPushTargetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SetCLSPushTargetRequest::SetCLSPushTargetRequest() :
    m_domainHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_chineseMainlandCLSTargetInfoHasBeenSet(false),
    m_outsideChineseMainlandCLSTargetInfoHasBeenSet(false)
{
}

string SetCLSPushTargetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_chineseMainlandCLSTargetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChineseMainlandCLSTargetInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chineseMainlandCLSTargetInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outsideChineseMainlandCLSTargetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutsideChineseMainlandCLSTargetInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outsideChineseMainlandCLSTargetInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetCLSPushTargetRequest::GetDomain() const
{
    return m_domain;
}

void SetCLSPushTargetRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SetCLSPushTargetRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t SetCLSPushTargetRequest::GetSubAppId() const
{
    return m_subAppId;
}

void SetCLSPushTargetRequest::SetSubAppId(const int64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool SetCLSPushTargetRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

AreaCLSTargetInfo SetCLSPushTargetRequest::GetChineseMainlandCLSTargetInfo() const
{
    return m_chineseMainlandCLSTargetInfo;
}

void SetCLSPushTargetRequest::SetChineseMainlandCLSTargetInfo(const AreaCLSTargetInfo& _chineseMainlandCLSTargetInfo)
{
    m_chineseMainlandCLSTargetInfo = _chineseMainlandCLSTargetInfo;
    m_chineseMainlandCLSTargetInfoHasBeenSet = true;
}

bool SetCLSPushTargetRequest::ChineseMainlandCLSTargetInfoHasBeenSet() const
{
    return m_chineseMainlandCLSTargetInfoHasBeenSet;
}

AreaCLSTargetInfo SetCLSPushTargetRequest::GetOutsideChineseMainlandCLSTargetInfo() const
{
    return m_outsideChineseMainlandCLSTargetInfo;
}

void SetCLSPushTargetRequest::SetOutsideChineseMainlandCLSTargetInfo(const AreaCLSTargetInfo& _outsideChineseMainlandCLSTargetInfo)
{
    m_outsideChineseMainlandCLSTargetInfo = _outsideChineseMainlandCLSTargetInfo;
    m_outsideChineseMainlandCLSTargetInfoHasBeenSet = true;
}

bool SetCLSPushTargetRequest::OutsideChineseMainlandCLSTargetInfoHasBeenSet() const
{
    return m_outsideChineseMainlandCLSTargetInfoHasBeenSet;
}


