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

#include <tencentcloud/live/v20180801/model/DescribeProvinceIspPlayInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeProvinceIspPlayInfoListRequest::DescribeProvinceIspPlayInfoListRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_statTypeHasBeenSet(false),
    m_playDomainsHasBeenSet(false),
    m_provinceNamesHasBeenSet(false),
    m_ispNamesHasBeenSet(false),
    m_mainlandOrOverseaHasBeenSet(false),
    m_ipTypeHasBeenSet(false)
{
}

string DescribeProvinceIspPlayInfoListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_granularity, allocator);
    }

    if (m_statTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_statType.c_str(), allocator).Move(), allocator);
    }

    if (m_playDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayDomains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_playDomains.begin(); itr != m_playDomains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_provinceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_provinceNames.begin(); itr != m_provinceNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ispNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ispNames.begin(); itr != m_ispNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mainlandOrOverseaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainlandOrOversea";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mainlandOrOversea.c_str(), allocator).Move(), allocator);
    }

    if (m_ipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeProvinceIspPlayInfoListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeProvinceIspPlayInfoListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeProvinceIspPlayInfoListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeProvinceIspPlayInfoListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeProvinceIspPlayInfoListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeProvinceIspPlayInfoListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeProvinceIspPlayInfoListRequest::GetGranularity() const
{
    return m_granularity;
}

void DescribeProvinceIspPlayInfoListRequest::SetGranularity(const uint64_t& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribeProvinceIspPlayInfoListRequest::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

string DescribeProvinceIspPlayInfoListRequest::GetStatType() const
{
    return m_statType;
}

void DescribeProvinceIspPlayInfoListRequest::SetStatType(const string& _statType)
{
    m_statType = _statType;
    m_statTypeHasBeenSet = true;
}

bool DescribeProvinceIspPlayInfoListRequest::StatTypeHasBeenSet() const
{
    return m_statTypeHasBeenSet;
}

vector<string> DescribeProvinceIspPlayInfoListRequest::GetPlayDomains() const
{
    return m_playDomains;
}

void DescribeProvinceIspPlayInfoListRequest::SetPlayDomains(const vector<string>& _playDomains)
{
    m_playDomains = _playDomains;
    m_playDomainsHasBeenSet = true;
}

bool DescribeProvinceIspPlayInfoListRequest::PlayDomainsHasBeenSet() const
{
    return m_playDomainsHasBeenSet;
}

vector<string> DescribeProvinceIspPlayInfoListRequest::GetProvinceNames() const
{
    return m_provinceNames;
}

void DescribeProvinceIspPlayInfoListRequest::SetProvinceNames(const vector<string>& _provinceNames)
{
    m_provinceNames = _provinceNames;
    m_provinceNamesHasBeenSet = true;
}

bool DescribeProvinceIspPlayInfoListRequest::ProvinceNamesHasBeenSet() const
{
    return m_provinceNamesHasBeenSet;
}

vector<string> DescribeProvinceIspPlayInfoListRequest::GetIspNames() const
{
    return m_ispNames;
}

void DescribeProvinceIspPlayInfoListRequest::SetIspNames(const vector<string>& _ispNames)
{
    m_ispNames = _ispNames;
    m_ispNamesHasBeenSet = true;
}

bool DescribeProvinceIspPlayInfoListRequest::IspNamesHasBeenSet() const
{
    return m_ispNamesHasBeenSet;
}

string DescribeProvinceIspPlayInfoListRequest::GetMainlandOrOversea() const
{
    return m_mainlandOrOversea;
}

void DescribeProvinceIspPlayInfoListRequest::SetMainlandOrOversea(const string& _mainlandOrOversea)
{
    m_mainlandOrOversea = _mainlandOrOversea;
    m_mainlandOrOverseaHasBeenSet = true;
}

bool DescribeProvinceIspPlayInfoListRequest::MainlandOrOverseaHasBeenSet() const
{
    return m_mainlandOrOverseaHasBeenSet;
}

string DescribeProvinceIspPlayInfoListRequest::GetIpType() const
{
    return m_ipType;
}

void DescribeProvinceIspPlayInfoListRequest::SetIpType(const string& _ipType)
{
    m_ipType = _ipType;
    m_ipTypeHasBeenSet = true;
}

bool DescribeProvinceIspPlayInfoListRequest::IpTypeHasBeenSet() const
{
    return m_ipTypeHasBeenSet;
}


