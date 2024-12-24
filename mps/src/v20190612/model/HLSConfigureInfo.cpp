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

#include <tencentcloud/mps/v20190612/model/HLSConfigureInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

HLSConfigureInfo::HLSConfigureInfo() :
    m_itemDurationHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_continueTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome HLSConfigureInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemDuration") && !value["ItemDuration"].IsNull())
    {
        if (!value["ItemDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HLSConfigureInfo.ItemDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemDuration = value["ItemDuration"].GetInt64();
        m_itemDurationHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HLSConfigureInfo.Interval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetInt64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("ContinueTimeout") && !value["ContinueTimeout"].IsNull())
    {
        if (!value["ContinueTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HLSConfigureInfo.ContinueTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_continueTimeout = value["ContinueTimeout"].GetInt64();
        m_continueTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HLSConfigureInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemDuration, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_continueTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinueTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_continueTimeout, allocator);
    }

}


int64_t HLSConfigureInfo::GetItemDuration() const
{
    return m_itemDuration;
}

void HLSConfigureInfo::SetItemDuration(const int64_t& _itemDuration)
{
    m_itemDuration = _itemDuration;
    m_itemDurationHasBeenSet = true;
}

bool HLSConfigureInfo::ItemDurationHasBeenSet() const
{
    return m_itemDurationHasBeenSet;
}

int64_t HLSConfigureInfo::GetInterval() const
{
    return m_interval;
}

void HLSConfigureInfo::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool HLSConfigureInfo::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

int64_t HLSConfigureInfo::GetContinueTimeout() const
{
    return m_continueTimeout;
}

void HLSConfigureInfo::SetContinueTimeout(const int64_t& _continueTimeout)
{
    m_continueTimeout = _continueTimeout;
    m_continueTimeoutHasBeenSet = true;
}

bool HLSConfigureInfo::ContinueTimeoutHasBeenSet() const
{
    return m_continueTimeoutHasBeenSet;
}

