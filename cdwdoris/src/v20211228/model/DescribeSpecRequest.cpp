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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeSpecRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeSpecRequest::DescribeSpecRequest() :
    m_zoneHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_isSSCHasBeenSet(false)
{
}

string DescribeSpecRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_isSSCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSSC";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSSC, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSpecRequest::GetZone() const
{
    return m_zone;
}

void DescribeSpecRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeSpecRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DescribeSpecRequest::GetPayMode() const
{
    return m_payMode;
}

void DescribeSpecRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DescribeSpecRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

vector<string> DescribeSpecRequest::GetZones() const
{
    return m_zones;
}

void DescribeSpecRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool DescribeSpecRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string DescribeSpecRequest::GetSpecName() const
{
    return m_specName;
}

void DescribeSpecRequest::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool DescribeSpecRequest::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

bool DescribeSpecRequest::GetIsSSC() const
{
    return m_isSSC;
}

void DescribeSpecRequest::SetIsSSC(const bool& _isSSC)
{
    m_isSSC = _isSSC;
    m_isSSCHasBeenSet = true;
}

bool DescribeSpecRequest::IsSSCHasBeenSet() const
{
    return m_isSSCHasBeenSet;
}


