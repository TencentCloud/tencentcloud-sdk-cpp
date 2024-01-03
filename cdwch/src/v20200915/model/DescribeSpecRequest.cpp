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

#include <tencentcloud/cdwch/v20200915/model/DescribeSpecRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

DescribeSpecRequest::DescribeSpecRequest() :
    m_zoneHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_isElasticHasBeenSet(false),
    m_caseTypeHasBeenSet(false)
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

    if (m_isElasticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsElastic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isElastic, allocator);
    }

    if (m_caseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_caseType, allocator);
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

bool DescribeSpecRequest::GetIsElastic() const
{
    return m_isElastic;
}

void DescribeSpecRequest::SetIsElastic(const bool& _isElastic)
{
    m_isElastic = _isElastic;
    m_isElasticHasBeenSet = true;
}

bool DescribeSpecRequest::IsElasticHasBeenSet() const
{
    return m_isElasticHasBeenSet;
}

int64_t DescribeSpecRequest::GetCaseType() const
{
    return m_caseType;
}

void DescribeSpecRequest::SetCaseType(const int64_t& _caseType)
{
    m_caseType = _caseType;
    m_caseTypeHasBeenSet = true;
}

bool DescribeSpecRequest::CaseTypeHasBeenSet() const
{
    return m_caseTypeHasBeenSet;
}


