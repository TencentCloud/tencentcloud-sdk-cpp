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

#include <tencentcloud/iotvideo/v20201215/model/AIModelUsageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

AIModelUsageInfo::AIModelUsageInfo() :
    m_createTimeHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_usedHasBeenSet(false)
{
}

CoreInternalOutcome AIModelUsageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelUsageInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelUsageInfo.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelUsageInfo.Used` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetUint64();
        m_usedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIModelUsageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

}


uint64_t AIModelUsageInfo::GetCreateTime() const
{
    return m_createTime;
}

void AIModelUsageInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AIModelUsageInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t AIModelUsageInfo::GetTotal() const
{
    return m_total;
}

void AIModelUsageInfo::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool AIModelUsageInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t AIModelUsageInfo::GetUsed() const
{
    return m_used;
}

void AIModelUsageInfo::SetUsed(const uint64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool AIModelUsageInfo::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

