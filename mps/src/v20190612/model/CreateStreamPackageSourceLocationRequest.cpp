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

#include <tencentcloud/mps/v20190612/model/CreateStreamPackageSourceLocationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateStreamPackageSourceLocationRequest::CreateStreamPackageSourceLocationRequest() :
    m_nameHasBeenSet(false),
    m_baseUrlHasBeenSet(false),
    m_segmentDeliverEnableHasBeenSet(false),
    m_segmentDeliverConfHasBeenSet(false),
    m_segmentDeliverUsePackageEnableHasBeenSet(false)
{
}

string CreateStreamPackageSourceLocationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_baseUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baseUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentDeliverEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentDeliverEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_segmentDeliverEnable, allocator);
    }

    if (m_segmentDeliverConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentDeliverConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_segmentDeliverConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_segmentDeliverUsePackageEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentDeliverUsePackageEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_segmentDeliverUsePackageEnable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStreamPackageSourceLocationRequest::GetName() const
{
    return m_name;
}

void CreateStreamPackageSourceLocationRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateStreamPackageSourceLocationRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateStreamPackageSourceLocationRequest::GetBaseUrl() const
{
    return m_baseUrl;
}

void CreateStreamPackageSourceLocationRequest::SetBaseUrl(const string& _baseUrl)
{
    m_baseUrl = _baseUrl;
    m_baseUrlHasBeenSet = true;
}

bool CreateStreamPackageSourceLocationRequest::BaseUrlHasBeenSet() const
{
    return m_baseUrlHasBeenSet;
}

bool CreateStreamPackageSourceLocationRequest::GetSegmentDeliverEnable() const
{
    return m_segmentDeliverEnable;
}

void CreateStreamPackageSourceLocationRequest::SetSegmentDeliverEnable(const bool& _segmentDeliverEnable)
{
    m_segmentDeliverEnable = _segmentDeliverEnable;
    m_segmentDeliverEnableHasBeenSet = true;
}

bool CreateStreamPackageSourceLocationRequest::SegmentDeliverEnableHasBeenSet() const
{
    return m_segmentDeliverEnableHasBeenSet;
}

SegmentDeliverInfo CreateStreamPackageSourceLocationRequest::GetSegmentDeliverConf() const
{
    return m_segmentDeliverConf;
}

void CreateStreamPackageSourceLocationRequest::SetSegmentDeliverConf(const SegmentDeliverInfo& _segmentDeliverConf)
{
    m_segmentDeliverConf = _segmentDeliverConf;
    m_segmentDeliverConfHasBeenSet = true;
}

bool CreateStreamPackageSourceLocationRequest::SegmentDeliverConfHasBeenSet() const
{
    return m_segmentDeliverConfHasBeenSet;
}

bool CreateStreamPackageSourceLocationRequest::GetSegmentDeliverUsePackageEnable() const
{
    return m_segmentDeliverUsePackageEnable;
}

void CreateStreamPackageSourceLocationRequest::SetSegmentDeliverUsePackageEnable(const bool& _segmentDeliverUsePackageEnable)
{
    m_segmentDeliverUsePackageEnable = _segmentDeliverUsePackageEnable;
    m_segmentDeliverUsePackageEnableHasBeenSet = true;
}

bool CreateStreamPackageSourceLocationRequest::SegmentDeliverUsePackageEnableHasBeenSet() const
{
    return m_segmentDeliverUsePackageEnableHasBeenSet;
}


