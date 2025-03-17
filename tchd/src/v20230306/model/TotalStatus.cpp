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

#include <tencentcloud/tchd/v20230306/model/TotalStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tchd::V20230306::Model;
using namespace std;

TotalStatus::TotalStatus() :
    m_normalCountHasBeenSet(false),
    m_notifyCountHasBeenSet(false),
    m_abnormalCountHasBeenSet(false)
{
}

CoreInternalOutcome TotalStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NormalCount") && !value["NormalCount"].IsNull())
    {
        if (!value["NormalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalStatus.NormalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_normalCount = value["NormalCount"].GetInt64();
        m_normalCountHasBeenSet = true;
    }

    if (value.HasMember("NotifyCount") && !value["NotifyCount"].IsNull())
    {
        if (!value["NotifyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalStatus.NotifyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notifyCount = value["NotifyCount"].GetInt64();
        m_notifyCountHasBeenSet = true;
    }

    if (value.HasMember("AbnormalCount") && !value["AbnormalCount"].IsNull())
    {
        if (!value["AbnormalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalStatus.AbnormalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalCount = value["AbnormalCount"].GetInt64();
        m_abnormalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TotalStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_normalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normalCount, allocator);
    }

    if (m_notifyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notifyCount, allocator);
    }

    if (m_abnormalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalCount, allocator);
    }

}


int64_t TotalStatus::GetNormalCount() const
{
    return m_normalCount;
}

void TotalStatus::SetNormalCount(const int64_t& _normalCount)
{
    m_normalCount = _normalCount;
    m_normalCountHasBeenSet = true;
}

bool TotalStatus::NormalCountHasBeenSet() const
{
    return m_normalCountHasBeenSet;
}

int64_t TotalStatus::GetNotifyCount() const
{
    return m_notifyCount;
}

void TotalStatus::SetNotifyCount(const int64_t& _notifyCount)
{
    m_notifyCount = _notifyCount;
    m_notifyCountHasBeenSet = true;
}

bool TotalStatus::NotifyCountHasBeenSet() const
{
    return m_notifyCountHasBeenSet;
}

int64_t TotalStatus::GetAbnormalCount() const
{
    return m_abnormalCount;
}

void TotalStatus::SetAbnormalCount(const int64_t& _abnormalCount)
{
    m_abnormalCount = _abnormalCount;
    m_abnormalCountHasBeenSet = true;
}

bool TotalStatus::AbnormalCountHasBeenSet() const
{
    return m_abnormalCountHasBeenSet;
}

