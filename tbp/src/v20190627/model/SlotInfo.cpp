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

#include <tencentcloud/tbp/v20190627/model/SlotInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbp::V20190627::Model;
using namespace std;

SlotInfo::SlotInfo() :
    m_slotNameHasBeenSet(false),
    m_slotValueHasBeenSet(false)
{
}

CoreInternalOutcome SlotInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SlotName") && !value["SlotName"].IsNull())
    {
        if (!value["SlotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlotInfo.SlotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slotName = string(value["SlotName"].GetString());
        m_slotNameHasBeenSet = true;
    }

    if (value.HasMember("SlotValue") && !value["SlotValue"].IsNull())
    {
        if (!value["SlotValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlotInfo.SlotValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slotValue = string(value["SlotValue"].GetString());
        m_slotValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlotInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_slotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slotName.c_str(), allocator).Move(), allocator);
    }

    if (m_slotValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlotValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slotValue.c_str(), allocator).Move(), allocator);
    }

}


string SlotInfo::GetSlotName() const
{
    return m_slotName;
}

void SlotInfo::SetSlotName(const string& _slotName)
{
    m_slotName = _slotName;
    m_slotNameHasBeenSet = true;
}

bool SlotInfo::SlotNameHasBeenSet() const
{
    return m_slotNameHasBeenSet;
}

string SlotInfo::GetSlotValue() const
{
    return m_slotValue;
}

void SlotInfo::SetSlotValue(const string& _slotValue)
{
    m_slotValue = _slotValue;
    m_slotValueHasBeenSet = true;
}

bool SlotInfo::SlotValueHasBeenSet() const
{
    return m_slotValueHasBeenSet;
}

