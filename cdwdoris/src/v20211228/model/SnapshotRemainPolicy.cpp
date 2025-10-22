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

#include <tencentcloud/cdwdoris/v20211228/model/SnapshotRemainPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

SnapshotRemainPolicy::SnapshotRemainPolicy() :
    m_typeHasBeenSet(false),
    m_remainDaysHasBeenSet(false),
    m_remainLatestNumHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotRemainPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotRemainPolicy.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("RemainDays") && !value["RemainDays"].IsNull())
    {
        if (!value["RemainDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotRemainPolicy.RemainDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainDays = value["RemainDays"].GetInt64();
        m_remainDaysHasBeenSet = true;
    }

    if (value.HasMember("RemainLatestNum") && !value["RemainLatestNum"].IsNull())
    {
        if (!value["RemainLatestNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotRemainPolicy.RemainLatestNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainLatestNum = value["RemainLatestNum"].GetInt64();
        m_remainLatestNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotRemainPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_remainDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainDays, allocator);
    }

    if (m_remainLatestNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainLatestNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainLatestNum, allocator);
    }

}


int64_t SnapshotRemainPolicy::GetType() const
{
    return m_type;
}

void SnapshotRemainPolicy::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SnapshotRemainPolicy::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t SnapshotRemainPolicy::GetRemainDays() const
{
    return m_remainDays;
}

void SnapshotRemainPolicy::SetRemainDays(const int64_t& _remainDays)
{
    m_remainDays = _remainDays;
    m_remainDaysHasBeenSet = true;
}

bool SnapshotRemainPolicy::RemainDaysHasBeenSet() const
{
    return m_remainDaysHasBeenSet;
}

int64_t SnapshotRemainPolicy::GetRemainLatestNum() const
{
    return m_remainLatestNum;
}

void SnapshotRemainPolicy::SetRemainLatestNum(const int64_t& _remainLatestNum)
{
    m_remainLatestNum = _remainLatestNum;
    m_remainLatestNumHasBeenSet = true;
}

bool SnapshotRemainPolicy::RemainLatestNumHasBeenSet() const
{
    return m_remainLatestNumHasBeenSet;
}

