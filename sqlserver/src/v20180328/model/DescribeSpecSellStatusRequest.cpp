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

#include <tencentcloud/sqlserver/v20180328/model/DescribeSpecSellStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeSpecSellStatusRequest::DescribeSpecSellStatusRequest() :
    m_zoneHasBeenSet(false),
    m_specIdSetHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_currencyHasBeenSet(false)
{
}

string DescribeSpecSellStatusRequest::ToJsonString() const
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

    if (m_specIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_specIdSet.begin(); itr != m_specIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pid, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSpecSellStatusRequest::GetZone() const
{
    return m_zone;
}

void DescribeSpecSellStatusRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeSpecSellStatusRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<uint64_t> DescribeSpecSellStatusRequest::GetSpecIdSet() const
{
    return m_specIdSet;
}

void DescribeSpecSellStatusRequest::SetSpecIdSet(const vector<uint64_t>& _specIdSet)
{
    m_specIdSet = _specIdSet;
    m_specIdSetHasBeenSet = true;
}

bool DescribeSpecSellStatusRequest::SpecIdSetHasBeenSet() const
{
    return m_specIdSetHasBeenSet;
}

string DescribeSpecSellStatusRequest::GetDBVersion() const
{
    return m_dBVersion;
}

void DescribeSpecSellStatusRequest::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool DescribeSpecSellStatusRequest::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

uint64_t DescribeSpecSellStatusRequest::GetPid() const
{
    return m_pid;
}

void DescribeSpecSellStatusRequest::SetPid(const uint64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool DescribeSpecSellStatusRequest::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string DescribeSpecSellStatusRequest::GetPayMode() const
{
    return m_payMode;
}

void DescribeSpecSellStatusRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DescribeSpecSellStatusRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeSpecSellStatusRequest::GetCurrency() const
{
    return m_currency;
}

void DescribeSpecSellStatusRequest::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool DescribeSpecSellStatusRequest::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}


