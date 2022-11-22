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

#include <tencentcloud/mps/v20190612/model/ResilientStreamConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ResilientStreamConf::ResilientStreamConf() :
    m_enableHasBeenSet(false),
    m_bufferTimeHasBeenSet(false)
{
}

CoreInternalOutcome ResilientStreamConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResilientStreamConf.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("BufferTime") && !value["BufferTime"].IsNull())
    {
        if (!value["BufferTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResilientStreamConf.BufferTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bufferTime = value["BufferTime"].GetUint64();
        m_bufferTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResilientStreamConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_bufferTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BufferTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bufferTime, allocator);
    }

}


bool ResilientStreamConf::GetEnable() const
{
    return m_enable;
}

void ResilientStreamConf::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ResilientStreamConf::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t ResilientStreamConf::GetBufferTime() const
{
    return m_bufferTime;
}

void ResilientStreamConf::SetBufferTime(const uint64_t& _bufferTime)
{
    m_bufferTime = _bufferTime;
    m_bufferTimeHasBeenSet = true;
}

bool ResilientStreamConf::BufferTimeHasBeenSet() const
{
    return m_bufferTimeHasBeenSet;
}

