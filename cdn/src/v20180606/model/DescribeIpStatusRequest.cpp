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

#include <tencentcloud/cdn/v20180606/model/DescribeIpStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DescribeIpStatusRequest::DescribeIpStatusRequest() :
    m_domainHasBeenSet(false),
    m_layerHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_segmentHasBeenSet(false),
    m_showIpv6HasBeenSet(false),
    m_abbreviationIpv6HasBeenSet(false)
{
}

string DescribeIpStatusRequest::ToJsonString() const
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

    if (m_layerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_layer.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Segment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_segment, allocator);
    }

    if (m_showIpv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowIpv6";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_showIpv6, allocator);
    }

    if (m_abbreviationIpv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbbreviationIpv6";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_abbreviationIpv6, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIpStatusRequest::GetDomain() const
{
    return m_domain;
}

void DescribeIpStatusRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeIpStatusRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeIpStatusRequest::GetLayer() const
{
    return m_layer;
}

void DescribeIpStatusRequest::SetLayer(const string& _layer)
{
    m_layer = _layer;
    m_layerHasBeenSet = true;
}

bool DescribeIpStatusRequest::LayerHasBeenSet() const
{
    return m_layerHasBeenSet;
}

string DescribeIpStatusRequest::GetArea() const
{
    return m_area;
}

void DescribeIpStatusRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeIpStatusRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

bool DescribeIpStatusRequest::GetSegment() const
{
    return m_segment;
}

void DescribeIpStatusRequest::SetSegment(const bool& _segment)
{
    m_segment = _segment;
    m_segmentHasBeenSet = true;
}

bool DescribeIpStatusRequest::SegmentHasBeenSet() const
{
    return m_segmentHasBeenSet;
}

bool DescribeIpStatusRequest::GetShowIpv6() const
{
    return m_showIpv6;
}

void DescribeIpStatusRequest::SetShowIpv6(const bool& _showIpv6)
{
    m_showIpv6 = _showIpv6;
    m_showIpv6HasBeenSet = true;
}

bool DescribeIpStatusRequest::ShowIpv6HasBeenSet() const
{
    return m_showIpv6HasBeenSet;
}

bool DescribeIpStatusRequest::GetAbbreviationIpv6() const
{
    return m_abbreviationIpv6;
}

void DescribeIpStatusRequest::SetAbbreviationIpv6(const bool& _abbreviationIpv6)
{
    m_abbreviationIpv6 = _abbreviationIpv6;
    m_abbreviationIpv6HasBeenSet = true;
}

bool DescribeIpStatusRequest::AbbreviationIpv6HasBeenSet() const
{
    return m_abbreviationIpv6HasBeenSet;
}


