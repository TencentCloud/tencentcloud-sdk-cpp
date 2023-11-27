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

#include <tencentcloud/antiddos/v20200309/model/DescribeBasicDeviceStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeBasicDeviceStatusRequest::DescribeBasicDeviceStatusRequest() :
    m_ipListHasBeenSet(false),
    m_idListHasBeenSet(false),
    m_filterRegionHasBeenSet(false),
    m_cnameWafIdListHasBeenSet(false)
{
}

string DescribeBasicDeviceStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_idListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idList.begin(); itr != m_idList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterRegion, allocator);
    }

    if (m_cnameWafIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnameWafIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cnameWafIdList.begin(); itr != m_cnameWafIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeBasicDeviceStatusRequest::GetIpList() const
{
    return m_ipList;
}

void DescribeBasicDeviceStatusRequest::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool DescribeBasicDeviceStatusRequest::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

vector<string> DescribeBasicDeviceStatusRequest::GetIdList() const
{
    return m_idList;
}

void DescribeBasicDeviceStatusRequest::SetIdList(const vector<string>& _idList)
{
    m_idList = _idList;
    m_idListHasBeenSet = true;
}

bool DescribeBasicDeviceStatusRequest::IdListHasBeenSet() const
{
    return m_idListHasBeenSet;
}

uint64_t DescribeBasicDeviceStatusRequest::GetFilterRegion() const
{
    return m_filterRegion;
}

void DescribeBasicDeviceStatusRequest::SetFilterRegion(const uint64_t& _filterRegion)
{
    m_filterRegion = _filterRegion;
    m_filterRegionHasBeenSet = true;
}

bool DescribeBasicDeviceStatusRequest::FilterRegionHasBeenSet() const
{
    return m_filterRegionHasBeenSet;
}

vector<string> DescribeBasicDeviceStatusRequest::GetCnameWafIdList() const
{
    return m_cnameWafIdList;
}

void DescribeBasicDeviceStatusRequest::SetCnameWafIdList(const vector<string>& _cnameWafIdList)
{
    m_cnameWafIdList = _cnameWafIdList;
    m_cnameWafIdListHasBeenSet = true;
}

bool DescribeBasicDeviceStatusRequest::CnameWafIdListHasBeenSet() const
{
    return m_cnameWafIdListHasBeenSet;
}


