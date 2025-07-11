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

#include <tencentcloud/waf/v20180125/model/DescribePeakValueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribePeakValueRequest::DescribePeakValueRequest() :
    m_fromTimeHasBeenSet(false),
    m_toTimeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
}

string DescribePeakValueRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fromTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromTime.c_str(), allocator).Move(), allocator);
    }

    if (m_toTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toTime.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePeakValueRequest::GetFromTime() const
{
    return m_fromTime;
}

void DescribePeakValueRequest::SetFromTime(const string& _fromTime)
{
    m_fromTime = _fromTime;
    m_fromTimeHasBeenSet = true;
}

bool DescribePeakValueRequest::FromTimeHasBeenSet() const
{
    return m_fromTimeHasBeenSet;
}

string DescribePeakValueRequest::GetToTime() const
{
    return m_toTime;
}

void DescribePeakValueRequest::SetToTime(const string& _toTime)
{
    m_toTime = _toTime;
    m_toTimeHasBeenSet = true;
}

bool DescribePeakValueRequest::ToTimeHasBeenSet() const
{
    return m_toTimeHasBeenSet;
}

string DescribePeakValueRequest::GetDomain() const
{
    return m_domain;
}

void DescribePeakValueRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribePeakValueRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribePeakValueRequest::GetEdition() const
{
    return m_edition;
}

void DescribePeakValueRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool DescribePeakValueRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string DescribePeakValueRequest::GetInstanceID() const
{
    return m_instanceID;
}

void DescribePeakValueRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribePeakValueRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string DescribePeakValueRequest::GetMetricName() const
{
    return m_metricName;
}

void DescribePeakValueRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool DescribePeakValueRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}


