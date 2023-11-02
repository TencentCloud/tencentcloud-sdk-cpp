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

#include <tencentcloud/dnspod/v20210323/model/CustomLineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

CustomLineInfo::CustomLineInfo() :
    m_domainIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_useCountHasBeenSet(false),
    m_maxCountHasBeenSet(false)
{
}

CoreInternalOutcome CustomLineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomLineInfo.DomainId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = value["DomainId"].GetUint64();
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomLineInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomLineInfo.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("UseCount") && !value["UseCount"].IsNull())
    {
        if (!value["UseCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomLineInfo.UseCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_useCount = value["UseCount"].GetUint64();
        m_useCountHasBeenSet = true;
    }

    if (value.HasMember("MaxCount") && !value["MaxCount"].IsNull())
    {
        if (!value["MaxCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomLineInfo.MaxCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCount = value["MaxCount"].GetUint64();
        m_maxCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomLineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_useCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useCount, allocator);
    }

    if (m_maxCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCount, allocator);
    }

}


uint64_t CustomLineInfo::GetDomainId() const
{
    return m_domainId;
}

void CustomLineInfo::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool CustomLineInfo::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string CustomLineInfo::GetName() const
{
    return m_name;
}

void CustomLineInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CustomLineInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CustomLineInfo::GetArea() const
{
    return m_area;
}

void CustomLineInfo::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CustomLineInfo::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

uint64_t CustomLineInfo::GetUseCount() const
{
    return m_useCount;
}

void CustomLineInfo::SetUseCount(const uint64_t& _useCount)
{
    m_useCount = _useCount;
    m_useCountHasBeenSet = true;
}

bool CustomLineInfo::UseCountHasBeenSet() const
{
    return m_useCountHasBeenSet;
}

uint64_t CustomLineInfo::GetMaxCount() const
{
    return m_maxCount;
}

void CustomLineInfo::SetMaxCount(const uint64_t& _maxCount)
{
    m_maxCount = _maxCount;
    m_maxCountHasBeenSet = true;
}

bool CustomLineInfo::MaxCountHasBeenSet() const
{
    return m_maxCountHasBeenSet;
}

