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

#include <tencentcloud/csip/v20221121/model/CreateImageRegistryScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateImageRegistryScanTaskRequest::CreateImageRegistryScanTaskRequest() :
    m_memberIdHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string CreateImageRegistryScanTaskRequest::ToJsonString() const
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

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanType.begin(); itr != m_scanType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_target.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateImageRegistryScanTaskRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateImageRegistryScanTaskRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateImageRegistryScanTaskRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> CreateImageRegistryScanTaskRequest::GetScanType() const
{
    return m_scanType;
}

void CreateImageRegistryScanTaskRequest::SetScanType(const vector<string>& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool CreateImageRegistryScanTaskRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

uint64_t CreateImageRegistryScanTaskRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateImageRegistryScanTaskRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateImageRegistryScanTaskRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string CreateImageRegistryScanTaskRequest::GetName() const
{
    return m_name;
}

void CreateImageRegistryScanTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateImageRegistryScanTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

ImageScanAssetTarget CreateImageRegistryScanTaskRequest::GetTarget() const
{
    return m_target;
}

void CreateImageRegistryScanTaskRequest::SetTarget(const ImageScanAssetTarget& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool CreateImageRegistryScanTaskRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

ImageScanRegistryFilter CreateImageRegistryScanTaskRequest::GetFilter() const
{
    return m_filter;
}

void CreateImageRegistryScanTaskRequest::SetFilter(const ImageScanRegistryFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool CreateImageRegistryScanTaskRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}


