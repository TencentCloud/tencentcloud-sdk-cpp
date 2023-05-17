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

#include <tencentcloud/cwp/v20180228/model/LogStorageRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

LogStorageRecord::LogStorageRecord() :
    m_monthHasBeenSet(false),
    m_usedSizeHasBeenSet(false),
    m_inquireSizeHasBeenSet(false)
{
}

CoreInternalOutcome LogStorageRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Month") && !value["Month"].IsNull())
    {
        if (!value["Month"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogStorageRecord.Month` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_month = string(value["Month"].GetString());
        m_monthHasBeenSet = true;
    }

    if (value.HasMember("UsedSize") && !value["UsedSize"].IsNull())
    {
        if (!value["UsedSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogStorageRecord.UsedSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedSize = value["UsedSize"].GetUint64();
        m_usedSizeHasBeenSet = true;
    }

    if (value.HasMember("InquireSize") && !value["InquireSize"].IsNull())
    {
        if (!value["InquireSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogStorageRecord.InquireSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inquireSize = value["InquireSize"].GetUint64();
        m_inquireSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogStorageRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_usedSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedSize, allocator);
    }

    if (m_inquireSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inquireSize, allocator);
    }

}


string LogStorageRecord::GetMonth() const
{
    return m_month;
}

void LogStorageRecord::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool LogStorageRecord::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

uint64_t LogStorageRecord::GetUsedSize() const
{
    return m_usedSize;
}

void LogStorageRecord::SetUsedSize(const uint64_t& _usedSize)
{
    m_usedSize = _usedSize;
    m_usedSizeHasBeenSet = true;
}

bool LogStorageRecord::UsedSizeHasBeenSet() const
{
    return m_usedSizeHasBeenSet;
}

uint64_t LogStorageRecord::GetInquireSize() const
{
    return m_inquireSize;
}

void LogStorageRecord::SetInquireSize(const uint64_t& _inquireSize)
{
    m_inquireSize = _inquireSize;
    m_inquireSizeHasBeenSet = true;
}

bool LogStorageRecord::InquireSizeHasBeenSet() const
{
    return m_inquireSizeHasBeenSet;
}

