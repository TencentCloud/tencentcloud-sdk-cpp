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

#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeSlowLogsRequest::DescribeSlowLogsRequest() :
    m_productHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_dBHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_userHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_timeHasBeenSet(false)
{
}

string DescribeSlowLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

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

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_dBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dB.begin(); itr != m_dB.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_key.begin(); itr != m_key.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_user.begin(); itr != m_user.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ip.begin(); itr != m_ip.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_time.begin(); itr != m_time.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSlowLogsRequest::GetProduct() const
{
    return m_product;
}

void DescribeSlowLogsRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeSlowLogsRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeSlowLogsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSlowLogsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSlowLogsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeSlowLogsRequest::GetMd5() const
{
    return m_md5;
}

void DescribeSlowLogsRequest::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool DescribeSlowLogsRequest::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string DescribeSlowLogsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeSlowLogsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeSlowLogsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeSlowLogsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSlowLogsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSlowLogsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeSlowLogsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSlowLogsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSlowLogsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeSlowLogsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSlowLogsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSlowLogsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeSlowLogsRequest::GetDB() const
{
    return m_dB;
}

void DescribeSlowLogsRequest::SetDB(const vector<string>& _dB)
{
    m_dB = _dB;
    m_dBHasBeenSet = true;
}

bool DescribeSlowLogsRequest::DBHasBeenSet() const
{
    return m_dBHasBeenSet;
}

vector<string> DescribeSlowLogsRequest::GetKey() const
{
    return m_key;
}

void DescribeSlowLogsRequest::SetKey(const vector<string>& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool DescribeSlowLogsRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

vector<string> DescribeSlowLogsRequest::GetUser() const
{
    return m_user;
}

void DescribeSlowLogsRequest::SetUser(const vector<string>& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool DescribeSlowLogsRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

vector<string> DescribeSlowLogsRequest::GetIp() const
{
    return m_ip;
}

void DescribeSlowLogsRequest::SetIp(const vector<string>& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeSlowLogsRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

vector<int64_t> DescribeSlowLogsRequest::GetTime() const
{
    return m_time;
}

void DescribeSlowLogsRequest::SetTime(const vector<int64_t>& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool DescribeSlowLogsRequest::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}


