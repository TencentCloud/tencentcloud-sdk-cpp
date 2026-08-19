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

#include <tencentcloud/csip/v20221121/model/ExposeTrendItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ExposeTrendItem::ExposeTrendItem() :
    m_openCountHasBeenSet(false),
    m_aclCountHasBeenSet(false),
    m_closeCountHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

CoreInternalOutcome ExposeTrendItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OpenCount") && !value["OpenCount"].IsNull())
    {
        if (!value["OpenCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExposeTrendItem.OpenCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_openCount = value["OpenCount"].GetUint64();
        m_openCountHasBeenSet = true;
    }

    if (value.HasMember("AclCount") && !value["AclCount"].IsNull())
    {
        if (!value["AclCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExposeTrendItem.AclCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aclCount = value["AclCount"].GetUint64();
        m_aclCountHasBeenSet = true;
    }

    if (value.HasMember("CloseCount") && !value["CloseCount"].IsNull())
    {
        if (!value["CloseCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExposeTrendItem.CloseCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_closeCount = value["CloseCount"].GetUint64();
        m_closeCountHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposeTrendItem.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExposeTrendItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_openCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openCount, allocator);
    }

    if (m_aclCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aclCount, allocator);
    }

    if (m_closeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_closeCount, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ExposeTrendItem::GetOpenCount() const
{
    return m_openCount;
}

void ExposeTrendItem::SetOpenCount(const uint64_t& _openCount)
{
    m_openCount = _openCount;
    m_openCountHasBeenSet = true;
}

bool ExposeTrendItem::OpenCountHasBeenSet() const
{
    return m_openCountHasBeenSet;
}

uint64_t ExposeTrendItem::GetAclCount() const
{
    return m_aclCount;
}

void ExposeTrendItem::SetAclCount(const uint64_t& _aclCount)
{
    m_aclCount = _aclCount;
    m_aclCountHasBeenSet = true;
}

bool ExposeTrendItem::AclCountHasBeenSet() const
{
    return m_aclCountHasBeenSet;
}

uint64_t ExposeTrendItem::GetCloseCount() const
{
    return m_closeCount;
}

void ExposeTrendItem::SetCloseCount(const uint64_t& _closeCount)
{
    m_closeCount = _closeCount;
    m_closeCountHasBeenSet = true;
}

bool ExposeTrendItem::CloseCountHasBeenSet() const
{
    return m_closeCountHasBeenSet;
}

string ExposeTrendItem::GetDate() const
{
    return m_date;
}

void ExposeTrendItem::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool ExposeTrendItem::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

