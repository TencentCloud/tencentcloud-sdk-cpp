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

#include <tencentcloud/tsf/v20180326/model/DescribeJvmMonitorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeJvmMonitorRequest::DescribeJvmMonitorRequest() :
    m_instanceIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_timeGranularityHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_requiredPicturesHasBeenSet(false),
    m_tagHasBeenSet(false)
{
}

string DescribeJvmMonitorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeGranularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeGranularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeGranularity, allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_to.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredPicturesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequiredPictures";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_requiredPictures.begin(); itr != m_requiredPictures.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeJvmMonitorRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeJvmMonitorRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeJvmMonitorRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeJvmMonitorRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeJvmMonitorRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeJvmMonitorRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t DescribeJvmMonitorRequest::GetTimeGranularity() const
{
    return m_timeGranularity;
}

void DescribeJvmMonitorRequest::SetTimeGranularity(const int64_t& _timeGranularity)
{
    m_timeGranularity = _timeGranularity;
    m_timeGranularityHasBeenSet = true;
}

bool DescribeJvmMonitorRequest::TimeGranularityHasBeenSet() const
{
    return m_timeGranularityHasBeenSet;
}

string DescribeJvmMonitorRequest::GetFrom() const
{
    return m_from;
}

void DescribeJvmMonitorRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeJvmMonitorRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string DescribeJvmMonitorRequest::GetTo() const
{
    return m_to;
}

void DescribeJvmMonitorRequest::SetTo(const string& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool DescribeJvmMonitorRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

vector<string> DescribeJvmMonitorRequest::GetRequiredPictures() const
{
    return m_requiredPictures;
}

void DescribeJvmMonitorRequest::SetRequiredPictures(const vector<string>& _requiredPictures)
{
    m_requiredPictures = _requiredPictures;
    m_requiredPicturesHasBeenSet = true;
}

bool DescribeJvmMonitorRequest::RequiredPicturesHasBeenSet() const
{
    return m_requiredPicturesHasBeenSet;
}

string DescribeJvmMonitorRequest::GetTag() const
{
    return m_tag;
}

void DescribeJvmMonitorRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DescribeJvmMonitorRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}


