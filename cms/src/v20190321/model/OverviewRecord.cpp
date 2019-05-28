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

#include <tencentcloud/cms/v20190321/model/OverviewRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

OverviewRecord::OverviewRecord() :
    m_evilCountHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_yoyHasBeenSet(false)
{
}

CoreInternalOutcome OverviewRecord::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EvilCount") && !value["EvilCount"].IsNull())
    {
        if (!value["EvilCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OverviewRecord.EvilCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_evilCount = value["EvilCount"].GetUint64();
        m_evilCountHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `OverviewRecord.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `OverviewRecord.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("Yoy") && !value["Yoy"].IsNull())
    {
        if (!value["Yoy"].IsString())
        {
            return CoreInternalOutcome(Error("response `OverviewRecord.Yoy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yoy = string(value["Yoy"].GetString());
        m_yoyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewRecord::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_evilCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilCount, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_yoyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Yoy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_yoy.c_str(), allocator).Move(), allocator);
    }

}


uint64_t OverviewRecord::GetEvilCount() const
{
    return m_evilCount;
}

void OverviewRecord::SetEvilCount(const uint64_t& _evilCount)
{
    m_evilCount = _evilCount;
    m_evilCountHasBeenSet = true;
}

bool OverviewRecord::EvilCountHasBeenSet() const
{
    return m_evilCountHasBeenSet;
}

string OverviewRecord::GetServiceType() const
{
    return m_serviceType;
}

void OverviewRecord::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool OverviewRecord::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

uint64_t OverviewRecord::GetTotalCount() const
{
    return m_totalCount;
}

void OverviewRecord::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool OverviewRecord::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string OverviewRecord::GetYoy() const
{
    return m_yoy;
}

void OverviewRecord::SetYoy(const string& _yoy)
{
    m_yoy = _yoy;
    m_yoyHasBeenSet = true;
}

bool OverviewRecord::YoyHasBeenSet() const
{
    return m_yoyHasBeenSet;
}

