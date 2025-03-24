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

#include <tencentcloud/chc/v20230418/model/PositionStatusItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

PositionStatusItem::PositionStatusItem() :
    m_positionStatusHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome PositionStatusItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PositionStatus") && !value["PositionStatus"].IsNull())
    {
        if (!value["PositionStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionStatusItem.PositionStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_positionStatus = value["PositionStatus"].GetUint64();
        m_positionStatusHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionStatusItem.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PositionStatusItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_positionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_positionStatus, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


uint64_t PositionStatusItem::GetPositionStatus() const
{
    return m_positionStatus;
}

void PositionStatusItem::SetPositionStatus(const uint64_t& _positionStatus)
{
    m_positionStatus = _positionStatus;
    m_positionStatusHasBeenSet = true;
}

bool PositionStatusItem::PositionStatusHasBeenSet() const
{
    return m_positionStatusHasBeenSet;
}

uint64_t PositionStatusItem::GetCount() const
{
    return m_count;
}

void PositionStatusItem::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool PositionStatusItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

