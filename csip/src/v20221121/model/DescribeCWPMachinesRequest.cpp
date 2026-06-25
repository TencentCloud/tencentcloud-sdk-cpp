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

#include <tencentcloud/csip/v20221121/model/DescribeCWPMachinesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCWPMachinesRequest::DescribeCWPMachinesRequest() :
    m_memberIdHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_needTatStatusHasBeenSet(false),
    m_moreInformationHasBeenSet(false),
    m_needContainerInfoHasBeenSet(false)
{
}

string DescribeCWPMachinesRequest::ToJsonString() const
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

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_needTatStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedTatStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needTatStatus, allocator);
    }

    if (m_moreInformationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MoreInformation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_moreInformation, allocator);
    }

    if (m_needContainerInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedContainerInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needContainerInfo, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeCWPMachinesRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeCWPMachinesRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeCWPMachinesRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

Filter DescribeCWPMachinesRequest::GetFilter() const
{
    return m_filter;
}

void DescribeCWPMachinesRequest::SetFilter(const Filter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeCWPMachinesRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

bool DescribeCWPMachinesRequest::GetNeedTatStatus() const
{
    return m_needTatStatus;
}

void DescribeCWPMachinesRequest::SetNeedTatStatus(const bool& _needTatStatus)
{
    m_needTatStatus = _needTatStatus;
    m_needTatStatusHasBeenSet = true;
}

bool DescribeCWPMachinesRequest::NeedTatStatusHasBeenSet() const
{
    return m_needTatStatusHasBeenSet;
}

bool DescribeCWPMachinesRequest::GetMoreInformation() const
{
    return m_moreInformation;
}

void DescribeCWPMachinesRequest::SetMoreInformation(const bool& _moreInformation)
{
    m_moreInformation = _moreInformation;
    m_moreInformationHasBeenSet = true;
}

bool DescribeCWPMachinesRequest::MoreInformationHasBeenSet() const
{
    return m_moreInformationHasBeenSet;
}

bool DescribeCWPMachinesRequest::GetNeedContainerInfo() const
{
    return m_needContainerInfo;
}

void DescribeCWPMachinesRequest::SetNeedContainerInfo(const bool& _needContainerInfo)
{
    m_needContainerInfo = _needContainerInfo;
    m_needContainerInfoHasBeenSet = true;
}

bool DescribeCWPMachinesRequest::NeedContainerInfoHasBeenSet() const
{
    return m_needContainerInfoHasBeenSet;
}


